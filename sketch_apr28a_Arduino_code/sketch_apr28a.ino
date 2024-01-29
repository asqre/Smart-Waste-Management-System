
#include <SoftwareSerial.h>

//Create software serial object to communicate with SIM800L
SoftwareSerial mySerial(D4, D3); // GSM trx and rxr
const int trigPin = D5; 
const int echoPin = D6; 

long duration;
int distance;

#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>

// Set these to run example.
#define FIREBASE_HOST "swms-72c49-default-rtdb.firebaseio.com"
#define FIREBASE_AUTH "WjbXwZIug89nb7USltr1puPYmjqv4gVkpNkwDayv"
// #define WIFI_SSID "iQOO Z6 Pro"
// #define WIFI_PASSWORD "asdfghjk"

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); 
  Serial.begin(9600);

  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

int n = 0;

void loop() {
  mySerial.println("AT"); //Once the handshake test is successful, it will back to OK
  updateSerial();

  mySerial.println("AT+CMGF=1"); // Configuring TEXT mode
  updateSerial();
  mySerial.println("AT+CMGS=\"+918905337516\"");//change ZZ with country code and xxxxxxxxxxx with phone number to sms
  updateSerial();
  mySerial.print("Smart waste management system"); //text content sms 
  updateSerial();
  mySerial.write(26);
  // delay(5000);
  digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
// delay(2000);

  Firebase.setFloat("Distance", distance);
  // handle error
  
  delay(1000);
  
  
}
void updateSerial()
{
  // delay(500);
  // while (Serial.available()) 
  // {
  //   mySerial.write(Serial.read());//Forward what Serial received to Software Serial Port
  // }
  // while(mySerial.available()) 
  // {
  //   Serial.write(mySerial.read());//Forward what Software Serial received to Serial Port
  // }
}