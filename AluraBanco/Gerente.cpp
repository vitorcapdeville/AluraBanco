#include "Gerente.h"
#include <string>

Gerente::Gerente(std::string nome, Cpf cpf, float salario, DiaDaSemana diaDePagamento, std::string senha) : Funcionario(nome, cpf, salario, diaDePagamento), Autenticavel(senha)
{
	m_multiplo = 4.4;
}
