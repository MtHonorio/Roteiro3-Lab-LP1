#pragma once
#include "Funcionario.h"
#include <iostream>

class Comissionado : public Funcionario
{
    protected:
        double salarioBase = 0, vendasSemanais, percentualComissao;
    
    public:
        Comissionado();
		Comissionado(std::string name, int m, double vs, double pc);
		
		double calcularSalario();
        void setSalarioBase(double);
        void setVendasSemanais(double);
        void setPercentualVendas(double);

		double getSalarioBase();
        double getVendasSemanais();
        double getPercentualVendas();
		
		void print();
		
};