#include "ContaCorrente.h"
#include "Titular.h"
#include <string>

ContaCorrente::ContaCorrente(std::string numero, Titular titular) : Conta(numero, titular)
{
	m_tarifa = 0.05;
}

void ContaCorrente::transferePara(Conta& destino, double valor)
{
	sacar(valor);
	destino.depositar(valor);
}