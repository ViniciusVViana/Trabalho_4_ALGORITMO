#ifndef CLASSE_H_INCLUDED
#define CLASSE_H_INCLUDED

#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>

using namespace std;
//CLASSE PESSOA E SEUS METODOS
class Pessoa{
    public: 
    string nome;
    string get_nome();
    void set_nome(string nm);
};
string Pessoa::get_nome(){
    return nome;
};
void Pessoa::set_nome(string nm){
    this->nome = nm;
};

//CLASSE PESSOA FISICA E SEUS METODOS
class Pessoa_f : public Pessoa{
    private:
    string CPF;
    public:
    string get_cpf();
    void set_cpf(string cpf);
};
string Pessoa_f::get_cpf(){
    return CPF;
};
void Pessoa_f::set_cpf(string cpf){
    this->CPF = cpf;
};

//CLASSE PESSOA JURIDICA E SEUS METODOS
class Pessoa_j : public Pessoa{
    private:
    string CNPJ;
    string RS;
    string nome_fant;
    public:
    void set_cnpj(string cnpj);
    string get_cnpj();
    void set_rs(string rs);
    string get_rs();
    void set_nomefant(string nomef);
    string get_nomefant();
};
void Pessoa_j::set_cnpj(string cnpj){
    CNPJ = cnpj;
};
string Pessoa_j::get_cnpj(){
    return CNPJ;
};
void Pessoa_j::set_rs(string rs){
    RS = rs;
};
string Pessoa_j::get_rs(){
    return RS;
};
void Pessoa_j::set_nomefant(string nomef){
    nome_fant = nomef;
};
string Pessoa_j::get_nomefant(){
    return nome_fant;
};

class funcionario : public Pessoa_f{
    private:
    string matricula;
    float salarioBase;
    float quantidadeHorasTrabalhadas;
    float cargaHorariaMensal;
    public:
    virtual float calculaBonus();
    float calculaSalarioBruto();
    //METODOS GET
    string get_matricula();
    float get_salarioBase();
    float get_quantidadeHorasTrabalhadas();
    float get_cargaHorariaMensal();
    //METODOS SET
    void set_matricula(string matr);
    void set_salarioBase(float salario);
    virtual void set_quantidadeHorasTrabalhadas(float horas);
    void set_cargaHorariaMensal(float carga);
};
void funcionario::set_cargaHorariaMensal(float carga){
    cargaHorariaMensal = carga;
};
void funcionario::set_quantidadeHorasTrabalhadas(float horas){
    quantidadeHorasTrabalhadas = horas;
};
void funcionario::set_salarioBase(float salario){
    salarioBase = salario;
};
void funcionario::set_matricula(string matr){
    matricula = matr;
};
float funcionario::get_cargaHorariaMensal(){
    return cargaHorariaMensal;
};
float funcionario::get_quantidadeHorasTrabalhadas(){
    return quantidadeHorasTrabalhadas;
};
float funcionario::get_salarioBase(){
    return salarioBase;
};
string funcionario::get_matricula(){
    return matricula;
};
float funcionario::calculaBonus(){
    return 0;
};
float funcionario::calculaSalarioBruto(){
    float salarioBruto;
    salarioBruto = get_salarioBase() * get_quantidadeHorasTrabalhadas() / get_cargaHorariaMensal() + calculaBonus();
    return salarioBruto;
};

class gerente : public funcionario{
    private:
    int quantFunc;
    float quantHorasExce;
    string senha = " ";
    bool autenticar(string *password);
    public:
    void set_quantFunc(int funcQuant);
    int get_quantFunc();
    void set_quantHorasExce(float quantExceHoras);
    float get_quantHorasExce();
    bool alterar_senha(string *senhaAntiga,string *novaSenha);
    void set_quantidadeHorasTrabalhadas(float horas) override;
    float calculaBonus() override;
};
float gerente::calculaBonus(){
    float bonus;
    bonus = (get_quantFunc() * 0.05) * get_salarioBase();
    if(bonus > (get_salarioBase() * 0.3)){
        return 0;
    }else{
        bonus = bonus + ((get_salarioBase() * 1.5)/get_cargaHorariaMensal());
        return bonus;
    };
};
void gerente::set_quantidadeHorasTrabalhadas(float horas){
    if(horas > get_cargaHorariaMensal()){
        set_quantHorasExce(horas - get_cargaHorariaMensal());
        set_quantidadeHorasTrabalhadas(get_cargaHorariaMensal());
    }else{
        set_quantidadeHorasTrabalhadas(horas);
    };
};
bool gerente::alterar_senha(string *senhaAntiga, string *novaSenha){
    if(senha == " "){
        senha = novaSenha;
        return true;
    }else if(senha != " "){
        if(senhaAntiga == senha){
            senha = novaSenha;
            return true;
        }else if(senhaAntiga != senha){
            return false;
        };
    };
};
float gerente::get_quantHorasExce(){
    return quantHorasExce;
};
void gerente::set_quantHorasExce(float quantExceHoras){
    quantHorasExce = quantExceHoras;
};
int gerente::get_quantFunc(){
    return quantFunc;
};
void gerente::set_quantFunc(int funcQuant){
    quantFunc = funcQuant;
};
bool gerente::autenticar(string password){
    if(password == senha){
        return true;
    }else if(password != senha){
        return false;
    };
};

class estagiario : public funcionario{
    private:
    float tempoRestante;
    bool tipoEstagiario;
    public:
    float get_tempoRestante();
    bool get_tipoEstagiario();
    void set_tempoRestante(float tempRest);
    void set_tipoEstagiario(bool tipoEst);
    //0 PARA JOVEM APRENDIZ E 1 PARA UNIVERSITARIO;
    float calculaBonus() override;
};
float estagiario::get_tempoRestante(){
    return tempoRestante;
};
bool estagiario::get_tipoEstagiario(){
    return tipoEstagiario;
};
void estagiario::set_tempoRestante(float tempRest){
    tempoRestante = tempRest;
};
void estagiario::set_tipoEstagiario(bool tipoEst){
    tipoEstagiario = tipoEst;
};
float estagiario::calculaBonus(){
    if(get_tipoEstagiario() == 0){
        return (get_salarioBase() * 0.05) / get_tempoRestante();
    }else if(get_tipoEstagiario() == 1){
        return (get_salarioBase() * 0.1) / get_tempoRestante();
    };
};

class cliente : public Pessoa_f{
    private:
    string phone;
    string adress;
    public:
    string get_phone();
    string get_adress();
    void set_phone(string phn);
    void set_adress(string adr);
};
string cliente::get_adress(){
    return adress;
};
string cliente::get_phone(){
    return phone;
};
void cliente::set_adress(string adr){
    adress = adr;
};
void cliente::set_phone(string phn){
    phone = phn;
};

/* class empresa: public Pessoa_j{
    public:
    int *i= 0;
    funcionario *Funcionarios = new funcionario[3];
    void adicionarFuncionarios(funcionario *Funcionarios, int *i);
    /////////////////////////////////////////////////////////////
    int j = 0;
    cliente *Clientes = new cliente[10];
    void adicionarClientes(funcionario &Clientes);
};
void empresa::adicionarFuncionarios(funcionario *Funcionarios, int *i){
    float Sal;
    string nom;
    cout<<"Vamos adicionar um funcionario."<<endl;
    cout<<"Para isso insira as informaçoes requisitadas:"<<endl;
    cout<<"Vamos inserir o nome do funcionario: ";
    cin>>nom;
    this->Funcionarios[*i].set_nome(nom);

}; */

#endif