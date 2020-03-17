#pragma once
#include "Funcionario.h"
#include <iostream>

class Horista : public Funcionario
{
    protected:
        double salarioPorHora, horasTrabalhadas;
    
    public:
        Horista();
		Horista(std::string n, int m, double sph, double ht);
		
		double calcularSalario();
        void setHorasTrabalhadas(double);
        void setSalarioPorHora(double);
        
};