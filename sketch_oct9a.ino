// Declaração e inicialização de variáveis globais de entrada In5,In4,In3,In2,In1,In0
int In0=30, In1=31,In2=32, In3=33, In4=34, In5=36;
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

  digitalWrite(Out0,LOW);digitalWrite(Out1,LOW);digitalWrite(Out2,LOW);digitalWrite(Out3,LOW);digitalWrite(Out4,LOW);digitalWrite(Out5,LOW);

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
      //add
      adicao = bit(i5) + bit(i4) + bit(i3) + bit(i2)
        if (adicao = 1)
          digitalWrite(Out0,HIGH);
        else if (adicao = 2)
          digitalWrite(Out1,HIGH);
        else if (adicao = 3)
          digitalWrite(Out0,HIGH);digitalWrite(Out1,HIGH);
        else if (adicao = 4)
          digitalWrite(Out2,HIGH);
        else if (adicao = 5)
          digitalWrite(Out0,HIGH);digitalWrite(Out2,HIGH);
        else if (adicao = 6)
          digitalWrite(Out1,HIGH);digitalWrite(Out2,HIGH);
        else if (adicao = 7)
          digitalWrite(Out0,HIGH);digitalWrite(Out1,HIGH);digitalWrite(Out2,HIGH);
        else if (adicao = 8)
          digitalWrite(Out3,HIGH);
        else if (adicao = 9)
          digitalWrite(Out0,HIGH);digitalWrite(Out3,HIGH);
        else if (adicao = 10)
          digitalWrite(Out1,HIGH);digitalWrite(Out3,HIGH);
        else if (adicao = 11)
          digitalWrite(Out0,HIGH);digitalWrite(Out1,HIGH);digitalWrite(Out3,HIGH);
        else if (adicao = 12)
          digitalWrite(Out2,HIGH);digitalWrite(Out3,HIGH);
        else if (adicao = 13)
          digitalWrite(Out0,HIGH);digitalWrite(Out2,HIGH);digitalWrite(Out3,HIGH);
        else if (adicao = 14)
          digitalWrite(Out1,HIGH);digitalWrite(Out2,HIGH);digitalWrite(Out3,HIGH);
        else if (adicao = 15)
          digitalWrite(Out0,HIGH);digitalWrite(Out1,HIGH);digitalWrite(Out2,HIGH);digitalWrite(Out3,HIGH);
      break;
     case 1:
     //sub
      diff = i5 - i4 - i3 - i2
      void Subtract(int n, int a[], int b[], int c[], int d[]) {
    
      // 1's Complement of the subtrahend 
      for(int i = 0; i < n; i++)
      {
        //Replace 1 by 0
        if(b[i] == 1)
        {
          b[i] = 0;
        }
      
        //Replace 0 by 1
        else
        {
          b[i] = 1;
        }
      }

      //Add 1 at end to get 2's Complement of the subtrahend
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

      // Represents carry
      int t = 0;						
      for(int i = n - 1; i >= 0; i--)
      {
        
        // Add a, b and carry
        a[i] = a[i] + b[i] + t;
      
        // If a[i] is 2
        if(a[i] == 2)
        {
          a[i] = 0;
          t = 1;

        }
      
        // If a[i] is 3
        else if(a[i] == 3)
        {
          a[i] = 1;
          t = 1;
        }
        else
          t = 0;
      }

      cout << endl;
      
      // If carry is generated
      // discard the carry
      if(t==1)
      {	
      
      // print the result
      for(int i = 0; i < n; i++)
      {
          
        // Print the result
        cout<<a[i];	
      }
      }

      // if carry is not generated
      else				
      {	
        // Calculate 2's Complement
        // of the obtained result
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
      
        // Add -ve sign to represent
        cout << "-";		
      
        // -ve result
        // Print the resultant array
        for(int i = 0; i < n; i++)
        {
          cout << a[i];
        }
      }
    }

      break;
      case 2:
      //add x
      int x = bit(10);
      adicaoX = x + bit(i5) + bit(i4) + bit(i3) + bit(i2)
      
      if (adicaox > 33) //caso de overflow
        digitalWrite(Out0,HIGH);
        delay(500);
        digitalWrite(Out1,HIGH);
        delay(500);
        digitalWrite(Out2,HIGH);
        delay(500);
        digitalWrite(Out3,HIGH);
        delay(500);
        digitalWrite(Out4,HIGH);
        delay(500);
        digitalWrite(Out5,HIGH);
        delay(500);
        break;
      break;
      case 3:
      //sub x
      int y = bit(15);

      break;












