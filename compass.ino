int guide(){
Vector norm = compass.readNormalize();
  float heading = atan2(norm.YAxis, norm.XAxis);
  float declinationAngle = (4.0 + (26.0 / 60.0)) / (180 / M_PI);
  heading += declinationAngle;
  if (heading < 0)
  {
    heading += 2 * PI;
  }
  if (heading > 2 * PI)
  {
    heading -= 2 * PI;
  }
// Convert to degrees
  float headingDegrees = heading * 180/M_PI; 
 Serial.print(headingDegrees);
  Serial.println();
  return headingDegrees;
  delay(10);
}
