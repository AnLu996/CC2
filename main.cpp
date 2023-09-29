#include <iostream>
#include <string>
#include "DynamicArray.h"
#include "Figura.h"
using namespace std;


int main()
{
    int I[] = {2, 3, 4, 5, 6};
    double D[] = {2.3, 3.5, 4.2, 5.8};
    string S[] = {"gato", "perro", "pato", "raton"};
    int x;
    std::cout<<"ARRAY TIPO INT:"<<std::endl;
    DynamicIntegerArray<int> a(I,5);
    a.print();
    std::cout<<" Funcion pushback: ";
    a.pushback(6);
    a.print();
    std::cout<<" Funcion insert: ";
    a.insert(12,4);
    a.print();
    std::cout<<" Funcion remove: ";
    a.remov(4);
    a.print();

    std::cout<<"ARRAY TIPO DOUBLE:"<<std::endl;
    DynamicIntegerArray<double> b(D,4);
    b.print();
    std::cout<<" Funcion pushback: ";
    b.pushback(6);
    b.print();
    std::cout<<" Funcion insert: ";
    b.insert(12,4);
    b.print();
    std::cout<<" Funcion remove: ";
    b.remov(4);
    b.print();

    std::cout<<"ARRAY TIPO STRING:"<<std::endl;
    DynamicIntegerArray<string> c(S,4);
    c.print();
    std::cout<<" Funcion pushback: ";
    c.pushback("gallo");
    c.print();
    std::cout<<" Funcion insert: ";
    c.insert("HAMSTER",4);
    c.print();
    std::cout<<" Funcion remove: ";
    c.remov(4);
    c.print();

    Figura a1("Circulo");
    Figura b2("Cuadrado");
    Figura c3("Triangulo");
    Figura d4("Rombo");
    Figura d5("Trapecio");
    
    Figura F[3]={a1,b2,c3};
    
    std::cout<<"EMPLEADO CON CLASES:"<<std::endl;
    DynamicIntegerArray<Figura> d(F,3);
    d.print();
    std::cout<<" Funcion pushback: ";
    d.pushback(d5);
    d.print();
    std::cout<<" Funcion insert: ";
    d.insert(d4,2);
    d.print();
    std::cout<<" Funcion remove: ";
    d.remov(1);
    d.print();

    int I[] = {2, 3, 4, 5, 6};
    double D[] = {2.3, 3.5, 4.2, 5.8};
    string S[] = {"gato", "perro", "pato", "raton"};
    int x;
    std::cout<<"ARRAY TIPO INT:"<<std::endl;
    DynamicIntegerArray<int> a(I,5);
    a.print();
    std::cout<<" Funcion pushback: ";
    a.pushback(6);
    a.print();
    std::cout<<" Funcion insert: ";
    a.insert(12,4);
    a.print();
    std::cout<<" Funcion remove: ";
    a.remov(4);
    a.print();

    std::cout<<"ARRAY TIPO DOUBLE:"<<std::endl;
    DynamicIntegerArray<double> b(D,4);
    b.print();
    std::cout<<" Funcion pushback: ";
    b.pushback(6);
    b.print();
    std::cout<<" Funcion insert: ";
    b.insert(12,4);
    b.print();
    std::cout<<" Funcion remove: ";
    b.remov(4);
    b.print();

    std::cout<<"ARRAY TIPO STRING:"<<std::endl;
    DynamicIntegerArray<string> c(S,4);
    c.print();
    std::cout<<" Funcion pushback: ";
    c.pushback("gallo");
    c.print();
    std::cout<<" Funcion insert: ";
    c.insert("HAMSTER",4);
    c.print();
    std::cout<<" Funcion remove: ";
    c.remov(4);
    c.print();

    Figura a1("Circulo");
    Figura b2("Cuadrado");
    Figura c3("Triangulo");
    Figura d4("Rombo");
    Figura d5("Trapecio");
    
    Figura F[3]={a1,b2,c3};
    
    std::cout<<"EMPLEADO CON CLASES:"<<std::endl;
    DynamicIntegerArray<Figura> d(F,3);
    d.print();
    std::cout<<" Funcion pushback: ";
    d.pushback(d5);
    d.print();
    std::cout<<" Funcion insert: ";
    d.insert(d4,2);
    d.print();
    std::cout<<" Funcion remove: ";
    d.remov(1);
    d.print();

    return 0;
}