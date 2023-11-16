//
//  orden sopes.h
//  Proyecto- Tacos
//
//  Created by Sebas Muñoz on 08/11/23.
//

#ifndef tortas_h
#define tortas_h
#include <string>

//Atributos de la clase donde están el tipo de carne(tipo_carne), número de tortas que pidieron en la orden (orden)si el cliente dijo que quería o no lechuga y cebolla donde True significa que sí y False que no (lechuga_cebolla), si el cliente dijo que quería o no queso donde True significa que sí y False que no (queso) el precio de las tortas (precio_torta) la cuenta que es lo que costó la orden  completa (total)
class Tortas{
private:
    std::string tipo_carne;
    int orden;
    bool lechuga_cebolla;
    bool queso;
    int precio_torta=70;
    float total;
    
public:
    // El constructor de la clase con sus parámetros y los métodos que tiene esta clase

    Tortas();
    Tortas (int cuantos,std::string tipo, bool lechcebolla, bool que){
        tipo_carne= tipo;
        orden=cuantos;
        lechuga_cebolla=lechcebolla;
        queso=que;

    };
    //Métodos get de los atributos de la clase
    std::string get_tipo_carne();
    int get_orden();
    bool get_lechuga_cebolla();
    bool get_queso();
    
    //Método para calcular el total de la cuenta por la compra de las tortas
    float get_la_cuenta();

    //Métodos set de los atributos
    void set_tipo_carne(std::string);
    void set_orden(int);
    void set_lechuga_cebolla(bool);
    void set_queso(bool);
    
};

std::string Tortas:: get_tipo_carne(){
    return tipo_carne;
}
void Tortas:: set_tipo_carne(std::string tipo){
    tipo_carne=tipo;
}

int Tortas::get_orden(){
    return orden;
}

void Tortas:: set_orden(int cuantos){
    orden=cuantos;
}

bool Tortas:: get_lechuga_cebolla(){
    return lechuga_cebolla;
}

void Tortas:: set_lechuga_cebolla(bool lechcebolla){
    lechuga_cebolla=lechcebolla;
}

bool Tortas:: get_queso(){
    return queso;
}

void Tortas:: set_queso(bool que){
    queso=que;
}


//El total de la cuenta se calcula antes de mandar a llamar el valor de total con el mismo getter y es la multplicación de el precio de la torta port el núimero de tortas que se pidieron con la orden

float Tortas::get_la_cuenta(){
    total=orden*precio_torta;
    return total;
}

#endif //* tortas_h */

