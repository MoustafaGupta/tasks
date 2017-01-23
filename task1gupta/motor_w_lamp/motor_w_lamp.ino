void setup ()
{  
pinMode (8 , OUTPUT);
pinMode (9 , OUTPUT);
pinMode (A0 , INPUT);
}
void loop () {
  int x ;
  int y;
  x = analogRead(A0);
  y=x/2;
  if (y > 20)
  {
    digitalWrite (8 , 1);
    digitalWrite (9 , 0);
  }
   else if (y < 20)
  {
    digitalWrite (8 , 0);
    digitalWrite (9 , 1);
  }
  else 
   {
    digitalWrite (8 , 0);
    digitalWrite (9 , 0);
  } 
}

