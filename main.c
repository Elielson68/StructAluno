#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Aluno {
  char *nome;
  int matricula;
  int idade;
}typedef Aluno;

int main(void) {
  Aluno aluno1;
  char *nome = malloc(30*sizeof(char));
  nome = "Elielson";
  aluno1.nome = nome;
  aluno1.matricula = 19070855;
  aluno1.idade = 21;
  printf("Nome do aluno: %s", aluno1.nome);
  return 0;
}