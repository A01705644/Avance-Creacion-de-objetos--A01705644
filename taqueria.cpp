//
//  main.cpp
//  Proyecto- Tacos
//
//  Created by Sebas Muñoz on 08/11/23.


#include <iostream>
#include <string>
#include "tacos.h"
#include "tortas.h"
#include "mesero.h"

//Este programa lo que hace es simular los pedidos de diferentes clientes en una taquería ademas de poder tener los datos del mesero para un mejor monitoreo y una cuenta clara de su paga diaria.
//Lo más importante es que se usa un ciclo while para crear una interacción con el usuario donde él mismo pueda crear su orden haciéndole todas las preguntas sobre los ingredientes que puede llevar la orden para luego simplemente guardar las respuestas en los parámetros que necesita el constructor para crear el objeto.
int main(){
    bool eleccion=true, salsa_s_n,cilceb_s_n,lechceb_s_n,queso_s_n;
    int opcion,opcion_2,opcion_3,cuantos, pedir;
    std::string tipo_tacos,tipo_tortas;

    //Creamos un objeto de la clase taco que simula un pedido de tortas que el usuario puede crear

    //Creamos un objeto de la clase torta que simula un pedido de tortas que el usuario puede crear
    
    while(eleccion!=false){
        std::cout<<" 1. Tacos \n 2. Tortas \n 3. Salir"<<std::endl;
        std::cout<<"Los tacos cuestan: 10 pesos \n Las tortas cuestan: 70 pesos"<<std::endl;
        std::cout<<" Cuántos quiere: \n"<<std::endl;
        std::cin>>cuantos;
        std::cout<<" Qué quiere joven ( Porfavor ponga solo el número de opcion): \n"<<std::endl;
        std::cin>>pedir;
        Tacos orden_1(cuantos,tipo_tacos,true,false);
        
        if (pedir==1){
            Tacos orden_1(cuantos,tipo_tacos,salsa_s_n,cilceb_s_n);
            
            std::cout<<" 1. Taco de bistec \n";
            std::cin>>opcion;
            
            if (opcion==1){
                tipo_tacos="Bistec";
                
                std::cout<<" 1. Con salsa \n 2. Sin salsa \n";
                std::cin>>opcion_2;
                
                if (opcion_2==1){
                    salsa_s_n=true;
                    std::cout<<"1. Con cilantro y cebolla \n 2. Sin cilantro y cebolla \n";
                    std::cin>>opcion_3;
                    
                    if (opcion_3==1){
                        cilceb_s_n=true;
                        std::cout<<"Van a ser "<< orden_1.get_orden()<<orden_1.get_tipo_tacos()<<", "<<orden_1.get_salsa()<<", "<<" y "<<orden_1.get_cilantro_cebolla()<<std::endl;
                        std::cout<<"Su total sería: "<<orden_1.get_la_cuenta()<<std::endl;
                    }
                    else{
                        cilceb_s_n=false;
                        std::cout<<"Van a ser "<< orden_1.get_orden()<<orden_1.get_tipo_tacos()<<", "<<orden_1.get_salsa()<<", "<<" y "<<orden_1.get_cilantro_cebolla()<<std::endl;
                        std::cout<<"Su total sería: "<<orden_1.get_la_cuenta()<<std::endl;
                    }
                    
                }
            else{
                salsa_s_n=false;
                std::cout<<"1. Con cilantro y cebolla \n 2. Sin cilantro y cebolla \n";
                std::cin>>opcion_3;
                if (opcion_3==1){
                    if (opcion_3==1){
                        cilceb_s_n=true;
                        std::cout<<"Van a ser "<< orden_1.get_orden()<<orden_1.get_tipo_tacos()<<", "<<orden_1.get_salsa()<<", "<<" y "<<orden_1.get_cilantro_cebolla()<<std::endl;
                        std::cout<<"Su total sería: "<<orden_1.get_la_cuenta()<<std::endl;
                    }
                    else{
                        cilceb_s_n=false;
                        std::cout<<"Van a ser "<< orden_1.get_orden()<<orden_1.get_tipo_tacos()<<", "<<orden_1.get_salsa()<<", "<<" y "<<orden_1.get_cilantro_cebolla()<<std::endl;
                        std::cout<<"Su total sería: "<<orden_1.get_la_cuenta()<<std::endl;
                    }
                        
                }
            }
        }
            
        else{
            std::cout<<" De eso ya no tenemos joven";
        }
            
        }
        else if (pedir==2){
            Tortas orden_2(cuantos,tipo_tortas,lechceb_s_n,queso_s_n);
            std::cout<<" 1. Carnitas \n";
            std::cin>>opcion;
            
            if (opcion==1){
                tipo_tortas="Carnitas";
                
                std::cout<<"1. Con lechuga y cebolla \n 2. Sin lechuga y cebolla \n";
                std::cin>>opcion_2;
                
                if (opcion_2==1){
                    lechceb_s_n=true;
                    std::cout<<"1. Con queso \n 2. Sin queso \n";
                    std::cin>>opcion_3;
                    
                    if (opcion_3==1){
                        queso_s_n=true;
                        std::cout<<"Van a ser "<< orden_2.get_orden()<<orden_2.get_tipo_carne()<<", "<<orden_2.get_lechuga_cebolla()<<", "<<" y "<<orden_2.get_queso()<<std::endl;
                        std::cout<<"Su total sería: "<<orden_2.get_la_cuenta()<<std::endl;
                    }
                    else{
                        queso_s_n=false;
                        std::cout<<"Van a ser "<< orden_2.get_orden()<<orden_2.get_tipo_carne()<<", "<<orden_2.get_lechuga_cebolla()<<", "<<" y "<<orden_2.get_queso()<<std::endl;
                        std::cout<<"Su total sería: "<<orden_2.get_la_cuenta()<<std::endl;
                    }
                    
                }
                else{
                    lechceb_s_n=false;
                    std::cout<<"1. Con queso \n 2. Sin queso \n";
                    std::cin>>opcion_3;
                    
                    
                    if (opcion_3==1){
                        queso_s_n=true;
                        std::cout<<"Van a ser "<< orden_2.get_orden()<<orden_2.get_tipo_carne()<<", "<<orden_2.get_lechuga_cebolla()<<", "<<" y "<<orden_2.get_queso()<<std::endl;
                        std::cout<<"Su total sería: "<<orden_2.get_la_cuenta()<<std::endl;
                    }
                    
                    else{
                        queso_s_n=false;
                        std::cout<<"Van a ser "<< orden_2.get_orden()<<orden_2.get_tipo_carne()<<", "<<orden_2.get_lechuga_cebolla()<<", "<<" y "<<orden_2.get_queso()<<std::endl;
                        std::cout<<"Su total sería: "<<orden_2.get_la_cuenta()<<std::endl;
                    }
            }
                
        }
                
            
            else{
                std::cout<<" De eso ya no tenemos joven";
            }
            
            
        }
        
        else if (pedir==3){
            eleccion=false;
            std::cout<<"Gracias por venir vuelva pronto!";
        }
        
        
        else{
            std::cout<<" No le entendí, si me lo puede repetir porfa";
        }
        

    }
    //Creamos un objeto de la clase Mesero el cual simula un pedido y un día del mesero en el restaurante:
    //El primer mesero se llama Sebastián, trabajó ocho horas y atendió 32 mesas así como su salario de el día
    Mesero mesero_1("Sebastián",8,32);
    std::cout<<"El nombre del mesero es: "<< mesero_1.get_nombre()<<" trabajó "<<mesero_1.get_horas_trabajadas()<<" horas y atendió "<<mesero_1.get_mesas_atendidas()<<" mesas."<<std::endl;
    std::cout<<"Su salario del día sería: "<<mesero_1.get_salario()<<std::endl;
    return 0;
}
    
    
    
