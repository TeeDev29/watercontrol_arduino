float pensen1,pensen2,pensen3;
float sum1,sum2,sum3;
int q;



void valuebattery(){
  avgbattery1=0;
  avgbattery2=0;
  avgbattery3=0;
  sum1=0;
  sum2=0;
  sum3=0;
  int presen1,presen2,presen3 ;
  for(q=0;q<5;q++){
    
    valbat1 = analogRead(bettery1pin);
    valbat2 = analogRead(bettery2pin);
    valbat3 = analogRead(bettery3pin);
    
    presen1 =  valbat1*(3.3/590);
    sum1 = presen1+sum1;
     presen2 =  valbat2*(3.3/741);
    sum2 = presen2+sum2;
     presen3 =  valbat3*(3.3/741);
    sum3 = presen3+sum3;
  }
  sum1=(sum1/(q));
  sum2=(sum2/(q));
  sum3=(sum3/(q));
  avgbattery1 =((sum1-2.0)/1)*100;
  avgbattery2 =((sum2-2.0)/1)*100;
  avgbattery3 =((sum3-2.0)/1)*100;

 Serial.println(avgbattery1);
 Serial.println(avgbattery2);
 Serial.println(avgbattery3);
 
 delay(2000);
}
