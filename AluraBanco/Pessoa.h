#pragma once
#include <string>
#include "Cpf.h"

class Pessoa
{
protected:
	std::string m_nome;
	Cpf m_cpf;

public:
	Pessoa(std::string nome, Cpf cpf);
	std::string pegaNome() const;

private:
	void verificaTamanhoNome();
};

