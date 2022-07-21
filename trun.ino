


        void rotateR1(){ //a2
                  
                   analogWrite(LEN2, 200);
                   analogWrite(REN2, 200);
                   analogWrite(LEN1, 200);
                   analogWrite(REN1, 200);

                   if(guide()<60.50 && guide()>50.50){   //ค่ามาก->ค่าน้อย
                        
                         stoprobot();
                         delay(2000); 
                         forward();
                         delay(2500);
                         stoprobot();
                         delay(2000); 
                         a=3;
                      
                      }else{   
                         right();      
                      }

                   
      }



      
    void turnright1(){ //a3
                  
                   analogWrite(LEN2, 200);
                   analogWrite(REN2, 200);
                   analogWrite(LEN1, 200);
                   analogWrite(REN1, 200);     
              if(guide()<218.30 && guide()>213.00){                         
                         stoprobot();
                         delay(2000);                   
                         a=4;  
                         strID = "";          
                      }else{   
                         right();  
                      }
    }


      void rotateL1(){ //a5
        
                 
                   analogWrite(LEN2, 200);
                   analogWrite(REN2, 200);
                   analogWrite(LEN1, 200);
                   analogWrite(REN1, 200);
           
                   if(guide()<60.50 && guide()>50.50){ 
                    
                         stoprobot();
                         delay(2000); 
                         forward();
                         delay(2500);
                         stoprobot();
                         delay(2000);  
                         a=6;  
                         strID = "";
                    

                   }else{
                        left();
                   }
        
        }


       void turnleft1(){ //a6
                  
                   analogWrite(LEN2, 200);
                   analogWrite(REN2, 200);
                   analogWrite(LEN1, 200);
                   analogWrite(REN1, 200);

                   if(guide()<324.00 && guide()>318.00){ 
                    
                         stoprobot();
                         delay(2000); 
              
                         a=7;  
                         strID = "";
                    

                   }else{
                       left();
                        
                   }

    }


   void rotateL2(){ //a8
                 
                   analogWrite(LEN2, 200);
                   analogWrite(REN2, 200);
                   analogWrite(LEN1, 200);
                   analogWrite(REN1, 200);


                    if(guide()<271.50 && guide()>267.20){ 
                      
                         stoprobot();
                         delay(2000); 
                         forward();
                         delay(2500);
                         stoprobot();
                         delay(2000);  
              
                         a=9;  
                         strID = "";
                      
                  }else{
                        left();
                        
                        
                  }

                  
   }



    
    void turnleft2(){ //a9
                   
                   analogWrite(LEN2, 200);
                   analogWrite(REN2, 200);
                   analogWrite(LEN1, 200);
                   analogWrite(REN1, 200);
                   
                  if(guide()<217.50 && guide()>214.00){

                         stoprobot();
                         delay(2000); 
              
                         a=10;  
                         strID = "";
                      
                  }else{
                    
                        left();
                        
                  }
                  
    }

    void rotateR2(){ //a11
                   
                   analogWrite(LEN2, 200);
                   analogWrite(REN2, 200);
                   analogWrite(LEN1, 200);
                   analogWrite(REN1, 200);

                  if(guide()<271.50 && guide()>267.20){

                         stoprobot();
                         delay(2000); 
                         forward();
                         delay(2500);
                         stoprobot();
                         delay(2000);  
                       
                        a=12;
                        strID = "";  
                   
                 }else{
                        right();
                  
                  }

    }

    void turnright2(){ //a12
            
                   analogWrite(LEN2, 200);
                   analogWrite(REN2, 200);
                   analogWrite(LEN1, 200);
                   analogWrite(REN1, 200);
                 if(guide()<324.00 && guide()>318.00){
                        stoprobot();
                        Serial.println("wecome to home end!!");
                        delay(2000);
                       
                        a=0;
                        p=0;
                        sv =0;
                        strID = "";  
           
                 }else{
                       right();
                  }
      
    }
