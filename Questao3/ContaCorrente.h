#pragma once
#include "Conta.h"
#include <iostream>

using namespace std;

class ContaCorrente : public Conta
{
    protected:
        double salario;
        double limite;
    
    public:
        ContaCorrente();
        ContaCorrente(string nome, int n, double s, double sal);

        //--------get-------
        double getSalario();
        double getLimite();
        
        //--------set-------
        void setSalario(double sal);
        void setLimite(double lim);

        double definirLimite();

        void print();
      
};