/*
  int 0 = ((i5==0)&&(i4==0)&&(i5==0)&&(i4==0)&&(i3==0)&&(i2==0)&&(i1==0)&&(i0==0));
  int 1 = ((i5==0)&&(i4==0)&&(i5==0)&&(i4==0)&&(i3==0)&&(i2==0)&&(i1==0)&&(i0==1));
  int 2 = ((i5==0)&&(i4==0)&&(i5==0)&&(i4==0)&&(i3==0)&&(i2==0)&&(i1==1)&&(i0==0));
  int 3 = ((i5==0)&&(i4==0)&&(i5==0)&&(i4==0)&&(i3==0)&&(i2==0)&&(i1==1)&&(i0==1))
  int 4 = ((i5==0)&&(i4==0)&&(i5==1)&&(i4==0)&&(i3==0)&&(i2==1)&&(i1==0)&&(i0==0));
  int 5 = ((i5==0)&&(i4==0)&&(i5==0)&&(i4==0)&&(i3==0)&&(i2==1)&&(i1==0)&&(i0==1));
  int 6 = ((i5==0)&&(i4==0)&&(i5==0)&&(i4==0)&&(i3==0)&&(i2==1)&&(i1==1)&&(i0==0));
  int 7 = ((i5==0)&&(i4==0)&&(i5==0)&&(i4==0)&&(i3==0)&&(i2==1)&&(i1==1)&&(i0==1));
  int 8 = ((i5==0)&&(i4==0)&&(i5==0)&&(i4==0)&&(i3==1)&&(i2==0)&&(i1==0)&&(i0==0));
  int 9 = ((i5==0)&&(i4==0)&&(i5==0)&&(i4==0)&&(i3==1)&&(i2==0)&&(i1==0)&&(i0==1));
  int 10 = ((i5==0)&&(i4==0)&&(i5==0)&&(i4==0)&&(i3==1)&&(i2==0)&&(i1==1)&&(i0==0));
  int 11 = ((i5==0)&&(i4==0)&&(i5==0)&&(i4==0)&&(i3==1)&&(i2==0)&&(i1==1)&&(i0==1));
  int 12 = ((i5==0)&&(i4==0)&&(i5==0)&&(i4==0)&&(i3==1)&&(i2==1)&&(i1==0)&&(i0==0));

  
  switch (entrada){
    case 0:
      digitalWrite(Out0,LOW);
      digitalWrite(Out1,LOW);
      digitalWrite(Out2,LOW);
      digitalWrite(Out3,LOW);
      digitalWrite(Out4,LOW);
      digitalWrite(Out5,LOW);
      digitalWrite(Out6,LOW);
      break;
     case 1:
      digitalWrite(Out0,HIGH;
      digitalWrite(Out1,LOW);
      digitalWrite(Out2,LOW);
      digitalWrite(Out3,LOW);
      digitalWrite(Out4,LOW);
      digitalWrite(Out5,LOW);
      digitalWrite(Out6,LOW);
      break;
     case 2:
      digitalWrite(Out0,LOW);
      digitalWrite(Out1,HIGH);
      digitalWrite(Out2,LOW);
      digitalWrite(Out3,LOW);
      digitalWrite(Out4,LOW);
      digitalWrite(Out5,LOW);
      digitalWrite(Out6,LOW);
      break;
     case 3:
      digitalWrite(Out0,HIGH);
      digitalWrite(Out1,HIGH);
      digitalWrite(Out2,LOW);
      digitalWrite(Out3,LOW);
      digitalWrite(Out4,LOW);
      digitalWrite(Out5,LOW);
      digitalWrite(Out6,LOW);
      break;
  }
}
*/