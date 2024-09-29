
int soilMoisturePin = A0; // Analog input pin for soil moisture sensor
int soilMoistureValue = 0; // Variable to store the soil moisture value



void setup() {
 soilMoistureValue = analogRead(soilMoisturePin); // Read the soil moisture sensor value

  lcd.setCursor(0,0);
  lcd.print("Soil Moisture: ");
  lcd.println(soilMoistureValue);

  if(soilMoistureValue < 300) {
    lcd.setCursor(0,1);
    lcd.println("Status: Dry");
  } else if(soilMoistureValue < 700) {
    lcd.setCursor(0,1);
    lcd.println("Status: Watered");
  } else {
    lcd.setCursor(0,1);
    lcd.println("Status: Wet");
  }
  delay(1000); // Wait for 1 second before updating the display

}

void loop() {
  // put your main code here, to run repeatedly:

}
