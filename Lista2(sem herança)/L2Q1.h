#include <iostream>

using namespace std;

class Aluno{
    private:

    string nome;
    string disciplina;
    float notas;
    float media;

    public:

    void setNome(string name);
    string getNome();

    void setDisciplina(string cadeira);
    string getDisciplina();

    void setNotas(float nota);
    float getNotas();

    void setMedia(float med);
    float getMedia();

    void coleta();
    void mostra();

};