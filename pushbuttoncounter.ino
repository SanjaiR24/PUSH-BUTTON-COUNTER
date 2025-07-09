#include <LiquidCrystal_I2C.h>
#include <ezButton.h>

// Initialize I2C LCD: address 0x27, 16 columns x 2 rows
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Create ezButton on pin 13
ezButton button(13);

// Variable to hold previous count
unsigned long lastCount = 0;

void setup() {
  Serial.begin(9600);

  // Initialize LCD
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Count: 0");

  // Set button with internal pull-up
  pinMode(13, INPUT_PULLUP);

  // Set debounce time and count mode
  button.setDebounceTime(50); // 50ms debounce
  button.setCountMode(COUNT_FALLING); // Count on press (HIGH → LOW)
}

void loop() {
  // Update button status
  button.loop();

  // Get the updated press count
  unsigned long count = button.getCount();

  // Update LCD and Serial Monitor if count has changed
  if (lastCount != count) {
    Serial.print("Button Pressed: ");
    Serial.println(count);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Count: ");
    lcd.print(count);

    lastCount = count; // Save latest count
  }
}