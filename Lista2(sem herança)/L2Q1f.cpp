#include "L2Q1.h"

void Aluno::setNome(string name){
    if(name.size() < 3){
        nome="Nome ilegível";
    }
    nome = name;
}
string Aluno::getNome(){
    return nome;
}

void Aluno::setDisciplina(string cadeira){
    disciplina = cadeira;
}
string Aluno::getDisciplina(){
    return disciplina;
}
void Aluno::setNotas(float nota){
    
    notas=nota;
    
}
float Aluno::getNotas(){
    return notas;
}

void Aluno::setMedia(float med){
    media = med;
}

float Aluno::getMedia(){
    return media;
}

void Aluno::coleta(){
    string nome_2;
    string disciplina_2;
    float nota_2;
    float media_2;
    
    
    cout<<"Informe o nome do aluno: ";
    cin>>nome_2;

    cout<<"Informe a disciplina: ";
    cin>>disciplina_2;

    cout<<"Informe a sua nota na disciplina: ";
    cin>>nota_2;
    
    media_2 = nota_2;

    setNome(nome_2);
    setDisciplina(disciplina_2);
    setNotas(nota_2);
    setMedia(media_2);

}

void Aluno::mostra(){
    cout<<"Nome: "<<getNome()<<endl;
    cout<<"Disciplina: "<<getDisciplina()<<endl;
    cout<<"Notas: "<<getNotas()<<endl;
    cout<<"Média: "<<getMedia()<<endl;
}