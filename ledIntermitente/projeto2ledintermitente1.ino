// C++ code
//

//variável para chamar pino 13

int led = 13;


void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH); //acende
  delay(1000); // espera 1 segundo
  digitalWrite(led, LOW); // apaga
  delay(1000); // espera 1 segundo
}