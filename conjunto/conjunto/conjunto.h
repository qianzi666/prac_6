

// Conjunto.h// ---------------------------------------------------

#ifndef CONJUNTO_YA_INCLUIDO
#define CONJUNTO_YA_INCLUIDO
#include <iostream>

class Conjunto { //declaramos la clase
    private: //variables privadas
    double elementos[300];//declaramos la lista llamada elementos
    int tam;
    int donde(int elemento);// metodo donde

    public: //variables publicas con los metodos
        Conjunto(); //constructor
        unsigned int talla() const;
        void vaciar();
        bool contiene(int numero);
        void anyadir(int a);
        void eliminar(int b);
        Conjunto unir(Conjunto c2);
        Conjunto diferencia(Conjunto c1);
        Conjunto interseccion(Conjunto c3);
};
#endif

