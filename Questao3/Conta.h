#pragma once
#include <iostream>
#include <string>

using namespace std;

class Conta
{
    protected:
        string nomeCliente;
        int numero;
        double saldo;
    
    public:
        Conta();
        Conta(string nome, int n, double s);
        void sacar (double valor);
        void depositar (double valor);

        //---------get--------
        string getNomeCliente();
        int getNumero();
        double getSaldo();

        //---------set--------
        void setNomeCliente(string name);
        void setNumero(int num);
        void setSaldo(double s);

        void print();
};