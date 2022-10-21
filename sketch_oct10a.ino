// Declaração e inicialização de variáveis globais de entrada In5,In4,In3,In2,In1,In0
int In0 = 30, In1 = 31, In2 = 32, In3 = 33, In4 = 34, In5 = 35;
// Declaração e inicialização de variáveis globais de saída Out5, Out4,Out3,Out2,Out1,Out0
int Out0 = 40, Out1 = 41, Out2 = 42, Out3 = 43, Out4 = 44, Out5 = 45;

//variáveis

int b[6];
int a[6];
int x = 0;
int y = 0;
int num1 = 0;
int num2 = 0;
int dividendo;
int modo = 0;
int excesso;
int o0 = Out0;
int o1 = Out1;
int o2 = Out2;
int o3 = Out3;
int o4 = Out4;
int o5 = Out5;

//métodos

int somaDecimal(int i2,int i3,int i4,int i5) {
  int soma = ((i2 * 1) + (i3 * 2)) + ((i4 * 4) + (i5 * 8));
  return soma;
}

int subDecimal(int i2,int i3,int i4,int i5) {
  int sub = ((i2 * 1) - (i3 * 2)) - ((i4 * 4) - (i5 * 8));
  return sub;
}

int subY(int i2,int i3,int i4,int i5, int y) {
  int suby = ((i2 * 1) - (i3 * 2)) - ((i4 * 4) - (i5 * 8)) - y;
  return suby;
}

int converteDecBin(int num) {
  int q;
  scanf("%i",&num);
  q = num;
  int i=0;
  while (i<7){
    b[i]=q%2;
    q=q/2;
    b[i] = rand();
    i++;
  }
}

int converteBinDec(int n)
{
    int num = n;
    int decimal = 0;
    int base = 1;
 
    int temp = num;
    while (temp) {
        int ultimo = temp % 10;
        temp = temp / 10;
 
        decimal += ultimo * base;
 
        base = base * 2;
    }
 
    return decimal;
}

int binAdd(int a, int b)
{
   int carry;
   while(y != 0)
   {
       carry = (x & y) << 1;
       a = a ^ b;
       b = carry;
   }
   return x;
}

int binSub(int a, int b)
{
   int carry;
   b = binAdd(~b, 1);
  
   while(b != 0)
   {
       carry = (a & b) << 1;
       a = a ^ b;
       b = carry;
   }
   return a;
  
}

int compUm(int b[6]){
  int i=0;
  while (i< 7){
    if (b[i] = 0)
    b[i] = 1;
    else if (b[i] = 1)
    b[i] = 0;
    i++;
  }
}

int compDois(int b[6]){
  int i=0, carry = 1;
  while (i<7){
    if (b[i] == 1 && carry == 1) {
    b[i] = 0;}
    else if (b[i] == 0 && carry == 1) {
    b[i] = 1;
    carry = 0;
    } else {
      b[i] = b[i];
    }
    i--;
  }
}

int subComp(int i2,int i3,int dividendo){
  int subComp = (i2 * 1) + (i3 * 2) + dividendo;
  return subComp;
}

void mostraResultado(int o0, int o1, int o2, int o3, int o4, int o5){
  int i=0;
  while (i < 7){
    if (b[i] == 0){
    digitalWrite(OUTPUT,LOW);
    delay(500);
    } else {
    digitalWrite(OUTPUT,HIGH);
    delay(500);
    }
  }
}

void piscarLeds(int max){
  if (max > 111111)
  digitalWrite(OUTPUT,LOW);
  delay(500);
  digitalWrite(OUTPUT,HIGH);
  delay(500);
}

void setup() {
  pinMode(In0, INPUT);
  pinMode(In1, INPUT);
  pinMode(In2, INPUT);
  pinMode(In3, INPUT);
  pinMode(In4, INPUT);
  pinMode(In5, INPUT);
  pinMode(Out0, OUTPUT);
  pinMode(Out1, OUTPUT);
  pinMode(Out2, OUTPUT);
  pinMode(Out3, OUTPUT);
  pinMode(Out4, OUTPUT);
  pinMode(Out5, OUTPUT);
  }

