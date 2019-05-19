
/* Layout do dado a
 *  
 *  1   2   3
 *      7
 *  4   5   6
 */


#define LED1 13
#define LED2 12
#define LED3 11
#define LED4 10
#define LED5 9
#define LED6 8  
#define LED7 7
#define BOTAO 2
#define TEMPO_SORTEAR 500
#define TEMPO_PISCAR 100

void ligar_led (int led)
{
  digitalWrite (led, HIGH);
}

void desligar_led (int led)
{
  digitalWrite (led, LOW);
}

void apagar_todos_leds()
{
   desligar_led (LED1);
   desligar_led (LED2);
   desligar_led (LED3);
   desligar_led (LED4);
   desligar_led (LED5);
   desligar_led (LED6);
   desligar_led (LED7);   
  }

void numero1 ()
{
  apagar_todos_leds ();
  ligar_led (LED7);
}

void numero2 ()
{
  
  apagar_todos_leds ();
  ligar_led (LED1);
  ligar_led (LED6);
  }

void numero3 ()
{
  
  apagar_todos_leds ();
  ligar_led (LED3);
  ligar_led (LED4);
  ligar_led (LED7);
  }

void numero4 ()
{
  
  apagar_todos_leds ();
  ligar_led (LED1);
  ligar_led (LED3);
  ligar_led (LED4);
  ligar_led (LED6);
  
}

void numero5 ()
{
  
  apagar_todos_leds ();
  ligar_led (LED1);
  ligar_led (LED3);
  ligar_led (LED4);
  ligar_led (LED6);
  ligar_led (LED7);
}

void numero6 ()
{
  
  apagar_todos_leds ();
  ligar_led (LED1);
  ligar_led (LED2);
  ligar_led (LED3);
  ligar_led (LED4);
  ligar_led (LED5);
  ligar_led (LED6);
}

boolean botao_ligado ()
{
  if (digitalRead (BOTAO) == HIGH)
  {
    return true;
    }
  else 
  {
    return false;
    }
}

boolean botao_desligado ()
{
  if (digitalRead (BOTAO) == LOW)
  {
    return true;
  }
  else
  {
    return false;
  }
 
}

int sortear_numero ()
{
int numero_sorteado;
numero_sorteado = random (1, 7);
return numero_sorteado;

}


  
void setup() {
  // put your setup code here, to run once:
pinMode(BOTAO, INPUT);
pinMode (LED1, OUTPUT);
pinMode (LED2, OUTPUT);
pinMode (LED3, OUTPUT);
pinMode (LED4, OUTPUT);
pinMode (LED5, OUTPUT);
pinMode (LED6, OUTPUT);
pinMode (LED7, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
int sorteado;
   
   while (botao_ligado())
   {
numero1 ();
delay (TEMPO_PISCAR);

numero2 ();
delay (TEMPO_PISCAR);

numero3 ();
delay (TEMPO_PISCAR);

numero4 ();
delay (TEMPO_PISCAR);

numero5 ();
delay (TEMPO_PISCAR);

numero6 ();
delay (TEMPO_SORTEAR);

sorteado = sortear_numero ();

if (sorteado == 1)
{
  numero1();
}

else if (sorteado == 2)
{
  numero2();
}

else if (sorteado == 3)
{
  numero3();
}

else if (sorteado == 4)
{
  numero4();
}

else if (sorteado == 5)
{
  numero5();
}

else if (sorteado == 6)
{
  numero6();
}

}
}
