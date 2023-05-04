#include "ContaCorrente.h"
#include "Titular.h"
#include <string>

ContaCorrente::ContaCorrente(std::string numero, Titular titular) : Conta(numero, titular)
{
	m_tarifa = 0.05;
}

void ContaCorrente::transferePara(Conta& destino, double valor)
{
	ResultadoSaque resultado = sacar(valor);
	if (resultado == SUCESSO) {
		destino.depositar(valor);
	}
}

void ContaCorrente::operator+=(ContaCorrente& contaOrigem)
{
	contaOrigem.transferePara(*this, contaOrigem.pegaSaldo()/2);
}

void ContaCorrente::operator-=(ContaCorrente& contaDestino)
{
	this->transferePara(contaDestino, this->pegaSaldo() / 2);
}