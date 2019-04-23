/*   
 state indicator for switch
 progrma scris de Nicu Florica (niq_ro)
 http;//www.arduinotehniq.com/
 http://nicuflorica.blogspot.ro/
 http://arduinotehniq.blogspot.com
 v.0 - 20.04.2019 - Craiova, Romania
*/

#define pinbutton 3  // pin for switch
#define pinled 4  // pin for led
int delaytime = 100;  // 3000 = 3s, time on the led

byte apasat = 0; // button is released

void setup()
{
Serial.begin(9600); // serial monitor
Serial.println("-----------------");
Serial.println("State indicator for switch by Nicu FLORICA (niq_ro) !");
Serial.println("-----------------");
pinMode(pinbutton,INPUT);
digitalWrite(pinbutton,HIGH);

pinMode(pinled,OUTPUT);
digitalWrite(pinled,LOW);
Serial.println("LED is OFF !"); 
}

void loop() 
{
if ((digitalRead(pinbutton) == LOW) and (apasat == 0)) // if button is pushed
{
  Serial.println("Button is pushed!");
  apasat = 1;
  digitalWrite(pinled, HIGH);
  delay(delaytime);
  digitalWrite(pinled, LOW);
  delay(delaytime);
  digitalWrite(pinled, HIGH);
  delay(delaytime);
  digitalWrite(pinled, LOW);
  delay(delaytime);
}

if ((digitalRead(pinbutton) == HIGH) and (apasat == 1)) // if button is pushed
{
  Serial.println("Buton is released !");
  digitalWrite(pinled, LOW); // led off
  apasat = 0;
  digitalWrite(pinled, HIGH);
  delay(delaytime);
  digitalWrite(pinled, LOW);
  delay(delaytime);
  digitalWrite(pinled, HIGH);
  delay(delaytime);
  digitalWrite(pinled, LOW);
  delay(delaytime);
  digitalWrite(pinled, HIGH);
  delay(delaytime);
  digitalWrite(pinled, LOW);
  delay(delaytime);
}


} // end of main loop
