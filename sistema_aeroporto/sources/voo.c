//
// Created by tais on 31/08/18.
//

#include "../heads/voo.h"
void inicia_voo(Voo *IVoo){
    IVoo->id_voo=NULL;
    IVoo->id_pista_decolagem=NULL;
    IVoo->aeroporto_decolagem[0]='\0';
    IVoo->aeroporto_pouso[0]='\0';
    IVoo->hora_decolagem[0]='\0';
    IVoo->hora_previsao_pouso[0]='\0';
}
void set_id_voo(Voo *IVoo, int novo_id){
    IVoo->id_voo=novo_id;
}

int get_id_voo(Voo *Ivoo){
    return Ivoo->id_voo;
}

void set_id_pista_decolagem(Voo *IVoo, int novo_id_pista){
    IVoo->id_pista_decolagem=novo_id_pista;
}

int get_id_pista_decolagem(Voo *IVoo){
    return IVoo->id_pista_decolagem;
}

void set_hora_decolagem(Voo *IVoo, char hora_decolagem){
    IVoo->hora_decolagem=hora_decolagem;
}

char get_hora_decolagem(Voo *IVoo){
    return IVoo->hora_decolagem;
}

void set_hora_previsao_pouso(Voo *IVoo, char previsao_pouso){
    IVoo->hora_previsao_pouso=previsao_pouso;
}

char get_hora_previsao_pouso(Voo *IVoo){
    return IVoo->hora_previsao_pouso;
}

void set_aeroporto_pouso(Voo *IVoo,char aeroporto_p){
    IVoo->aeroporto_pouso=aeroporto_p;
}

char get_aeroporto_pouso(Voo *IVoo){
    return IVoo->aeroporto_pouso;
}

void set_aeroporto_decolagem(Voo *IVoo,char aeroporto_d){
    IVoo->aeroporto_decolagem=aeroporto_d;
}

char get_aeroporto_decolagem(Voo *IVoo){
    return IVoo->aeroporto_decolagem;
}
