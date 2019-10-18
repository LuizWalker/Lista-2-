#include <iostream>

class Data
{
    private:
    
    int dia;
    int mes;
    int ano;

    public:

    Data(int day, int month, int year);

    void setDia(int day);
    int getDia();

    void setMes(int month);
    int getMes();

    void setAno(int year);
    int getAno();

    void exibirdata();
};