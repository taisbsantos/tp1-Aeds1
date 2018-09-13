//
// Autores: Taís B Santos, João Marcos, Larissa S Ramos
//

#include "../heads/lista_de_voos.h"


void nova_lista_voos(Lista_De_Voos *lista){

    lista->primeiro = (CelLista_De_Voos*)malloc(sizeof(CelLista_De_Voos));
    lista->ultimo = lista->primeiro;
    lista->primeiro->prox=NULL;
}

int verifica_lista_vazia(Lista_De_Voos *lista){

    return (lista->primeiro == lista->ultimo);
}

void inserir_lista_voo(Lista_De_Voos **lista, Voo *voo){
    CelLista_De_Voos *atual,*novo,*anterior;
    novo=(CelLista_De_Voos *) malloc (sizeof(CelLista_De_Voos));
    atual=*lista;
    anterior=NULL;
    novo->item_voo=*voo;
    if(atual==NULL){
        novo->prox=NULL;
        *lista=novo;
    }else{
        while(atual!=NULL && comparar_horas_voo(atual,voo)!=1){
            anterior=atual;
            atual=atual->prox;
        }
        novo->prox=atual;
        if(anterior==NULL){
            *lista=novo;
        }else{
            anterior->prox=novo;
        }
    }
    }


void remover_lista_voo(CelLista_De_Voos *ponteiro, Lista_De_Voos *lista, Voo *voo ){
    CelLista_De_Voos *auxiliar;
    if(verifica_lista_vazia(&lista)){
        printf ("lista esta vazia\n");
        return;
    }
    auxiliar = ponteiro->prox;
    *voo = auxiliar->item_voo;
    ponteiro->prox = auxiliar->prox;
    if (ponteiro->prox==NULL){
        lista->ultimo=ponteiro;
    }
    free(auxiliar);
}


CelLista_De_Voos procura_lista_voo(Lista_De_Voos *Lista, int id ){
    CelLista_De_Voos *auxiliar;
    auxiliar=Lista->primeiro->prox;
    while(auxiliar!=NULL){
        if(id==auxiliar->item_voo.id_voo) {
            get_id_voo(&auxiliar->item_voo);
            get_id_pista_decolagem(&auxiliar->item_voo);
            get_hora_previsao_pouso(&auxiliar->item_voo);
            get_hora_decolagem(&auxiliar->item_voo);
            get_aeroporto_pouso(&auxiliar->item_voo);
            get_aeroporto_decolagem(&auxiliar->item_voo);
            return *auxiliar;
        }
        else{
            auxiliar = auxiliar->prox;
        }
    }

}

void imprime_lista_voo(Lista_De_Voos Lista){
    CelLista_De_Voos *auxiliar;
    auxiliar=Lista.primeiro->prox;
        while(auxiliar!=NULL){
            printf("\n--------------------------------\n");
            get_id_voo(&auxiliar->item_voo);
            get_id_pista_decolagem(&auxiliar->item_voo);
            get_hora_previsao_pouso(&auxiliar->item_voo);
            get_hora_decolagem(&auxiliar->item_voo);
            get_aeroporto_pouso(&auxiliar->item_voo);
            get_aeroporto_decolagem(&auxiliar->item_voo);
            auxiliar = auxiliar->prox;
        }
    printf("\n--------------------------------\n");
}

