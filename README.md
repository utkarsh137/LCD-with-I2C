# LCD-with-I2C
**Various method to display data on LCD 16X2 with I2C ,with Arduino.**<br />
LCD Display utilizes an I2C interface, which means that fewer pins are necessary to use than would be needed with a regular 16x2 LCD Display 
(just four connections, VCC, GND, SDA & SCL are required).I2C address is usually hex 0x27.But sometimes be found at hex 0x3F. It is very easy to find an I2C address on Arduino by using 
[I2C_Scanner.ino](https://github.com/utkarsh137/LCD-with-I2C/blob/master/I2C_Scanner.ino).<br />
I suggest you use the [LiquidCrystal_I2C](http://image.dfrobot.com/image/data/TOY0046/LiquidCrystal_I2Cv1-1.rar) library with Arduino.
# Connections
**VCC-------->5V**<br />
<br />
**GND-------->GND**<br />
<br />
**SDA-------->A4**<br />
<br />
**SCL-------->A5**<br />
<br />
![image](https://4.bp.blogspot.com/-gleWypDvgkM/VtGUB1SySQI/AAAAAAAAIXQ/rvZd8AaTdKQ/s1600/wiring.JPG)
# LCD-I2C Interface
![image](https://hackster.imgix.net/uploads/attachments/1205593/layout_1eqyr1yg8s_0msuyqMkJE.jpg?auto=compress%2Cformat&w=1280&h=960&fit=max)
