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
        soma = ((i2 * 1) * (i3 * 2)) + ((i3 * 4) * (i4 * 8));
        return soma;
      }

      int converteBinario() {
        for(i=0; n>0; i++)    
          {    
          a[i]=n%2;    
          n= n/2;  
          } 
        }


      int main(){
      string a = i5+i4, b=i3+i2;
      //converter binário pra decimal
      //digitalRead dentro do main
      cout<<"o resultado é: "<<add(a, b);
        if (add(a, b) = 001)
          digitalWrite(Out0,HIGH);
        else if (add(a, b) = 010)
          digitalWrite(Out1,HIGH);
        else if (add(a, b) = 011)
          digitalWrite(Out0,HIGH);digitalWrite(Out1,HIGH);
        else if (add(a, b) = 100)
          digitalWrite(Out2,HIGH);
        else if (add(a, b) = 101)
          digitalWrite(Out0,HIGH);digitalWrite(Out2,HIGH);
        else if (add(a, b) = 110)
          digitalWrite(Out1,HIGH);digitalWrite(Out2,HIGH);
        return 0;
        }
      break;

     case 1:
     //sub
      void Subtract(int n, int a[], int b[]) {
        // Complemento de 1 do subtraendo
        for(int i = 0; i < n; i++)
        {
          //Trocando o 1 pelo 0
          if(b[i] == 1)
          {
            b[i] = 0;
          }
        
          //Trocando o 0 pelo 1
          else
          {
            b[i] = 1;
          }
        }
        //Adicionando 1 no final pra obter complemento de 2
        for(int i = n - 1; i >= 0; i--)
        {          
          if(b[i] == 0)
          {
            b[i] = 1;
            break;
          }
          else
          {
            b[i] = 0;
          }
        }
        // Carry
        int t = 0;            
        for(int i = n - 1; i >= 0; i--)
        { 
          // Adiciona a, b e o carry
          a[i] = a[i] + b[i] + t;
        
          // If a[i] is 2
          if(a[i] == 2)
          {
            a[i] = 0;
            t = 1;
          }
          // Se a[i] for 3
          else if(a[i] == 3)
          {
            a[i] = 1;
            t = 1;
          }
          else
            t = 0;
        }
        cout << endl;
        // Descarda carry se tiver
        if(t==1)
        { 
        // mostra resultado
        for(int i = 0; i < n; i++)
        {
          // mostra resultado
          cout<<a[i]; 
        }
        }
        // Se não tiver carry
        else        
        { 
          // Calcula o complemento de 2 do resultado
          for(int i = 0; i < n; i++)
          {       
            if(a[i] == 1)
              a[i] = 0;
            else
              a[i] = 1;
          }
          for(int i = n - 1; i >= 0; i--)
          {
            if(a[i] == 0)
            {
              a[i] = 1;
              break;
            }
          else
            a[i] = 0;
          }
            cout << "-";    
          // Mostra o array do resultado
          for(int i = 0; i < n; i++)
          {
            cout << a[i];
            if (a[i] = 0111)
            digitalWrite(Out0,HIGH); digitalWrite(Out1,HIGH); digitalWrite(Out2,HIGH);
            else if (a[i] = 0110)
              digitalWrite(Out1,HIGH);digitalWrite(Out2,HIGH);
            else if (a[i] = 0100)
              digitalWrite(Out2,HIGH);
            else if (a[i] = 0011)
              digitalWrite(Out0,HIGH); digitalWrite(Out1,HIGH);
            else if (a[i] = 0010)
              digitalWrite(Out1,HIGH);
            else if (a[i] = 0001)
              digitalWrite(Out0,HIGH);
            else if (a[i] = 1111)
              digitalWrite(Out0,HIGH); digitalWrite(Out1,HIGH); digitalWrite(Out2,HIGH); digitalWrite(Out3,HIGH);
            else if (a[i] = 1110)
              digitalWrite(Out1,HIGH); digitalWrite(Out2,HIGH); digitalWrite(Out3,HIGH);
            else if (a[i] = 1101)
              digitalWrite(Out0,HIGH); digitalWrite(Out2,HIGH); digitalWrite(Out3,HIGH);
            else if (a[i] = 1100)
              digitalWrite(Out2,HIGH); digitalWrite(Out3,HIGH);
            else if (a[i] = 1011)
              digitalWrite(Out0,HIGH); digitalWrite(Out1,HIGH); digitalWrite(Out3,HIGH);
            else if (a[i] = 1010)
              digitalWrite(Out2,HIGH); digitalWrite(Out3,HIGH);
            else if (a[i] = 1001)
              digitalWrite(Out0,HIGH); digitalWrite(Out3,HIGH);
            else if (a[i] = 1000)
              digitalWrite(Out3,HIGH);
          }
        }
      }

      break;
      case 2:
      //add x
      int x = bit(10);
      string add(string a, string b,){
        string resultado = "";
        int temp = 0;
        int size_a = a.size() - 1;
        int size_b = b.size() - 1;
        while (size_a >= 0 || size_b >= 0 || temp == 1){
            temp += ((size_a >= 0)? a[size_a] - '0': 0);
            temp += ((size_b >= 0)? b[size_b] - '0': 0);
            resultado = char(temp % 2 + '0') + resultado;
            temp /= 2;
            size_a--; size_b--;
        }
        return resultado;
      }

      int main(){
      string a = i5+i4, b=i3+i2;
      cout<<"o resultado parcial é: "<<add(a, b);
      cout<<"o resultado final é: "<<add(a, b, x);
        if (add(a, b) = 000001)
          digitalWrite(Out0,HIGH);
        else if (add(a, b) = 000010)
          digitalWrite(Out1,HIGH);
        else if (add(a, b) = 000011)
          digitalWrite(Out0,HIGH);digitalWrite(Out1,HIGH);
        else if (add(a, b) = 000100)
          digitalWrite(Out2,HIGH);
        else if (add(a, b) = 000101)
          digitalWrite(Out0,HIGH);digitalWrite(Out2,HIGH);
        else if (add(a, b) = 000110)
          digitalWrite(Out1,HIGH);digitalWrite(Out2,HIGH);
          //variavel high ou low. função de acender os leds. olhar em digitalWrite()
        
        return 0;
        }

      if (cout<<"resultado "<<add(a, b, x) > 111111) //caso de overflow
        digitalWrite(Out0,HIGH);
        delay(500);
        digitalWrite(Out0,LOW);
        digitalWrite(Out1,HIGH);
        delay(500);
        digitalWrite(Out0,LOW);
        digitalWrite(Out2,HIGH);
        delay(500);
        digitalWrite(Out0,LOW);
        digitalWrite(Out3,HIGH);
        delay(500);
        digitalWrite(Out0,LOW);
        digitalWrite(Out4,HIGH);
        delay(500);
        digitalWrite(Out0,LOW);
        digitalWrite(Out5,HIGH);
        delay(500);
        digitalWrite(Out0,LOW);
        //ta acendendo um de cada vez
        break;
      break;
      
      case 3:
      //sub x
      int y = bit(15);
      int modo = 0;
      int tipo;
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
        string a;
        string b;
        string a = i5+i4, b=i3+i2;
        string c;
        
        cin >> i5+i4;
        cin >> i3+i2;
    
        c = bin( dec(a) - dec(b) );
    
        cout << "res: " << c << endl;
    
        return 0;

        break;
        case 1: //1 - complemento de 1

        void Subtract(int n, int a[], int b[]) {
        // Complemento de 1 do subtraendo
        for(int i = 0; i < n; i++)
        {
          //Trocando o 1 pelo 0
          if(b[i] == 1)
          {
            b[i] = 0;
          }
        
          //Trocando o 0 pelo 1
          else
          {
            b[i] = 1;
          }
        }
        // Carry
        int t = 0;            
        for(int i = n - 1; i >= 0; i--)
        { 
          // Adiciona a, b e o carry
          a[i] = a[i] + b[i] + t;
        
          // If a[i] is 2
          if(a[i] == 2)
          {
            a[i] = 0;
            t = 1;
          }
          // Se a[i] for 3
          else if(a[i] == 3)
          {
            a[i] = 1;
            t = 1;
          }
          else
            t = 0;
        }
        cout << endl;
        // mostra resultado
        for(int i = 0; i < n; i++)
        {
          // mostra resultado
          cout<<a[i]; 
        }
        }
        // Se não tiver carry
        else        
        { 
          // Calcula o complemento de 1 do resultado
          for(int i = 0; i < n; i++)
          {       
            if(a[i] == 1)
              a[i] = 0;
            else
              a[i] = 1;
          }
          for(int i = n - 1; i >= 0; i--)
          {
            if(a[i] == 0)
            {
              a[i] = 1;
              break;
            }
          else
            a[i] = 0;
          }
            cout << "-";    
          // Mostra o array do resultado
          for(int i = 0; i < n; i++)
          {
            cout << a[i];
        
        break;
        case 2: //2 - coplemento de 2
        void Subtract(int n, int a[], int b[]) {
        // Complemento de 1 do subtraendo
        for(int i = 0; i < n; i++)
        {
          //Trocando o 1 pelo 0
          if(b[i] == 1)
          {
            b[i] = 0;
          }
        
          //Trocando o 0 pelo 1
          else
          {
            b[i] = 1;
          }
        }
        //Adicionando 1 no final pra obter complemento de 2
        for(int i = n - 1; i >= 0; i--)
        {          
          if(b[i] == 0)
          {
            b[i] = 1;
            break;
          }
          else
          {
            b[i] = 0;
          }
        }
        // Carry
        int t = 0;            
        for(int i = n - 1; i >= 0; i--)
        { 
          // Adiciona a, b e o carry
          a[i] = a[i] + b[i] + t;
        
          // If a[i] is 2
          if(a[i] == 2)
          {
            a[i] = 0;
            t = 1;
          }
          // Se a[i] for 3
          else if(a[i] == 3)
          {
            a[i] = 1;
            t = 1;
          }
          else
            t = 0;
        }
        cout << endl;
        // Descarda carry se tiver
        if(t==1)
        { 
        // mostra resultado
        for(int i = 0; i < n; i++)
        {
          // mostra resultado
          cout<<a[i]; 
        }
        }
        // Se não tiver carry
        else        
        { 
          // Calcula o complemento de 2 do resultado
          for(int i = 0; i < n; i++)
          {       
            if(a[i] == 1)
              a[i] = 0;
            else
              a[i] = 1;
          }
          for(int i = n - 1; i >= 0; i--)
          {
            if(a[i] == 0)
            {
              a[i] = 1;
              break;
            }
          else
            a[i] = 0;
          }
            cout << "-";    
          // Mostra o array do resultado
          for(int i = 0; i < n; i++)
          {
            cout << a[i];

        break;
        case 3://3 - excesso
          //quantos bits a maquina tem, 6 a nossa
          // valor em decimal
          // valor decimal menos a excesso, 32
          // transformar em bits 
          int excesso = 32;
          valor = (i5 - i4 - i3 - i2);
          int binaryToDecimal(int n)
          {
              int num = n;
              int dec_value = 0;
           
              int base = 1;
           
              int temp = num;
              while (temp) {
                  int last_digit = temp % 10;
                  temp = temp / 10;
           
                  dec_value += last_digit * base;
           
                  base = base * 2;
              }
           
              return dec_value;
          }

          valorExcesso = bit(excesso - binaryToDecimal(valor));
          /*int main()
          {           
              cout << binaryToDecimal(num) << endl;
          }*/
          
        break;
      
      if (cout<<"resultado "<<add(a, b, x) > 111111) //caso de overflow
        digitalWrite(Out0,HIGH);digitalWrite(Out1,HIGH);digitalWrite(Out2,HIGH);digitalWrite(Out3,HIGH);digitalWrite(Out4,HIGH);digitalWrite(Out5,HIGH);
        delay(500);
        digitalWrite(Out0,LOW);digitalWrite(Out1,LOW);digitalWrite(Out2,LOW);digitalWrite(Out3,LOW);digitalWrite(Out4,LOW);digitalWrite(Out5,LOW);
        break;

      break;