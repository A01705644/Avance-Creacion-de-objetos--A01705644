//
//  main.cpp
//  Proyecto- Naves Star Wars
//
//  Created by Sebas Muñoz on 08/11/23.



#include <iostream>
#include <string>
#include "nave.h"



int main(){
    
    Rebelde rebelde1("Escuadron Dorado", "Faccion2", 4, "Luke");
    std::cout << "Rebelde 1\n";
    std::cout << "Nombre del modelo de la nave: " << rebelde1.get_nombrenave() << "\n\n";
    std::cout << "Escuadrón: " << rebelde1.get_escuadron() << "\n";
    std::cout << "Facción: " << rebelde1.get_faccion() << "\n";
    std::cout << "Número de cañones: " << rebelde1.get_canones() << "\n";
    std::cout << "Número de tripulantes: " << rebelde1.get_numerotripulantes() << "\n";
    std::cout << "Vida: " << rebelde1.get_vida() << "\n";
    std::cout << "Nombre del piloto: " << rebelde1.get_nombrepiloto() << "\n\n";
    
    
    Imperial imperial1("Escuadrón2", "Faccion2", 2, "Piloto1");
    std::cout << "Imperial 1\n";
    std::cout << "Nombre del modelo de la nave: " << imperial1.get_nombrenave() << "\n\n";
    std::cout << "Escuadrón: " << imperial1.get_escuadron() << "\n";
    std::cout << "Facción: " << imperial1.get_faccion() << "\n";
    std::cout << "Número de cañones: " << imperial1.get_canones() << "\n";
    std::cout << "Número de tripulantes: " << imperial1.get_numerotripulantes() << "\n";
    std::cout << "Vida: " << imperial1.get_vida() << "\n";
    std::cout << "Nombre del piloto: " << imperial1.get_nombrepiloto() << "\n\n";

    return 0;
}
