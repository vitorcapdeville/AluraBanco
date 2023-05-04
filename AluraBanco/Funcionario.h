#pragma once
#include "Pessoa.h"
#include "DiaDaSemana.h"
#include <string>

class Funcionario : public Pessoa
{
protected:
	double m_salario;
	double m_multiplo;
	DiaDaSemana m_diaDePagamento;

public:
	double calculaBonus() const;
	double pegaSalario() const;
protected:
	Funcionario(std::string nome, Cpf cpf, float salario, DiaDaSemana diaDePagamento);
};

