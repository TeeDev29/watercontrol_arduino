#include <DS3232RTC.h>   //http://github.com/JChristensen/DS3232RTC
#include <Streaming.h>  //http://arduiniana.org/libraries/streaming/
#include <Time.h>        //http://playground.arduino.cc/Code/Time
/*#include <Wire.h>*/           //http://arduino.cc/en/Reference/Wire

#include <Wire.h>
#include <HMC5883L.h>
#include <SoftwareSerial.h>
#include "SPI.h"
#include "MFRC522.h"

#define SS_PIN 53
#define RST_PIN 5
#define relay 11
#define echoPin1 30 
#define trigPin1 31 
#define echoPin2 33 
#define trigPin2 32 
#define echoPin3 38 
#define trigPin3 39 
#define echoPin4 36 
#define trigPin4 37 

HMC5883L compass;
MFRC522 rfid(SS_PIN, RST_PIN);
MFRC522::MIFARE_Key key;

/*RTC_DS3231 RTC;*/

SoftwareSerial ArduinoSerial(13, 12); // RX, TX เปลี่ยนเป็นขา 13 , 12 จาก 11, 10

int maximumRange = 200; // Maximum range needed
int minimumRange = 0; // Minimum range needed
long duration1, distance1,duration2, distance2,duration3, distance3,duration4, distance4; // Duration used to calculate distance

int LPWM1 = 3;
int LEN1  = 4;
int RPWM1 = 47;
int REN1  = 49;//45;

int LPWM2 = 6;
int LEN2  = 7;
int RPWM2 = 46;
int REN2  = 48 ;//44;

int MspeedA = 0;
int MspeedB = 0;

int x,y,z;

int enA = 8;
int in1 = 9;
int in2 = 10;

int sensorPin = A0;
int sensorValue ;

int bettery1pin = A10;
int bettery2pin = A9;
int bettery3pin = A8;
int valbat1,valbat2,valbat3;

String strID = "";

void setup() {
   Serial.begin(115200);
   ArduinoSerial.begin(19200);
   SPI.begin();
   rfid.PCD_Init();


  setSyncProvider(RTC.get);
    Serial << F("RTC Sync");
    if (timeStatus() != timeSet) Serial << F(" FAIL!");
    Serial << endl;
    


   while (!compass.begin()){
    Serial.println("Could not find a valid HMC5883L sensor, check wiring!");
    delay(500);
  }
  compass.setRange(HMC5883L_RANGE_1_3GA);
  compass.setMeasurementMode(HMC5883L_CONTINOUS);
  compass.setDataRate(HMC5883L_DATARATE_30HZ);
  compass.setSamples(HMC5883L_SAMPLES_8);
  compass.setOffset(0, 0);


   pinMode(LPWM1, OUTPUT);
   pinMode(RPWM1, OUTPUT); 
   pinMode(LEN1, OUTPUT);
   pinMode(REN1, OUTPUT);

   pinMode(LPWM2, OUTPUT);
   pinMode(RPWM2, OUTPUT); 
   pinMode(LEN2, OUTPUT);
   pinMode(REN2, OUTPUT);
   
   pinMode(enA, OUTPUT);
   pinMode(in1, OUTPUT);
   pinMode(in2, OUTPUT);
    
   digitalWrite(in1, LOW);
   digitalWrite(in2, LOW);
 
   pinMode(relay, OUTPUT);
   digitalWrite (relay, HIGH);

   pinMode(trigPin1, OUTPUT);
   pinMode(echoPin1, INPUT);
   pinMode(trigPin2, OUTPUT);
   pinMode(echoPin2, INPUT);
   pinMode(trigPin3, OUTPUT);
   pinMode(echoPin3, INPUT);
   pinMode(trigPin4, OUTPUT);
   pinMode(echoPin4, INPUT);

}
    static time_t tLast;
    time_t t;
    tmElements_t tm; 
    
int gh1,gh2,gh3;
int hr1,hr2,hr3,min1,min2,min3;
int sp1,sp2,sp3,sp4,sp5,sp6;
int a = 0,p=0,sv=0,svm;
int statusa=0;
int avgbattery1,avgbattery2,avgbattery3; //,w
int m,g,b,l,r,qwe,mdt;
int cpa, csa=0,rmss;

void loop() {  

 /* guide();*/

  setrealtime();
    
  t = now();
    if (t != tLast) {
        tLast = t;
        printDateTime(t);
        Serial << endl;
    }


switch(m){
  

   case 0 : 
                if(a==0){
                  digitalWrite(relay, HIGH);
                  getdataAr();
                  keycard();
                  
                 if((hour(t)==hr1 && minute(t)==min1 )||(hour(t)==hr2 && minute(t)==min2 )||(hour(t)==hr3 && minute(t)==min3 )){       
                    a=1;
                    
                    }
                 
                }  
                automatic();
   break;

   case 1 : 
       
                manual();

   break;

    }
  
  
  }
