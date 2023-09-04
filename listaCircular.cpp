#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
    
};

Nodo* lista = NULL;

void ingresarElementos(Nodo*& lista, int numero){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo = lista;
    char continuar;
    cout<<"Ingrese un elemento: ";
    cin>>numero;
    do
    {
        if (lista == NULL)
        {
            lista = nuevoNodo;
            nuevoNodo->dato = numero;
        }
        

        cout<<"Desea ingresar otro dato? (s/n) ";
        cin>>continuar;
    } while (continuar == 'S' || continuar == 'S');
    
}

void mostrarLista(Nodo*& lista){
    if (lista != NULL)
    {
        
    }else{
        cout<<"La lista se encuentra vacia";
    }
    
}

void actualizarElementos(Nodo *&lista, int numero){

}

void menu(){
    int opcion, dato;
    cout<<"1. INGRESAR ELEMENTOS";
    cout<<"2. MOSTRAR ELEMENTOS";
    cout<<"3. ACTUALIZAR ELEMENTOS";
    cout<<"4. SALIR";
    cin>>opcion; 
    do
    {
        switch (opcion)
    {
    case 1:
        ingresarElementos(lista, dato);
        system("pause");
        break;
    case 2:
        mostrarLista(lista);
        system("pause");
        break;
    case 3:
        actualizarElementos(lista, dato);
        system("pause");
        break;
    default:
        break;
    }
    } while (opcion != 4);
    
    system("cls");
}

int main(){
    void menu();


    getch();
    return 0;
}