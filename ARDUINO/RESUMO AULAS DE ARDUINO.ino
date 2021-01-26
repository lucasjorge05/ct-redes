
// TIPOS DE VARIÁVEIS......

bool var;   // valores verdadeiros ou falsos
int var;    // valores inteiros
float var;  // valores fracionados
char var;   // valores com um caractere
String();   // valores com vários caracteres 

// tipo var = valor a ser atribuído;
int numero = 10; // Exemplo de sintaxe.


/*

COMO É A ESTRUTURA DA FUNÇÃO VOID

void setup ()
{
    código de configuração...
}


*/


void setup()
{

       //Configuração da placa 

       //pinMode ( pino , estado do pino );  "pino" qual pino vou usar,  "estado do pino" ou seja entrada ou saída.
         
         pinMode(1,OUTPUT); // Exemplo de sintaxe.
         pinMode(1,INPUT);  // Exemplo de sintaxe.

         pinMode(5,INPUT_PULLUP); // nesse caso estou iniciando o pino 5 como pino de entrada através do comando "INPUT" e falando que ele pode estar como "HIGH" ou "LOW" através do comando "PULLUP".

      //Serial.begin ( velocidade de comunicação do arduino com o PC ); ou seja configurando a tela do monitor serial para ser aberta no decorrer da execução do programa.

        Serial.begin(9600); // Exemplo de sintaxe.


}




COMO É A ESTRUTURA DA FUNÇÃO LOOP

void loop ()
{
    código de execução continua...
}


*/

void loop() 
{

digitalWrite(1,HIGH); // falando para meu pino "1" que nesse momento ele vai receber tensão ou seja vai ligar alguma coisa
digitalWrite(1,LOW);  // falando para meu pino "1" que nesse momento ele vai deixar de receber tensão ou seja vai desligar alguma coisa

digitalRead(5); //falando para meu pino "5" que nesse momento ele vai ler o estado do pino ou seja se tem tensão ou não.

delay(1000);  //falando para o código que nesse momento ele deve permanecer parado por um deternimado tempo.


Serial.print("Bom dia!");    //chamando a tela do serial monitor e mostrando na tela o conteúdo que está entre parênteses () porem na mesma linha
Serial.println("Bom dia!");  //chamando a tela do serial monitor e mostrando na tela o conteúdo que está entre parênteses () porem pulando uma linha

//EXPRESSÕES MATEMÁTICAS COM VARIÁVEIS

//  variavelresultado = VAR1 + VAR2;
//  variavelresultado = VAR1 - VAR2;
//  variavelresultado = VAR1 * VAR2;
//  variavelresultado = VAR1 / VAR2;



/*

COMO É A ESTRUTURA DO IF ELSE

if (condição)
{    código...  } else {   código...    }

*/



if ( condição ) 

    //( var == x )  se o conteúdo da variável for igual ao valor de x 
    //( var > x )   se o conteúdo da variável for maior que o valor de x 
    //( var >= x )  se o conteúdo da variável for maior ou igual ao valor de x     
    //( var < x )   se o conteúdo da variável for menor que o valor de x 
    //( var <= x )  se o conteúdo da variável for menor ou igual ao valor de x 
    //( var != x )  se o conteúdo da variável for diferente do valor de x

    // DUAS CONDIÇÕES ( primeira condição && segunda condição) o && significa que as duas condições devem sem verdadeiras.
    // DUAS CONDIÇÕES ( primeira condição || segunda condição) o || significa que apenas uma das condições devem sem verdadeiras.
                        
{
    // se alguma das minhas condições foram atendidas vou executar o código abaixo.


    //CÓDIGO

}else{  // se nenhuma das minhas condições foram atendidas no if executar o código abaixo.

        //CÓDIGO


}

/*
COMO É A ESTRUTURA DO WHILE

while (condição)

{

 //código...
 
}

*/

while(condição)
{
 
 int x = 0; //declarando a variável x do tipo inteira e guardando nela o valor de 0.
 int y = 10; //declarando a variável y do tipo inteira e guardando nela o valor de 10.


 x++; // nesse caso está incrementando o valor contido na variável x ou seja ela tinha o valor de 0 e estamos somando +1 portanto quando ela passar por esse incremento vai estar valendo 1.

 Y--; // nesse caso está decrementando o valor contido na variável Y ou seja ela tinha o valor de 10 e estamos tirando -1 portanto quando ela passar por esse decremento vai estar valendo 9.

}






}

