//
// Autores: Taís B Santos, João Marcos, Larissa S Ramos
//

#include "../heads/matriz_voos.h"

void Inicializar_Matriz(Matriz_voos MatrizVoo){
    int i,j;
    for(i=0;i>24;i++){
        for(j=0;j>24;j++){
            Inicializa_Item_Matriz(MatrizVoo.Elemento_Matriz[i][j])
        }
    }
}

void Inserir_Elementos_Matriz(Matriz_voos *Matriz,Voo *Voo){
    int pouso,decolagem;
    char Pouso[6],Decolagem[6];
    sprintf(Pouso,"%c%c",Voo->hora_previsao_pouso[0],Voo->hora_previsao_pouso[1]);
    sprintf(Decolagem,"%c%c",Voo->hora_decolagem[0]->hora_decolagem[1]);
    pouso=atoi(Pouso);// converte string pra inteiro
    decolagem=atoi(Decolagem);
    inserir_lista_voo(Matriz->Elemento_Matriz[pouso][decolagem].Lista,Voo)
}

void Remover_Voo_Matriz(Matriz_voos *Matriz,int ID){

}
void procura_voo(){

}
void imprime_voo_HDec_HPou(){

}
void imprime_voo_HDec(){

}
void imprime_matriz(){

}
void encontra_hr_Dec_PrevisaoPou_maior_num_voos(){

}
void econtra_hr_Dec_PrevisaoPou_menor_num_voos(){

}
void lista_voos_mais_alterada_recentemente(){

}
void lista_voos_menos_alterada_recentemente(){

}
void verifica_matriz_esparca(){

}