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

    void insertar(string valor, int posicion)
    {
        Nodo *nuevo = new Nodo(valor);
        Nodo *iterador = inicio;

        if(posicion == 0)
        {
            nuevo->siguiente = inicio;
            inicio = nuevo;
        }else
        {
            for(int i=0; i<posicion-1; i++)
            {
                iterador = iterador->siguiente;
                if(iterador == NULL)
                    return;
            }

            nuevo->siguiente = iterador->siguiente;
            iterador->siguiente = nuevo;
        }
    }

    void borrar(int posicion)
    {
        Nodo* iterador = inicio;
        for (int i = 0; i < posicion-1 ; ++i) {
            

        }
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
    mi_lista.insertar("X",0);
    mi_lista.imprimir();

    return 0;
}