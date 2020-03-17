#pragma once
#include "Funcionario.h"

class SistemaGerenciaFolha
{
    public:
        Funcionario *funcionario[4];
        
        SistemaGerenciaFolha();
        ~SistemaGerenciaFolha();

        void setFuncionarios(Funcionario x);
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario();

};

//-g no final da chamada do compilador
//gdb (executavel)
//bt backtrack