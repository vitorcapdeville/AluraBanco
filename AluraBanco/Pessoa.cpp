#include "Pessoa.h"
#include <iostream>
#include <string>

Pessoa::Pessoa(std::string nome, Cpf cpf) :
    m_nome(nome),
    m_cpf(cpf)
{
    verificaTamanhoNome();
}

std::string Pessoa::pegaNome() const
{
    return m_nome;
}

void Pessoa::verificaTamanhoNome() {
    if (m_nome.size() < 5) {
        std::cout << "Nome muito curto" << std::endl;
        exit(1);
    }
}