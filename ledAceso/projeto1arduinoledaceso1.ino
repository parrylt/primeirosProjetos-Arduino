// C++ code
//

//pino 13 led conectado ao arduino

//variável inteira chamada led de valor 13

int led = 13; 

//configuração

void setup()
{
  pinMode(led, OUTPUT); //aqui poderia só ter falado 13 pra chamar a porta 13
}

void loop()
{
  digitalWrite(led, HIGH);
}