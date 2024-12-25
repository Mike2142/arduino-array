// Создаём массив с контактами светодиодов
constexpr int PIN_LEDS[] = {2, 3, 4, 5, 6, 7, 8, 9};
// Количество светодиодов в массиве
constexpr int COUNT_LEDS = 8;
 
void setup() {
  // Настраиваем пины со светодиодами в режим выхода
  for (int i = 0; i < COUNT_LEDS ; i++) {
    pinMode(PIN_LEDS[i], OUTPUT);
  }
}
 
void loop() {
  // Мигаем каждым светодиодом в цикле по очереди
  for (int i = 0; i < COUNT_LEDS; i++) {
    digitalWrite(PIN_LEDS[i], HIGH);
    delay(500);
    digitalWrite(PIN_LEDS[i], LOW);
    delay(500);
  }
}