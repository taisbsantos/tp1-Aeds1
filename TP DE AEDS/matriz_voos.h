//
// Created by tais on 31/08/18.
//
#include "item_matriz.h"

typedef struct {
    Item_Matriz Elemento_Matriz[24][24];
    char data[10];
    char ultima_atualiza[6];
    int total_de_voos;
}Matriz_voos;



void Inicializar_Matriz(Matriz_voos *MatrizVoo);
void Inserir_Elementos_Matriz(Matriz_voos *Matriz,Voo Voo);
void Remover_Voo_Matriz(Matriz_voos *Matriz,int ID);
void Procurar_Voo_Matriz(Matriz_voos *Matriz,int ID);
void Imprime_Matriz_DecPouso(Matriz_voos *Matriz, char *D, char *P);
void Imprime_Matriz_Dec(Matriz_voos *Matriz, char *D);
void Imprime_Matriz_Pouso(Matriz_voos *Matriz, char *P);
void Imprime_Matriz_All(Matriz_voos *Matriz);
void Maior_Quantidade_Voos(Matriz_voos *Matriz);
void Menor_Quantidade_Voos(Matriz_voos *Matriz);
void Matriz_Ultima_Alteracao(Matriz_voos *Matriz);
void Matriz_primeira_Alteracao(Matriz_voos *Matriz);
void Matriz_esparca(Matriz_voos *Matriz);
void Alterar_Tempo(Matriz_voos *Matriz);
void Alterar_Tempo_Item(Item_Matriz *Item);

/*
void horario_Dec_PrevisaoPou_maior_num_voos();
void horario_Dec_PrevisaoPou_menor_num_voos();
void lista_voos_mais_alterada_recentemente();
void lista_voos_menos_alterada_recentemente();
void verifica_matriz_esparca();
 */