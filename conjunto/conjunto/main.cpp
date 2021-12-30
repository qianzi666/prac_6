//




#include <iostream>
#include "conjunto.h"

//MAIN DE PRUEBAS

void probarTalla() { //metodo talla
    Conjunto c1; //declaramos un conjunto
    unsigned int a = c1.talla(); //delctramos una variable y llamamos al metodo talla
    if ( a != 0 ) { //si talla no es igual a 0, va mal
        std::cout << "Parece que talla va mal \n";
        return;
    }
    std::cout << "Parece que talla va bien \n";
}

//------------------------------------------------------
//------------------------------------------------------

void probarVaciar(){ //metodo vaciar
    Conjunto c2; //delcramos otro conjunto
    c2.anyadir(43); //anyadimos varios  bvalores
    c2.anyadir(37);
    c2.anyadir(11);
    c2.vaciar(); //llamamos al metodo vaciar
    int a=c2.talla(); // declaramos una variable y llamamos al metodo talla para comprobar si ha funcionado
    if ( a != 0 ) { //si no es cero, entonces no ha funcionado
        std::cout << "Vaciar no funciona\n";
        return;
        }
    std::cout << "Vaciar funciona\n";
}

//------------------------------------------------------
//------------------------------------------------------

void probarContiene(){ //metodo contiene
    Conjunto c1; //declaramos un conjunto
    c1.anyadir(3); //llamamos al metodo anyadir
    int posicion = c1.contiene(3); //declaramos una varisble y llamamos al metodo contiene para comprobar si ha funcionado
    if(posicion==true){ //si la variable es triue, entonces funciona
        std::cout<<"Contiene funciona\n";
        return;
    }else{
    std::cout<<"Contiene no funciona\n";
    }
}

//------------------------------------------------------
//------------------------------------------------------

void probarAnyadir(){ //metodo anyadir
    Conjunto c1; //declaramos un conjunto
    double a=2; //declaramos una variable y le asiganmos el valor 2
    c1.anyadir(a); //llamamos al metodo anyadir con ese valor
    bool total=c1.contiene(a); //booleano llamando a contiene para comprobvar si se ha anyadido
    if(total==false){ //si este es false, entonces no se ha anyadido y anyadir no funciona
        std::cout<<"Anyadir no funciona\n";
        return;
        }
    std::cout<<"Anyadir funciona\n";
}

//------------------------------------------------------
//------------------------------------------------------

void probarEliminar(){ //metodo eliminar
    Conjunto c1; //declaramos un conjunto
    c1.anyadir(9); //anyadimos valor llamando al metodo anyadir
    c1.eliminar(9); //llamamos al metodo eliminar indicando el numero quye hemos anyadido para eliminarlo
    bool esta=c1.contiene(9); //booleano co  el metodo contiene para comprobar si el numero realmente se ha anyadido
    if(esta==true){ //si este es true, entonces eliminar no funciona y el valor sigue
    std::cout<<"Eliminar no funciona\n";
        return;
        }
    std::cout<<"Eliminar funciona\n";
}

//------------------------------------------------------
//------------------------------------------------------

void probarUnir(){ //metodo unir
    Conjunto c1; //declaramos un conjunto
    Conjunto c2; //declaramos otro
    c1.anyadir(25); //anyadimos valores al primer conjunto
    c1.anyadir(85);
    c2.anyadir(28); //anyadimos valores al segundo conjunto
    c2.anyadir(96);
    Conjunto c3=c1.unir(c2); //declaramos otro conjunto y llamamos al metodo unir para unir los dos anteriores
    int talla = c3.talla(); //declaramos otra variable y  llamamos al metodo talla para comprobar si ha funcionado
    if(talla != 4){ //si esta no es igual a 4 entonces unir no funciona
        std::cout<<"Unir no funciona \n";
        return;
        }
    std::cout << "Unir funciona \n";
}


void probarDiferencia(){ //metodo diferencia
    Conjunto c1; //declaramos un conjunto
    Conjunto c2; //declaramos otro
    c1.anyadir(55); //anyadimos valores al primer conjunto
    c1.anyadir(67);
    c2.anyadir(23); //anyadimos valores al segundo conjunto
    c2.anyadir(11);
    Conjunto c4 = c1.diferencia(c2); //llamamos al metodo interseccion y declaramos un nuevo conjunto para almacenar el otro
    int talla = c4.talla(); //declaramos una nueva variable para comprobar la talla del ultimo conjunto
    if(talla != 0){ //si esta no es igual a 0 entonces diferencia no funciona
        std::cout << "diferencia no funciona\n" ;
        return;
        }
    std::cout << "diferencia funciona \n";

}


//------------------------------------------------------
//------------------------------------------------------


void probarInterseccion(){ //metodo interseccion
    Conjunto c1; //declaramos un conjunto
    Conjunto c2; //declaramos otro
    c1.anyadir(45); //anyadimos valores al primer conjunto
    c1.anyadir(88);
    c2.anyadir(23); //anyadimos valores al segundo conjunto
    c2.anyadir(65);
    Conjunto c3 = c1.interseccion(c2); //llamamos al metodo diferencia y declaramos un nuevo conjunto para almacenar el otro
    int talla = c3.talla(); //declaramos una nueva variable para comprobar la talla del ultimo conjunto
    if(talla !=1){ //si esta no es igual a 0 entonces interseccion no funciona
        std::cout << "interseccion no funciona \n";
        return;
    }
    std::cout << "interseccion funciona \n";
}

//------------------------------------------------------
//------------------------------------------------------


int main() {
    probarTalla();
    probarContiene();
    probarVaciar();
    probarAnyadir();
    probarEliminar();
    probarUnir();
    probarDiferencia();
    probarInterseccion();
}
