/*
 * Created by Какой то довн 
 *
 */

boolean butt_flag = 0; //переменная СОСТОЯНИЕ КНОПКИ ФЛАГ
boolean led_flag = 0; //переменная СОСТОЯНИЕ СВЕТОДИОДА/ПИЩАЛКИ
boolean butt; //КНОПКА
boolean sos; //СКРИПТ
boolean beep_flag = 0;
byte beep = 0; //Счетчик
byte timer = 0; //таймер используется для пробелов
boolean pause_flag = 0;  //флаг пробела
int val = 0;  //значение буквы
int tn = 1500 ; //ТОН
int zk = 50; //ЗАДЕРЖКА КОРОТКАЯ
int zd = zk*3;  //ЗАДЕРЖКА ДЛИННАЯ 

void setup() {
  pinMode(4, INPUT);
  pinMode(3, INPUT);
Serial.begin(9600);
pinMode(A5, OUTPUT);

tone(A5,1318,150);
delay(150);
tone(A5,1318,300);
delay(300);
tone(A5,1318,150);
delay(300);
tone(A5,1046,150);
delay(150);
tone(A5,1318,300);
delay(300);
tone(A5,1568,600);
delay(600);
tone(A5,784,600);
delay(600); 

}

void loop() {


timer = timer + 1;

////////////////////////////////////////////////////////////////////////////

//Serial.println(timer);
// Serial.println(beep); /////////////////////   ОТЛАДКА
// Serial.print("+");
//Serial.println(buttonState );
//delay(1000);
//Serial.println(zk );
//delay(1000);
 
/////////////////////////////////////////////////////////////////////////////////////  
  
  
  butt = digitalRead(3);   //Кнопка = показания ПОРТА 3
 if (butt == 1 /*&& butt_flag == 0*/) { //ЕСЛИ кнопка нажата флаг изменияется на 1, вывод +, пиииииип
  butt_flag = 1; 
 beep = beep + 1;
tone(A5, tn); 
  timer = 0;
  pause_flag = 0;
 }

  
   if( beep > 5 && beep_flag == 0 && butt == 0) {
    Serial.print("-");
    beep_flag = 1;  //Тире если пищала больше 5 и флаг 0
    beep = 0;
    
      }
   else if ( beep <= 5 && beep_flag == 0 && butt == 0) {
    Serial.print(".");  //точка если пищало меньше 5 и флаг 0
    beep_flag = 1;
    beep = 0;
    
          }
      
  delay(30);
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (butt == 0 && butt_flag == 1) { //ЕСЛИ кнопка НЕ нажата флаг изменияется на 0, вывод /, молчит
    butt_flag = 0;  //НЕ ПОМНЮ ЗАЧЕМ
      beep_flag = 0;
    delay(30);
    noTone(A5);
    }


     if (timer > 40 && pause_flag == 0) {
      pause_flag = 1;
    Serial.print("  ");
    }      
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
    
  
  
sos = digitalRead(4);              

if (sos == 1) { //SOS
      tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
       delay(zd);
       
         
      tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);
    
     tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(1000);

     
      tone(A5, tn);
       Serial.print(".");
        // Serial.print("     ");
      delay(zk);
       noTone(A5);
      delay(zk);
      
        
      tone(A5, tn);
       Serial.print(".");
       //  Serial.print("     ");
      delay(zk);
       noTone(A5);
      delay(zk);
        
        
       tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(1000);
       
       

         tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
       delay(zd);
       
         
      tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);
    
     tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(1000);
    Serial.print("    ");
        
      
      }
       if (Serial.available())  {
val = Serial.read();

   
 //////////////////////////////////////////////////////////////БУКВЫ   

 switch(val) {
    case 'a':
        tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

          tone(A5, tn);
      Serial.print("-");
         Serial.print("  ");
      delay(zd);
       noTone(A5);
    
    
    delay(1000);
     break;
    
    case 'b':
      tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

    tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

       tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

       tone(A5, tn);
       Serial.print(".");
         Serial.print("  ");
      delay(zk);
       noTone(A5);
       delay(zk);
       
       delay(1000);
      break;

      case 'c':
      tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

    tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

         tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

       tone(A5, tn);
       Serial.print(".");
        
      delay(zk);
       noTone(A5);
       delay(zk);
Serial.print("  ");

       delay(1000);
       
      
      break;
 
         case 'd':
      tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

    tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);


       tone(A5, tn);
       Serial.print(".");
        
      delay(zk);
       noTone(A5);
       delay(zk);
Serial.print("  ");

       delay(1000);
          break;

              case 'e':
   
 

    tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

Serial.print("  ");

       delay(1000);
              
break;
                  case 'f':
 

    tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);



       tone(A5, tn);
       Serial.print(".");
      
      delay(zk);
       noTone(A5);
       delay(zk);

        tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);
    
 tone(A5, tn);
 Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);
