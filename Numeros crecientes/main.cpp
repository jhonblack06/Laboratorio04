#include <iostream>

using namespace std;

int impNum(int a,int b=0){    //Creamos una funcion con dos parametros uno sera nuestro numero de entrada y el otro lo usaremos como un contador
    if (b>a){            //ponemos un caso base donde nuestro contador tiene que ser mayor que el numero para que la recursion termine
        return 0;
    }
    else{
        cout << b << endl;      //Imprimimos el contador y llamamos la funcion con el contador incrementado en uno
        return impNum(a,++b);
    }
}

int main()
{
    int a;
    cout<<"Ingrese un numero\n";
    cin>>a;             //Pedimos un numero de entrada para poder llamar a la funcion
    impNum(a);
    return 0;
}
