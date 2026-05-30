/*Esse arquivo eh tipo um indice para
nao precisar ficar renomeando o que esta aqui*/

#ifndef MENU_H   //Impede que esse arquivo seja incluido mais de uma vez
#define MENU_H

// Opcoes do menu principal
typedef enum {
    MENU_NOVO_JOGO,
    MENU_RANKING,
    MENU_SAIR
} OpcaoMenu;
/*Aqui fica mais legivel posteriormente
quando a gente colocar os if para cada caso da selecao.
Vai ficar tipo -> if(opcao == MENU_NOVO_JOGO){
    o codigo p rodar o jogo em si
}*/

// Opções do menu de pausa
typedef enum {
    PAUSA_CONTINUAR,
    PAUSA_MENU,
    PAUSA_SAIR
} OpcaoPausa; // Mesmo esuqema do que escrevi antes

OpcaoMenu DesenhaMenuPrincipal(void);
OpcaoPausa DesenhaMenuPausa(void);
/*Declaracao de funcoes que irao retornar 
a opcao escolhida pelo ususario tanto no menu
principal quanto na pausa*/



#endif