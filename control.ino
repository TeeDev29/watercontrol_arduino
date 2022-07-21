void forward(){
  digitalWrite(RPWM1,1); /*เดินหน้า*/ 
  digitalWrite(LPWM1,0);                       
  digitalWrite(RPWM2,1); /*เดินหน้า*/ 
  digitalWrite(LPWM2,0);
}

void backward(){
      digitalWrite(RPWM2,0);  /*ถอยหลัง*/
      digitalWrite(LPWM2,1);
      digitalWrite(RPWM1,0);  /*ถอยหลัง*/
      digitalWrite(LPWM1,1);
}

void left(){
  digitalWrite(RPWM1,0);  /*ถอยหลัง*/
  digitalWrite(LPWM1,1);
  digitalWrite(RPWM2,1);  /*เดินหน้า*/
  digitalWrite(LPWM2,0);
}

void right(){
   digitalWrite(RPWM1,1);  /*เดินหน้า*/
   digitalWrite(LPWM1,0);
   digitalWrite(RPWM2,0);  /*ถอยหลัง*/ 
   digitalWrite(LPWM2,1);
}

void stoprobot(){
   digitalWrite(RPWM1,0); /*เดินหน้า*/ 
   digitalWrite(LPWM1,0);                       
   digitalWrite(RPWM2,0); /*เดินหน้า*/ 
   digitalWrite(LPWM2,0);
}
