#pragma once
#include "Funcionario.h"
class Caixa final :
    public Funcionario
{
public:
	Caixa(std::string nome, Cpf cpf, float salario);
};

