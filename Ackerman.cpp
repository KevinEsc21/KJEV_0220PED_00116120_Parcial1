#include <iostream>
using namespace std;

int Calaackerman(int, int);

int main(void){
    int m,n;

    cout << endl << "Calcularemos Ackerman" << endl << endl;

    do{
    cout << "Ingrese un numero n positivo: ";
    cin >> n;
    }while(n<0);

    do{
    cout << "Ingrese un numero m positivo: ";
    cin >> m;
    }while(m<0);

    cout << endl << "Al calcular Ackerman el resultado es:  " << Calaackerman(m, n) << endl << endl;

    return 0;

}

int Calaackerman(int m, int n){
    if(m == 0){
        return n+1;
    }
    if(m > 0 && n == 0){
        return Calaackerman( m-1, 1);
    }
    if (m > 0 && n > 0){
        return Calaackerman( m-1 , Calaackerman(m, n-1));
    }
}