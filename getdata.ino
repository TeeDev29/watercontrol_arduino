//รับค่าจากesp


void getmanual(){
 
  while (ArduinoSerial.available() > 0) {
 
  int go = ArduinoSerial.parseInt();
  int back = ArduinoSerial.parseInt();
  int right = ArduinoSerial.parseInt();
  int left = ArduinoSerial.parseInt();
  int cprum =  ArduinoSerial.parseInt();
  int cs  =  ArduinoSerial.parseInt();
  int rms = ArduinoSerial.parseInt();
  int mode = ArduinoSerial.parseInt();
  
      if (ArduinoSerial.read() == '\n') {
                           
      }
      g=go; b=back; r=right; l=left; cpa=cprum ; csa=cs ; rmss=rms ; m=mode;
       Serial.print("mode");Serial.print("->");Serial.println(m);
      Serial.print("go");Serial.print("->");Serial.println(g);
      Serial.print("back");Serial.print("->");Serial.println(b);
      Serial.print("right");Serial.print("->");Serial.println(r);
      Serial.print("left");Serial.print("->");Serial.println(l);
      Serial.print("cp");Serial.print("->");Serial.println(cpa);
      Serial.print("cs");Serial.print("->");Serial.println(csa);
      Serial.print("rms");Serial.print("->");Serial.println(rms);
  }
}


void getdataAr(){

   while (ArduinoSerial.available() > 0) {
   
      int starthr1 = ArduinoSerial.parseInt();
      int startmin1 = ArduinoSerial.parseInt();
      int starthr2 = ArduinoSerial.parseInt();
      int startmin2 = ArduinoSerial.parseInt();
      int starthr3 = ArduinoSerial.parseInt();
      int startmin3 = ArduinoSerial.parseInt();
      int getHam1 = ArduinoSerial.parseInt();
      int getHam2 = ArduinoSerial.parseInt();
      int getHam3 = ArduinoSerial.parseInt();
      int stp1 = ArduinoSerial.parseInt();
      int stp2 = ArduinoSerial.parseInt();
      int stp3 = ArduinoSerial.parseInt();
      int stp4 = ArduinoSerial.parseInt();
      int stp5 = ArduinoSerial.parseInt();
      int stp6 = ArduinoSerial.parseInt();
      int mdtt = ArduinoSerial.parseInt();
      int mode = ArduinoSerial.parseInt();
      
     if (ArduinoSerial.read() == '\n') {
                           
      }
         
          
          hr1=starthr1; hr2=starthr2; hr3=starthr3;
          min1=startmin1; min2=startmin2; min3=startmin3;
          gh1=getHam1; gh2=getHam2; gh3=getHam3;
          sp1=stp1; sp2=stp2; sp3=stp3;
          sp4=stp4; sp5=stp5; sp6=stp6; mdt=mdtt; m=mode;
          
          Serial.println(sp1);
          Serial.println(sp2);
          Serial.println(sp3);
          Serial.println(sp4);
          Serial.println(sp5);
          Serial.println(sp6);
    }
   } 



   
