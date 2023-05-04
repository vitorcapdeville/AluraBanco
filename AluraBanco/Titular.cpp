#include "TItular.h"
#include "Cpf.h"
#include "Pessoa.h"
#include <string>
#include <iostream>

Titular::Titular(std::string nome, Cpf cpf, std::string senha) : Pessoa(nome, cpf), Autenticavel(senha)
{
}
