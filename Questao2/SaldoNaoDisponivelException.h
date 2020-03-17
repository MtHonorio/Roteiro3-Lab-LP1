#pragma once
#include <exception>
#include <iostream>
#include <string>

using namespace std;

class SaldoNaoDisponivelException : public std::exception
{
    protected:
        string erro = ("Saldo nao disponivel\n");
    
    public:
        SaldoNaoDisponivelException();
        virtual ~SaldoNaoDisponivelException() throw ();
        virtual string what();
};