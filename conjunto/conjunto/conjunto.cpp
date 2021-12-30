

#include "conjunto.h"

// Conjunto.cpp
// g++ -c Conjunto.cpp
 
//Constructor por defecto

Conjunto::Conjunto(){ //constructor
    (*this).tam=0;
}


// ---------------------------------------------------
//         -----> talla() -----> R
// devuelve la cantidad de elementos que contiene el conjunto.
//------------------------------------------------------

unsigned int Conjunto::talla() const { //metodo talla
        return tam; //devuelve el tamanyo
}


//------------------------------------------------------
// R ------> donde() ------> Z
//
//------------------------------------------------------

int Conjunto::donde(int elemento){ //metodo donde
  for(int i=0; i<(*this).tam; i++){ //bucle para buscar
    if(elemento==elementos[i]){
      return i;
    }
  }
    return -1;
}


//------------------------------------------------------
//        ------> vaciar () ------>
// vacía el conjunto.
//------------------------------------------------------

void Conjunto::vaciar(){ //metodo vaciar
    (*this).tam=0; //hace que el tamanyo sea cero
}


//------------------------------------------------------
// R ------> contiene() ------> V/F
// devuelve true si el elemento dado pertenece al conjunto.
//------------------------------------------------------

bool Conjunto::contiene(int numero){ //metodo contiene
    int posicion=donde(numero); //asignamos una variable al metodo donde
    if(posicion==-1){ //si esta es -1
      return false; //devuelve false
    }
    else{
      return true;
    }
}


//------------------------------------------------------
// R -----> anyadir() ----->
// añade un nuevo elemento al conjunto.
//------------------------------------------------------

void Conjunto::anyadir(int a){ //metodo anyadir
    int total=contiene(a); //asignamos una variable al metodo contiene
    if(total==false){ // si esta es false
        elementos[tam] = a;
        tam ++;
    }
}


//------------------------------------------------------
// R ------> eliminar() ------>
// elimina el elemento indicado.
//------------------------------------------------------

void Conjunto::eliminar(int b){ //metodo eliminar
    int i = donde(b); //declaramos una variable para llamar a donde
    if(b==elementos[i]){ //
       elementos[i]=elementos[tam-1];
      tam--;
    }

}


//------------------------------------------------------
// [R] -----> unir() -----> [R]
// une dos conjuntos, devolviendo uno nuevo.
//------------------------------------------------------

Conjunto Conjunto::unir(Conjunto c2){ //metodo unir
    Conjunto c3; //declaramos otro conjunto al que unamos los otros dos
       for(int i=0;i<(*this).talla();i++){ //bucle para recorrer el primero
         c3.anyadir((*this).elementos[i]); //anyadimos a c3 el primero
       }
       for(int i=0; i<c2.talla(); i++){ //bucle para recorre el segundo
         c3.anyadir(c2.elementos[i]); //anyadimos a c3 el segundo
       }
       return c3; //nos devuelve el tercero
}


//------------------------------------------------------
// Conjunto ---> diferencia() ----> Conjunto
// Metodo que calcula la diferencia de dos conjuntos
//------------------------------------------------------

Conjunto Conjunto::diferencia(Conjunto c1){
    Conjunto c3; //declaramos otro conjunto que tendra el resultado
    for(int i=0;i<(*this).talla();i++){ //bucle para recorrer el primero
        if(c1.contiene((*this).elementos[i]) == false){ //comprobamos que los numeros no estan contenidos en el segundo conjunto
            c3.anyadir((*this).elementos[i]); //anyadimos al conjunto 3 los numeros que no esten contenidos
        }
    }
    return c3;
}


//------------------------------------------------------
// Conjunto ---> interseccion() ----> Conjunto
// Metodo que calcula la interseccion de dos conjuntos
//------------------------------------------------------

Conjunto Conjunto::interseccion(Conjunto c3){
    Conjunto c4; //declaramos otro conjunto que tendra el resultado
    for(int i=0;i<(*this).talla();i++){ //bucle para recorrer el primero
        if(c3.contiene((*this).elementos[i]) == true){ //comprobamos que los numeros estan contenidos en el segundo conjunto
                   c4.anyadir((*this).elementos[i]); //anyadimos al conjunto 3 los numeros que esten contenidos
        }
    }
    return c4;
}
