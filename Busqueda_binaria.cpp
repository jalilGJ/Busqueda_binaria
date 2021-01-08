//Busqueda Binaria en un arreglo ascendentemente
#include<iostream>
#include<conio.h>//para que el programa no cierre al culminar su ejecusion 

using namespace std;
 int main(){
  int dato,inf,sup,mitad,i=0,n;// variables a utilizar para el areglo
  char band='F';//variable a utilizar bandera, sirve para ver si el elemento a buscar existe en este caso con valor falso
  cout<<"\n ingrese el tamaño del arreglo:";//solicita el tamaño del arreglo
  cin>>n;//asignarle valor a n
  int numeros[n];//se define el tamaño del arreglo
  for(i=0;i<n;i++){//este for nos servira para poder ingresar los datos ascendentemente
   cout<<"\n Ingrese un elemento al vector en orden ascendente: ";//solicita los elementos del arreglo ascendentemente
   cin>>numeros[i];//ingresa los datos ala arreglo
  }
  //solicita que numero desea buscar en el arreglo
  cout<<"\n Vector numeros  ";
  for(i=0;i<n;i++){
   cout<<"\t "<<numeros[i];
  }
  cout<<"\n Ingrese un numero buscar en el vector : ";
  cin>>dato,'\n';
  
  
  //Algoritmo de la busqueda binaria
  i=0;
  inf =0;//se inicializa
  sup=n;//se inicializa con el numero de elementos del arreglo n
  while((inf<=sup)&&(i<n)){//si esta condicion se cumple se sacara la mitad
   mitad = (inf+sup)/2;//mitad 
   if(numeros[mitad] == dato){//si numeros mitad es igual al dato, se encuntra el valor a buscar
    band ='V';//bandera verdadero se encontro el dato
    break;//suspende el bucle, para ya bo recorrer todo el arreglo
   }
   if(numeros[mitad] > dato){//condicional si el numero es mayor que el dato
    sup = mitad;//cambiar a superior es igual a mitad
    mitad = (inf+sup)/2;//nuevo valor de mitad
   }
   if(numeros[mitad] < dato){//si numero mitad es menor a dato
    inf = mitad;//inferior ahora es igual a mitad
    mitad = (inf+sup)/2;//nuevo valor refreash
   }
   i++;
  }
  cout<<"\n Bandera = "<<band;
 if(band=='V'){//si bandera es de valor verdadero una vez que aya terminado el bucle 
  cout<<"\n El numero a sido encontrado en la posicion "<<mitad<<endl; //encontro el numero a buscar en la psocion
 }
 else if(band=='F'){//la bandera se quedo en falso entoneces no encontro el dato
  cout<<"\n El numero no a sido encontrado ";
 }
 getch();
 return 0;

}
