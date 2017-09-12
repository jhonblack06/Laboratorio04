#include <iostream>
#include <cstring>

using namespace std;
int opAnd(int a,int b){  //Creamos la operacion logica and como funcion para luego llamarla segun pida el usuario
    if(a,b==1)
        return 1;
    return 0;
}
int opOrInclu(int a,int b){ //al igual creamos las funciones or inclusive y or exclusive tambien la negacion
    if(a==1 or b==1)
        return 1;
    return 0;
}
int opOrExclu(int a,int b){
    if(a==b)
        return 0;
    return 1;
}
int nega(int a){
    if(a==1)
        return 0;
    else
        return 1;
}


int main()
{
    char prep[10];  //creamos una variable de tipo string para poder trabajar con posiciones
    int len;
    cout<<"Ingrese las operaciones logicas"<<endl;
    cin>>prep;
    len = strlen(prep);
    for(int i;i<len;i++){
        if(prep[i]!="(",")","&","|","¬","^","a","b","c","d"){ //verificamos que todo lo escrito por el usuario sera reconocido por nuestro programa
            cout<<"Ingrese caracteres validos"<<endl;
            return 0;}
    }
    //cout<<prep<<endl;
    int cont=0;
    int tablas[15][3]={};                               //Creamos las tablas binarias y al almacenamos para poder trabajar con ellas en una matriz
    for(int a=0;a<2;a++){
        for(int b=0;b<2;b++){
            for(int c=0;c<2;c++){
                for(int d=0;d<2;d++){
                        //cout<<a<<"||"<<b<<"||"<<c<<"||"<<d<<endl;
                        for(int e=0;e<4;e++){
                        tablas[cont][e]=a;
                        tablas[cont][e]=tablas[cont][e]+b;
                        tablas[cont][e]=tablas[cont][e]+c;
                        tablas[cont][e]=tablas[cont][e]+d;
                        }
                        cout<<tablas[cont]<<endl;
                        cont++;
                }
            }
        }
    }      //operamos con la tabla binaria de 4 preposiciones y poder obtener la respuesta final en un array nuevo
    return 0;
}
