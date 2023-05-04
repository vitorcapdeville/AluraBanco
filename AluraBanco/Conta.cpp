#include "Conta.h"
#include <iostream>
#include <string>

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero, Titular titular):
    m_numero(numero), 
    m_titular(titular),
    m_saldo(0)
{
    numeroDeContas++;
}

Conta::~Conta()
{
    numeroDeContas--;
}

void Conta::sacar(double valor) {
    if (valor < 0) {
        std::cout << "Valor inválido" << std::endl;
        return;
    }

    double tarifa = valor * m_tarifa;
    double valorPosTarifa = valor + tarifa;

    if (valorPosTarifa > m_saldo) {
        std::cout.precision(2);
        std::cout << std::fixed;
        std::cout << "Saldo " << m_saldo << " insuficiente para saque de " << valor << " com tarifa de " << tarifa << std::endl;
        return;
    }
    
    m_saldo -= valorPosTarifa;
}

void Conta::depositar(double valor) {
    if (valor < 0) {
        std::cout << "Valor inválido" << std::endl;
        return;
    }
    m_saldo += valor;
}

double Conta::pegaSaldo() const {
    return m_saldo;
}

int Conta::pegaNumeroContas() {
    return numeroDeContas;
}

std::string Conta::pegaTitular() const {
    return m_titular.pegaNome();
}

