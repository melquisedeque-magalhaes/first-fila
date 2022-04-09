#include <stdio.h>

struct fila {
  int value;
  struct fila *next;
};

void showFila(struct fila *pointer);
struct fila *insertInFila(struct fila *endFila, struct fila *newStruct);
struct fila *removeFromFila(struct fila *firstFila);

int main(void) {
  struct fila fila1;
  struct fila fila2;
  struct fila fila3;

  struct fila *pointer1;
  struct fila *pointer2;
  struct fila *pointer3;

  struct fila *firstFila;
  struct fila *endFila;

  pointer1 = &fila1;
  pointer2 = &fila2;
  pointer3 = &fila3;

  // Adicionando valores nas Struturas

  printf("Digite um valor: ");
  scanf("%d", &pointer1->value);

  pointer1->next = NULL;

  printf("Digite outro valor: ");
  scanf("%d", &pointer2->value);

  pointer2->next = NULL;

  // Mostrando valores 

  printf("\n ++++++++++++++++++++++++++++++++++++++++++++++  \n");

  printf("O valor da estrutura 1 é %d \n", fila1.value);
  printf("O valor de estrutura 2 é %d \n", fila2.value);

  // Apontando valores para o incio e para o final da fila

  firstFila = &fila1;
  endFila = &fila2;

  // Criando uma FILA

  pointer1->next = &fila2;

  // Mostrando valores da fila

  printf("\n ++++++++++++++++++++++++++++++++++++++++++++++  \n");

  printf("O valor de fila 1 é %d \n", fila1.value);
  printf("O valor de fila 2 é %d \n", fila1.next->value);

  showFila(firstFila);

  // Adicionar valor na estrutura 3

  printf("\n ++++++++++++++++++++++++++++++++++++++++++++++  \n");

  printf("\n Digite um valor: ");
  scanf("%d", &pointer3->value);

  printf("\n ++++++++++++++++++++++++++++++++++++++++++++++  \n");

  pointer3->next = NULL;

  // Inserindo estrutura na fila

  endFila = insertInFila(endFila, pointer3);

  showFila(firstFila);

  // Removendo estrutura na fila

  firstFila = removeOfFila(firstFila);

  printf("\n ++++++++++++++++++++++++++++++++++++++++++++++  \n");

  showFila(firstFila);
  
  return 0;
}

void showFila(struct fila *pointerFila){
  
  printf("\n Valor: %d", pointerFila->value);

  if(pointerFila->next != NULL) 
    showFila(pointerFila->next);
}

struct fila *insertInFila(struct fila *endFila, struct fila *newStruct){
  if(endFila->next != NULL)
    printf("\n Error este elemento não e o fim da fila \n");
  
  endFila->next = newStruct;

  return newStruct;
}

struct fila *removeFromFila(struct fila *firstFila){
  struct fila *newFirst = firstFila->next;

  firstFila->next = NULL;

  return newFirst;
}