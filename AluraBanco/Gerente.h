#pragma once
#include "Funcionario.h"
#include "Autenticavel.h"
#include <string>

class Gerente final :
    public Funcionario, public Autenticavel
{
public:
    Gerente(std::string nome, Cpf cpf, float salario, std::string senha);
};

