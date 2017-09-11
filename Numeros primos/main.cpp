#include <iostream>

using namespace std;

int main()
{
    int cont=0;   //Creamos un contador para almacenar el numero de divisores del numero
    int a;
    cout<<"Ingrese un numero";
    cin>>a;       //Pedimos un numero entero de entrada
    for(int i=1;i<=a;i++){   //Usamos un for que recorra todos los divisores posibles
        if(a%i==0){      //Si hay un numero que lo divida exactamente aumentamos en uno el contador
            cont++;
        }
    }
    if(cont!=2){   //por teoria sabemos que un numero primo es aquel que tiene como unicos divisores al 1 y al mismo numero
    cout<<"No es un numero primo\n";  //Aplicamos esa logica para ambos casos imprimiendo si el numero es primo o no
    }
    else{
    cout<<"Es un numero primo\n";
    }
    return 0;
}
