#include "ContaPoupanca.h"
#include "Titular.h"
#include <string>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) : Conta(numero, titular)
{
	m_tarifa = 0.03;
}
