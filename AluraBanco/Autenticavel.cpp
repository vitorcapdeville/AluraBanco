#include "Autenticavel.h"

Autenticavel::Autenticavel(std::string senha) : m_senha(senha)
{
}

bool Autenticavel::autentica(std::string senha)
{
	return m_senha == senha;
}