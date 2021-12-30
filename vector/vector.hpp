

#ifndef vector_hpp
#define vector_hpp
#include <vector>

class Vector{ //definimos clase vector
    private: //parte privada
    std::vector <double> vector;
    
    public: //parte publica con los metodos
    Vector(); //constructor
    unsigned int talla() const;
    //void vaciar();
    bool contiene(int numero);
    void anyadir(int a);
    //void eliminar(int b);
    //Vector unir(Vector v2);
    bool contieneOtro();
    int media();
    
};

#endif /* vector_hpp */
