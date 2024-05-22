#include <iostream>

using namespace std;

int cantidadCaracteres(char x[]){
    int cantidadDeCaracteres;
    while (x[cantidadDeCaracteres] != '\0'){
        cantidadDeCaracteres = cantidadDeCaracteres + 1;
    }
    return cantidadDeCaracteres;
}

int main(){
    char texto[] = "Hola mundo!";
    int cantidadDeCaracteresTexto = cantidadCaracteres(texto);
    cout<<cantidadDeCaracteresTexto;
    return 0;
}
