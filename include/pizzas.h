#ifndef PIZZAS_H_INCLUDED
#define PIZZAS_H_INCLUDED

#include "../src/sistema.c"
//Nossa struct de pizzas contendo os campos de Sabor, Descrição, Preço, Tamanho e Quantidade em Estoque

//Renomeio aqui a minha struct do tipo Pizza
typedef struct pizza Pizza;

//Renomeio aqui minha struct do tipo Node que é da minha lista de pizzas
typedef struct node Node;

//Crio minha função do tipo node, recebe um ponteiro do tipo Node e é resposável por adicionar uma nova pizza a minha lista de pizzas
Node *addPizza();
//Minha função do tipo void é a resposável por printar a lista de pizzas para o usuário
void printList(Node *list);
//Minha função do tipo Node é a responsável por remover uma pizza da lista de pizzas
Node *removePizza();
//Minha função do tipo void é a resposável por editar uma pizza da lista de pizzas
void editPizza();
//Minha função do tipo void é a responsável por pesquisar uma pizza pelo nome
void searchPizzaByName();
//Minha função do tipo void é a responsável por adicionar a lista de pizzas no arquivo .txt
void printTxt(Node *list);
//Minha função que verifica se minha lista está vazia
void printListPizzas();
Node *loadPizzas();
#endif // PIZZAS_H_INCLUDED