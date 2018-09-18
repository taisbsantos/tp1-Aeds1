//
// Created by tais on 31/08/18.
//

#include "lista_de_voos.h"

//Inicia a Lista de Voos//
void nova_lista_voos(Lista_De_Voos *lista){

    lista->primeiro = (CelLista_De_Voos*)malloc(sizeof(CelLista_De_Voos));
    lista->ultimo=lista->primeiro;
    lista->primeiro->prox=NULL;
}

//Verifica se a lista de voos está vazia//
int verifica_lista_vazia(Lista_De_Voos *lista ){
    return (lista->primeiro->prox==NULL);
}

//Insere ordenadamente um novo elemento na lista de voos//
void inserir_lista_voo(Lista_De_Voos *lista, Voo voo){
    CelLista_De_Voos *atual, *proximo, *novo;
    novo=(CelLista_De_Voos*) malloc(sizeof(CelLista_De_Voos));
    novo->item_voo=voo;
    atual=lista->primeiro;
    proximo=lista->primeiro->prox;
    while(proximo!=NULL){
        if(strcmp(proximo->item_voo.hora_decolagem,voo.hora_decolagem)>=0){
            printf("Inserir completo");
            break;
        }
        atual=proximo;
        proximo=proximo->prox;
    }
    novo->prox=proximo;
    atual->prox=novo;
}

//Remove um elemento da lista de voos, se
int remover_lista_voo(Lista_De_Voos *lista, int id){
    if(verifica_lista_vazia(lista)==1){
        return 0;
    }
    CelLista_De_Voos *aux = NULL, *atual = lista->primeiro;
    while (atual->prox != NULL) {
        if (atual->prox->item_voo.id_voo == id) {
            aux = atual->prox;
            atual->prox = atual->prox->prox;
            free(aux);
            return 1;
        }
        atual = atual->prox;
    }
    return 0;
}


Voo* procura_lista_voo(Lista_De_Voos *Lista, int id ){
    CelLista_De_Voos *auxiliar;
    auxiliar = Lista->primeiro->prox;
    while(auxiliar!=NULL){
        if(id==auxiliar->item_voo.id_voo) {
            printf("Voo encontrado.\n");
            return &auxiliar->item_voo;
        }
        else{
            auxiliar = auxiliar->prox;
        }
    }
    //printf("Erro: ID desconhecido.\n");

}

void imprime_lista_voo(Lista_De_Voos Lista){
    CelLista_De_Voos *auxiliar;
    auxiliar=Lista.primeiro->prox;
        while(auxiliar!=NULL){
            printf("\n--------------------------------\n");
            print_voo(&auxiliar->item_voo);
            auxiliar= auxiliar->prox;
        }
    printf("\n--------------------------------\n");
}
