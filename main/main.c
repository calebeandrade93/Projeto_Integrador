#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "functions.h"

/*
     - Fatec Mogi Mirim 2021 -
      - Projeto Integrador -
           - Grupo 5 -
*/

//Inicialização do programa
int main (){

    setlocale(LC_ALL, ""); //Função da biblioteca locale.h

    int home, valorSomatorio, valorProposicional, valorCombinatorio, calcular1, calcular2;

    menuprincipal: //Tela do menu principal.
    printf("*****************************************\n");
    printf("*\t\t ----\t\t\t*\n");
    printf("*\t\t  \\     \t\t*\n");
    printf("*\t\t  /\t\t\t*\n");
    printf("*\t\t ----\t\t\t*\n");
    printf("*\t    <ESSENCIAL C>\t\t*\n");
    printf("*****************************************\n\n");
    printf("\t   -MENU PRINCIPAL-\n\n");
    printf("    1. SOMATÓRIO\n");
    printf("    2. LÓGICA PROPOSICIONAL\n");
    printf("    3. ANÁLISE COMBINATÓRIA\n");
    printf("    4. SAIR\n\n");
    printf("    Digite uma opção listada acima: ");
    scanf("%d", &home);

    if(home < 1 || home > 4){
        fflush(stdin);
        system("cls"); //Responsável por limpar a tela.
        printf("\n    Esta não é uma opção válida.\n");
        printf("    Retornando ao menu principal.....");
        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu principal.
        system("cls"); //Responsável por limpar a tela.
        goto menuprincipal; //Retorna ao menu principal.

    } else { //Submenus das operações matemáticas.
        system("cls"); //Responsável por limpar a tela antes do submenu.

        switch(home){

            case 1:
                menuSomatorio: //Operacao matemática de somatórios.
                printf("\n\t\t-- SOMATÓRIO --\n\n");
                printf("    1. Somatório de J = 0 até N para a regra J.\n");
                printf("    2. Somatório de J = 0 até N para a regra (-J)^(J + 1).\n");
                printf("    3. Aproximação do número pi com somatório até N.\n");
                printf("    4. Aproximação do número neperiano por somatório até N.\n");
                printf("    5. Voltar ao menu anterior.\n\n");
                printf("    Digite a opção desejada: ");
                scanf("%d", &valorSomatorio);//Entrada do usuário para a operacao matemática

                    if (valorSomatorio < 1 || valorSomatorio > 5){
                        fflush(stdin);
                        system("cls"); //Responsável por limpar a tela.
                        printf("\n    Esta não é uma opção válida.\n");
                        printf("    Retornando ao menu somatório.....");
                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                        system("cls"); //Responsável por limpar a tela.
                        goto menuSomatorio; //Retorna ao menu somatório.

                    } else {
                        system("cls"); //Limpa a tela antes do Swtich somatório.

                        switch (valorSomatorio){

                            case 1: //Opcao 1 do somatório.
                                printf("\n    -- Somatório de J = 0 até N para a regra J --\n\n");
                                printf("    Entre com um valor POSITIVO para N: ");
                                scanf("%d", &calcular1);
                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                somatorioOne(calcular1); //Chamada da função do arquivo functions.h para realizar a operação.
                                printf("    1. Realizar uma nova operação.\n");
                                printf("    2. Menu principal.\n\n");
                                printf("    Entre com um valor listado acima: ");
                                scanf("%d", &home);
                                    if(home < 1 || home > 2){
                                        fflush(stdin);
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu somatório.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuSomatorio; //Retorna ao menu somatório.
                                    } else if (home == 1) { //Opcao 1 retorna ao menu somátorio
                                        system("cls");
                                        goto menuSomatorio;

                                    } else {
                                        system("cls");
                                        goto menuprincipal;
                                    }
                            break; //break case 1 (menusomatório)

                            case 2: //Opcao 2 do somatório
                                printf("\n    -- Somatório de J = 0 até N para a regra (-J)^(J + 1) --\n\n");
                                printf("    Entre com um valor POSITIVO para N: ");
                                scanf("%d", &calcular1);
                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                somatorioTwo(calcular1); //Chamada da função do arquivo functions.h para realizar a operação.
                                printf("    1. Realizar uma nova operação.\n");
                                printf("    2. Menu principal.\n\n");
                                printf("    Entre com um valor listado acima: ");
                                scanf("%d", &home);
                                    if(home < 1 || home > 2){
                                        fflush(stdin);
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu somatório.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuSomatorio; //Retorna ao menu somatório.
                                    } else if (home == 1) { //Opcao 1 retorna ao menu somátorio
                                        system("cls");
                                        goto menuSomatorio;

                                    } else {
                                        system("cls");
                                        goto menuprincipal;
                                    }
                            break; //break case 2 (menusomatório)

                            case 3: //Opcao 3 do somatório.
                                printf("\n    -- Aproximação do número PI com somatório até N --\n\n");
                                printf("    Entre com um valor POSITIVO para N: ");
                                scanf("%d", &calcular1);
                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                somatorioThree(calcular1); //Chamada da função do arquivo functions.h para realizar a operação.
                                printf("    1. Realizar uma nova operação.\n");
                                printf("    2. Menu principal.\n\n");
                                printf("    Entre com um valor listado acima: ");
                                scanf("%d", &home);
                                    if(home < 1 || home > 2){
                                        fflush(stdin);
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu somatório.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuSomatorio; //Retorna ao menu somatório.
                                    } else if (home == 1) { //Opcao 1 retorna ao menu somátorio
                                        system("cls");
                                        goto menuSomatorio;

                                    } else {
                                        system("cls");
                                        goto menuprincipal;
                                    }
                            break; //break case 3 (menusomatório)

                            case 4: //Opcao 4 do menu somatório.
                                printf("\n    -- Aproximação do NEPERIANO por somatório até N --\n\n");
                                printf("    Entre com um valor POSITIVO para N: ");
                                scanf("%d", &calcular1);
                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                somatorioFour(calcular1);//Chamada da função do arquivo functions.h para realizar a operação.
                                printf("    1. Realizar uma nova operação.\n");
                                printf("    2. Menu principal.\n\n");
                                printf("    Entre com um valor listado acima: ");
                                scanf("%d", &home);
                                    if(home < 1 || home > 2){
                                        fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu somatório.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuSomatorio; //Retorna ao menu somatório.

                                    } else if (home == 1) { //Opcao 1 retorna ao menu somátorio
                                        system("cls");
                                        goto menuSomatorio;

                                } else {
                                        system("cls");
                                    goto menuprincipal;
                                }
                            break; //break case 4 (menusomatório)

                            default:
                                system("cls");
                                goto menuprincipal; //Opcao 5 do menu somatório, retorna ao menuprincipal.

                        } //Aqui encerra os switches do menu do somatório.
                    } //Aqui encerra o else do menu somatório.

            break; //Break do case 1 do SWITCH(HOME)

            case 2:
                menuProposicional: //Opcao matemática de lógica proposicional.
                printf("\n\t\t-- LÓGICA PROPOSICIONAL --\n\n");
                printf("    1. ~P\n");
                printf("    2. ~Q\n");
                printf("    3. P ^ Q\n");
                printf("    4. P v Q\n");
                printf("    5. P _v_ Q\n");
                printf("    6. P -> Q\n");
                printf("    7. P <-> Q\n");
                printf("    8. Voltar ao menu anterior.\n\n");
                printf("    Digite a opção desejada: ");
                scanf("%d", &valorProposicional);
                    if (valorProposicional < 1 || valorProposicional > 8){
                        fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                        system("cls"); //Responsável por limpar a tela.
                        printf("\n    Esta não é uma opção válida.\n");
                        printf("    Retornando ao menu de lógica proposicional.....");
                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                        system("cls"); //Responsável por limpar a tela.
                        goto menuProposicional; //Retorna ao menu somatório.

                    } else {
                        system("cls"); //Limpa a tela antes do Swtich proposicional.

                        switch(valorProposicional){

                            case 1: //Opcao 1 do Proposicional.
                                printf("\n\t - ~P -\n\n");
                                printf("    Entre com um valor para P, sendo 0 para FALSO ou 1 para VERDADEIRO: ");
                                scanf("%d", &calcular1);
                                    if(calcular1 < 0 || calcular1 > 1){
                                        fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu de lógica proposicional.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuProposicional; //Retorna ao menu somatório.

                                    } else {
                                        negacaoP(calcular1); //Chamada da função do arquivo functions.h para realizar a operação.
                                        printf("    1. Realizar uma nova operação.\n");
                                        printf("    2. Menu principal.\n\n");
                                        printf("    Entre com um valor listado acima: ");
                                        scanf("%d", &home);
                                            if(home < 1 || home > 2){
                                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                                system("cls"); //Responsável por limpar a tela.
                                                printf("\n    Esta não é uma opção válida.\n");
                                                printf("    Retornando ao menu proposicional.....");
                                                delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu proposicional.
                                                system("cls"); //Responsável por limpar a tela.
                                                goto menuProposicional; //Retorna ao menu proposicional.

                                            } else if (home == 1) { //Opcao 1 retorna ao menu proposicional.
                                                system("cls");
                                                goto menuProposicional;

                                            } else {
                                                system("cls");
                                                goto menuprincipal;
                                            }
                                } //Fim do ELSE do CASE 1(valorProposicional).
                            break; //Break do case 1 do Switch(valorProposicional).

                            case 2: //Opcao 2 proposicional
                                printf("\n\t - ~Q -\n\n");
                                printf("    Entre com um valor para Q, sendo 0 para FALSO ou 1 para VERDADEIRO: ");
                                scanf("%d", &calcular1);
                                    if(calcular1 < 0 || calcular1 > 1){
                                        fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu de lógica proposicional.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuProposicional; //Retorna ao menu somatório.

                                    } else {
                                        negacaoQ(calcular1); //Chamada da função do arquivo functions.h para realizar a operação.
                                        printf("    1. Realizar uma nova operação.\n");
                                        printf("    2. Menu principal.\n\n");
                                        printf("    Entre com um valor listado acima: ");
                                        scanf("%d", &home);
                                            if(home < 1 || home > 2){
                                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                                system("cls"); //Responsável por limpar a tela.
                                                printf("\n    Esta não é uma opção válida.\n");
                                                printf("    Retornando ao menu proposicional.....");
                                                delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu proposicional.
                                                system("cls"); //Responsável por limpar a tela.
                                                goto menuProposicional; //Retorna ao menu proposicional.

                                            } else if (home == 1) { //Opcao 1 retorna ao menu proposicional.
                                                system("cls");
                                                goto menuProposicional;

                                            } else {
                                                system("cls");
                                                goto menuprincipal;
                                            }
                                    } //Fim do ELSE do CASE 2(valorProposicional).
                            break; //Break do case 2 do Switch(valorProposicional).

                            case 3:
                                printf("\n\t - P ^ Q -\n\n");
                                printf("    Entre com um valor para P, sendo 0 para FALSO ou 1 para VERDADEIRO: ");
                                scanf("%d", &calcular1);
                                printf("    Entre com um valor para Q, sendo 0 para FALSO ou 1 para VERDADEIRO: ");
                                scanf("%d", &calcular2);
                                    if(calcular1 < 0 || calcular2 < 0 || calcular1 > 1 || calcular2 > 1){
                                        fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é um opção válida.\n");
                                        printf("    Retornando ao menu de lógica proposicional.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuProposicional; //Retorna ao menu somatório.

                                    } else {
                                        PeQ(calcular1, calcular2); //Chamada da função do arquivo functions.h para realizar a operação.
                                        printf("    1. Realizar uma nova operação.\n");
                                        printf("    2. Menu principal.\n\n");
                                        printf("    Entre com um valor listado acima: ");
                                        scanf("%d", &home);
                                            if(home < 1 || home > 2){
                                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                                system("cls"); //Responsável por limpar a tela.
                                                printf("\n    Esta não é uma opção válida.\n");
                                                printf("    Retornando ao menu proposicional.....");
                                                delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu proposicional.
                                                system("cls"); //Responsável por limpar a tela.
                                                goto menuProposicional; //Retorna ao menu proposicional.

                                            } else if (home == 1) { //Opcao 1 retorna ao menu proposicional.
                                                system("cls");
                                                goto menuProposicional;

                                            } else {
                                                system("cls");
                                                goto menuprincipal;
                                            }
                                    } //Fim do ELSE do CASE 3 (valorProposicional).
                            break; //Break do case 3 do Switch(valorProposicional).

                            case 4:
                                printf("\n\t - P v Q -\n\n");
                                printf("    Entre com um valor para P, sendo 0 para FALSO ou 1 para VERDADEIRO: ");
                                scanf("%d", &calcular1);
                                printf("    Entre com um valor para Q, sendo 0 para FALSO ou 1 para VERDADEIRO: ");
                                scanf("%d", &calcular2);
                                    if(calcular1 < 0 || calcular2 < 0 || calcular1 > 1 || calcular2 > 1){
                                        fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é um opção válida.\n");
                                        printf("    Retornando ao menu de lógica proposicional.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuProposicional; //Retorna ao menu somatório.

                                    } else {
                                        PouQ(calcular1, calcular2); //Chamada da função do arquivo functions.h para realizar a operação.
                                        printf("    1. Realizar uma nova operação.\n");
                                        printf("    2. Menu principal.\n\n");
                                        printf("    Entre com um valor listado acima: ");
                                        scanf("%d", &home);
                                            if(home < 1 || home > 2){
                                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                                system("cls"); //Responsável por limpar a tela.
                                                printf("\n    Esta não é uma opção válida.\n");
                                                printf("    Retornando ao menu proposicional.....");
                                                delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu proposicional.
                                                system("cls"); //Responsável por limpar a tela.
                                                goto menuProposicional; //Retorna ao menu proposicional.

                                            } else if (home == 1) { //Opcao 1 retorna ao menu proposicional.
                                                system("cls");
                                                goto menuProposicional;

                                            } else {
                                                system("cls");
                                                goto menuprincipal;
                                            }
                                    } //Fim do ELSE do CASE 4 (valorProposicional).
                            break; //Break do case 4 do Switch(valorProposicional).

                            case 5:
                                printf("\n\t - P _v_ Q -\n\n");
                                printf("    Entre com um valor para P, sendo 0 para FALSO ou 1 para VERDADEIRO: ");
                                scanf("%d", &calcular1);
                                printf("    Entre com um valor para Q, sendo 0 para FALSO ou 1 para VERDADEIRO: ");
                                scanf("%d", &calcular2);
                                    if(calcular1 < 0 || calcular2 < 0 || calcular1 > 1 || calcular2 > 1){
                                        fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é um opção válida.\n");
                                        printf("    Retornando ao menu de lógica proposicional.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuProposicional; //Retorna ao menu somatório.

                                    } else {
                                        PououQ(calcular1, calcular2);//Chamada da função do arquivo functions.h para realizar a operação.
                                        printf("    1. Realizar uma nova operação.\n");
                                        printf("    2. Menu principal.\n\n");
                                        printf("    Entre com um valor listado acima: ");
                                        scanf("%d", &home);
                                            if(home < 1 || home > 2){
                                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                                system("cls"); //Responsável por limpar a tela.
                                                printf("\n    Esta não é uma opção válida.\n");
                                                printf("    Retornando ao menu proposicional.....");
                                                delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu proposicional.
                                                system("cls"); //Responsável por limpar a tela.
                                                goto menuProposicional; //Retorna ao menu proposicional.

                                            } else if (home == 1) { //Opcao 1 retorna ao menu proposicional.
                                                system("cls");
                                                goto menuProposicional;

                                            } else {
                                                system("cls");
                                                goto menuprincipal;
                                            }
                                    } //Fim do ELSE do CASE 5 (valorProposicional).
                            break; //Break do case 5 do Switch(valorProposicional).

                            case 6:
                                printf("\n\t - P -> Q -\n\n");
                                printf("    Entre com um valor para P, sendo 0 para FALSO ou 1 para VERDADEIRO: ");
                                scanf("%d", &calcular1);
                                printf("    Entre com um valor para Q, sendo 0 para FALSO ou 1 para VERDADEIRO: ");
                                scanf("%d", &calcular2);
                                    if(calcular1 < 0 || calcular2 < 0 || calcular1 > 1 || calcular2 > 1){
                                        fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é um opção válida.\n");
                                        printf("    Retornando ao menu de lógica proposicional.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuProposicional; //Retorna ao menu somatório.

                                    } else {
                                        PimplicaQ(calcular1, calcular2); //Chamada da função do arquivo functions.h para realizar a operação.
                                        printf("    1. Realizar uma nova operação.\n");
                                        printf("    2. Menu principal.\n\n");
                                        printf("    Entre com um valor listado acima: ");
                                        scanf("%d", &home);
                                            if(home < 1 || home > 2){
                                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                                system("cls"); //Responsável por limpar a tela.
                                                printf("\n    Esta não é uma opção válida.\n");
                                                printf("    Retornando ao menu proposicional.....");
                                                delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu proposicional.
                                                system("cls"); //Responsável por limpar a tela.
                                                goto menuProposicional; //Retorna ao menu proposicional.

                                            } else if (home == 1) { //Opcao 1 retorna ao menu proposicional.
                                                system("cls");
                                                goto menuProposicional;

                                            } else {
                                                system("cls");
                                                goto menuprincipal;
                                            }
                                    } //Fim do ELSE do CASE 6 (valorProposicional).
                            break; //Break do case 6 do Switch(valorProposicional).

                            case 7:
                                printf("\n\t - P <-> Q -\n\n");
                                printf("    Entre com um valor para P, sendo 0 para FALSO ou 1 para VERDADEIRO: ");
                                scanf("%d", &calcular1);
                                printf("    Entre com um valor para Q, sendo 0 para FALSO ou 1 para VERDADEIRO: ");
                                scanf("%d", &calcular2);
                                    if(calcular1 < 0 || calcular2 < 0 || calcular1 > 1 || calcular2 > 1){
                                        fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é um opção válida.\n");
                                        printf("    Retornando ao menu de lógica proposicional.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuProposicional; //Retorna ao menu somatório.

                                    } else {
                                        PretornaQ(calcular1, calcular2); //Chamada da função do arquivo functions.h para realizar a operação.
                                        printf("    1. Realizar uma nova operação.\n");
                                        printf("    2. Menu principal.\n\n");
                                        printf("    Entre com um valor listado acima: ");
                                        scanf("%d", &home);
                                            if(home < 1 || home > 2){
                                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                                system("cls"); //Responsável por limpar a tela.
                                                printf("\n    Esta não é uma opção válida.\n");
                                                printf("    Retornando ao menu proposicional.....");
                                                delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu proposicional.
                                                system("cls"); //Responsável por limpar a tela.
                                                goto menuProposicional; //Retorna ao menu proposicional.

                                            } else if (home == 1) { //Opcao 1 retorna ao menu proposicional.
                                                system("cls");
                                                goto menuProposicional;

                                            } else {
                                                system("cls");
                                                goto menuprincipal;
                                            }
                                    } //Fim do ELSE do CASE 7 (valorProposicional).
                            break; //Break do case 7 do Switch(valorProposicional).

                            default:
                                system("cls");
                                goto menuprincipal; //Opcao 5 do menu somatório, retorna ao menuprincipal.

                        } //Fim so Switch Proposicional.
                    } //Fim do ELSE do menuProposicional.

            break; //Break do case 2 SWITCH(HOME).

            case 3:
                menuCombinatorio: //Menu da analise combinatória.
                printf("\n\t\t-- ANÁLISE COMBINATÓRIA --\n\n");
                printf("    1. Permutação Simples: P(n)\n");
                printf("    2. Arranjo Simples: A(n,k)\n");
                printf("    3. Combinação Simples: C(n,k)\n");
                printf("    4. Arranjo com Repetição: AR(n,k)\n");
                printf("    5. Combinação com Repetição: CR(n,k)\n");
                printf("    6. Permutação com Repetição: P(n,k1,...,kp)\n");
                printf("    7. Voltar ao menu anterior\n\n");
                printf("    Digite a opção desejada: ");
                scanf("%d", &valorCombinatorio);
                    if (valorCombinatorio < 1 || valorCombinatorio > 7){
                        fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                        system("cls"); //Responsável por limpar a tela.
                        printf("\n    Esta não é um opção válida.\n");
                        printf("    Retornando ao menu de análise combinatória.....");
                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu Combinatório.
                        system("cls"); //Responsável por limpar a tela.
                        goto menuCombinatorio; //Retorna ao menu Combinatório.

                    } else {

                        system("cls"); //Responsável por limpar a tela.

                        switch (valorCombinatorio){

                            case 1: //Opcao 1 da analise combinatória.
                                printf("\n      - Permutação Simples: P(n) -\n\n");
                                printf("    Entre com um valor POSITIVO para N: ");
                                scanf("%d", &calcular1);
                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.

                                    if (calcular1 < 0){
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu de análise combinatória.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuCombinatorio; //Retorna ao menu somatório.
                                    } else {
                                        Psimples(calcular1);//Chamada da função do arquivo functions.h para realizar a operação.
                                    } // Lógica if else para que o usuário não entre com o um valor negativo.

                                printf("    1. Realizar uma nova operação.\n");
                                printf("    2. Menu principal.\n\n");
                                printf("    Entre com um valor listado acima: ");
                                scanf("%d", &home);
                                    if(home < 1 || home > 2){
                                        fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu de análise combinatória.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuCombinatorio; //Retorna ao menu somatório.
                                    } else if (home == 1) { //Opcao 1 retorna ao menu somátorio
                                        system("cls");
                                        goto menuCombinatorio;

                                    } else {
                                        system("cls");
                                        goto menuprincipal;
                                    }
                            break; //break case 1 SWITCH(menuCombinatorio).

                            case 2: //Opcao 2 do menuCombinatorio.
                                printf("\n      - Arranjo Simples: A(n,k) -\n\n");
                                printf("    Entre com um valor POSITIVO para N: ");
                                scanf("%d", &calcular1);
                                printf("    Entre com um valor POSITIVO para K: ");
                                scanf("%d", &calcular2);

                                    if (calcular1 < calcular2){
                                        fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                        system("cls");
                                        printf("\n    Desculpe. O valor de N tem que ser MAIOR ou IGUAL o de K.\n");
                                        printf("    Retornando ao menu de análise combinatória.....");
                                        delay(3);
                                        system("cls");
                                        goto menuCombinatorio;

                                    } else if (calcular1 < 0 || calcular2 < 0){
                                        fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu de análise combinatória.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuCombinatorio; //Retorna ao menu somatório.

                                    } else {
                                        Asimples(calcular1, calcular2); //Chamada da função do arquivo functions.h para realizar a operação.
                                    }//Lógica if else para usuário não entrar com um valor menor que que N e para menor que 0.

                                printf("    1. Realizar uma nova operação.\n");
                                printf("    2. Menu principal.\n\n");
                                printf("    Entre com um valor listado acima: ");
                                scanf("%d", &home);
                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                    if(home < 1 || home > 2){
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu de análise combinatória.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuCombinatorio; //Retorna ao menu somatório.
                                    } else if (home == 1) { //Opcao 1 retorna ao menu somátorio
                                        system("cls");
                                        goto menuCombinatorio;

                                    } else {
                                        system("cls");
                                        goto menuprincipal;
                                    }
                            break; //break case 2 SWITCH(menuCombinatorio).

                            case 3: //Opcao 3 do menuCombinatorio.
                                printf("\n      - Combinação Simples: C(n,k) -\n\n");
                                printf("    Entre com um valor POSITIVO para N: ");
                                scanf("%d", &calcular1);
                                printf("    Entre com um valor POSITIVO para K: ");
                                scanf("%d", &calcular2);
                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.

                                    if (calcular1 < calcular2){
                                        system("cls");
                                        printf("\n    Desculpe. O valor de N tem que ser MAIOR ou IGUAL o de K.\n");
                                        printf("    Retornando ao menu de análise combinatória.....");
                                        delay(3);
                                        system("cls");
                                        goto menuCombinatorio;

                                    } else if (calcular1 < 0 || calcular2 < 0) {
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu de análise combinatória.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuCombinatorio; //Retorna ao menu somatório.

                                    } else {
                                        Csimples(calcular1, calcular2); //Chamada da função do arquivo functions.h para realizar a operação.
                                    } //Lógica if else para usuário não entrar com um valor menor que que N e para menor que 0.

                                printf("    1. Realizar uma nova operação.\n");
                                printf("    2. Menu principal.\n\n");
                                printf("    Entre com um valor listado acima: ");
                                scanf("%d", &home);
                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                    if(home < 1 || home > 2){
                                        fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu de análise combinatória.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuCombinatorio; //Retorna ao menu somatório.
                                    } else if (home == 1) { //Opcao 1 retorna ao menu somátorio
                                        system("cls");
                                        goto menuCombinatorio;

                                    } else {
                                        system("cls");
                                        goto menuprincipal;
                                    }
                            break; //break case 3 SWITCH(menuCombinatorio).

                            case 4: //Opcao 4 do menuCombinatorio.
                                printf("\n      - Arranjo com Repetição: AR(n,k) -\n\n");
                                printf("    Entre com um valor POSITIVO para N: ");
                                scanf("%d", &calcular1);
                                printf("    Entre com um valor POSITIVO para K: ");
                                scanf("%d", &calcular2);
                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.

                                    if(calcular1 < 0 || calcular2 < 0){
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu de análise combinatória.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                    } else {
                                        Arepeticao(calcular1, calcular2); //Chamada da função do arquivo functions.h para realizar a operação.
                                    }

                                printf("    1. Realizar uma nova operação.\n");
                                printf("    2. Menu principal.\n\n");
                                printf("    Entre com um valor listado acima: ");
                                scanf("%d", &home);
                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                    if(home < 1 || home > 2){
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu de análise combinatória.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuCombinatorio; //Retorna ao menu somatório.
                                    } else if (home == 1) { //Opcao 1 retorna ao menu somátorio
                                        system("cls");
                                        goto menuCombinatorio;

                                    } else {
                                        system("cls");
                                        goto menuprincipal;
                                    }
                            break; //break case 4 SWITCH(menuCombinatorio).

                            case 5: //Opcao 5 do menuCombinatorio.
                                printf("\n      - Combinação com Repetição: CR(n,k) -\n\n");
                                printf("    Entre com um valor POSITIVO para N: ");
                                scanf("%d", &calcular1);
                                printf("    Entre com um valor POSITIVO para K: ");
                                scanf("%d", &calcular2);
                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.

                                    if (calcular1 < 0 || calcular2 < 0){
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu de análise combinatória.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuCombinatorio; //Retorna ao menu somatório.
                                    } else {
                                        Crepeticao(calcular1, calcular2); //Chamada da função do arquivo functions.h para realizar a operação.
                                    } // Lógica para usuário não entrar com um valor < 0.

                                printf("    1. Realizar uma nova operação.\n");
                                printf("    2. Menu principal.\n\n");
                                printf("    Entre com um valor listado acima: ");
                                scanf("%d", &home);
                                    if(home < 1 || home > 2){
                                        fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu de análise combinatória.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuCombinatorio; //Retorna ao menu somatório.
                                    } else if (home == 1) { //Opcao 1 retorna ao menu somátorio
                                        system("cls");
                                        goto menuCombinatorio;

                                    } else {
                                        system("cls");
                                        goto menuprincipal;
                                    }
                            break; //break case 5 SWITCH(menuCombinatorio).

                            case 6: //Opcao 6 do menuCombinatorio.
                                printf("\n      - Permutação com Repetição: P(n,k1,...,kp) -\n\n");
                                printf("    Entre com a quantidade de elementos (N): ");
                                scanf("%d", &calcular1);
                                printf("\n    Entre com a quantidade de elementos que se repetem: ");
                                scanf("%d", &calcular2);
                                fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.

                                    if (calcular1 < 0 || calcular2 < 0){
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu de análise combinatória.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuCombinatorio; //Retorna ao menu somatório.
                                    } else {
                                        Prepeticao(calcular1, calcular2); //Chamada da função do arquivo functions.h para realizar a operação.
                                    } // Lógica para usuário não entrar com um valor < 0.

                                printf("    1. Realizar uma nova operação.\n");
                                printf("    2. Menu principal.\n\n");
                                printf("    Entre com um valor listado acima: ");
                                scanf("%d", &home);
                                    if(home < 1 || home > 2){
                                        fflush(stdin); //Serve para limpar o buffer, caso o usuário entre com uma letra ao inves de numero, evitando crash.
                                        system("cls"); //Responsável por limpar a tela.
                                        printf("\n    Esta não é uma opção válida.\n");
                                        printf("    Retornando ao menu de análise combinatória.....");
                                        delay(3); //Deley de 3 segundos para o usuário ler a mensagem, limpar a tela e retornar ao menu somatório.
                                        system("cls"); //Responsável por limpar a tela.
                                        goto menuCombinatorio; //Retorna ao menu somatório.
                                    } else if (home == 1) { //Opcao 1 retorna ao menu somátorio
                                        system("cls");
                                        goto menuCombinatorio;

                                    } else {
                                        system("cls");
                                        goto menuprincipal;
                                    }
                            break; //break case 6 SWITCH(menuCombinatorio).

                            default:
                                system("cls");
                                goto menuprincipal;

                        } //Fim do SWITCH(valorCombinatorio).
                    } //Fim do ELSE do menuCombinatorio.
            break; //Break do CASE 3 SWITCH(HOME).

            default:
                system("cls");
                printf("\n\tObrigado por usar nossa calculadora. Até a próxima !\n\n\n");
                delay(3);
                exit(0);

        } // Aqui encerra o SWITCH(HOME) depois do MENUPRINCIPAL.
    } //Aqui encerra o ELSE do MENUPRINCIPAL.

    return 0;
}
