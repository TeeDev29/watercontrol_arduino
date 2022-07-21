
 void statusall(){
 
 ArduinoSerial.print(avgbattery1);//avgbattery1
  ArduinoSerial.print("\n");
 ArduinoSerial.print(avgbattery2);//avgbattery2
  ArduinoSerial.print("\n");
 ArduinoSerial.print(avgbattery3);//avgbattery3
 ArduinoSerial.print("\n");
 // ArduinoSerial.print(22);//avgbattery3
 // ArduinoSerial.print("\n");
 mdt=33;

 }

 void sadpoint(){

 if(p==0){
    Serial.println("nosendata");
  }else if(p==1){
    Serial.println(p);
    Serial.println(sv);
            ArduinoSerial.print(p);
            ArduinoSerial.print("\r");
            ArduinoSerial.print(sv);
            ArduinoSerial.print("\r");
    }else if(p==2){
    Serial.println(p);
    Serial.println(sv);
            ArduinoSerial.print(p);
            ArduinoSerial.print("\r");
            ArduinoSerial.print(sv);
            ArduinoSerial.print("\r");
    }else if(p==3){
   Serial.println(p);
   Serial.println(sv);
            ArduinoSerial.print(p);
            ArduinoSerial.print("\r");
            ArduinoSerial.print(sv);
            ArduinoSerial.print("\r");
    }else if(p==4){
    Serial.println(p);
    Serial.println(sv);
            ArduinoSerial.print(p);
            ArduinoSerial.print("\r");
            ArduinoSerial.print(sv);
            ArduinoSerial.print("\r");
    
    }else if(p==5){
    Serial.println(p);
    Serial.println(sv);
            ArduinoSerial.print(p);
            ArduinoSerial.print("\r");
            ArduinoSerial.print(sv);
            ArduinoSerial.print("\r");
    
    }else if(p==6){
   Serial.println(p);
   Serial.println(sv);
            ArduinoSerial.print(p);
            ArduinoSerial.print("\r");
            ArduinoSerial.print(sv);
            ArduinoSerial.print("\r");
    
    }
  p=0;
  sv=0;
 
 }

 void sadmanul(){
    for(int j=0 ; j<5 ; j++){
      sensorValue = analogRead(sensorPin);
      sensorValue = ((sensorValue-0)/(400-0))*100;
       Serial.print("-->");Serial.println(sensorValue);
    }
    svm=sensorValue;
    
   Serial.println(svm);
    ArduinoSerial.print(svm);
    ArduinoSerial.print("\r");
    rmss=88;   
 }
