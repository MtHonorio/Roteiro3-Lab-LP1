#include "ContaCorrente.h"
#include "Conta.h"
#include <iostream>
#include <string>

using namespace std;

ContaCorrente::ContaCorrente()
{
    salario = 0;
    limite = 0;
}

ContaCorrente::ContaCorrente(string nome, int n, double s, double sal)
{
    setNomeCliente(nome);
    setNumero(n);
    setSaldo(s);
    setSalario(sal);
}

double ContaCorrente::definirLimite()
{
    limite = 2*salario;
    return limite;
}

double ContaCorrente::getSalario()
{
    return salario;
}

double ContaCorrente::getLimite()
{
    return limite;
}

void ContaCorrente::setSalario(double sal)
{
    if (sal < 0){
        salario = 0;
    }else{
        salario = sal;
    }
}

void ContaCorrente::setLimite(double lim)
{
    if (lim < 0){
        limite = 0;
    }else{
        limite = lim;
    }
}

void ContaCorrente::print()
{
    cout << "\n\n\t\tConta Corrente\n" << endl;
    cout << "Nome: " << nomeCliente << "\n"
        << "Numero: " << numero << "\n"
        << "Saldo: " << saldo << endl
        << "Salario: " << salario << " R$" << endl
        << "Limite disponivel: " << definirLimite() << endl;
}
