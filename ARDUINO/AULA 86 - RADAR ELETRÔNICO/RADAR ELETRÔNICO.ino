/*
    Esse programa tem como objetivo utilizar o Arduino como um 'radar eletrônico', verificando o valor de uma variável e determinando a velocidade de um veículo, valindo se ele está acima ou abaixo da velocidade permitida na via.

    Autor: Lucas Jorge
    Data: 19/01/2021
    Tinkercad: https://www.tinkercad.com/things/axTIzaFvrGt-aula-86-radar-eletronico

*/

float velocidade_veiculo; //Variável para Armazenar a Velocidade do Veículo
int velocidade_permitida; //Variável para Armazenar a Velocidade da Via

void setup(){

    pinMode(2,OUTPUT); //Define o Pino 2 como Saída
    pinMode(3,OUTPUT); //Define o Pino 3 como Saída

    Serial.begin(9600); //Inicia o Monitor de Serial
}

void loop(){

    //Define os valores para as variáveis.
    velocidade_veiculo = 60.3;
    velocidade_permitida = 30;

    //Exibe a velocidade permitida na via
     Serial.println("");
    Serial.print("A velocidade permitida na via e: ");
    Serial.print(velocidade_permitida);
    Serial.println(" km/h");

    //Verifica se o veículo está acima do permitido, caso ele esteja executa o código dentro do IF caso o contrári ele executa o código dentro o ELSE
    if(velocidade_veiculo>velocidade_permitida) {

        Serial.println("Voce está acima da velocidade permitida!");

        //Pisca o LED Vermelho com um intervalo de 0,5 segundos
        digitalWrite(2,HIGH);
        delay(500);
        digitalWrite(2,LOW);
        delay(500);

    } else {
        
        Serial.println("Voce está dentro da velocidade permitida!");
        
        //Pisca o LED Verde com um intervalo de 0,5 segundos
        digitalWrite(3,HIGH);
        delay(500);
        digitalWrite(3,LOW);
        delay(500);
    }

    delay(3000); //Aguarda um tempo de 3 segundos
}
