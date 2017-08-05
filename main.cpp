#include <iostream>

using namespace std;

class Nodo
{
public:
    string valor;
    Nodo* siguiente;

    Nodo(string valor)
            :valor(valor),siguiente(NULL)
    {
        siguiente = 0;
    }
};

class Lista
{
public:
    Nodo* inicio;

    Lista()
    {
        inicio = NULL;
    }

    void imprimir()
    {
        Nodo* iterador = inicio;
        while(iterador != NULL)
        {
            cout<<iterador->valor<<endl;
            iterador = iterador->siguiente;
        }
    }

    void agregar(string valor)
    {
        Nodo *nuevo = new Nodo(valor);
        if(inicio == NULL)
        {
            inicio = nuevo;
        }else
        {
            Nodo* iterador = inicio;
            while(iterador->siguiente != NULL)
            {
                iterador = iterador->siguiente;
            }
            iterador->siguiente = nuevo;
        }
    }

    bool existe(string valor)
    {
        Nodo *iterador = inicio;
        while(iterador != NULL)
        {
            if(iterador->valor == valor)
                return true;
            iterador = iterador->siguiente;
        }
        return false;
    }
};

int main()
{
    Lista mi_lista;
    mi_lista.agregar("A");
    mi_lista.agregar("B");
    mi_lista.agregar("C");
    mi_lista.agregar("D");
    mi_lista.agregar("E");
    mi_lista.imprimir();
    cout<<mi_lista.existe("A")<<endl;
    cout<<mi_lista.existe("D")<<endl;
    cout<<mi_lista.existe("X")<<endl;
    cout<<mi_lista.existe("W")<<endl;

    return 0;
}