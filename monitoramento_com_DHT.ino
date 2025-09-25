#include <LiquidCrystal_I2C.h>
#include "DHT.h"

#define DHTPIN 19
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  Serial.begin(115200);
  Serial.println(F("DHTxx test!"));
  dht.begin();
  lcd.init();
  lcd.backlight();
}

void loop() {
  delay(1300);

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Erro no DHT!");
    return;
  }

  float hif = dht.computeHeatIndex(h);
  float hic = dht.computeHeatIndex(t, h, false);

  //mostrar no Monitor Serial
  Serial.print(F("Humidity: "));
  Serial.println(h);
  Serial.print(F("Temperature: "));
  Serial.print(t);
  Serial.println(F("°C "));

  //Mostrar no lcd
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Umidade: ");
  lcd.print(h);
  lcd.print("%");

  lcd.setCursor(0,1);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print((char)223);
  lcd.print("C");
}
