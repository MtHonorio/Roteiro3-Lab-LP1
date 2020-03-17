#pragma once
#include "Funcionario.h"
#include <iostream>

class Assalariado : public Funcionario
{
    protected:
        double salario;
    public:
        Assalariado();
		Assalariado(std::string n, int m, double s);
		
		double calcularSalario();
        void setSalario(double x);

        void print();


};