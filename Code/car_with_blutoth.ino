#define input1  2
#define input2  3
#define input3  4
#define input4  5
#define speed1 9                                                                                                                                                        
#define speed2 10
#define center_sen A0
#define Right_sen A1
#define Left_sen A2
#define Right2_sen A4
#define Left2_sen A3
char blu_val;
void setup() {
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(input3, OUTPUT);
  pinMode(input4, OUTPUT);
  pinMode(speed1,OUTPUT);

 Serial.begin(9600);
 
}

void loop() {
     int Right_val=digitalRead(Right_sen);
     int Left_val=digitalRead(Left_sen);
     int center_val=digitalRead(center_sen);
     int Right2_val=digitalRead(Right2_sen);
     int Left2_val=digitalRead(Left2_sen);

Serial.println(Right_val);

    if(center_val==0&&Right_val==1&&Left_val==1&&Left2_val==1&&Right2_val==0)
    {
     Up(); 
    }
        
     
        else if(center_val==0&&Right_val==1&&Left_val==0&&Left2_val==1&&Right2_val==0)
        {
         right(); 
        }
        else if(center_val==0&&Right_val==0&&Left_val==1&&Left2_val==1&&Right2_val==0)
        {
         right(); 
        }
         else if(center_val==0&&Right_val==1&&Left_val==1&&Left2_val==0&&Right2_val==0)
        {
         right(); 
        }
        
        else if(center_val==0&&Right_val==0&&Left_val==1&&Left2_val==1&&Right2_val==0)
        {
         left(); 
        }
                
        else if(center_val==0&&Right_val==1&&Left_val==1&&Left2_val==1&&Right2_val==1)
        {
         left(); 
        }
                
        else if(center_val==0&&Right_val==0&&Left_val==1&&Left2_val==1&&Right2_val==0)
        {
         Up(); 
        }
         else if(center_val==0&&Right_val==1&&Left_val==1&&Left2_val==0&&Right2_val==0)
        {
         Up(); 
        }
                 else if(center_val==0&&Right_val==1&&Left_val==1&&Left2_val==0&&Right2_val==1)
        {
         right(); 
        }
                else if(center_val==0&&Right_val==0&&Left_val==1&&Left2_val==0&&Right2_val==0)
        {
         left(); 
        }


         else if(center_val==0&&Right_val==0&&Left_val==0&&Left2_val==0&&Right2_val==1)
        {
         Stop(); 
        }
      


}
void Up()
{
  digitalWrite(input1,HIGH);
  digitalWrite(input2,LOW);
  analogWrite(speed1,70);
  digitalWrite(input3,HIGH);
  digitalWrite(input4,LOW);
  analogWrite(speed2,70); 
} 
void Back()
{
  digitalWrite(input1,LOW);
  digitalWrite(input2,HIGH);
  analogWrite(speed1,70);
  digitalWrite(input3,LOW);
  digitalWrite(input4,HIGH);
  analogWrite(speed2,70) ;
} 
void left()
{
  digitalWrite(input1,LOW);
  digitalWrite(input2,HIGH);
  analogWrite(speed1,60);
  digitalWrite(input3,HIGH);
  digitalWrite(input4,LOW);
  analogWrite(speed2,60) ;
} 
void right()
{
  digitalWrite(input1,HIGH);
  digitalWrite(input2,LOW);
  analogWrite(speed1,60);
  digitalWrite(input3,LOW);
  digitalWrite(input4,HIGH);
  analogWrite(speed2,60) ;
} 
void Stop()
{
  digitalWrite(input1,LOW);
  digitalWrite(input2,LOW);

  digitalWrite(input3,LOW);
  digitalWrite(input4,LOW);
}
