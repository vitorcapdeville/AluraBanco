#include "Cpf.h"
#include <string>
#include <iostream>


bool allCharactersSame(std::string& s)
{
	int n = s.length();
	for (int i = 1; i < n; i++)
		if (s[i] != s[0])
			return false;

	return true;
}

Cpf::Cpf(std::string cpf) :
	m_cpf(cpf)
{
	if (!validaCpf()) {
		std::cout << "CPF inválido" << std::endl;
		exit(1);
	}
}

bool Cpf::validaCpf() const
{
	std::string cpf = m_cpf;
	cpf.erase(remove(cpf.begin(), cpf.end(), '.'), cpf.end());
	cpf.erase(remove(cpf.begin(), cpf.end(), '-'), cpf.end());
	if (cpf.size() != 11) {
		return false;
	}
	if (allCharactersSame(cpf)) {
		return false;
	}
	int soma = 0;
	for (int i = 0; i < 9; i++) {
		soma += int(cpf[i] - '0') * (10 - i);
	}
	int resto = 11 - soma  % 11;
	if (resto > 9) {
		resto = 0;
	}
	if (resto != int(cpf[9] - '0')) {
		return false;
	}
	int soma2 = 0;
	for (int i = 0; i < 10; i++) {
		soma2 += int(cpf[i] - '0') * (11 - i);
	}
	int resto2 = 11 - soma2 % 11;
	if (resto2 > 9) {
		resto2 = 0;
	}
	if (resto2 != int(cpf[10] - '0')) {
		return false;
	}
	return true;
}

std::string Cpf::pegaCpf() const
{
	return m_cpf;
}