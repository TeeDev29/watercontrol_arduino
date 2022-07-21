void manual(){
  
        getmanual();
       
  int speed = 180;
  analogWrite(LEN2, speed);
  analogWrite(REN2, speed);
  analogWrite(LEN1, speed);
  analogWrite(REN1, speed);
  
  
       if(g==1){
                       forward();
          }else if(b==1){
                       backward();
          }else if(r==1){
                      right(); 
          }else if(l==1){
                      left();
          }else{
                      stoprobot();

                      
                      
                      if(rmss==99){
                        sadmanul();
                      }
          }
                  if(csa==0){
                        st();
                      }else if(csa==1){
                        down();
                      }else if(csa==2){
                        up();
                      }
                      
          if(cpa==0){
                        digitalWrite(relay, HIGH);
                      }else if(cpa==1){
                        digitalWrite(relay, LOW);
                      }
  }
       
 
