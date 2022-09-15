#include <Arduino.h>
#include <string.h>

String Name;



void dot() 
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void line() 
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void setup() 
{  
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT); 
}

void loop() 
{
  // put your main code here, to run repeatedly:
  Serial.println("Please enter a name");
  Name = Serial.readString();
  Name.toUpperCase();
  Serial.println(Name);
  blink_name(Name);
  digitalWrite(LED_BUILTIN,LOW);
  delay(5000);
 
}

void blink_name(String Name) 
{
  for (int i = 0; i < Name.length(); i++) 
  {
    switch (Name[i]) 
    {
      case 'A':
      //Morse Code = .-
        dot();
        line();
        break;
      case 'B':
       //Morse Code = -...
        line();
        dot();
        dot();
        dot();
        break;
      case 'C':
       //Morse Code = -.-.
        line();
        dot();
        line();
        dot();
        break;
      case 'D':
       //Morse Code = -..
        line();
        dot();
        dot();
        break;
      case 'E':
       //Morse Code = .
        dot();
        break;
      case 'F':
       //Morse Code = ..-.
        dot();
        dot();
        line();
        dot();
        break;
      case 'G':
       //Morse Code = --.
        line();
        line();
        dot();
        break;
      case 'H':
       //Morse Code = ....
        dot();
        dot();
        dot();
        dot();
        break;
      case 'I':
       //Morse Code = ..
        dot();
        dot();
        break;
      case 'J':
       //Morse Code = .---
        dot();
        line();
        line();
        line();
        break;
      case 'K':
       //Morse Code = -.-
        line();
        dot();
        line();
        break;
      case 'L':
       //Morse Code = .-..
        dot();
        line();
        dot();
        dot();
        break;
      case 'M':
       //Morse Code = --
        line();
        line();
        break;
      case 'N':
       //Morse Code = -.
        line();
        dot();
        break;
      case 'O':
       //Morse Code = ---
        line();
        line();
        line();
        break;
      case 'P':
      //Morse Code = .--.
        dot();
        line();
        line();
        dot();
        break;
      case 'Q':
      //Morse Code = --.-
        line();
        line();
        dot();
        line();
        break;
      case 'R':
      //Morse Code = .-.
        dot();
        line();
        dot();
        break;
      case 'S':
      //Morse Code = ...
        dot();
        dot();
        dot();
        break;
      case 'T':
      //Morse Code = -
        line();
        break;
      case 'U':
      //Morse Code = ..-
        dot();
        dot();
        line();
        break;
      case 'V':
      //Morse Code = ...-
        dot();
        dot();
        dot();
        line();
        break;
      case 'W':
      //Morse Code = .--
        dot();
        line();
        line();
        break;
      case 'X':
      //Morse Code = -..-
        line();
        dot();
        dot();
        line();
        break;
      case 'Y':
      //Morse Code = -.--
        line();
        dot();
        line();
        line();
        break;
      case 'Z':
      //Morse Code = --..
        line();
        line();
        dot();
        dot();
        break;
      default:
        break;
    }
    delay(1000);
  }
}
