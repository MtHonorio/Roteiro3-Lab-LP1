#include "SaldoNaoDisponivelException.h"
#include <exception>
#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#include <string>

using namespace std;

SaldoNaoDisponivelException::SaldoNaoDisponivelException(){}

SaldoNaoDisponivelException::~SaldoNaoDisponivelException() throw() {}

string SaldoNaoDisponivelException::what(){
    return erro;
}