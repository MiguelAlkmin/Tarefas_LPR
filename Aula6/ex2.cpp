#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device numAleatorio;
    uniform_int_distribution<> distribuicao(1, 100);
    int valorInteiro = distribuicao(numAleatorio);
    //cout << "Número inteiro aleatório: " << valorInteiro << endl;
    
    cout << "Adivinhe o numero entre 1 e 100 " << endl;
    int chute;
    cin >> chute;
    int contador = 0;
    do {
   if (chute < valorInteiro)
   {
      cout << "chutou baixo" << endl; 
   }
   else
   { 
     cout << "chutou alto" << endl; 
   }
    cin >> chute;
    contador++;
 } while (valorInteiro != chute);
      cout << "voce acertou, seu numero de chutes foi" << contador << endl;


    return 0;
}