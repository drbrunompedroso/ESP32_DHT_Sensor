#include "DHT.h"


const int pinoDHT = 12;


DHT dht(pinoDHT, DHT11);  //Criacao da instancia DHT, em funcao do pino do sensor e do tipo do DHT

void setup() 
{
 
  Serial.begin(115200);  
  dht.begin();
}

void loop() 
{
    float temperatura = dht.readTemperature();
    float umidade = dht.readHumidity();
	
    Serial.print("Temperatura:      ");
    Serial.print(temperatura);
    Serial.println(" *C");
    Serial.print("Umidade:          ");
    Serial.print(umidade);
    Serial.println(" %");
    delay(500);
}