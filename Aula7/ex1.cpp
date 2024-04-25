#include <iostream>
using namespace std;

int numero;

int funcaoReverso ()
{
int numeroInvertido = 0;
  
while (numero > 0)	{
numeroInvertido = numeroInvertido * 10;
	  
numeroInvertido = numeroInvertido + (numero % 10);
	  
numero = numero / 10;
	}
  return numeroInvertido;
}

int main () 
 { 
cout << "digite um numero: " << endl;
cin >> numero;
int resposta = funcaoReverso ();
cout << "Resposta da funcao1: " << resposta << endl;
}
