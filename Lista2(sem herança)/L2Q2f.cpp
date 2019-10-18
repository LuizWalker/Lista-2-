#include "L2Q2.h"
using namespace std;

Data::Data(int day, int month, int year){
    
    setDia(day);
    setMes(month);
    setAno(year);
}

void Data::setDia(int day)
{
    if((day<1)||(day>31)){
        day=1;
    }
    dia=day;
}

void Data::setMes(int month)
{
    if((month<1)||(month>12)){
        month=1;
    }
    mes=month;
}

void Data::setAno(int year)
{
    if(year<1){
        year=1;
    }
    ano=year;
}


int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}


void Data::exibirdata(){
    
    cout<<"("<<getDia()<<"/"<<getMes()<<"/"<<getAno()<<")"<<endl;
    
}

