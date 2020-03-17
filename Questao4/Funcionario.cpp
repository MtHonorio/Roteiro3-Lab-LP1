#include "Funcionario.h"
#include <iostream>

using namespace std;

Funcionario::Funcionario(){
	nome = "Sem nome";
	matricula = 0;
}


//-----------get---------
string Funcionario::getNome(){
    return nome;
}

int Funcionario::getMatricula(){
    return matricula;
}

//-----------set----------

void Funcionario::setNome(string n){
    if(n == ""){
        nome = "Sem nome";
    }else{
        nome = n;
    }
}

void Funcionario::setMatricula(int x){
    matricula = x;
}

void print(){
	cout << "Nome: " << this->getNome() << endl
		 << "Matricula: " << this->getMatricula() << endl
		 << "Salario: " << this->calcularSalario() << endl;
}

