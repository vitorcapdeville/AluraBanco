#include "Gerente.h"
#include <string>

Gerente::Gerente(std::string nome, Cpf cpf, float salario, std::string senha) : Funcionario(nome, cpf, salario), Autenticavel(senha)
{
	m_multiplo = 4.4;
}
