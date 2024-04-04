using System;
class HelloWorld 
 {
static void Main() {
    for (int n = 50; n <= 500; n++){  
      int soma=0;
      if ((n%2 != 0)&&(n%3 == 0))
   {
      soma += n;
      Console.WriteLine("Soma: " + soma);
   }
  } 
 }
}