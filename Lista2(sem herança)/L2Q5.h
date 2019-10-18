#include <iostream>

using namespace std;


class Fatura
{
  private:

  string numdeserie;
  string caracteristicas;
  int qtdcomprada;
  float custo;
  

  public:

  Fatura(string codigo,string dados,int qtd, float valor);


  void setNumdeserie(string codigo);
  string getNumdeserie();

  void setCaracteristicas(string dados);
  string getCaracteristicas();

  void setQtdcomprada(int qtd);
  int getQtdcomprada();

  void setCusto(float valor);
  float getCusto();
  

  void mostrarFatura();
};