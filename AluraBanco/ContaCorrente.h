#pragma once
#include "Conta.h"
#include <string>

class ContaCorrente :
    public Conta
{
public:
    ContaCorrente(std::string numero, Titular titular);
    void sacar(float valor) override;
};

