//
// Autores: Taís B Santos, João Marcos, Larissa S Ramos
//

#include "../heads/voo.h"


void inicia_voo(Voo *IVoo){

    IVoo->id_voo = rand();
    IVoo->id_pista_decolagem=0;
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

void set_hora_decolagem(Voo *IVoo, char hora_decolagem[]){
    strcpy(IVoo->hora_decolagem ,hora_decolagem);
}

char get_hora_decolagem(Voo *IVoo){
    return IVoo->hora_decolagem;
}

void set_hora_previsao_pouso(Voo *IVoo, char previsao_pouso[]){
    strcpy(IVoo->hora_previsao_pouso ,previsao_pouso);

}

char get_hora_previsao_pouso(Voo *IVoo){
    return IVoo->hora_previsao_pouso;
}

void set_aeroporto_pouso(Voo *IVoo,char aeroporto_p[]){
    strcpy(IVoo->aeroporto_pouso ,aeroporto_p);

}

char get_aeroporto_pouso(Voo *IVoo){
    return IVoo->aeroporto_pouso;
}

void set_aeroporto_decolagem(Voo *IVoo,char aeroporto_d[]){
    strcpy(IVoo->aeroporto_decolagem ,aeroporto_d);
}

char get_aeroporto_decolagem(Voo *IVoo){
    return IVoo->aeroporto_decolagem;
}

int comparar_horas_voo(Voo *IVoo, Voo *IIVoo){
    int Voo1,Voo2;
    Voo1=IVoo->hora_decolagem[0]*600+IVoo->hora_decolagem[1]*60+IVoo->hora_decolagem[3]*10+IVoo->hora_decolagem[4];
    Voo2=IIVoo->hora_decolagem[0]*600+IIVoo->hora_decolagem[1]*60+IIVoo->hora_decolagem[3]*10+IIVoo->hora_decolagem[4];
    if(Voo1>Voo2){
        return 1;
    }
    if(Voo2>Voo1){
        return 2;
    }
    if(Voo2==Voo1){
        return 0;
    }
};