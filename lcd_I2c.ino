// Basic demonstration code of display with I2C

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2); // set the LCD address to 0x3F for a 16 chars and 2 line display
void setup() {
  // put your setup code here, to run once:
  lcd.begin(); //Initializing display
  lcd.backlight(); //To Power ON the back light
  //lcd.noBacklight(); //To Power ON the back light
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.noAutoscroll();
  lcd.setCursor(0,0); //Defining positon to write from first row,first column.
  lcd.print("UTKARSH");
  lcd.setCursor(0,1); //Defining positon to write from second row,first column.
  lcd.print("KUMAR");
  delay(1000);
  lcd.clear(); //Clean the screen, set cursor position to zero.
  delay(10);
  lcd.display();// LCD_DisplayON, LCD_CursorOFF, LCD_BlinkingOFF
  delay(1000);
  lcd.setCursor(1,0); //Defining positon to write from first row,second column.
  lcd.print("Get 10%");
  delay(1000);
  lcd.clear(); 
  delay(10);
  lcd.setCursor(1,0); //Defining positon to write from first row,second column.
  lcd.print("Result Is.....");
  delay(500);
  lcd.setCursor(6,1); //Defining positon to write from second row,seventh column.
  lcd.print("FAIL");
  delay(1000);
  lcd.clear(); 
  delay(10);
  lcd.print("HOME"); 
  delay(1000);
}
