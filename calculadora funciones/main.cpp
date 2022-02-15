#include <iostream>

using namespace std;

void calculadora()
{
    cout<<"Calculadora funciones"<< endl;
}
void suma (int p1 , int p2)
{
    cout<<"Primer numero:"<<p1<<endl;
     cout<<"Segundo numero:"<<p2<<endl;
     if(p1>=0 && p2 >=0)
        cout<<"La suma es: "<< p1 + p2 << endl;
}
void resta (int p1 , int p2)
{
    cout<<"Primer numero:"<<p1<<endl;
     cout<<"Segundo numero:"<<p2<<endl;
     if(p1>=0 && p2 >=0)
        cout<<"La resta es: "<< p1 - p2 << endl;
}
void multiplicacion  (int p1 , int p2)
{
    cout<<"Primer numero:"<<p1<<endl;
     cout<<"Segundo numero:"<<p2<<endl;
     if(p1>=0 && p2 >=0)
        cout<<"La suma es: "<< p1 * p2 << endl;
}
void divison (int p1 , int p2)
{
    cout<<"Primer numero:"<<p1<<endl;
     cout<<"Segundo numero:"<<p2<<endl;
     if(p1>=0 && p2 >=0)
        cout<<"La suma es: "<< p1 / p2 << endl;
}

int main()
{
       int p1, p2;
    cout << "Ingrese un numero: ";
    cin >> p1;
    cout << "Ingrese otro numero: ";
    cin >> p2;
    cout << " La suma de los numeros es: " << p1 + p2 << endl ;
    cout << " La resta de los numeros es: " << p1 - p2 << endl;
    cout << " La multiplicación de los numeros es: " << p1 * p2 << endl;
    cout << " La division de los numeros es: " << p1 / p2 << endl;
    return 0;
}
