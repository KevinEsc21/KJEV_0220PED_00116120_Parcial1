#include <iostream>
using namespace std;

struct tareas{
    string nombre;
    string ubicacion;
    int dificultad;
    int duracion;
    char tipo;
};

int tiempo(tareas[]);

int main (){
    struct tareas arreglo[4];

    cout << endl << "Buen dia tripulando, es momento de realizar tus 4 tareas" << endl;
    cout << endl <<"Llenemos los datos: " << endl;

    for (int i = 0; i < 4; i++){   
        cout << endl << "Datos mision " << i+1 << endl;
        cout << "Ingrese el nombre de la mision: ";
        getline(cin,arreglo[i].nombre);

        cout << "Ingrese la ubicacion de la mision: ";
        getline(cin,arreglo[i].ubicacion);

        cout << "Ingrese la dificultad en un rango del 1-5: ";
        cin >> arreglo[i].dificultad;

        while(arreglo[i].dificultad<1 || arreglo[i].dificultad > 5){
            cout << "ingrese una dificultad valida: ";
            cin>> arreglo[i].dificultad;
        }
        
        cout << "Ingrese la duracion en segundos de la mision: ";
        cin >> arreglo[i].duracion;
        while(arreglo[i].duracion<1){
            cout << "ingrese una duracion valida: ";
            cin>> arreglo[i].duracion;
        }

        cout << "Ingrese el tipo de la mision R - reparar, C - clasificar y O - otros: ";
        cin >> arreglo[i].tipo;
        while(!(arreglo[i].tipo==82|| arreglo[i].tipo==67 || arreglo[i].tipo==79)){
            cout << "ingrese una duracion valida: ";
            cin>> arreglo[i].tipo;
        }
        cin.ignore();

    }

    cout << endl << endl << "El tiempo que se tardara haciendo las misiones es: " << tiempo(arreglo);

    return 0;
}

int tiempo(tareas a[]){

    int time=0;

    for (int i = 0; i < 4; i++)
    {
        if (a[i].dificultad==4 || a[i].dificultad==5){
            time+=a[i].duracion;
        }
    }
    
    return time;
}