#include "ContaCorrente.h"
#include "ContaEspecial.h"

ContaEspecial::ContaEspecial()
{
    ContaCorrente();
}

ContaEspecial::ContaEspecial(std::string nome, int n, double s, double sal)
{
    setNomeCliente(nome);
    setNumero(n);
    setSaldo(s);
    setSalario(sal);
}

double ContaEspecial::definirLimite()
{
    limite = 4*salario;
    return limite;
}

void ContaEspecial::print()
{
    cout << "\n\t\tConta Especial\n"
        << "Nome: " << nomeCliente
        << "Numero: " << numero
        << "Saldo: " << saldo
        << "Salario: " << salario
        << "Limite: " << definirLimite();
}