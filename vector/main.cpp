

#include <iostream>
#include "Vector.hpp"
//MAIN DE PRUEBAS

/*void probarTalla() { //probar metodo talla
Vector v1; //declaramos el vector
unsigned int a = v1.talla(); //llamamos al metodo talla
if ( a != 0 ) { //si a no es cero entonces talla no funciona
    std::cout << "Parece que talla va mal \n";
    return;
    }
std::cout << "Parece que talla va bien \n";
}

//------------------------------------------------------
//------------------------------------------------------

void probarVaciar(){ //metodo vaciar
    Vector v2; //declaramos otro vector
    v2.anyadir(43); //anyadimos varios valores
    v2.anyadir(37);
    v2.anyadir(11);
    v2.vaciar(); //llamamos al metodo vaciar
    int a=v2.talla(); //para  comprobar que se ha vaciado llamamos a talla
    if ( a != 0 ) { //si no es 0, no ha funcionado
        std::cout << "Vaciar no funciona\n";
        return;
        }
    std::cout << "Vaciar funciona\n";
}

//------------------------------------------------------
//------------------------------------------------------

void probarContiene(){ //metodo contiene
    Vector v1; //declaramos vector
    v1.anyadir(2); //añadimos un valor
    int posicion = v1.contiene(2); //llamamos al metodo contiene con ese valor
    if(posicion==true){ //si es true, entonces funciona
        std::cout<<"Contiene funciona\n";
        return;
    }else{
    std::cout<<"Contiene no funciona\n";
    }
}

//------------------------------------------------------
//------------------------------------------------------

void probarAnyadir(){ //metodo anyadir
    Vector v1; //declaramos vector
    double a=5; //declaramos una variable a que es 5
    v1.anyadir(a); //llamamos al metodo anyadir
    bool total=v1.contiene(a); //para comprobar llamamos a contiene
    if(total==false){ //si es igual a false, entonces no esta y no funciona
        std::cout<<"Anyadir no funciona\n";
        return;
        }
    std::cout<<"Anyadir funciona\n";
}

//------------------------------------------------------
//------------------------------------------------------

void probarEliminar(){ //metodo eliminar
    Vector v1; //declaramos vector
    v1.anyadir(6); //anyadimos un valor con el metodo añadir
    v1.eliminar(6); //llamamos al metodo eliminar para eliminar el valor anyadido
    bool esta=v1.contiene(6); //creamos un booleano
    if(esta==true){ // si este sigue contenido, entonces no funciona
    std::cout<<"Eliminar no funciona\n";
        return;
        }
    std::cout<<"Eliminar funciona\n";
}

//------------------------------------------------------
//------------------------------------------------------

void probarUnir(){//metodo unir
    Vector v1; //declaramos un vector
    Vector v2; //declaramos otro
    v1.anyadir(25); //le anyadimos valor al primero
    v1.anyadir(85);
    v2.anyadir(28); //le anyadimos valores al segundo
    v2.anyadir(96);
    Vector v3=v1.unir(v2); //declaramos la variabvle v3 y llamamos al metodo unir
    int cosita = v3.talla(); //comprobamos con talla que realemnte su tamaño es 4
    if( cosita != 4){ //si no lo es, algo va mal
        std::cout<<"La union esta mal \n";
        return;
        }
    std::cout << "La union esta bien \n";
}

//------------------------------------------------------
//------------------------------------------------------
*/

void probarContieneOtro(){
    Vector v1;
    Vector v2;
    v1.anyadir(6);
    v2.anyadir(6);
    int posicion1 = v1.contiene(6);//llamamos al metodo contiene con ese valor
    int posicion2 = v2.contiene(6);
        if(posicion1==posicion2){//si ambas son igual
            v1=v2;{
                std::cout<<"Está contenido\n";
                return;}
            {
        std::cout<<"No está contenido\n";
        }
    }
    
    

}

void probarMedia(){
    Vector v1;
    v1.anyadir(7);
    v1.anyadir(9);
    v1.anyadir(2);
    int valor_medio= v1.media();
    
   
    
    
}

int main() { //main para llamar a todos los metodos
    //probarTalla();
    //probarContiene();
    //probarVaciar();
    //probarAnyadir();
    //probarEliminar();
    //probarUnir();
    probar ContieneOtro();
    probarMedia();
    std::cout <<"1125/n";
}

