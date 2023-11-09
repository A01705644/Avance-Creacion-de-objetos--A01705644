//
//  main.cpp
//  Proyecto- Tacos
//
//  Created by Sebas Muñoz on 08/11/23.



#include <iostream>
#include <string>
#include "orden tacos.h"
#include "orden tortas.h"
#include"mesero.h"

//Este programa lo que hace es simular los pedidos de diferentes clientes en una taquería ademas de poder tener los datos del mesero para un mejor monitoreo y una cuenta clara de su paga diaria.
int main(){
    //Creamos dos objetos de la clase Tacos los cuales simulan un pedido de tacos:
    //La primera orden es de seis tacos, de pastor con salsa, sin cilantro y sin cebolla así como el total de la orden (la cuenta)
    //La segunda orden son seis tacps de bistec sin salsa,con cilantro y con cebolla así como el total de la orden (la cuenta)
    Tacos orden_1(4,"Pastor",true,false,false);
    Tacos orden_2(6,"Bistec",false,true,true);
    std::cout<<"Van a ser "<< orden_1.get_orden()<<" tacos de "<<orden_1.get_tipo_tacos()<<", "<<orden_1.get_salsa()<<", "<<orden_1.get_cebolla()<<" y "<<orden_1.get_cilantro()<<std::endl;
    std::cout<<"Su total sería: "<<orden_1.get_la_cuenta()<<std::endl;
    
    std::cout<<"Van a ser "<< orden_2.get_orden()<<" tortas de "<<orden_2.get_tipo_tacos()<<", "<<orden_2.get_salsa()<<", "<<orden_2.get_cebolla()<<" y "<<orden_2.get_cilantro()<<std::endl;
    std::cout<<"Su total sería: "<<orden_2.get_la_cuenta()<<std::endl;
    
    //Creamos dos objetos de la clase Tortas los cuales simulan un pedido de tortas:
    //La primera orden es de dos tortas, de carnitas con lechuga, con queso y sin cebolla así como el total de la orden (la cuenta)
    //La segunda orden es una torta de pollo empanizado sin lechuga,con queso y con cebolla así como el total de la orden (la cuenta)
    
    Tortas orden_3(2,"Carnitas",true,true,false);
    Tortas orden_4(1,"Pollo empanizado",false,true,true);
    std::cout<<"Van a ser "<< orden_3.get_orden()<<" tacos de "<<orden_3.get_tipo_carne()<<", "<<orden_3.get_lechuga()<<", "<<orden_3.get_cebolla()<<" y "<<orden_3.get_queso()<<std::endl;
    std::cout<<"Su total sería: "<<orden_3.get_la_cuenta()<<std::endl;
    
    std::cout<<"Van a ser "<< orden_4.get_orden()<<" tacos de "<<orden_4.get_tipo_carne()<<", "<<orden_4.get_lechuga()<<", "<<orden_4.get_cebolla()<<" y "<<orden_4.get_queso()<<std::endl;
    std::cout<<"Su total sería: "<<orden_4.get_la_cuenta()<<std::endl;
    
    //Creamos dos objetos de la clase Mesero los cuales simulan un pedido un día del mesero en el restaurante:
    //El primer mesero se llama Sebastián, trabajó ocho horas y atendió 32 mesas así como su salario de el día
    //El segundo mesero se llama Nicolás, trabajó seis horas y atendió 22 mesas así como su salario de el día
    
    Mesero mesero_1("Sebastián",8,32);
    std::cout<<"El nombre del mesero es: "<< mesero_1.get_nombre()<<" trabajó "<<mesero_1.get_horas_trabajadas()<<" horas y atendió "<<mesero_1.get_mesas_atendidas()<<" mesas."<<std::endl;
    std::cout<<"Su salario del día sería: "<<mesero_1.get_salario()<<std::endl;
    
    Mesero mesero_2("Nicolás",6,22);
    std::cout<<"El nombre del mesero es: "<< mesero_2.get_nombre()<<" trabajó "<<mesero_2.get_horas_trabajadas()<<" horas y atendió "<<mesero_2.get_mesas_atendidas()<<" mesas."<<std::endl;
    std::cout<<"Su salario del día sería: "<<mesero_2.get_salario()<<std::endl;
    
    return 0;
}

