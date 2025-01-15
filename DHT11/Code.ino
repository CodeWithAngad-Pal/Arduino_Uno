#include <DHT.h>

#define DHTPIN 2         // Pin connected to the DHT11 sensor data pin
#define DHTTYPE DHT11    // Define the sensor type (DHT11)

DHT dht(DHTPIN, DHTTYPE);  // Create a DHT object

void setup() {
  Serial.begin(9600);    // Start the serial communication
  dht.begin();           // Initialize the DHT sensor
}

void loop() {
  float humidity = dht.readHumidity();    // Read humidity value
  float temperature = dht.readTemperature();  // Read temperature value in Celsius

  // Check if any reads failed and exit early
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" *C");

  delay(2000);  // Wait for 2 seconds before reading again
}
