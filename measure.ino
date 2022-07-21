  

void Measure1(){
    
   while(true){
        
        stoprobot();        
        down();
        delay(13000);
        st(); 
        delay(3000); 
        
        //for (int j=0 ; j<5 ; j++){  
          sensorValue = analogRead(sensorPin);
          sensorValue = ((sensorValue-0)/(400-0))*100;
        //}
         sv = sensorValue;
         
        while(sensorValue < gh1){         
           digitalWrite(relay, LOW);      
           sensorValue = analogRead(sensorPin);
           sensorValue = map(sensorValue, 0, 400, 0, 100);
           sv = sensorValue;         
        }
        digitalWrite(relay, HIGH);   
        p = 1 ;
        sv;
        sadpoint();
        delay(5000); //ส่งค่า
        up(); 
        delay(12500);
        st();
        delay(2000);
        forward();
        delay(400);
        break;
        
    } 
}

void Measure2(){
 
   
   while(true){
       
        
        stoprobot();
        
         down();
        delay(13000);
        st(); 
        delay(3000); 
  
         sensorValue = analogRead(sensorPin);
          sensorValue = ((sensorValue-0)/(400-0))*100;
          //sensorValue = map(sensorValue, 0, 400, 0, 100);
         sv = sensorValue;
         
        while(sensorValue < gh1){         
           digitalWrite(relay, LOW);      
           sensorValue = analogRead(sensorPin);
           sensorValue = map(sensorValue, 0, 400, 0, 100);
           sv = sensorValue;         
        }       
        digitalWrite(relay, HIGH);
        p=2;
        sv;        
        sadpoint();
        delay(5000); //ส่งค่า
        up();
        delay(12500);
        st();
        delay(2000);  
        forward();
        delay(400);
        break;
        
      }  
}

void Measure3(){
   while(true){
       
        
        stoprobot();
      
       
          down();
        delay(13000);
        st();
        delay(3000);
          sensorValue = analogRead(sensorPin);
          sensorValue = map(sensorValue, 0, 400, 0, 100);
        sv = sensorValue;
        
        while(sensorValue < gh2){        
          digitalWrite(relay, LOW);
          sensorValue = analogRead(sensorPin);
          sensorValue = map(sensorValue, 0,400, 0, 100);
          sv = sensorValue;
        }      
        digitalWrite(relay, HIGH);
        p=3;
        sv;
       sadpoint();
        delay(5000); //ส่งค่า
        up();
        delay(12500);
        st();
        delay(2000);
        forward();
        delay(400);
        break;
        
    } 
}


void Measure4(){
   while(true){
     
     
        stoprobot();  
        down();
        delay(13000);
        st();
        delay(3000);
          sensorValue = analogRead(sensorPin);
          sensorValue = map(sensorValue, 0, 400, 0, 100);
        sv = sensorValue;
        while(sensorValue < gh2){    
          digitalWrite(relay, LOW);
          sensorValue = analogRead(sensorPin);
          sensorValue = map(sensorValue, 0, 400, 0, 100);
          sv = sensorValue;  
        }     
        digitalWrite(relay, HIGH);   
        p=4;
        sv;        
        sadpoint();
        delay(5000); //ส่งค่า
        up();
        delay(12500);
        st();
        delay(2000);
        forward();
        delay(400);
        break;
           
    } 
}


void Measure5(){
  
   while(true){
       
        stoprobot();
      
          down();
        delay(13000);
        st();
        delay(3000);
          sensorValue = analogRead(sensorPin);
          sensorValue = map(sensorValue, 0, 400, 0, 100);        
          sv = sensorValue;
          
        while(sensorValue < gh3){      
          digitalWrite(relay, LOW);
          sensorValue = analogRead(sensorPin);
          sensorValue = map(sensorValue, 0, 400, 0, 100);
          sv = sensorValue;
        }
        digitalWrite(relay, HIGH);
         p=5;
         sv;
        sadpoint();
        delay(5000); //ส่งค่า
        up();
        delay(12500);
        st();
        delay(2000);
         forward();
        delay(400);
        break;
        
    } 
}

void Measure6(){
   while(true){
     
       
        stoprobot();
          
          down();
      delay(13000);
      st();
      delay(3000);
          sensorValue = analogRead(sensorPin);
          sensorValue = map(sensorValue, 0, 400, 0, 100);
          sv = sensorValue;
      
      while(sensorValue < gh3){
         digitalWrite(relay, LOW);
         sensorValue = analogRead(sensorPin);
         sensorValue = map(sensorValue, 0, 400, 0, 100);
         sv = sensorValue;
      }     
      digitalWrite(relay, HIGH);
      p=6;
      sv; 
      sadpoint();
      delay(3000); 
      up();
      delay(12500);
      st();
      delay(2000);
      forward();
      delay(400);
      break;
    
      
    } 
}
