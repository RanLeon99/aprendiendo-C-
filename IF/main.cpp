#include <iostream>

using namespace std;


double suma(int num1, int num2){
    return num1 + num2;
}

double resta(int num1, int num2){

    return num1 - num2;
}


double multi(int num1, int num2){

    return num1 * num2;
}


double divicion(int num1, int num2){

    return num1/num2;
}


int main()
{
    double resultado;
    int menu, num1, num2;


    cout << "Digite 1-suma 2-resta 3-multiplicacion 4-divicion :";
    cin>> menu;

    cout << " Digite el numero 1 :";
    cin >> num1;

    cout << " Digite el numero 2 :";
    cin >> num2;

    if (menu == 1 ){

        resultado = suma(num1, num2);
        cout<<" La suma es: " << resultado;
    }

    else if (menu == 2){
        resultado = resta(num1, num2);
        cout<<" La resta es: " << resultado;
    }

    else if (menu == 3){
        resultado = multi(num1, num2);
        cout<<" La multiplicacion es: " << resultado;
    }

    else if (menu == 4){
        resultado = divicion(num1, num2);
        cout<<" La divicion es: " << resultado;
    }

    else{
        cout<<"ELIGIO MAL";
    }

    return 0;
}
