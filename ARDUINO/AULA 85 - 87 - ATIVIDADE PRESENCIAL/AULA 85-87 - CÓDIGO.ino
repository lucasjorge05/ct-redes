/*
    Programa criado para ser utilizado na 'AULA 85-87 [PRESENCIAL]' do 1º Termo Curso Técnico de Redes de Computadores

    Esse programa tem como objetivo efetuar o cálculo da média de duas notas, validar se o aluno está Aprovado (caso a nota seja maior ou igual 5) ou se está Reprovado (caso a nota seja menor que 5). Se o aluno for Aprovado, deve-se acender um LED VERDE e exibir uma mensagem no Monitor Serial, caso so aluno for Reprovado, deve-se acender um LED VERMELHO e exibir uma mensagem no Monitor Serial.

    Autor: Lucas Jorge
    Github: github.com/lj237/ct-redes
    Tinkercad: https://www.tinkercad.com/things/elbsCKk0CjV-aula-8587-media-de-duas-notas
*/

float n1,n2,soma,media; //Declara as variáveis utilizadas no programa

void setup(){
	
	pinMode(2, OUTPUT); //Define o Pino 3 como saída [LED VERMELHO]
	pinMode(3, OUTPUT); //Define o Pino 2 como saída [LED VERDE]
  
  Serial.begin(9600); //Inicia o Monitor Serial

}

void loop(){       
  
  //Define a Nota1 e a Nota2 do Aluno
  n1 = 10;
  n2 = 5;

  //Realiza a soma das notas e o cálculo de Média
	soma = n1+n2;
	media = soma/2;
  
  //Exibe a Soma e a Média das Notas
  Serial.println(" ");
  Serial.print("A soma das notas e: ");
  Serial.println(soma);
  Serial.print("A media das notas e: ");
  Serial.println(media);
  
  
  //Verifica se a nota é maior ou igual a 5, caso seja verdadeiro o LED VERDE deve ser ligado, se for falso o LED VERMELHO deve ser ligado
  if (media>=5) {
    Serial.println("Voce foi aprovado!");
    digitalWrite(3,HIGH);

  } 
  else {
    Serial.println("Voce foi reprovado!");
    digitalWrite(2,HIGH);
  
  }

  delay (5000); //Aguarda 5 segundos antes de reiniciar a função 'void loop()'
}