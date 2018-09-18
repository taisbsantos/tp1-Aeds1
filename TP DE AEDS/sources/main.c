#include <stdio.h>
#include "../sources/item_matriz.c"

int main() {

   // Testes de Voo.c//

    Voo teste,teste2,teste3;
    inicia_voo(&teste);
    Item_Matriz ItemMatriz;

    set_id_voo(&teste,rand());
    get_id_voo(&teste);
    set_id_pista_decolagem(&teste,1);
    get_id_pista_decolagem(&teste);
    set_hora_decolagem(&teste,"11:00");
    get_hora_decolagem(&teste);
    set_hora_previsao_pouso(&teste,"12:00");
    get_hora_previsao_pouso(&teste);
    set_aeroporto_decolagem(&teste,"SaoPaulo");
    get_aeroporto_decolagem(&teste);
    set_aeroporto_pouso(&teste,"Minas");
    get_aeroporto_pouso(&teste);
    printf("\n ------------------------- \n");

    set_id_voo(&teste2,rand());
    get_id_voo(&teste2);
    set_id_pista_decolagem(&teste2,1);
    get_id_pista_decolagem(&teste2);
    set_hora_decolagem(&teste2,"11:30");
    get_hora_decolagem(&teste2);
    set_hora_previsao_pouso(&teste2,"12:00");
    get_hora_previsao_pouso(&teste2);
    set_aeroporto_decolagem(&teste2,"Brasilia");
    get_aeroporto_decolagem(&teste2);
    set_aeroporto_pouso(&teste2,"Minas");
    get_aeroporto_pouso(&teste2);
    printf("\n ------------------------- \n");

    printf("\nQual e o maior teste: %d\n",comparar_horas_voo(&teste,&teste2));

    // Testes de lista_de_voos.c//
    Lista_De_Voos lista;
    nova_lista_voos(&lista);
    printf("Lista vazia? %d\n",verifica_lista_vazia(&lista));
    inserir_lista_voo(&lista,&teste);
    inserir_lista_voo(&lista,&teste2);
    printf("Lista vazia? %d\n",verifica_lista_vazia(&lista));
    imprime_lista_voo(lista);
    procura_lista_voo(&lista,teste.id_voo);
    remover_lista_voo(&lista.primeiro->item_voo,&lista,&teste3);
    printf("Lista vazia? %d\n",verifica_lista_vazia(&lista));
    imprime_lista_voo(lista);
    printf("ITS OKAY");


    //Testes de Item_matriz.c//
    Inicializa_Item_Matriz(&ItemMatriz);
    Set_Item_Matriz(&ItemMatriz,&lista);
    Get_Horario_Ultimo(&ItemMatriz);
    Get_Quantidade_Voos(&ItemMatriz);
    Get_Lista_voos(&ItemMatriz);

    //Todos os gets//

    return 0;

}
