#pragma once
#include "Conta.h"
#include <string>

class ContaCorrente final :
    public Conta
{
public:
    ContaCorrente(std::string numero, Titular titular);
    void transferePara(Conta& destino, double valor);
    void operator+=(ContaCorrente& contaOrigem);
    void operator+=(double valor) override { Conta::operator+=(valor); };
    void operator-=(ContaCorrente& contaDestino);
    void operator-=(double valor) override { Conta::operator-=(valor); };
};

