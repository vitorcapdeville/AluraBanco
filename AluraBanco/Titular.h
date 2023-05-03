#pragma once
#include <string>
#include "Cpf.h"

class Titular
{
private:
	std::string m_nome;
	Cpf m_cpf;

public:
	Titular(std::string nome, Cpf cpf);
	std::string pegaNome() const;
private:
	void verificaTamanhoNome();
};

