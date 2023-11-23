//
//  nave.h
//  Proyecto- Naves Star Wars
//
//  Created by Sebas Muñoz on 21/11/23.
//

#ifndef nave_h
#define nave_h

#include <string>


class Nave{
    
private:
    std::string nombreescuadron;
    int numerotripulantes;
    
public:
    Nave(){};
    Nave(std::string squad,int trip){
        nombreescuadron=squad;
        numerotripulantes=trip;
    };
    std::string get_escuadron();
    std::string get_nombrenave();
    std::string get_faccion();
    int get_numerocanones();
    int get_numerotripulantes();

};

std::string Nave:: get_escuadron(){
    return nombreescuadron;
}

int Nave:: get_numerotripulantes(){
    return numerotripulantes;
}



class Imperial: public Nave{
private:
    std::string nombrepiloto;
    std::string nombrenave="TIE-Fighter";
    float vida=140.00;
    int canones=2;
    std::string faccion="Imperial";
public:
    Imperial(std::string squad,int trip,std::string name):Nave(squad,trip){
        
        nombrepiloto=name;
    };
    std::string get_nombrepiloto();
    std::string get_nombrenave();
    float get_vida();
    int get_canones();
    std::string get_faccion();
};

std::string Imperial::get_nombrepiloto(){
    return nombrepiloto;
}
std::string Imperial::get_nombrenave(){
    return nombrenave;
}

float Imperial::get_vida(){
    return vida;
}

int Imperial::get_canones(){
    return canones;
}

std::string Imperial:: get_faccion(){
    return faccion;
}


class Rebelde:public Nave{
private:
    std::string nombrenave="X-Wing";
    //Androide modelo;
    std::string nombrepiloto;
    float vida=120.00;
    int canones=4;
    std::string faccion="Rebelde";
    
public:
    Rebelde(std::string squad,int trip,std::string name):Nave(squad,trip){
        
        nombrepiloto=name;
        //modelo
    };
    
    std::string get_nombrepiloto();
    std::string get_nombrenave();
    float get_vida();
    int get_canones();
    std::string get_faccion();
};

std::string Rebelde::get_nombrepiloto(){
    return nombrepiloto;
}

std::string Rebelde::get_nombrenave(){
    return nombrenave;
}

float Rebelde::get_vida(){
    return vida;
}

int Rebelde::get_canones(){
    return canones;
}

std::string Rebelde:: get_faccion(){
    return faccion;
}

    
    //Rebelde(std::string squad,std::string facc,int canones,int trip,float health,std::string //name, std::string anddroide):Nave(squad,facc,trip){
        //CUANDO TENGAS LA COMPOSICION DE ANDROIDE PONES ESTE CONSTRUCTOR
        //nombrepiloto=name;
        //modelo
    //};

//class Androide{
//private:
    //std::string nombreandroide;
//public:
    //Androide():nombreandroide=" "{};
    //Androide;
//};


#endif /* nave_h */

