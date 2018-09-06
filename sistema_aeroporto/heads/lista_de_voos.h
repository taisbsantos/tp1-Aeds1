//
// Created by tais on 31/08/18.
//



typedef struct{
    CelLista_De_Voos ultimo, primeiro;
}Lista_De_Voos;

void nova_lista_voos(Lista_De_Voos *lista);
int verifica_lista_vazia(Lista_De_Voos *lista);
void inserir_lista_voo(Lista_De_Voos *lista);
void remover_lista_voo(Lista_De_Voos *lista);
void procura_lista_voo(Lista_De_Voos *lista,int id);
