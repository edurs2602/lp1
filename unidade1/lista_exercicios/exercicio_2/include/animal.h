#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

using namespace std;

class Animal{
  private:
    string nome;
    string especie;
    int idade;

  public:
    Animal(string nome, string especie, int idade);
    string getNome();
    string getEspecie();
    int getIdade();

};

#endif // DEBUG
