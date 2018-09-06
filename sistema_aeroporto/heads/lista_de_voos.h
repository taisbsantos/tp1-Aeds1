//
// Created by tais on 31/08/18.
//
#include "../heads/voo.h"
typedef struct{
    Voo item_voo;
    struct CelLista_De_Voos *prox;
}CelLista_De_Voos;

typedef struct{
    CelLista_De_Voos ultimo, primeiro;
}Lista_De_Voos;

void nova_lista_voos();
void inserir_voo();
void remover_voo();
void procura_voo_pelo_id();
