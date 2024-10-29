// dando um "nome" para as portas 
int vermelho = 10;
int amarelo = 9;
int verde = 8;
 
void setup() {
  // indicando para o arduíno quais portas vamos usar
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}
 
void loop() {
  digitalWrite(vermelho, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, LOW);
 
  // esperamos 6s com o sinal no vermelho
  delay(6000);
 
  // Ligando o amarelo
  digitalWrite(amarelo, HIGH);
  digitalWrite(vermelho, LOW);
 
  // esperamos 2s com o sinal amarelo
  delay(2000);  
 
  // ligando o verde
  digitalWrite(verde, HIGH);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, LOW);
 
  // esperamos 4s com o sinal aberto
  delay(4000);

  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);

  delay(2000);
}