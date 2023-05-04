#include "Funcionario.h"
#include "Pessoa.h"
#include <string>

Funcionario::Funcionario(std::string nome, Cpf cpf, float salario, DiaDaSemana diaDePagamento) : 
	Pessoa(nome, cpf), m_salario(salario), m_diaDePagamento(diaDePagamento)
{
	m_multiplo = 0.0;
}

double Funcionario::calculaBonus() const
{
	return m_salario * m_multiplo;
}

double Funcionario::pegaSalario() const
{
	return m_salario;
}