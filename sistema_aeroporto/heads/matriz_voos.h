//
// Created by tais on 31/08/18.
//
typedef struct{
    Tipo_Matriz M[24][24];

}Matriz_Voos;

void inicializa();
void insere_voo();
void procura_voo();
void imprime_voo_HDec_HPou();
void imprime_voo_HDec();
void imprime_matriz();
void horario_Dec_PrevisaoPou_maior_num_voos();
void horario_Dec_PrevisaoPou_menor_num_voos();
void lista_voos_mais_alterada_recentemente();
void lista_voos_menos_alterada_recentemente();
void verifica_matriz_esparca();