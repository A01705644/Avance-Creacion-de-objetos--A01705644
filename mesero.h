//
//  Header.h
//  Proyecto- Tacos
//
//  Created by Sebas Muñoz on 08/11/23.
//

#ifndef mesero_h
#define mesero_h

class Mesero{
private:
//Atributos de la clase donde están el nombre del mesero(nombre),las horas que el mesero trabajó (horas_trabajadas), el salario fijo por hora (salario_hora=70),las mesas que atendió el mesero para revisar su productividad (mesas_atendidas) y total que es el salario que recibe al final del día dicho mesero
    std::string nombre;
    int horas_trabajadas;
    int salario_hora=70;
    float mesas_atendidas,total;
    
public:
    // El constructor de la clase con sus parámetros y los métodos que tiene esta clase
    Mesero();
    Mesero (std::string name, int horas, int mesas){
        horas_trabajadas=horas;
        nombre=name;
        mesas_atendidas=mesas;
    };
    //Métodos get de los atributos de la clase
    std::string get_nombre();
    int get_horas_trabajadas();
    int get_mesas_atendidas();
    
    //Método para calcular el salario diario del trabajador en base a las horas trabajadas multiplicadas por el sueldo fijo
    float get_salario();

    //Métodos set de los atributos
    void set_nombre(std::string);
    void set_horas_trabajadas(int);
    void set_mesas_atendidas(int);
    
};

std::string Mesero:: get_nombre(){
    return nombre;
}

void Mesero:: set_nombre(std::string name){
    nombre=name;
}

int Mesero::get_horas_trabajadas(){
    return horas_trabajadas;
}

void Mesero:: set_horas_trabajadas(int horas){
    horas_trabajadas=horas;
}

int Mesero::get_mesas_atendidas(){
    return mesas_atendidas;
}

void Mesero:: set_mesas_atendidas(int mesas){
    mesas_atendidas=mesas;
}

//El total se calcula antes de mandar a llamar el valor de total con el mismo getter
float Mesero::get_salario(){
    total=horas_trabajadas*salario_hora;
    return total;
}

#endif //* mesero_h */
