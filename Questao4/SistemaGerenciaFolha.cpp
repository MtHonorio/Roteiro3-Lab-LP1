#include <iostream>
#include "Funcionario.h"
#include "SistemaGerenciaFolha.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"


SistemaGerenciaFolha::SistemaGerenciaFolha()
{
    //ctor
}

void SistemaGerenciaFolha::setFuncionario(Assalariado funcionario){
    this->assalariado.push_back(funcionario);
}

void SistemaGerenciaFolha::setFuncionario(Horista funcionario){
    this->horista.push_back(funcionario);
}

void SistemaGerenciaFolha::setFuncionario(Comissionado funcionario){
    this->comissionado.push_back(funcionario);
}

double SistemaGerenciaFolha::calculaValorTotalFolha(){
     int tamanho = assalariado.size();
     double salarioTotal = 0;

    for(int i=0;i<tamanho;i++)
       salarioTotal += assalariado[i].getSalario();

    tamanho = horista.size();
    for(int i=0;i<tamanho;i++)
        salarioTotal += horista[i].getSalario();

    tamanho = comissionado.size();
    for(int i=0;i<tamanho;i++)
        salarioTotal += comissionado[i].getSalario();

    return salarioTotal;

}

void SistemaGerenciaFolha::estourouOrcamento(){
    if(getOrcamento() < calculaValorTotalFolha()){
        OrcamentoEstouradoException estourou = OrcamentoEstouradoException();
        throw estourou;
    }

}

double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string entrada){
    int tamanho = assalariado.size();

    for(int i=0;i<tamanho;i++){
        if( assalariado[i].getNome() == entrada)
            return assalariado[i].getSalario();
    }

    tamanho = horista.size();
    for(int i=0;i<tamanho;i++){
        if( horista[i].getNome() == entrada)
            return horista[i].getSalario();
    }

    tamanho = comissionado.size();
    for(int i=0;i<tamanho;i++){
        if( comissionado[i].getNome() == entrada)
            return comissionado[i].getSalario();
    }

    FuncionarioNaoExisteException naoExiste = FuncionarioNaoExisteException();
    throw naoExiste;
    //return 0;
}

void SistemaGerenciaFolha::setOrcamento(double entrada){
    orcamento = entrada;
}

double SistemaGerenciaFolha::getOrcamento(){
    return orcamento;
}
