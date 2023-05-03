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

void Conta::sacar(float valor) {
    if (valor > m_saldo) {
        std::cout.precision(2);
        std::cout << std::fixed;
        std::cout << "Saldo " << m_saldo << " insuficiente para saque de " << valor << std::endl;
        return;
    }
    else if (valor < 0) {
        std::cout << "Valor inválido" << std::endl;
        return;
    }
    m_saldo -= valor;
}

void Conta::depositar(float valor) {
    if (valor < 0) {
        std::cout << "Valor inválido" << std::endl;
        return;
    }
    m_saldo += valor;
}

float Conta::pegaSaldo() const {
    return m_saldo;
}

int Conta::pegaNumeroContas() {
    return numeroDeContas;
}

std::string Conta::pegaTitular() const {
    return m_titular.pegaNome();
}
