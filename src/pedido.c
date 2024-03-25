#include "../include/pedido.h"
#include "../include/pizzas.h"
#include <stdio.h>
#include <stdlib.h>

struct order{
    int pizzaId;
    int qntOrder;
    ListPizza *list;
};

struct orderpizza{
    Order orders;
    struct orderpizza *next;
};

OrderPizza *created_order(OrderPizza *list){
    Order orders;
    int qtdpizzas;

    printf("Vamos cadastrar um novo pedido! \n");
    printf("Primeiro informe o id do novo pedido: ");
    scanf("%d", &orders.pizzaId);
    getchar();
    printf("Agora informe a quantidade de pizzas que deseja: ");
    scanf("%d", &qtdpizzas);
    getchar();
    for(int i = 0; i < qtdpizzas; i++){
        orders.list = fill_pizza(orders.list);
    }

    OrderPizza *newNode = (OrderPizza*) malloc(sizeof(OrderPizza));
    if(newNode != NULL){
        newNode->orders = orders;
        newNode->next = list;
        list = newNode;
    } else {
        printf("Infelizmente não foi possível adicionar um novo pedido!\n");
    }

    return list;
}