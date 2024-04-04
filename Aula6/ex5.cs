using System;
class HelloWorld {
  static void Main() {
            float horaTotal=0 ;
     for (int dia = 1; dia <= 5; dia++)
            {
                Console.WriteLine("Insira quantas horas você treinou hoje:");
                float horaDia = float.Parse(Console.ReadLine());
                horaTotal += horaDia;
            }
            int semana = (int)(1000 / horaTotal);
            int dias = semana * 5;
            int mes = (int)(semana / 4.5);
            
            Console.WriteLine("voce treinou essa semana o total de  " + horaTotal + " horas");
            Console.WriteLine("seguindo este ritimo para alcancar seu objetivo de 1000 horas de treinamento ainda faltam " + dias + " dias "+ semana + " semanas "+ mes + " meses");
  }
}