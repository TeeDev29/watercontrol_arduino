void keycard(){
  if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial())
    return;

 
  MFRC522::PICC_Type piccType = rfid.PICC_GetType(rfid.uid.sak);
  
  if (piccType != MFRC522::PICC_TYPE_MIFARE_MINI &&
    piccType != MFRC522::PICC_TYPE_MIFARE_1K &&
    piccType != MFRC522::PICC_TYPE_MIFARE_4K) {
    Serial.println(F("Your tag is not of type MIFARE Classic."));
    return;
  }
  
  for (byte i = 0; i < 4; i++) {
    strID +=(rfid.uid.uidByte[i] < 0x10 ? "0" : "") + String(rfid.uid.uidByte[i], HEX) +(i!=3 ? ":" : "");
  }
  strID.toUpperCase();
  Serial.println(strID);
    rfid.PICC_HaltA();
  rfid.PCD_StopCrypto1();
}
