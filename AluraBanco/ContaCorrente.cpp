#include "ContaCorrente.h"
#include "Titular.h"
#include <string>

ContaCorrente::ContaCorrente(std::string numero, Titular titular) : Conta(numero, titular)
{
}

void ContaCorrente::sacar(float valor)
{
	float tarifa = valor * 0.01;
	float valorPosTarifa = valor + tarifa;

	Conta::sacar(valorPosTarifa);
}