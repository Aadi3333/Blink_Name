String Name;

void setup() 
{  
  pinMode(LED_BUILTIN, OUTPUT); 
}

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

void loop() 
{
  // put your main code here, to run repeatedly:
  Serial.println("Please enter a name");
  Name = Serial.readString();
  Name.toUpperCase();
  Serial.println(Name);

  blink_name(Name);
 
}

void blink_name(String Name) 
{
  for (int i = 0; i < Name.length(); i++) 
  {
    switch (Name[i]) 
    {
      case 'A':
        dot();
        line();
        break;
      case 'B':
        line();
        dot();
        dot();
        dot();
        break;
      case 'C':
        line();
        dot();
        line();
        dot();
        break;
      case 'D':
        line();
        dot();
        dot();
        break;
      case 'E':
        dot();
        break;
      case 'F':
        dot();
        dot();
        line();
        dot();
        break;
      case 'G':
        line();
        line();
        dot();
        break;
      case 'H':
        dot();
        dot();
        dot();
        dot();
        break;
      case 'I':
        dot();
        dot();
        break;
      case 'J':
        dot();
        line();
        line();
        line();
        break;
      case 'K':
        line();
        dot();
        line();
        break;
      case 'L':
        dot();
        line();
        dot();
        dot();
        break;
      case 'M':
        line();
        line();
        break;
      case 'N':
        dot();
        line();
        break;
      case 'O':
        line();
        line();
        line();
        break;
      case 'P':
        dot();
        line();
        line();
        dot();
        break;
      case 'Q':
        line();
        line();
        dot();
        line();
        break;
      case 'R':
        dot();
        line();
        dot();
        break;
      case 'S':
        dot();
        dot();
        dot();
        break;
      case 'T':
        line();
        break;
      case 'U':
        dot();
        dot();
        line();
        break;
      case 'V':
        dot();
        dot();
        dot();
        line();
        break;
      case 'W':
        dot();
        line();
        line();
        break;
      case 'X':
        line();
        dot();
        dot();
        line();
        break;
      case 'Y':
        line();
        dot();
        line();
        line();
        break;
      case 'Z':
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
