//
//  orden sopes.h
//  Proyecto- Tacos
//
//  Created by Sebas Muñoz on 08/11/23.
//

#ifndef orden_sopes_h
#define orden_sopes_h
#include <string>

//Atributos de la clase donde están el tipo de carne(tipo_carne), número de tortas que pidieron en la orden (orden)si el cliente dijo que quería o no lechuga donde True significa que sí y False que no (lechuga), si el cliente dijo que quería o no queso donde True significa que sí y False que no (queso),si el cliente dijo que quería o no cebolla donde True significa que sí y False que no (cebolla), el precio de las tortas (precio_torta) la cuenta que es lo que costó la orden  completa (total)
class Tortas{
private:
    std::string tipo_carne;
    int orden;
    bool lechuga;
    bool queso;
    bool cebolla;
    int precio_torta=70;
    float total;
    
public:
    // El constructor de la clase con sus parámetros y los métodos que tiene esta clase

    Tortas();
    Tortas (int cuantos,std::string tipo, bool lec, bool que, bool ceb){
        tipo_carne= tipo;
        orden=cuantos;
        lechuga=lec;
        queso=que;
        cebolla=ceb;
    };
    //Métodos get de los atributos de la clase
    std::string get_tipo_carne();
    int get_orden();
    bool get_lechuga();
    bool get_queso();
    bool get_cebolla();
    
    //Método para calcular el total de la cuenta por la compra de las tortas
    float get_la_cuenta();

    //Métodos set de los atributos
    void set_tipo_carne(std::string);
    void set_orden(int);
    void set_lechuga(bool);
    void set_cebolla(bool);
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

bool Tortas:: get_lechuga(){
    return lechuga;
}

void Tortas:: set_lechuga(bool lec){
    lechuga=lec;
}

bool Tortas:: get_queso(){
    return queso;
}

void Tortas:: set_queso(bool que){
    queso=que;
}

bool Tortas:: get_cebolla(){
    return cebolla;
}

void Tortas:: set_cebolla(bool ceb){
    cebolla=ceb;
}

//El total de la cuenta se calcula antes de mandar a llamar el valor de total con el mismo getter y es la multplicación de el precio de la torta port el núimero de tortas que se pidieron con la orden

float Tortas::get_la_cuenta(){
    total=orden*precio_torta;
    return total;
}

#endif //* orden_sopes_h */
