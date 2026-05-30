#include "raylib.h"
#include "menu.h"

#define LARGURA_TELA 900
#define ALTURA_TELA  600

OpcaoMenu DesenhaMenuPrincipal(void) {
    int opcao = 0; // 0 = Novo Jogo, 1 = Ranking, 2 = Sair

    while (!WindowShouldClose()) { // LOOP do menu
        // Atualiza seleção com as setas do teclado
        if (IsKeyPressed(KEY_DOWN))  opcao = (opcao + 1) % 3;
        if (IsKeyPressed(KEY_UP))    opcao = (opcao + 2) % 3; // esquema p loop
        if (IsKeyPressed(KEY_ENTER)) return (OpcaoMenu)opcao;

        BeginDrawing();
        ClearBackground(BLACK);

        // Título
        DrawText("DONKEY KONG - Miguel e Rodrigo", 250, 100, 40, YELLOW);

        // Opções — a selecionada fica branca, as outras ficam cinza
        DrawText("1. Novo Jogo", 350, 250, 25, opcao == 0 ? WHITE : GRAY);
        DrawText("2. Ranking",   350, 300, 25, opcao == 1 ? WHITE : GRAY);
        DrawText("3. Sair",      350, 350, 25, opcao == 2 ? WHITE : GRAY);
        /*Esse final das cores eh um if resumido para se selecionar
        fica branco e o resto cinza*/


        // Instrução
        DrawText("Use as setas e ENTER para selecionar", 200, 500, 18, DARKGRAY);

        EndDrawing();
    }

    return MENU_SAIR;
}

OpcaoPausa DesenhaMenuPausa(void) {
    int opcao = 0; // 0 = Continuar, 1 = Menu, 2 = Sair

    while (!WindowShouldClose()) {
        if (IsKeyPressed(KEY_DOWN))  opcao = (opcao + 1) % 3;
        if (IsKeyPressed(KEY_UP))    opcao = (opcao + 2) % 3;
        if (IsKeyPressed(KEY_ENTER)) return (OpcaoPausa)opcao;

        BeginDrawing();
        ClearBackground(BLACK);

        DrawText("PAUSADO", 370, 100, 40, YELLOW);

        DrawText("Continuar",     350, 250, 25, opcao == 0 ? WHITE : GRAY);
        DrawText("Voltar ao Menu",350, 300, 25, opcao == 1 ? WHITE : GRAY);
        DrawText("Sair",          350, 350, 25, opcao == 2 ? WHITE : GRAY);

        DrawText("Use as setas e ENTER para selecionar", 200, 500, 18, DARKGRAY);

        EndDrawing();
    }

    return PAUSA_SAIR;
}