void loop() {
  int i0, i1,  i2, i3, i4, i5, entrada,soma;
  i0 = digitalRead(In0);
  i1 = digitalRead(In1);
  i2 = digitalRead(In2);
  i3 = digitalRead(In3);
  i4 = digitalRead(In4);
  i5 = digitalRead(In5);

  if ((i1==0)&&(i0==0))
    entrada = 0;
  else if ((i1==0)&&(i0==1))
    entrada = 1;
  else if ((i1==1)&&(i0==0))
    entrada = 2;
  else if ((i1==1)&&(i0==1))
    entrada = 3;

  switch (entrada){
      case 0:
      {//adição  
      soma = somaDecimal(i2,i3,i4,i5);
      converteDecBin(soma);
      mostraResultado(o0, o1, o2, o3, o4, o5);
      break;}

      case 1:{
      //sub comp2
      int sub = subDecimal(i2,i3,i4,i5);
      int converteDecBin(int num);
      int num;
      if (sub < 0){
        int num = (i4 * 4) + (i5 * 8);
        converteDecBin(num);
        compUm(b[6]);
        compDois(b[6]);
        int dividendo = converteBinDec(b[6]);
        subComp(i2, i3, dividendo);
        converteDecBin(subComp);
        mostraResultado(o0, o1, o2, o3, o4, o5);
      } else {
        converteDecBin(sub);
        mostraResultado(o0, o1, o2, o3, o4, o5);
      }
      break;}

      case 2:{
      //add x
      x = 5;
      x += somaDecimal(i2,i3,i4,i5);
      converteDecBin(soma);
      int piscarLeds(soma);
      break;}

      case 3:{
      //sub y
      modo = 0;
      y = 10;
      if ((i1==0)&&(i0==0))
        modo = 0;
      else if ((i1==0)&&(i0==1))
        modo = 1;
      else if ((i1==1)&&(i0==0))
        modo = 2;
      else if ((i1==1)&&(i0==1))
        modo = 3;

        switch(modo){
          case 0:{
          //bit sinal
          int subBit = subY(i2, i3, i4, i5, y);
            if (subBit < 0){
              num1 = somaDecimal(i2,i3,i4,i5);
              y = converteDecBin(y);
              b[0] = {1};
              int binSub(int num1, int y);
              mostraResultado(o0, o1, o2, o3, o4, o5);
            } else {
              converteDecBin(subBit);
              mostraResultado(o0, o1, o2, o3, o4, o5);
            }
          break;}
          case 1:{
          //complemento de 1
          int subUm = subY(i2, i3, i4, i5, y);
            if (subUm < 0){
              y = converteDecBin(y);
              compUm(y);
              num1 = somaDecimal(i2,i3,i4,i5);
              int binSub(int num1, int y);
              mostraResultado(o0, o1, o2, o3, o4, o5);
            } else {
              converteDecBin(subUm);
              mostraResultado(o0, o1, o2, o3, o4, o5);
            }
          break;}
          case 2:{
          //complemento de 2
            int subDois = subY(i2, i3, i4, i5, y);
            if (subDois < 0){
              y = converteDecBin(y);
              y = compUm(y);
              y = compDois(y);
              num1 = somaDecimal(i2,i3,i4,i5);
              int binSub(int num1, int y);
              mostraResultado(o0, o1, o2, o3, o4, o5);
            } else {
              converteDecBin(subDois);
              mostraResultado(o0, o1, o2, o3, o4, o5);
            }
          break;}
          case 3:{
          //excesso
            int excesso = 32 - y;
            int subExcesso = subY(i2, i3, i4, i5, excesso);
            converteDecBin(subExcesso);
            mostraResultado(o0, o1, o2, o3, o4, o5);
          break;
        }
      break;}
      }
  }
}
