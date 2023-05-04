#pragma once
#include "Pessoa.h"
#include <string>

class Funcionario : public Pessoa
{
protected:
	double m_salario;
	double m_multiplo;

public:
	double calculaBonus() const;
protected:
	Funcionario(std::string nome, Cpf cpf, float salario);
};

