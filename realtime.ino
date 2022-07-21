void printDateTime(time_t t){
   // printDate(t);
    Serial << ' ';
    printTime(t);
}


void printTime(time_t t){
  
    printI00(hour(t), ':');
    printI00(minute(t), ':');
    printI00(second(t), ' ');
   
    
}


void printDate(time_t t){
  
    printI00(day(t), 0);
    Serial << monthShortStr(month(t)) << _DEC(year(t));
    
}

void printI00(int val, char delim){
  
    if (val < 10) Serial << '0';
    Serial << _DEC(val);
    if (delim > 0) Serial << delim;
    return;
    
}
void setrealtime(){
   if (Serial.available() >= 12) {
        int y = Serial.parseInt();
        if (y >= 100 && y < 1000)
            Serial << F("Error: Year must be two digits or four digits!") << endl;
        else {
            if (y >= 1000)
                tm.Year = CalendarYrToTm(y);
            else    //(y < 100)
                tm.Year = y2kYearToTm(y);
            tm.Month = Serial.parseInt();
            tm.Day = Serial.parseInt();
            tm.Hour = Serial.parseInt();
            tm.Minute = Serial.parseInt();
            tm.Second = Serial.parseInt();
            t = makeTime(tm);
            RTC.write(tm);
            setTime(t);        
            Serial << F("RTC set to: ");
            printDateTime(t);
            Serial << endl;
            //dump any extraneous input
            while (Serial.available() > 0) Serial.read();
        }
    }
}
