  //มอเตอร์ฝั่ง a คือ 1 ซ้าย
  //มอเตอร์ฝั่ง b คือ 2 ขวา

int speed = 190 ;
int distance = 10;


  void echo(){
  analogWrite(LEN2, speed);
  analogWrite(REN2, speed);
  analogWrite(LEN1, speed);
  analogWrite(REN1, speed);
  if(echoTL() > 25 && echoTR() > 25){    
                    if(echoR() > distance && echoL() > distance){   //ซ้าย
                       forward();                         
                    }else if (echoL() < distance && echoR() < distance){   
                      backward();                                          
                     }else if(echoL() < distance){
                      left();                                     
                      }else if(echoR() < distance){
                      right();                     
                      }   
    }else if(echoTL() < 25 && echoTR() < 25){                  
                       backward();                          
      }else if(echoTR() < 25){
                       right();                    
      }else if(echoTL() < 25){
                       left();          
        }
                     
    }


    
   


 

    

    


    

   


    
