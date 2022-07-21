int echoR(){  // ขวา
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  duration1 = pulseIn(echoPin1, HIGH);
  distance1 = duration1 / 58.2;

    return distance1 ;
  }


  int echoL(){  // ซ้าย
    digitalWrite(trigPin3, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin3, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin3, LOW);
    duration2 = pulseIn(echoPin3, HIGH);
    distance2 = duration2 / 58.2; 
    
     return distance2 ;
    }


    int echoTR(){
      digitalWrite(trigPin4, LOW);
      delayMicroseconds(2);
      digitalWrite(trigPin4, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin4, LOW);
      duration4 = pulseIn(echoPin4, HIGH);
      distance4 = duration4 / 58.2;
      
      return distance4 ;
    }


    int echoTL(){
      digitalWrite(trigPin2, LOW);
      delayMicroseconds(2);
      digitalWrite(trigPin2, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin3, LOW);
      duration3= pulseIn(echoPin2, HIGH);
      distance3 = duration3 / 58.2;
      
      return distance3 ;
    }
