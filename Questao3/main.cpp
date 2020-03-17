#include <iostream>
#include "Conta.h"
#include "Poupanca.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"

int main()
{
    Conta* c1 = new Conta("Marshmellow", 100, 250.5);
    Conta* cc2 = new ContaCorrente("Alok", 111, 100000.0, 50000.0);
    Conta* ce3 = new ContaEspecial();
    Conta* p1 = new Poupanca("Gozz", 222, 3500.50, 51, 51);

    c1->print();
    c1->depositar(1000);
    c1->sacar(25000);
    c1->print();

    cc2->print();
    cc2->depositar(3500);
    cc2->sacar(590);
    cc2->print();

    ce3->print();
    ce3->depositar(10);
    ce3->sacar(5600);
    ce3->print();
    
    p1->print();
    p1->depositar(1500);
    p1->sacar(10);
    p1->print();
    
    
    return 0;
}