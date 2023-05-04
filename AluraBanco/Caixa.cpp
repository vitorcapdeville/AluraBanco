#include "Caixa.h"

Caixa::Caixa(std::string nome, Cpf cpf, float salario, DiaDaSemana diaDePagamento) : Funcionario(nome, cpf, salario, diaDePagamento)
{
	m_multiplo = 2.2;
}

