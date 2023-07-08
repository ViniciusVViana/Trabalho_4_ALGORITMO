#include <iostream>
#include "classe.h"


int main(){
    /* cliente *clientes = new cliente[7]; */
    estagiario *estagiarios = new estagiario[2];
    gerente *gerentes = new gerente[2];
    Empresa *empresa = new Empresa();

    //SISTEMA DE EMPRESA NAO FINALIZADO
    //VAMOS ADICIONAR UM ESTAGIARIO
    //ESTAGIARIO 1:
    cout<<"CADASTRO DE ESTAGIARIO:"<<endl;
    estagiarios[0].set_nome("Vinicius");
    cout<<"Nome: \t\t\t\t"<<estagiarios[0].get_nome()<<endl;
    estagiarios[0].set_matricula("001");
    cout<<"Matricula: \t\t\t"<<estagiarios[0].get_matricula()<<endl;
    estagiarios[0].set_cpf("120.699.349-93");
    cout<<"CPF: \t\t\t\t"<<estagiarios[0].get_cpf()<<endl;
    estagiarios[0].set_salarioBase(1250.00);
    cout<<"Salario base: \t\t\t"<<estagiarios[0].get_salarioBase()<<endl;
    estagiarios[0].set_cargaHorariaMensal(192);
    cout<<"Carga Horaria: \t\t\t"<<estagiarios[0].get_cargaHorariaMensal()<<endl;
    estagiarios[0].set_quantidadeHorasTrabalhadas(180);
    cout<<"Quantidade Trabalhadas: \t"<<estagiarios[0].get_quantidadeHorasTrabalhadas()<<endl;
    estagiarios[0].set_tempoRestante(5);
    cout<<"Horas Restantes: \t\t"<<estagiarios[0].get_tempoRestante()<<endl;
    estagiarios[0].set_tipoEstagiario(1);
    cout<<"Tipo estagiario: \t\t"<<estagiarios[0].get_tipoEstagiario()<<endl;
    cout<<"Salario Bruto: \t\t\t"<<estagiarios[0].calculaSalarioBruto()<<endl;
    
    //ESTAGIARIO 2:
    cout<<"CADASTRO DE ESTAGIARIO:"<<endl;
    estagiarios[1].set_nome("Felipe");
    cout<<"Nome: \t\t\t\t"<<estagiarios[1].get_nome()<<endl;
    estagiarios[1].set_matricula("002");
    cout<<"Matricula: \t\t\t"<<estagiarios[1].get_matricula()<<endl;
    estagiarios[1].set_cpf("676.413.270-44");
    cout<<"CPF: \t\t\t\t"<<estagiarios[1].get_cpf()<<endl;
    estagiarios[1].set_salarioBase(1250.00);
    cout<<"Salario base: \t\t\t"<<estagiarios[1].get_salarioBase()<<endl;
    estagiarios[1].set_cargaHorariaMensal(192);
    cout<<"Carga Horaria: \t\t\t"<<estagiarios[1].get_cargaHorariaMensal()<<endl;
    estagiarios[1].set_quantidadeHorasTrabalhadas(180);
    cout<<"Quantidade Trabalhadas: \t"<<estagiarios[1].get_quantidadeHorasTrabalhadas()<<endl;
    estagiarios[1].set_tempoRestante(5);
    cout<<"Horas Restantes: \t\t"<<estagiarios[1].get_tempoRestante()<<endl;
    estagiarios[1].set_tipoEstagiario(1);
    cout<<"Tipo estagiario: \t\t"<<estagiarios[1].get_tipoEstagiario()<<endl;
    cout<<"Salario Bruto: \t\t\t"<<estagiarios[1].calculaSalarioBruto()<<endl;
    
    do{
        cout<<"Press the ENTER key to continue.";
    }while(cin.get() != '\n');
    system("clear");

    //VAMOS ADICIONAR UM GERENTE
    //GERENTE 1:
    cout<<"CADATRO DE GERENTE:"<<endl;
    gerentes[0].set_nome("Paola");
    cout<<"Nome: \t\t\t\t"<<gerentes[0].get_nome()<<endl;
    gerentes[0].set_matricula("01");
    cout<<"Matricula: \t\t\t"<<gerentes[0].get_matricula()<<endl;
    gerentes[0].set_cpf("123.456.789-12");
    cout<<"CPF: \t\t\t\t"<<gerentes[0].get_cpf()<<endl;
    gerentes[0].set_salarioBase(2100.00);
    cout<<"Salario base: \t\t\t"<<gerentes[0].get_salarioBase()<<endl;
    gerentes[0].set_cargaHorariaMensal(200);
    cout<<"Carga Horaria: \t\t\t"<< gerentes[0].get_cargaHorariaMensal()<<endl;
    string aux = "vini", Aux = "vini";
    std::string senhaAntiga = "123";
    std::string novaSenha = "123";
    cout << gerentes[0].alterar_senha(&senhaAntiga, &novaSenha);

    //GERENTE 2:
    cout<<"CADATRO DE GERENTE:"<<endl;
    gerentes[1].set_nome("Camila");
    cout<<"Nome: \t\t\t\t"<<gerentes[1].get_nome()<<endl;
    gerentes[1].set_matricula("02");
    cout<<"Matricula: \t\t\t"<<gerentes[1].get_matricula()<<endl;
    gerentes[1].set_cpf("439.809.880-15");
    cout<<"CPF: \t\t\t\t"<<gerentes[1].get_cpf()<<endl;
    gerentes[1].set_salarioBase(2100.00);
    cout<<"Salario base: \t\t\t"<<gerentes[1].get_salarioBase()<<endl;
    gerentes[1].set_cargaHorariaMensal(200);
    cout<<"Carga Horaria: \t\t\t"<< gerentes[1].get_cargaHorariaMensal()<<endl;
    string aux2 = "fe", Aux2 = "fe";
    std::string senhaAntiga2 = "321";
    std::string novaSenha2 = "321";
    cout << gerentes[1].alterar_senha(&senhaAntiga2, &novaSenha2);


    do{
        cout<<"Press the ENTER key to continue.";
    }while(cin.get() != '\n');
    system("clear");

    empresa->set_nome("Vinicin&Felipin LTDA.");
    empresa->set_cnpj("1234567890");
    empresa->set_rs("Vinicin&Felipin LTDA.");
    empresa->set_nomefant("TRABAIO DE ALG");

    empresa->adicionarFuncionario(estagiarios[0].get_nome());
    empresa->adicionarFuncionario(estagiarios[1].get_nome());

    empresa->adicionarGerente(gerentes[0].get_nome());
    empresa->adicionarGerente(gerentes[1].get_nome());

    float salario_funcionarios = empresa->calcularFolhaDePagamentoGerentes(gerentes[0].get_salarioBase()) +
                                 empresa->calcularFolhaDePagamentoGerentes(gerentes[0].calculaBonus()) +
                                 empresa->calcularFolhaDePagamentoGerentes(gerentes[1].get_salarioBase())+
                                 empresa->calcularFolhaDePagamentoGerentes(gerentes[1].calculaBonus());


    float salario_gerentes = empresa->calcularFolhaDePagamentoEstagiarios(estagiarios[0].get_salarioBase()) +
                             empresa->calcularFolhaDePagamentoEstagiarios(estagiarios[0].calculaBonus()) +
                             empresa->calcularFolhaDePagamentoEstagiarios(estagiarios[1].get_salarioBase()) +
                             empresa->calcularFolhaDePagamentoEstagiarios(estagiarios[1].calculaBonus());

    float totalFolhaDePagamento = salario_funcionarios + salario_gerentes;
    
    empresa->adicionarCliente("Fabiane");

    empresa->imprimirFuncionarios();
    empresa->imprimirCliente();

    cout << "Total a ser gasto com funcionarios: R$ " << totalFolhaDePagamento << endl;

    return 0;
};
