#pragma once
#include <string>

class Cpf
{
private:
		std::string m_cpf;
public:
	Cpf(std::string cpf);
	std::string pegaCpf() const;
private:
	bool validaCpf() const;
};

