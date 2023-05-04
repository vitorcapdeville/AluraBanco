#pragma once
#include <string>
#include "Titular.h"

class Conta
{
private:
    static int numeroDeContas;

public:
    static int pegaNumeroContas();

protected:
    std::string m_numero;
    Titular m_titular;
    double m_saldo;
    double m_tarifa = 0;

public:
    virtual ~Conta();
    void sacar(double valor);
    void depositar(double valor);
    virtual void operator+=(double valor);
    virtual void operator-=(double valor);
    double pegaSaldo() const;
    std::string pegaTitular() const;
    friend std::ostream& operator<<(std::ostream& out, const Conta& conta);
protected:
    Conta(std::string numero, Titular titular);
};
