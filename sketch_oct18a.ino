// Declaração e inicialização de variáveis globais de entrada In5,In4,In3,In2,In1,In0
int In0 = 30, In1 = 31, In2 = 32, In3 = 33, In4 = 34, In5 = 35;
// Declaração e inicialização de variáveis globais de saída Out5, Out4,Out3,Out2,Out1,Out0
int Out0 = 40, Out1 = 41, Out2 = 42, Out3 = 43, Out4 = 44, Out5 = 45;

//variáveis

int b[6];
int x = 0;
int y = 0;

//métodos

int somaDecimal(int i2,int i3,int i4,int i5) {
  int soma = ((i2 * 1) + (i3 * 2)) + ((i4 * 4) + (i5 * 8));
  return soma;
}

void converteDecBin(int num) {
  int q;
  scanf("%i",&num);
  q = num;
  int i=0;
  while (i<7){
    b[i]=q%2;
    q=q/2;
    i++;
  }
}

void mostraResultado(){
  int i=0;
  while (i < 7){
    if (b[i] == 0)
    digitalWrite(OUTPUT,LOW);
    else
    digitalWrite(OUTPUT,HIGH);
  }
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
      //adição  
      soma = somaDecimal(i2,i3,i4,i5);
      converteDecBin(soma);
      break;

      case 1:
      //subtração
      break;

      case 2:
      //add x
      break;

      case 3:
      //sub y
      break;
  }
}