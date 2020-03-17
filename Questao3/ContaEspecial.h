#pragma once
#include <iostream>
#include "ContaCorrente.h"

using namespace std;

class ContaEspecial : public ContaCorrente
{
    public:
        ContaEspecial();
        ContaEspecial(string nome, int n, double s, double sal);
 
        double definirLimite();
        void print();
        
};