//
//  main.cpp
//  Proyecto- Naves Star Wars
//
//  Created by Sebas Muñoz on 08/11/23.



#include <iostream>
#include <string>
#include "nave.h"

    

int main(){
    bool continuar=true;
    int eleccion,tripulantess;
    std::string namee,squad;
        
    while(continuar!=false){
        std::cout<<"Hola! Estás listo para crear una nave para la batalla de la Primera Estrella de la Muerte\n";
        std::cout<<"Quieres hacer una nave 1. rebelde o 2. imperial: \n";
        std::cout<<"Recuerda que si te quieres salir vas tener que seleccionar la tecla 3!\n";
        std::cin>>eleccion;
        
        if(eleccion==1){
            
            std::cout<<"¿Cuál es el nombre del valiente héroe que atacará la Estrella de la Muerte?\n";
            std::cin>>namee;
            std::cout<<"¿Cuál va a ser el nombre del escuadrón al que perteneces?\n";
            std::cin>>squad;
            std::cout<<"¿Cuántos tripulantes hay en tu nave?\n";
            std::cin>>tripulantess;
            
            Rebelde rebelde1(squad, tripulantess, namee);
            
            std::cout << "Nombre del modelo de la nave: " << rebelde1.get_nombrenave() << "\n\n";
            std::cout << "Escuadrón: " << rebelde1.get_escuadron() << "\n";
            std::cout << "Facción: " << rebelde1.get_faccion() << "\n";
            std::cout << "Número de cañones: " << rebelde1.get_canones() << "\n";
            std::cout << "Número de tripulantes: " << rebelde1.get_numerotripulantes() << "\n";
            std::cout << "Vida: " << rebelde1.get_vida() << "\n";
            std::cout << "Nombre del piloto: " << rebelde1.get_nombrepiloto() << "\n\n";
        }
        
        else if(eleccion==2){
            
            std::cout<<"¿Cuál es el nombre del valiente héroe que defenderá la Estrella de la Muerte?\n";
            std::cin>>namee;
            std::cout<<"¿Cuál va a ser el nombre del escuadrón al que perteneces?\n";
            std::cin>>squad;
            std::cout<<"¿Cuántos tripulantes hay en tu nave?\n";
            std::cin>>tripulantess;
            
            
            Imperial imperial1(squad, tripulantess, namee);
            
            std::cout << "Nombre del modelo de la nave: " << imperial1.get_nombrenave() << "\n";
            std::cout << "Escuadrón: " << imperial1.get_escuadron() << "\n";
            std::cout << "Facción: " << imperial1.get_faccion() << "\n";
            std::cout << "Número de cañones: " << imperial1.get_canones() << "\n";
            std::cout << "Número de tripulantes: " << imperial1.get_numerotripulantes() << "\n";
            std::cout << "Vida: " << imperial1.get_vida() << "\n";
            std::cout << "Nombre del piloto: " << imperial1.get_nombrepiloto() << "\n\n";
        }
        
        else if(eleccion==3){
            std::cout<<"Que la fuerza te acompañe!";
            continuar=false;
            
        }
        else{
            std::cout<<"Solo tenemos esas dos opciones por favor vuelve a escoger!";
        }
        
    };

    return 0;
}

