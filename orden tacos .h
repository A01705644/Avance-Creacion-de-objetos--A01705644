//
//  orden tacos.h
//  Proyecto- Tacos
//
//  Created by Sebas Muñoz on 08/11/23.
//

#ifndef orden_tacos_h
#define orden_tacos_h
#include <string>


//Atributos de la clase donde están el tipo de taco o carne que se le va a poner(tipo_tacos), número de tacos que pidieron en la orden (orden)si el cliente dijo que quería o no salsa donde True significa que sí y False que no (salsa), si el cliente dijo que quería o no cilantro donde True significa que sí y False que no (cilantro),si el cliente dijo que quería o no cebolla donde True significa que sí y False que no (cebolla), el precio de las tacos (precio_taco) la cuenta que es lo que costó la orden  completa (total)
class Tacos{
private:
    std::string tipo_tacos;
    int orden;
    bool salsa;
    bool cilantro;
    bool cebolla;
    int precio_taco=10;
    float total;
    
public:
    // El constructor de la clase con sus parámetros y los métodos que tiene esta clase
    Tacos();
    Tacos (int cuantos,std::string tac, bool sal, bool cil, bool ceb){
        tipo_tacos= tac;
        orden=cuantos;
        salsa=sal;
        cilantro=cil;
        cebolla=ceb;
    };
    //Métodos get de los atributos de la clase
    std::string get_tipo_tacos();
    int get_orden();
    bool get_salsa();
    bool get_cilantro();
    bool get_cebolla();
    
    //Método para calcular el total de la cuenta por la compra de las tortas
    float get_la_cuenta();

    //Métodos set de los atributos
    void set_tipo_tacos(std::string);
    void set_orden(int);
    void set_salsa(bool);
    void set_cebolla(bool);
    void set_cilantro(bool);
    

};

std::string Tacos:: get_tipo_tacos(){
    return tipo_tacos;
}

void Tacos:: set_tipo_tacos(std::string tac){
    tipo_tacos=tac;
}

int Tacos::get_orden(){
    return orden;
}

void Tacos:: set_orden(int cuantos){
    orden=cuantos;
}

bool Tacos:: get_salsa(){
    return salsa;
}

void Tacos:: set_salsa(bool sal){
    salsa=sal;
}

bool Tacos:: get_cilantro(){
    return cilantro;
}

void Tacos:: set_cilantro(bool cil){
    cilantro=cil;
}

bool Tacos:: get_cebolla(){
    return cebolla;
}

void Tacos:: set_cebolla(bool ceb){
    cebolla=ceb;
}

//El total de la cuenta se calcula antes de mandar a llamar el valor de total con el mismo getter y es la multplicación de el precio fijo de los tacos por el número de tacos (orden) que se pidieron con la orden


float Tacos::get_la_cuenta(){
    total=orden*precio_taco;
    return total;
}

#endif //* orden_tacos_h */


