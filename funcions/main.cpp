#include <iostream>

using namespace std;




void saludar(){
    // funtion void no return nothing
    cout<< " HOLA MUNDO" << endl;

}



double divicion(int num1, int num2){

    double multi;

    multi = num1 / num2;

    return multi;
}
int main()
{
    double multiplicacion;
    double multiplicacion2 = divicion(10, 2);

    saludar();

    multiplicacion = divicion(4, 2);


    cout << multiplicacion << endl;
    cout << multiplicacion2;



    return 0;
}
