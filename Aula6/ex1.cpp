/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    double q=0;
    double soma=0;
    int contador;
    int qn;
    cout << "Digite a quantidade de números"<< endl;
    cin >> qn;
    int na;
   while(contador<qn){
        cout << "Digite a quantidade de números análisados"<< endl;
        cin >> na;
        if(na%2==0){
            soma+= na;
            q++;
        }
        contador++;
    }
    double media=soma/q;
    cout<< "Sua média é "<< media<< endl;
}