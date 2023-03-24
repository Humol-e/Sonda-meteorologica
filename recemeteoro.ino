#include <nRF24L01.h>
#include <RF24.h>
#include <RF24_config.h>
#include <SPI.h>
#include <DHT.h>

const int pinCE = 9;
const int pinCSN = 10;
RF24 radio(pinCE, pinCSN);

const uint64_t pipe = 0xE8E8F0F0E1LL;

DHT dht(7, DHT11);
float temperature;
float humidity;

void setup(void)
{
   Serial.begin(9600);
   radio.begin();
   radio.openReadingPipe(1,pipe);
   radio.startListening();
   dht.begin();
}

void loop(void)
{
   if (radio.available())
   {
      radio.read(&temperature, sizeof(temperature));
      radio.read(&humidity, sizeof(humidity));

      Serial.print("Temperatura: ");
      Serial.print(temperature);
      Serial.print(" °C, Humedad: ");
      Serial.print(humidity);
      Serial.println("%");

      float heatIndex = dht.computeHeatIndex(temperature, humidity, false);
      Serial.print("Indice de calor: ");
      Serial.print(heatIndex);
      Serial.println(" °C");

   }

   delay (5000);
}
