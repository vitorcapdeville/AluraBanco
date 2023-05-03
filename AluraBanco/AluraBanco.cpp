// AluraBanco.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
#include "Conta.h"
#include "ContaCorrente.h"
#include "Titular.h"
#include "Cpf.h"
#include "Funcionario.h"

using namespace std;

void ExibeSaldo(Conta& conta) {
    cout << "O saldo do(a) " << conta.pegaTitular() << " é " << conta.pegaSaldo() << endl;
}

void RealizaSaque(Conta& conta, float valor) {
	conta.sacar(valor);
}

int main()
{
    Titular titular("Fulano", Cpf("126.645.077-70"));
    ContaCorrente conta("123", titular);
    conta.depositar(303);
    //conta.sacar(300);
    RealizaSaque(conta, 300);
    ExibeSaldo(conta);
    Conta outraConta("12345", Titular("Ciclano", string("126.645.077-70")));
    outraConta.depositar(5);
    RealizaSaque(outraConta, 3);
    ExibeSaldo(outraConta);
    // conversao implicita de string para Cpf
    cout << "Número de contas: " << Conta::pegaNumeroContas() << endl;
    Funcionario funcionario = Funcionario("Beltrano", Cpf("126.645.077-70"), 1000);
    cout << "Criei um funcionario com nome " << funcionario.pegaNome() << endl;
    //Titular umTitularInvalido("Ful", "111.111.111-11");
    // Verificacao da conversao implicita -- passa pelo validador de cpf.
    Cpf cpf = string("11111111111");
    cout << "CPF: " << cpf.pegaCpf() << endl;
    return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
