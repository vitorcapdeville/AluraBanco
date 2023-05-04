// AluraBanco.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string>
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaPoupanca.h"
#include "Titular.h"
#include "Cpf.h"
#include "Funcionario.h"
#include "Caixa.h"

using namespace std;

void ExibeSaldo(Conta& conta) {
    cout << "O saldo do(a) " << conta.pegaTitular() << " é " << conta.pegaSaldo() << endl;
}

void RealizaSaque(Conta& conta, float valor) {
	conta.sacar(valor);
}

void FazLogin(Autenticavel& alguem, string senha) {
    if (alguem.autentica(senha))
		cout << "Login realizado com sucesso" << endl;
	else
		cout << "Senha incorreta" << endl;
}

int main()
{
    Titular titular("Fulano", Cpf("126.645.077-70"), "minhasenhasegura");
    ContaCorrente conta("123", titular);
    ContaPoupanca outraConta("12345", Titular("Ciclano", string("126.645.077-70"), "minhasenhasupersegura"));
    conta += 800;
    conta.transferePara(outraConta, 300);
    ExibeSaldo(conta);
    ExibeSaldo(outraConta);
    cout << "Número de contas: " << Conta::pegaNumeroContas() << endl;
    Caixa func_caixa = Caixa("Beltrano", Cpf("126.645.077-70"), 1000, DiaDaSemana::QUINTA);
    cout << "Criei um funcionario com nome " << func_caixa.pegaNome() << endl;
    cout << "Salario: " << func_caixa.pegaSalario() << endl;
    cout << "Bonus: " << func_caixa.calculaBonus() << endl;
    FazLogin(titular, "erreiasenha");
    FazLogin(titular, "minhasenhasegura");
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
