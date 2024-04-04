using System;
class HelloWorld {
  static void Main() {
    Console.WriteLine("insira um numero");
    int numero = int.Parse(Console.ReadLine());
    numero = (numero*numero);
    int soma = 0;
    while (numero != 0)
        {
            soma += numero % 10; 
            numero /= 10; 
        }
     Console.WriteLine("A soma dos algarismos é: " + soma);
 }
}