#pragma once
#include "Conta.h"
#include <string>

class ContaCorrente final :
    public Conta
{
public:
    ContaCorrente(std::string numero, Titular titular);
    void transferePara(Conta& destino, double valor);
};

