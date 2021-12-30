

#include "vector.hpp"
Vector::Vector(){ //constructor
    
}

//------------------------------------------------------
//------------------------------------------------------

/*unsigned int Vector::talla() const { //metodo talla
    return (*this).elementos.size(); //nos devuelve el tamaño
}

//------------------------------------------------------
//------------------------------------------------------

void Vector::vaciar(){ //metodo vaciar
    (*this).elementos.clear(); //devuelve el conjunto vacio
}

//------------------------------------------------------
//------------------------------------------------------
*/
bool Vector::contiene(int numero){ //metodo contiene
    for(int i=0; i<(*this).vector.size(); i++){ //bucle para comprobar si el numero esta contenido
        if(numero == (*this).vector[i]);{ // si el numero se encuentra
            return true; //devuelve true
        }
    }return false; //si no false
}
/*
//------------------------------------------------------
//------------------------------------------------------
*/
void Vector::anyadir(int a){ //metodo añadir
    if((*this).contiene(a)==false){ // comprueba si el numero no esta añadido, si no lo esta devuelve false
        (*this).vector.push_back(a); //entonces lo añade
    }
}
/*
//------------------------------------------------------
//------------------------------------------------------

void Vector::eliminar(int b){ //metodo eliminar
     for(int i=0; i<(*this).elementos.size(); i++){ //bucle para comprobar si esta el elemento
         if(b == (*this).elementos[i]){ //si esta el elemento
             elementos.erase(elementos.begin()+i); //entonces lo elimina
            }
     }
}

//------------------------------------------------------
//------------------------------------------------------

Vector Vector::unir(Vector v2){ //metodo unir
    Vector v3; //definimos un nuevo vector que sera el resultado de unir ambos
    for(int i=0;i<(*this).elementos.size();i++){ //bucle que busca elemento
        v3.anyadir((*this).elementos[i]); //añade el v1
        }
    for(int i=0;i<v2.talla();i++){ //llamando a talla recorre el bucle el segundo vector
        v3.anyadir(v2.elementos[i]); //añade el v2
    }
    return v3; //devuelve el v3
}

//------------------------------------------------------
//------------------------------------------------------
*/

bool Vector::contieneOtro(){
    Vector conjunto;
    for(int i=0; i<vector.size(); i++){ //bucle para comprobar si el conjunto esta contenido
        if(conjunto == (*this).vector[i]){ // si el conjunto al comprobarlo es igual al vector
                return false; //devuelve true
            }
        }return true; //si no false
    }


int Vector::media(){
    int valor_media = 0;
    for(int i=0; i<vector.size(); i++){
        valor_media= valor_media + vector[i]/2;
    }
    return valor_media;
}

        
