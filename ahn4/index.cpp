#include "classe.h"

int main(){
    /* cliente *clientes = new cliente[7]; */
    estagiario *estagiarios = new estagiario[3];
    gerente *gerentes = new gerente[2];

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
    cout<<gerentes[0].alterar_senha("123", "123");

    return 0;
};