#include "Funcionario.h"
#include "Pessoa.h"
#include <string>

Funcionario::Funcionario(std::string nome, Cpf cpf, float salario) : Pessoa(nome, cpf), m_salario(salario)
{
	m_multiplo = 0.0;
}

double Funcionario::calculaBonus() const
{
	return m_salario * m_multiplo;
}
