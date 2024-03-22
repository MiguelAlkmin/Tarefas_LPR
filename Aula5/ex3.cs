using System;
class HelloWorld {
  static void Main() {
      Console.WriteLine("insira 1 para a classe guerreira, 2 para mago ou 3 para arqueira :");
      int classe = int.Parse(Console.ReadLine());
      
      switch (classe)
        {
            case 1:
                Console.WriteLine("sua classe e guerreiro suas habilidades sao : Ataque Pesado, Defesa Total");
                break;

            case 2:
                Console.WriteLine("sua classe e  mago suas habilidades sao : Bola de Fogo, Escudo de Gelo");
                break;

            case 3:
                Console.WriteLine("sua classe e arqueira  suas habilidades sao : Flecha Precisa, Disparo Triplo");
                break;
  }     }
}