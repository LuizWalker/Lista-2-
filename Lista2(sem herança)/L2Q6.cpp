#include <iostream>
#include <vector>
#include "L2Q6.h"

using namespace std;

int main(){
     
    vector <Empregado> firma;

    Empregado empregado("Rita","da Avenida Brasil",1000);
    Empregado empregado2("Carminha","da Avenida Brasil",1000);

    firma.push_back(empregado);
    firma.push_back(empregado2);
    
    for(int i=0;i<firma.size();i++){

        firma[i].mostrardados();
    }

    return 0;
}