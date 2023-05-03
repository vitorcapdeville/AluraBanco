#include "TItular.h"
#include "Cpf.h"
#include <string>
#include <iostream>

Titular::Titular(std::string nome, Cpf cpf) :
	m_nome(nome),
	m_cpf(cpf)
{
    verificaTamanhoNome();
}

std::string Titular::pegaNome() const
{
	return m_nome;
}

void Titular::verificaTamanhoNome() {
    if (m_nome.size() < 5) {
        std::cout << "Nome muito curto" << std::endl;
        exit(1);
    }
}