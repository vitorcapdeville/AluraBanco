#include "Funcionario.h"
#include "Pessoa.h"
#include <string>

Funcionario::Funcionario(std::string nome, Cpf cpf, float salario) : Pessoa(nome, cpf), m_salario(salario)
{
}

float Funcionario::pegaSalario() const
{
	return m_salario;
}