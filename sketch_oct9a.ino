#include <iostream>
#include <math.h>
using namespace std;

// Declaração e inicialização de variáveis globais de entrada In5,In4,In3,In2,In1,In0
int In0=30, In1=31,In2=32, In3=33, In4=34, In5=35;
// Declaração e inicialização de variáveis globais de saída Out5, Out4,Out3,Out2,Out1,Out0
int Out0=40, Out1=41, Out2=42, Out3=43, Out4=44, Out5=45;


void setup() {
  // put your setup code here, to run once:
  // Configurando pinos de entrada e saída
  pinMode(In0,INPUT);
  pinMode(In1,INPUT);
  pinMode(In2,INPUT);
  pinMode(In3,INPUT);
  pinMode(In4,INPUT);
  pinMode(In5,INPUT);
  pinMode(Out0,OUTPUT);
  pinMode(Out1,OUTPUT);
  pinMode(Out2,OUTPUT);
  pinMode(Out3,OUTPUT);
  pinMode(Out4,OUTPUT);
  pinMode(Out5,OUTPUT);
  }

void loop() {
  //add imediata
  int i0,i1,  i2, i3, i4, i5, entrada; // Declaração de variáveis locais
  i0=digitalRead(In0);
  i1=digitalRead(In1);
  i2=digitalRead(In2);
  i3=digitalRead(In3);
  i4=digitalRead(In4);
  i5=digitalRead(In5);

  digitalWrite(Out0,LOW);digitalWrite(Out1,LOW);digitalWrite(Out2,LOW);digitalWrite(Out3,LOW);digitalWrite(Out4,LOW);digitalWrite(Out5,LOW); // vai parecer q ta sempre apagado. colocar delay 10s? 
  delay(timr);

  int converteBinario(int num) {
        for(i=0; num>0; i++)    
          {    
          a[i]=num%2;    
          num= num/2;  
          } 
        }

  if ((i1==0)&&(i0==0))
    entrada = 0;
  else if ((i1==0)&&(i0==1))
    entrada = 1;
  else if ((i1==1)&&(i0==0))
    entrada = 2;
  else if ((i1==1)&&(i0==1))
    entrada = 3;
// criaria função pra tratar cada caso, código mais legivel
// converter i2, i3, i4, i5 pra decimal ou realizar operação binária direto com ele
// numeroDecimal = i2 x 2o + i3 X 2i + 
// transformar em binário; divisão sucessiva

  switch (entrada){
      case 0:
      // adição
      
        int somaDecimal(){
          int soma = ((i2 * 1) + (i3 * 2)) + ((i3 * 4) + (i4 * 8));
          return soma;
        }

        if(somaDecimal() % 2 > 0) { digitalWrite(Out0, HIGH); } else { digitalWrite(Out0, LOW); }
        if((somaDecimal() % 4) > 1) { digitalWrite(Out1, HIGH); } else { digitalWrite(Out1, LOW); }
        if((somaDecimal() % 8) > 3) { digitalWrite(Out2, HIGH); } else { digitalWrite(Out2, LOW); }
        if((somaDecimal() % 16) > 7) { digitalWrite(Out3, HIGH); } else { digitalWrite(Out3, LOW); }
        delay(timr);
        break;

     case 1:
     //sub
      int num1 = (i2 * 1) + (i3 * 2);
      int num2 = (i3 * 4) + (i4 * 8);
      if (num1 > num2){
        int subtracaoDecimal(){
          int sub = (num1 - num2);
          return sub;
        }
      } else {
          if(i3 == 0) {i3 = 1;} else {i3 = 0;}
          if(i4 == 0) {i4 = 1;} else {i4 = 0;}
          //transformando em complemento de 2 
          int comp2 = 0
          if (i3 ==0 && i4 ==0) {
            i3 = 0;
            i4 = 1;
          } else if (i3 ==0 && i4 ==1) {
            i3 = 1;
            i4 = 0;
          } else if (i3 ==1 && i4 ==0){
            i3 = 1;
            i4 = 1;
          } else if (i3 ==1 && i4 ==1) {
            comp2 = 1
            num2 = (i3 * 4) + (i4 * 8) + (comp2 * 16);
          }
          int subtracaoDecimal(){
          int sub = (num1 - num2);
          return sub;
          }
      }
      if(subtracaoDecimal() % 2 > 0) { digitalWrite(Out0, HIGH); } else { digitalWrite(Out0, LOW); }
      if((subtracaoDecimal() % 4) > 1) { digitalWrite(Out1, HIGH); } else { digitalWrite(Out1, LOW); }
      if((subtracaoDecimal() % 8) > 3) { digitalWrite(Out2, HIGH); } else { digitalWrite(Out2, LOW); }
      if((subtracaoDecimal() % 16) > 7) { digitalWrite(Out3, HIGH); } else { digitalWrite(Out3, LOW); }
      delay(timr);
      break;

      break;
      case 2:
      //add x
      int x = 15;
      int somaDireta(){
        int somaD = ((i2 * 1) + (i3 * 2) + (i3 * 4) + (i4 * 8)) + x;
        return somaD;
      }

      if (somaDireta()<33){
        if(somaDireta() % 2 > 0) { digitalWrite(Out0, HIGH); } else { digitalWrite(Out0, LOW); }
        if((somaDireta() % 4) > 1) { digitalWrite(Out1, HIGH); } else { digitalWrite(Out1, LOW); }
        if((somaDireta() % 8) > 3) { digitalWrite(Out2, HIGH); } else { digitalWrite(Out2, LOW); }
        if((somaDireta() % 16) > 7) { digitalWrite(Out3, HIGH); } else { digitalWrite(Out3, LOW); }
        delay(timr);
        
      } else {
        digitalWrite(Out0,HIGH);
        delay(500);
        digitalWrite(Out0,LOW);digitalWrite(Out1,HIGH);
        delay(500);
        digitalWrite(Out1,LOW);igitalWrite(Out2,HIGH);
        delay(500);
        digitalWrite(Out2,LOW);digitalWrite(Out3,HIGH);
        delay(500);
        digitalWrite(Out3,LOW);digitalWrite(Out4,HIGH);
        delay(500);
        digitalWrite(Out4,LOW);digitalWrite(Out5,HIGH);
        delay(500);
        digitalWrite(Out5,LOW);
        delay(timr);
        //ta acendendo um de cada vez        
      }
      break;
      
      case 3:
      //sub x
      int y = 15;
      int modo = 0;
      int tipo;
      int num = ((i2 * 1) + (i3 * 2) + (i3 * 4) + (i4 * 8));

      int subtracaoBit(){
          int sub = num - y;
          return sub;
          }

      //0 - bit sinal
      //1 - complemento de 1
      //2 - coplemento de 2
      //3 - excesso

      if (modo = 0)
        tipo = 0;
      else if (modo = 1)
        tipo = 1;
      else if (modo = 2)
        tipo = 2;
      else if (modo = 3)
        tipo = 3;

      switch tipo:
        case 0: //0 - bit sinal
          int bitSinal = subtracaoBit();
          if(subtracaoBit() % 2 > 0) { digitalWrite(Out0, HIGH); } else { digitalWrite(Out0, LOW); }
          if((subtracaoBit() % 4) > 1) { digitalWrite(Out1, HIGH); } else { digitalWrite(Out1, LOW); }
          if((subtracaoBit() % 8) > 3) { digitalWrite(Out2, HIGH); } else { digitalWrite(Out2, LOW); }
          if((subtracaoBit() % 16) > 7) { digitalWrite(Out3, HIGH); } else { digitalWrite(Out3, LOW); }
        delay(timr);
        break;

        case 1: //1 - complemento de 1          
          if (num > y){
            return subtracaoBit();
          } else {
            int binaryNum[y];
            int i = 0;

            while (n > 0) {
                binaryNum[i] = n % 2;
                n = n / 2;
                i++;
            }
            for(int i = 0; i < 8; i++) {
              if(binaryNum[i] == '1')
              {
                  binaryNum[i] = '0';
              }
              else if(binaryNum[i] == '0')
              {
                  binaryNum[i] = '1';
              }

          }
        
        break;
        case 2: //2 - coplemento de 2
          if(i3 == 0) {i3 = 1;} else {i3 = 0;}
          if(i4 == 0) {i4 = 1;} else {i4 = 0;}
          //transformando em complemento de 2 
          int comp2 = 0
          if (i3 ==0 && i4 ==0) {
            i3 = 0;
            i4 = 1;
          } else if (i3 ==0 && i4 ==1) {
            i3 = 1;
            i4 = 0;
          } else if (i3 ==1 && i4 ==0){
            i3 = 1;
            i4 = 1;
          } else if (i3 ==1 && i4 ==1) {
            comp2 = 1
            num2 = (i3 * 4) + (i4 * 8) + (comp2 * 16);
          }
        break;
        case 3://3 - excesso
          //quantos bits a maquina tem, 6 a nossa
          // valor em decimal
          // valor decimal menos a excesso, 32
          // transformar em bits 
          int excesso = 32;
          int valorExcesso = excesso - y;

          int resultadoExcesso(){
            int sub = num - valorExcesso;
            return sub;
          }

          if(resultadoExcesso() % 2 > 0) { digitalWrite(Out0, HIGH); } else { digitalWrite(Out0, LOW); }
          if((resultadoExcesso() % 4) > 1) { digitalWrite(Out1, HIGH); } else { digitalWrite(Out1, LOW); }
          if((resultadoExcesso() % 8) > 3) { digitalWrite(Out2, HIGH); } else { digitalWrite(Out2, LOW); }
          if((resultadoExcesso() % 16) > 7) { digitalWrite(Out3, HIGH); } else { digitalWrite(Out3, LOW); }
          delay(timr);
              
          if (resultadoExcesso() > 33) //caso de overflow
            digitalWrite(Out0,HIGH);digitalWrite(Out1,HIGH);digitalWrite(Out2,HIGH);digitalWrite(Out3,HIGH);digitalWrite(Out4,HIGH);digitalWrite(Out5,HIGH);
            delay(500);
            digitalWrite(Out0,LOW);digitalWrite(Out1,LOW);digitalWrite(Out2,LOW);digitalWrite(Out3,LOW);digitalWrite(Out4,LOW);digitalWrite(Out5,LOW);

      break;