void down(){
  analogWrite(enA, 255);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
}

void up(){
  analogWrite(enA, 255);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
}

void st(){
  analogWrite(enA, 255);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}
