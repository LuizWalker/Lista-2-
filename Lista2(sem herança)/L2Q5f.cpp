#include "L2Q5.h"

using namespace std;



Fatura::Fatura(string codigo,string dados,int qtd, float valor){

    setNumdeserie(codigo);
    setCaracteristicas(dados);
    setQtdcomprada(qtd);
    setCusto(valor);
   
    
}

void Fatura::setNumdeserie(string codigo){

    if(codigo.size()<9){
        codigo = "código incorreto";
    }

    numdeserie = codigo;
}

void Fatura::setCaracteristicas(string dados){

    if(dados.size()<10){
        dados = "Descrição insuficiente";
    }
    
    caracteristicas=dados;
}

void Fatura::setQtdcomprada(int qtd){
    if(qtd<0){
        qtd=0;
    }
    qtdcomprada=qtd;
   
}

void Fatura::setCusto(float valor){
    if(valor<0){
        valor=0;
    }
    custo=valor;
    
}



string Fatura::getNumdeserie(){
    return numdeserie;
}

string Fatura::getCaracteristicas(){
    return caracteristicas;
}

int Fatura::getQtdcomprada(){
    return qtdcomprada;
}

float Fatura::getCusto(){
    return custo;
}

void Fatura::mostrarFatura(){
    cout<<"Número de série: "<<numdeserie<<endl;
    cout<<"Descrição parcial: "<<caracteristicas<<endl;
    cout<<"Quantidade comprada: "<<qtdcomprada<<endl;
    cout<<"Preço por item: "<<custo<<endl;
    cout<<"Valor das compras: "<<qtdcomprada*custo<<endl;
}