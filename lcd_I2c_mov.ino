//To Scroll the Display
//right to left and left to right with cursor boundation

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2);  // set the LCD address to 0x3F for a 16 chars and 2 line display
void setup() {
  // put your setup code here, to run once:
  lcd.begin(); //Initializing display
  lcd.backlight(); //To Power ON the back light

}

void loop() {
  // put your main code here, to run repeatedly.
  
  char data[]="10%";  // whatever data need to be Display on the scrren.
  int l=(16-sizeof(data)); //starting Cursor for Right to left and ending Cursor for Left to right.
  int j=0;
  // this loop for scrool display from Right to left.
  int i=l;
  while(i>0){
     lcd.scrollDisplayLeft();
     lcd.setCursor(i,j);   //Defining positon to write from j row, i column.
     lcd.print(data);
     delay(1000);
     lcd.clear();       //clean the screen, set cursor position to zero
     i--;
  }
  i=l;
  // this loop for scrool display from left to Right.
  int k=0;
  while(k<l){
     lcd.scrollDisplayRight();
     lcd.setCursor(k,j);    //Defining positon to write from j row, k column.
     lcd.print(data);
     delay(1000);
     lcd.clear();         //clean the screen, set cursor position to zero
     k++;
  }
  k=l;
}