Serial.print("  ");
       delay(1000);
      

      break;
                  case 'g':
   
 
        tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);
    
        tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

    tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

Serial.print("  ");

       delay(1000);
              

                 break;
                  case 'h':
 

    tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

        tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);


 tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);


 tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

Serial.print("  ");


       delay(1000);
              

break;
                  case 'i':
   
 

    tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

        tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);


Serial.print("  ");
       delay(1000);
              


break;
                  case 'j':
   
 



        tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

         tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);


      tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);


      tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

Serial.print("  ");

       delay(1000);
              

              break;
                  case 'k':
   
 tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);


    tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

     tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

Serial.print("  ");

       delay(1000);
              


   break;
                  case 'l':
   



    tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

     tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

  tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

       tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

Serial.print("  ");

       delay(1000);
              

              break;
                  case 'm':
 
     tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

 tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

Serial.print("  ");

       delay(1000);
              

   break;
                  case 'n':
 
     tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

  tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);
Serial.print("  ");

       delay(1000);
              



              break;
                  case 'o':
 
     tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

 tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

    tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);
Serial.print("  ");

       delay(1000);
              

break;
                  case 'p':
 
     

  tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

       tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

    tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

  tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);
Serial.print("  ");
       delay(1000);
              

             break;
                  case 'q':
 
     

 

       tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

    tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

  tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

       

          tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

    Serial.print("  ");
delay(1000);
             

break;
                  case 'r':

  tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

       

          tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);
    Serial.print("  ");
delay(1000);
              
 break;
                  case 's':
 

  tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

    tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);
    Serial.print("  ");
delay(1000);
              
          break;
                  case 't':
 
 tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);
 Serial.print("  ");
delay(1000);
              

            

   break;
                  case 'u':
 tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

       tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);
       
 tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);
 Serial.print("  ");
delay(1000);
             


               

break;
                  case 'v':

       
 tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

        tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

        tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

     tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);
 Serial.print("  ");
delay(1000);
              

break;
                  case 'w':

 tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

     tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);


 
     tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);
Serial.print("  ");
    
delay(1000);
             

                           break;
                  case 'x':



tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);
                            

 tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

       
 tone(A5, tn);
Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);


 
     tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);

    Serial.print("  ");
delay(1000);
                


    break;
                  case 'y':



tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);
                            

 tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

       
  tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);


 
     tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);
Serial.print("  ");
    
delay(1000);
                  

              break;
                  case 'z':



tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);
                            



       
  tone(A5, tn);
      Serial.print("-");
        // Serial.print("     ");
      delay(zd);
       noTone(A5);
    delay(zd);


 
     tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

        tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);
Serial.print("  ");
    
delay(1000);
                  


 break;
                  case ' ':



tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);
                            

 tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

       
  tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);


 
    tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

       tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);


    tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

       tone(A5, tn);
       Serial.print(".");
         Serial.print("  ");
      delay(zk);
       noTone(A5);
       delay(zk);
       
delay(1000);
                


                  break;
                  case '.':




 tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

       
  tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);


 
    tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

       tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);


    tone(A5, tn);
       Serial.print(".");
         //Serial.print("     ");
      delay(zk);
       noTone(A5);
       delay(zk);

       tone(A5, tn);
       Serial.print(".");
         Serial.print("  ");
      delay(zk);
       noTone(A5);
       delay(zk);
       
delay(1000);
                
              break;
                  case ']':

zk = zk + 10;
zd = zk*3;
                
               break;
                  case '[':

zk = zk - 10;
zd = zk*3;
               

              break;
                  case '}':

tn = tn - 100;
                
               break;
                  case '{':

tn = tn + 100;
break;
 }
}
}

