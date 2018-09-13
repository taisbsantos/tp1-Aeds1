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
    char Pouso[6],Decolagem[6]
    sprintf(Pouso,"%c%c",Voo->hora_previsao_pouso[0],Voo->hora_previsao_pouso[1]);
    sprintf(Decolagem,"%c%c",Voo->hora_decolagem[0]->hora_decolagem[1]);
    pouso=atoi(Pouso);
    decolagem=atoi(Decolagem);
    inserir_lista_voo(Matriz->Elemento_Matriz[pouso][decolagem].Lista,Voo)
}

void Remover_Voo_Matriz(Matriz_voos *Matriz,int ID){

}