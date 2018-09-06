//
// Created by tais on 31/08/18.
//

#include "../heads/lista_de_voos.h"
#include "../heads/voo.h"

void nova_lista_voos(Lista_De_Voos *lista){
    CelLista_De_Voos Lista;
    lista->primeiro = (Lista)malloc(sizeof(CelLista_De_Voos));
    lista->ultimo=lista->primeiro;
    lista->primeiro->prox=NULL;
}

int verifica_lista_vazia(Lista_De_Voos *lista){
    return lista->primeiro == lista->ultimo;
}
void inserir_lista_voo(Lista_De_Voos *lista){

}
void remover_lista_voo(Lista_De_Voos *lista, Voo *voo ){

}
void procura_lista_voo(Lista_De_Voos *lista, int id ){
    
}
