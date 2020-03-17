#include "Assalariado.h"
#include <iostream>

void Assalariado::setSalario(double x){
    if ( x > 0){
        salario = x; 
    }else{
        std::cout << "Escolha um salario de acordo com o mercado." << std::endl;
    }
}

double Assalariado::calcularSalario(){
    return salario; 
}

void print(){
	cout << "Nome: " << this->getNome() << endl
		 << "Matricula: " << this->getMatricula() << endl
		 << "Salario: " << this->calcularSalario() << endl;
}

Assalariado::Assalariado(){
	nome = "Nulo";
	matricula = 0;
	salario = 0;
}

Assalariado::Assalariado(std::string n, int m, double s){
	setNome(n);
	setMatricula(m);
	setSalario(s);
}

