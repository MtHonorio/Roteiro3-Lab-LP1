#include <iostream>
#include "Comissionado.h"

void Comissionado::setVendasSemanais(double vendas){
    if (vendas > 0){
    vendasSemanais = vendas;
    }else{
        std::cout << "Numero invalido de vendas" << std::endl;
    }
}

void Comissionado::setPercentualVendas(double pvendas){
    if (pvendas > 0){
    percentualComissao = pvendas;
    }else{
        std::cout << "Percentual invalido de vendas" << std::endl;
    }
}

void Comissionado::setSalarioBase(double s){
    if (s > 0){
        salarioBase = s;
    }else{
        std::cout << "Salario abaixo do comercio" << std::endl;
    }
}

double Comissionado::calcularSalario(){
    return salarioBase + (vendasSemanais*percentualComissao);
}

void print(){
	cout << "Nome: " << this->getNome() << endl
		 << "Matricula: " << this->getMatricula() << endl
		 << "Salario: " << this->calcularSalario() << endl
		 << "Vendas Semanais: " << this->vendasSemanais << endl
		 << "Percentual: " << this->percentualComissao << endl;
}

Comissionado::Comissionado(){
	nome = "Nulo";
	matricula = 0;
	vendasSemanais = 0;
	percentualComissao = 0;
}

Comissionado::Comissionado(std::string n, int m, double v, double s){
	setNome(n);
	setMatricula(m);
	setVendasSemanais(v);
	setPercentualVendas(s);
}

double Comissionado::getSalarioBase(){
	return salarioBase;
}
        
double Comissionado::getVendasSemanais(){
	return vendasSemanais;
}
	
double Comissionado::getPercentualVendas(){
	return percentualComissao;
}