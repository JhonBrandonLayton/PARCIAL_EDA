#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int numeros[30] = {27,22,1,45,87,33,20,9,34,16,11,23,12,22,15,5,17,3,55,42,48,21,18,36,26,19,14,2,8,45};
    int i, j, aux;
    
    cout<<"LISTA ORIGINAL: \n";
    for ( i = 0; i < 30; i++)
    {
        cout<<numeros[i]<<"->";
    }
    
    //BURBUJA
    for ( i = 0; i < 30; i++)
    {
        for (j = 0; j < 30; j++)
        {

            if (numeros [j] > numeros[j+1]) 
            {
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }

    cout<<"\nLISTA MODIFICADA: \n"; 
    for ( i = 0; i < 31; i++)
    {
        cout<<numeros[i]<<"->";
    }

    getch();
    return 0;
}