#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <DHT.h>

const int pinCE = 9;
const int pinCSN = 10;
RF24 radio(pinCE, pinCSN);

const uint64_t pipe = 0xE8E8F0F0E1LL;

#define DHTPIN 2         
#define DHTTYPE DHT11     

DHT dht(DHTPIN, DHTTYPE);

float data[2];

void setup()
{
   radio.begin();
   radio.openWritingPipe(pipe);
   dht.begin();
}

void loop()
{ 
   data[0] = dht.readTemperature();
   data[1] = dht.readHumidity();
   
   radio.write(data, sizeof data);
   delay(1000);
}
