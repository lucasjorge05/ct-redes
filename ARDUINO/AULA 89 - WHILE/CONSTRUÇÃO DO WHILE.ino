int chave = 7;						// Atrelando pino 7 a variável "chave"
int ledverde = 10;					// Atrelando pino 10 a variável "ledverde"
int ledvermelho = 8;				// Atrelando pino 10 a variável "ledvermelho"


void setup()
{
 pinMode(chave, INPUT_PULLUP);		//Declarando pino "chave" como entrada de PULLUP verificando entrada se está HIGH ou LOW.
 pinMode(ledverde,OUTPUT);			//Declarando pino "ledverde" como saída.
 pinMode(ledvermelho,OUTPUT);		//Declarando pino "ledvermelho" como saída. 
}

void loop()
{
  int estado = digitalRead(chave); 	//Lendo estado do pino "chave" se está HIGH ou LOW e colocando o valor lido dentro da variável estado.
  
  while (estado == HIGH)			//Enquanto a variável estado estiver HIGH execute o código.
  {     
   digitalWrite(ledverde, HIGH);	//Colocando o pino "ledverde" como HIGH ou seja ligado.
   delay(200);						//Esperando por 200 milissegundos.
   digitalWrite(ledverde, LOW);		//Colocando o pino "ledverde" como LOW ou seja desligado.
   delay(200);						//Esperando por 200 milissegundos.
   
   digitalWrite(ledvermelho, HIGH);	//Colocando o pino "ledvermelho" como HIGH ou seja ligado.
   delay(200);						//Esperando por 200 milissegundos.
   digitalWrite(ledvermelho, LOW);	//Colocando o pino "ledvermelho" como LOW ou seja desligado.
   delay(200);						//Esperando por 200 milissegundos.
   
   int estado = digitalRead(chave);	//Lendo estado do pino "chave" se está HIGH ou LOW e colocando o valor lido dentro da variável estado.
   if (estado== LOW)				//Se a variável "estado" estiver LOW ou seja desligado faça.
   		{
      		break;					//usada para a saída do while.
   		}
  }
  
} 
