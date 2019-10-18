#include <iostream>
#include <vector>

using namespace std;

class Empregado
{
   private:

   string nome;
   string sobrenome;
   float salario;

   public:
   
   Empregado(string firstname,string lastname, float grana);

   void setNome(string firstname);
   string getNome();

   void setSobrenome(string lastname);
   string getSobrenome();

   void setSalario(float grana);
   float getSalario();

   void mostrardados();


};