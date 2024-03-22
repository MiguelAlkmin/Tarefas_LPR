#include <iostream>
using namespace std; 
int main()
{
    int numero;
    int numero2;
    cout << "insira o primeiro numero" << endl; 
    cin >> numero;
    cout << "insira o primeiro numero" << endl; 
    cin >> numero2;
   // return 0;
    if ((numero%numero2==0)||(numero2%numero==0) )
   {
      cout << "Os numeros são multiplos" << endl; 
       
   }
   else
   { 
     cout << "Os numeros não são multiplos" << endl; 
     
   }
    return 0;
   
 }