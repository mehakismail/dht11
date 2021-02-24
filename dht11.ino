#include <LiquidCrystal.h>
#include <DHT.h>
#include <DHT_U.h>

LiquidCrystal lcd(2,3,4,5,6,7);
DHT dht(A0, DHT11);

void setup() {
  dht.begin();
  lcd.begin(16,2);

}
 
void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  lcd.setCursor(0,0);
  lcd.print("humidity:");
lcd.println(h);
lcd.println("% ");
  lcd.setCursor(0,1);
  lcd.print("Temperature:");
  lcd.print(t);
  lcd.print("*c");
  
}
