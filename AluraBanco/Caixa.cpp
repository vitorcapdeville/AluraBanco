#include "Caixa.h"

Caixa::Caixa(std::string nome, Cpf cpf, float salario) : Funcionario(nome, cpf, salario)
{
	m_multiplo = 2.2;
}

