#pragma once
#include <string>
#include "TItular.h"

class Conta
{
private:
    static int numeroDeContas;

public:
    static int pegaNumeroContas();

private:
    std::string m_numero;
    Titular m_titular;
    float m_saldo;

public:
    Conta(std::string numero, Titular titular);
    ~Conta();
    void sacar(float valor);
    void depositar(float valor);
    float pegaSaldo() const;
    std::string pegaTitular() const;
};
