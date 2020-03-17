#include "Poupanca.h"
#include <iostream>
#include <string>

Poupanca::Poupanca()
{
    variacao = 0; 
    taxaRendimento = 0;
}

Poupanca::Poupanca( std::string nome, int n, double s, int v, double tr) : Conta()
{
    setNomeCliente(nome);
    setNumero(n);
    setSaldo(s);
    setVariacao(v);
    setTaxaRendimento(tr);
}

double Poupanca::render()
{
    if(variacao == 51){
        return saldo * (taxaRendimento / 100); 
    }else if(variacao == 1){
        return saldo * ((taxaRendimento / 100) + (0.5 / 100));
    }else{
        return -1;
    }
}

int Poupanca::getVariacao()
{
    return variacao;
}

double Poupanca::getTaxaRendimento()
{
    return taxaRendimento;
}

void Poupanca::setVariacao(int var)
{
    variacao = var;
}

void Poupanca::setTaxaRendimento(double x)
{
    taxaRendimento = x;
}

void Poupanca::print(){
    cout << "\n\n\t\tPoupanca\n"
        << "Nome: " << nomeCliente << endl
        << "Numero: " << numero << endl
        << "Saldo: " << saldo << endl
        << "render: " << render() << endl;
}