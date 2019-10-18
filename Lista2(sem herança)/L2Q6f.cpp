#include "L2Q6.h"
#include <vector>
using namespace std;

Empregado:: Empregado(string firstname,string lastname, float grana){

    setNome(firstname);
    setSobrenome(lastname);
    setSalario(grana);
}

void Empregado::setNome(string firstname){
    if(firstname.size() < 3){
        firstname="Nome inexistente";
    }
    nome=firstname;
}

void Empregado::setSobrenome(string lastname){
    if(lastname.size() < 3 ){
       lastname="Sobrenome inexistente";
    }
    sobrenome=lastname;

}

void Empregado::setSalario(float grana){
    if(grana<0){
        grana=0;
    }

    salario=grana;
 
}

string Empregado::getNome(){
    return nome;
}

string Empregado::getSobrenome(){
    return sobrenome;
}

float Empregado::getSalario(){
    return salario;
}

void Empregado::mostrardados(){
    cout<<"Nome do empregado(a):  "<<nome<<" "<<sobrenome<<endl;
    cout<<"Salário anual: "<<salario+salario*0.1<<endl;
}