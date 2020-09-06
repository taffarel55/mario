int speakerPin = 8;

#define DO 261.625519
#define RE 293.664734
#define MI 329.627533
#define FA 349.228241
#define SOL 391.995392
#define SOLsus 415.304688
#define LA 440.0
#define SI 493.883301 
#define DOm 523.251099
#define REm 587.329529  
#define MIm 659.255127

void setup()
{

  pinMode(speakerPin, OUTPUT);
 
}
 
void loop()   
{
  march();
}

void Sleep(int a) {
  delay(a);
}
 
void Beep (int frequencyInHertz, long timeInMilliseconds)
{

 
    int x;
    long delayAmount = (long)(1000000/frequencyInHertz);
    long loopTime = (long)((timeInMilliseconds*1000)/(delayAmount*2));
    for (x=0;x<loopTime;x++)
    {
        digitalWrite(speakerPin,HIGH);
        delayMicroseconds(delayAmount);
        digitalWrite(speakerPin,LOW);
        delayMicroseconds(delayAmount);
    }
 
  
    delay(20);
    
}
 
void march()
{


  //SOMOS A TURMA TRICOLOR

  
  Beep(MI,550);
  Beep(MI,400);
  Beep(MI,200);
  Beep(MI,200);
  Beep(MI,175);
  Beep(SOL,200);
  Beep(MI,150);
  Beep(RE,1500);
 
  //SOMOS A VOZ DO CAMPEAO
  Beep(FA,550);
  Beep(FA,400);
  Beep(FA,200); 
  Beep(FA,200); 
  Beep(FA,175); 
  Beep(SOL,200); 
  Beep(FA,150); 
  Beep(MI,1500); 
  
  //SOMOS DO POVO O CLAMOR
  Beep(DOm,550); 
  Beep(DOm,400); 
  Beep(DOm,200); 
  Beep(DOm,200); 
  Beep(DOm,175); 
  Beep(REm,200); 
  Beep(DOm,150); 
  Beep(SI,1500); 
  
  //NINGUEM NOS VENCE EM VIBRACÃO
  Beep(LA,550); 
  Beep(LA,400); 
  Beep(LA,200); 
  Beep(LA,200); 
  Beep(DOm,200); 
  Beep(SI,150); 
  Beep(LA,150); 
  Beep(SOL,1500); 
  
  //VAMOS AVANTE ESQUADRAO
  Beep(MI,550); 
  Beep(MI,400); 
  Beep(MI,200); 
  Beep(MI,200); 
  Beep(MI,175); 
  Beep(SOL,200); 
  Beep(MI,150); 
  Beep(RE,1500); 
  
  //VAMOS SERAS UM VENCEDOR
  Beep(LA,550); 
  Beep(LA,400); 
  Beep(LA,200); 
  Beep(LA,200); 
  Beep(DOm,200); 
  Beep(SI,150); 
  Beep(LA,150); 
  Beep(SOLsus,1500);  
  
  //VAMOS CONQUISTAR ESSE TENTO
  Beep(LA,550); 
  Beep(LA,400); 
  Beep(SI,200); 
  Beep(DOm,150); 
  Beep(DOm,150); 
  Beep(SI,200); 
  Beep(LA,250); 
  Beep(DOm,450);  
  Beep(SOL,1200);  
  
  //BAHIA,BAHIA,BAHIA
  Beep(SI,300); 
  Beep(REm,230); 
  Beep(SOL,450);Sleep(100);
  Beep(SI,300); 
  Beep(REm,230); 
  Beep(SOL,450);Sleep(100);
  Beep(SI,300); 
  Beep(REm,230); 
  Beep(SOL,1000);Sleep(300);

  
  //OUVE ESSA VOZ QUE É SEU ALENTO
  Beep(LA,550); 
  Beep(LA,400); 
  Beep(SI,200); 
  Beep(DOm,150); 
  Beep(DOm,150); 
  Beep(SI,200); 
  Beep(LA,250); 
  Beep(DOm,450);  
  Beep(SOL,1200);Sleep(300);
  
  //BAHIA,BAHIA,BAHIA
  Beep(SI,300); 
  Beep(REm,230); 
  Beep(SOL,450);Sleep(100);
  Beep(SI,300); 
  Beep(REm,230); 
  Beep(SOL,450);Sleep(100);
  Beep(SI,300); 
  Beep(REm,230); 
  Beep(SOL,1000);Sleep(300);   
  
  //Mais um, mais um Bahia
  Beep(SOL,400); 
  Beep(RE,500);Sleep(300);
  Beep(LA,300); 
  Beep(SOL,300);Sleep(100);
  Beep(MI,250); 
  Beep(SOL,150); 
  Beep(SOL,150);Sleep(600);
  
  
  //Mais um mais um título de glória
  Beep(SI,400); 
  Beep(REm,550);Sleep(300);
  Beep(REm,250); 
  Beep(DOm,250); 
  Beep(SI,250); 
  Beep(LA,250); 
  Beep(SOL,250); 
  Beep(MI,300);Sleep(100);
  Beep(LA,800);Sleep(50);
  Beep(SOL,500);Sleep(300); 
  
  //Mais um, mais um Bahia
  Beep(SOL,400); 
  Beep(RE,500);Sleep(300);
  Beep(LA,300); 
  Beep(SOL,300);Sleep(100);
  Beep(MI,250); 
  Beep(SOL,150); 
  Beep(SOL,150);Sleep(600);   
  
  //É assim que se resume a sua história.
  Beep(SOL,400); 
  Beep(SOL,400); 
  Beep(LA,400); 
  Beep(LA,400); 
  Beep(LA,400); 
  Beep(LA,400); 
  Beep(SI,400); 
  Beep(SI,400); 
  Beep(LA,400); 
  Beep(SOL,400); 
  Beep(DOm,1400); 
  Beep(DOm,800); 
}
