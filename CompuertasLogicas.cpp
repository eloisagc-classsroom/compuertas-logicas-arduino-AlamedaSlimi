//Configuracion inicial de los pines para los botones y el dipswitch, junto con el LED
void setup()
{
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(13, OUTPUT);
}

//Funcion principal
void loop(){
  
  /*NOT GATE: DIPSWITCH = 000*/
  if(digitalRead(10)==LOW && (digitalRead(9)==LOW) && (digitalRead(8)==LOW))
  {
    if (digitalRead(12)==LOW)
    {
      digitalWrite(13,HIGH);
    }
    else
    {
      digitalWrite(13,LOW);
    }
  }
  
  /*NOR GATE: DIPSWITCH = 001*/
  if(digitalRead(10)==LOW && (digitalRead(9)==LOW) && (digitalRead(8)==HIGH))
  {
     if (digitalRead(12)==HIGH || (digitalRead(11)==HIGH))
     {
       digitalWrite(13,LOW);
     }
     else
     {
       digitalWrite(13,HIGH);
     }
  }
  
  /*AND GATE: DIPSWITCH = 010*/
  if(digitalRead(10)==LOW && (digitalRead(9)==HIGH) && (digitalRead(8)==LOW))
  {
     if (digitalRead(12)==HIGH && (digitalRead(11)==HIGH))
     {
       digitalWrite(13,HIGH);
     }
     else
     {
       digitalWrite(13,LOW);
     }
  }
  
  /*OR GATE: DIPSWITCH = 011*/
  if(digitalRead(10)==LOW && (digitalRead(9)==HIGH) && (digitalRead(8)==HIGH))
  {
     if (digitalRead(12)==HIGH || (digitalRead(11)==HIGH))
     {
       digitalWrite(13,HIGH);
     }
     else
     {
       digitalWrite(13,LOW);
     }
  }
  
  /*NAND GATE: DIPSWITCH = 100*/
  if(digitalRead(10)==HIGH && (digitalRead(9)==LOW) && (digitalRead(8)==LOW))
  {
     if (digitalRead(12)==HIGH && (digitalRead(11)==HIGH))
     {
       digitalWrite(13,LOW);
     }
     else
     {
       digitalWrite(13,HIGH);
     }
  }
  
  /*XOR GATE: DIPSWITCH = 101*/
  if(digitalRead(10)==HIGH && (digitalRead(9)==LOW) && (digitalRead(8)==HIGH))
  {
     if (digitalRead(12)== digitalRead(11))
     {
       digitalWrite(13,LOW);
     }
     else
     {
       digitalWrite(13,HIGH);
     }
  }
  
  /*XNOR GATE: DIPSWITCH = 110*/
  if(digitalRead(10)==HIGH && (digitalRead(9)==HIGH) && (digitalRead(8)==LOW))
  {
     if (digitalRead(12)== digitalRead(11))
     {
       digitalWrite(13,HIGH);
     }
     else
     {
       digitalWrite(13,LOW);
     }
  }
  
  else{
    digitalWrite(13,LOW);
  }
}
