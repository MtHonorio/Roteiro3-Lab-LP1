#pragma once
#include "Conta.h"
#include <iostream>


class Poupanca : public Conta
{
    private:
        int variacao;
        double taxaRendimento;
    
    public:
        Poupanca();
        Poupanca(std::string nome, int n, double s, int v, double tr);
        
        //--------get-------
        int getVariacao();
        double getTaxaRendimento();
        
        //--------set-------
        void setVariacao(int var);
        void setTaxaRendimento(double tr);

        void print();

    protected:
        double render();
        
};