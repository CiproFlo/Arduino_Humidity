#include "DHT.h"

#define DHTTYPE DHT22
#define PIN_DHT22 2

DHT dht(PIN_DHT22, DHTTYPE);
float humidity, temperature;

void setup()
{
    Serial.begin(9600);
    dht.begin();
}

void loop()
{
    humidity = dht.readHumidity();
    temperature = dht.readTemperature();

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print("%, Temperature: ");
    Serial.print(temperature);
    Serial.println("°C");

    delay(1000);
}