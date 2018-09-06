//
// Created by tais on 31/08/18.
//

#include "../heads/voo.h"

void inicia_voo(Voo *IVoo){

    IVoo->id_voo=NULL;
    IVoo->id_pista_decolagem=0;
    IVoo->aeroporto_decolagem[0]='\0';
    IVoo->aeroporto_pouso[0]='\0';
    IVoo->hora_decolagem[0]='\0';
    IVoo->hora_previsao_pouso[0]='\0';
}
void set_id_voo(Voo *IVoo, int novo_id){
    IVoo->id_voo=novo_id;
}

void get_id_voo(Voo *Ivoo){
    printf("%d",Ivoo->id_voo);

}

void set_id_pista_decolagem(Voo *IVoo, int novo_id_pista){
    IVoo->id_pista_decolagem=novo_id_pista;
}

void get_id_pista_decolagem(Voo *IVoo){
    printf("%d", IVoo->id_pista_decolagem);
}

void set_hora_decolagem(Voo *IVoo, char hora_decolagem){
    strcpy(IVoo->hora_decolagem ,hora_decolagem);
}

void get_hora_decolagem(Voo *IVoo){
    printf("%s", IVoo->hora_decolagem);
}

void set_hora_previsao_pouso(Voo *IVoo, char previsao_pouso){
    strcpy(IVoo->hora_previsao_pouso ,previsao_pouso);

}

void get_hora_previsao_pouso(Voo *IVoo){
    printf("%s",IVoo->hora_previsao_pouso);
}

void set_aeroporto_pouso(Voo *IVoo,char aeroporto_p){
    strcpy(IVoo->aeroporto_pouso ,aeroporto_p);

}

void get_aeroporto_pouso(Voo *IVoo){
    printf("%s", IVoo->aeroporto_pouso);
}

void set_aeroporto_decolagem(Voo *IVoo,char aeroporto_d){
    strcpy(IVoo->aeroporto_decolagem ,aeroporto_d);
}

void get_aeroporto_decolagem(Voo *IVoo){
    printf("%s", IVoo->aeroporto_decolagem);
}
