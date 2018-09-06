//
// Created by tais on 31/08/18.
//
#include <stdio.h>
typedef struct {
    int id_voo;
    int id_pista_decolagem;
    char hora_decolagem[4];
    char hora_previsao_pouso[4];
    char aeroporto_pouso[50];
    char aeroporto_decolagem[50];

}Voo;

void inicia_voo(Voo *IVoo);

void set_id_voo(Voo *IVoo, int novo_id);

void get_id_voo(Voo *IVoo);

void set_id_pista_decolagem(Voo *IVoo, int novo_id_pista);

void get_id_pista_decolagem(Voo *IVoo);

void set_hora_decolagem(Voo *IVoo, char hora_decolagem);

void get_hora_decolagem(Voo *IVoo);

void set_hora_previsao_pouso(Voo *IVoo, char previsao_pouso);

void get_hora_previsao_pouso(Voo *IVoo);

void set_aeroporto_pouso(Voo *IVoo,char aeroporto_p);

void get_aeroporto_pouso(Voo *IVoo);

void set_aeroporto_decolagem(Voo *IVoo,char aeroporto_d);

void get_aeroporto_decolagem(Voo *IVoo);
