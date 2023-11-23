# Avance-Creacion-de-objetos--A01705644

Contexto:

La creación de naves tanto Imperiales como rebeldes en el universo de Star Wars hechas de tal manera en que tengan vida propia con sus propios pilotos y otros atributos.


Funcionalidad:

EL programa lo que hace es permitirle al usuario crear una nave de Star Wars, ya sea Rebelde o del Imperio, con sus diferentes características y particularidades. Para empezar el usuario puede ponerle nombre a su piloto, el nombre del escuadrón al que quiere que pertenezca la nave y el número de tripulantes. Una vez que escoge si quiere que su nave pertenezca al Imperio o a la Rebelión las diferentes características individuales de la TIE Fighter (Imperio) y la X-Wing (Rebelión) se verán reflejadas como lo será el nombre de la nave que usará (X-Wing o TIE Fighter), el numero de cañones que tienen las naves y la vida.

Cabe aclarar que la vida se basó en que, por ser Rebeldes, los materiales de construcción la harían de menor calidad lo que se ve reflejado en la cantidad de vida o recistencia de la nave (120) que tienen lo cuál también explica por que las naves imperiales tienen más vida(140).

Consta de un menu con las opciones iniciales.

Consideraciones:
El programa incluye su propio Diagrama de Clases para que sea más fácil para el usuario poder navegar entre las clases.

El programa solo corre en la consola y esta hecho con clang standard por lo que corre en todos los sistemas operativos

compilar con: "g++ -o main main.cpp"

correr en mac: "main.exe"

Correcciones:
Para este programa se relizaron las siguientes correcciones:

1. El programa al principio se trataba sobre una taquería por lo que los primeros cambios fueron la creación de las tres clases y la corrección del nombre de dos de elllas ya que tenían un espacio el cual hacía que no compilaran. Esta primera versión veníua con casos de prueba funcionales.

2. Se creó un menú donde el usuario podía escoger el tipo de tacos que quiere y te regresaba los datos de la orden de taco y el total de la cuenta.

3. El código original era un poco simple y, gracias a esto, hacía más difícil la creación de herencias y composiciones porque se sentía demasiado forzado y con muy poca funcionalidad. Es por eso que se cambió el trabajo del proyecto a un Programa que te ayuda a crear naves Espaciales en Star Wars ( se borraron las Clases mesero,tacos,taquería,tortas y el UML original).
