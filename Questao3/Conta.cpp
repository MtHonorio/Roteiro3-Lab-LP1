#include "Conta.h"
#include <iostream>
#include <string>

using namespace std;

Conta::Conta()
{
    nomeCliente = "null" ;
    numero = 0;
    saldo = 0;
}

Conta::Conta(string nome, int n, double s)
{
    setNomeCliente(nome);
    setNumero(n);
    setSaldo(s);
}

void Conta::sacar (double valor)
{
    if (valor > saldo){
        cout << "Saldo Insuficiente, tentativa de " << valor << " negada " << endl;
    }else{
        saldo-=valor;
        cout << "Valor sacado: " << valor << endl;
    }
}

void Conta::depositar (double valor)
{
    if (valor >= 0){
        saldo += valor;
        cout << "Valor depositado: " << valor << endl;
    }else{
        cout << "valor invalido" << endl;
    }
}



//---------get--------
string Conta::getNomeCliente()
{
    return nomeCliente;
}

int Conta::getNumero()
{
    return numero;
}

double Conta::getSaldo()
{
    return saldo;
}

//---------set--------
void Conta::setNomeCliente(string name)
{
    nomeCliente = name;
}

void Conta::setNumero(int num)
{
    if (num > 0)
        numero = num;
}

void Conta::setSaldo(double s)
{
    if (s >= 0)
        saldo = s;
}

void Conta::print()
{
    cout << "\n\n\t\tConta" << endl
        << "Nome: " << nomeCliente << "\n"
        << "Numero: " << numero << "\n"
        << "Saldo: " << saldo << endl;
}