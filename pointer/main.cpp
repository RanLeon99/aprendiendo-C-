#include <iostream>


// PINTER = A LA DIRECCION DE MEMORIA
using namespace std;



void sumar_array( int arr[], int size ){
    int suma;

    cout<< " valor del array que resive la funcion" << arr << endl ; // es la direccion de memoria del array lo que recibe


    for (int i = 0; i <= size; i++){

        suma += arr[i];
    }
    cout << " la suma del array es: " << suma<< endl;

}


void sumar_age( int *age){


    cout << " valor que tiene age en la funcion: " << age<< endl;

    cout << " valor que tiene age en la funcion con * : " << *age<< endl;


    *age = *age + 1;
    cout<< "valor de age en la funcion aumentar: " << *age<<endl;

}

int main()
{
    int age = 10;
    string name = "randall";
    int *pAge = &age;           // creamos un puntero, que tiene la direccion de age



    int arr[] = {1 ,2 ,3 ,4 ,5};
    int size = sizeof(arr) / sizeof(arr[0]); // para saber la lon del array


    cout << " direccion de age: " << &age << endl;// CON & SABEMOS LA DIRECCION DE MEMORIA DONDE ESTA ALMACENADA AL VARIABLE

    cout << " valor almacenado que tiene el puntero  :" << pAge << endl;

    cout << " valor que tiene la direccion del puntero" << *pAge << endl;  // si colocamos un * nos mandara el valor del que tiene almacenado el puntero




    sumar_array(arr, size);
     /* cuando se llama una funcion y se le da un array como parametro de entrada, este lo que recibe
     es solo el puntero inicial del array
     es como se mandaramos &variable*/


    cout<< " valor del age antes de llamar la funcion : " << age << endl;

    sumar_age(pAge);

    /* para que podamos modificar una variable local en una funcion por aparte
    tenemos que mandar el puntero, ya que si mandamos la variable
    lo que hara es crear una nueva variable y no se modificara la variable real que mandamos */


    cout<< " valor del age luego de llamar la funcion : " << age << endl; // se combrueba que realmente se modifico la variable





    return 0;
}
