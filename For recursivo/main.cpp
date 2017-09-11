#include <iostream>

using namespace std;
int forRecursivo(int i,int a=0)  //Creamos una funcion con dos parametros de entrada uno que servira como contador y el otro
{                               //sera un tope maximo para no crear una recursividad infinita
    if(a=i){                //Ponemos un caso base para un tope maximo
        return i;
    }
    else{
        ++a;
        return forRecursivo(i,a); //Llamamos la funcion de manera recursiva
    }
}

int main()
{
    cout<<forRecursivo(10);  //Llamamos la funcion con un valor de prueba
    return 0;
}
