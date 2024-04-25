#include <iostream>
using namespace std;

int funcaoEx1(){
    
   // ESCOPO DE VARIÁVEIS 
    int quantidade;
    cout << "Digite a quantidade de números a serem inseridos: ";
    cin >> quantidade;

    int soma = 0;
    int contador = 0;
    
    // EXECUÇÃO

    while (quantidade > 0) {
        int numero;
        cout << "Digite um número: ";
        cin >> numero;

        if (numero % 2 == 0) {
            soma += numero;
            contador++;
        }

        quantidade--;
    }

    if (contador > 0) {
        double media = static_cast<double>(soma) / contador;
        cout << "A média dos números pares é: " << media << endl;
    } else {
        cout << "Nenhum número par foi digitado." << endl;
    }
}
 
 int funcaoEx3 (){
 int soma = 0;
    for (int i = 50; i <= 500; i++) {
        if (i % 2 != 0 && i % 3 == 0) {
            soma += i;
            cout << "Soma: " << soma << endl;
        }
    }
}

int funcaoEx4(){
cout << "Digite um número: ";
    int numero;
    cin >> numero;

    int quadrado = numero * numero;
    int somaDigitos = 0;

    // Usando um loop while para iterar sobre os dígitos do quadrado do número
    while (quadrado > 0) {
        somaDigitos += quadrado % 10; // Adicionando o último dígito à soma
        quadrado /= 10; // Removendo o último dígito
    }
   cout << "A soma dos dígitos do quadrado de " << numero << " é: " << somaDigitos << endl;
}

int main(){ 
int resposta;
cout << "Digite 1 para ver o exercicio UM, 3 para ver o exercicio TRES e 4 para ver o exercicio QUATRO" << endl;
cin >> resposta;

switch (resposta)
        {
            case 1:
                 cout << "EXERCICIO 1 " << endl; 
                 funcaoEx1();
                 break;

            case 3:
                cout << "EXERCICIO 3 " << endl; 
                funcaoEx3();
                 break;

            case 4:
                cout << "EXERCICIO 4 " << endl;  
                funcaoEx4();
                 break;
  }  
  }

