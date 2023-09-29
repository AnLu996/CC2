#include <iostream>
#include <string>
#include "DynamicArray.h"
#include "Figura.h"
using namespace std;


int main()
{
    int I[] = {2, 3, 4, 5};
    double D[] = {2.3, 3.5, 4.2, 5.8};
    string S[] = {"gato", "perro", "pato", "raton"};
     
    std::cout<<"ARRAY TIPO INT:"<<std::endl;
    DynamicIntegerArray<int> a(I,4);
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


    return 0;
}