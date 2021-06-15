/*
    - Todos os cálculos realizados dentro do arquivo main.c estão neste arquivo. -
*/

//Função apenas designada para gerar um tempo no código.
void delay(int number_of_seconds)
{
    // converte tempo em milisegundos
    int milli_seconds = 1000 * number_of_seconds;

    // guardando o horário real
    clock_t start_time = clock();

    // faz o loop até chegar no horário programado.
    while (clock() < start_time + milli_seconds);
}

//Função designada apenas para fazer os calcúlos fatoriais, tornando assim o códgio mais enxuto possível.
double funcaoFatorial (double valor)
{
    double fatorial = 1;

    for(valor; valor >= 1; --valor){
        fatorial *= valor;

    }
    return(fatorial);
}

//--------------------------------------------------------------------------//

//Início das funções das lógicas proposicionais.

//Função designada para a lógica de ~P.
int negacaoP(int valor)
{
    switch(valor){

        case 0:
            valor = 1;
        break;

        default:
            valor = 0;
        break;
    }
    return(printf(valor == 1 ? "\n\n   O resultado de ~P é: 1 - VERDADE\n\n" : "\n\n   O resultado de ~P é: 0 - FALSO\n\n"));
}

//Função designada para a lógica de ~Q.
int negacaoQ(int valor)
{
    switch(valor){

        case 0:
            valor = 1;
        break;

        default:
            valor = 0;
        break;
    }
    return(printf(valor == 1 ? "\n\n   O resultado de ~Q é: 1 - VERDADE\n\n" : "\n\n   O resultado de ~Q é: 0 - FALSO\n\n"));
}

//Função designada para a lógica de P^Q.
int PeQ(int valor1, int valor2)
{
    int valor;
    if (valor1 != 1 || valor2 != 1){
        valor = 0;

    } else {
        valor = 1;

    }
    return(printf(valor == 1 ? "\n\n    O resultado de P ^ Q é: 1 - VERDADE\n\n" : "\n\n    O resultado de P ^ Q é: 0 - FALSO\n\n"));
}

//Função designada para a lógica de PvQ.
int PouQ(int valor1, int valor2)
{
    int valor;
    if (valor1 != 0 || valor2 != 0){
        valor = 1;

    } else {
        valor = 0;

    }
    return(printf(valor == 1 ? "\n\n    O resultado de P v Q é: 1 - VERDADE\n\n" : "\n\n    O resultado de P v Q é: 0 - FALSO\n\n"));
}

//Função designada para a lógica de P_v_Q (ou exclusivo).
int PououQ(int valor1, int valor2)
{
    int valor;
    if(valor1 == valor2){
        valor = 0;

    } else {
        valor = 1;

    }
    return(printf(valor == 1 ? "\n\n    O resultado de P _v_ Q é: 1 - VERDADE\n\n" : "\n\n    O resultado de P _v_ Q é: 0 - FALSO\n\n"));
}

//Função designada para a lógica de P->Q.
int PimplicaQ(int valor1, int valor2)
{
    int valor;
    if(valor1 == 1 && valor2 == 0){
        valor = 0;

    } else {
        valor = 1;

    }
    return(printf(valor == 1 ? "\n\n    O resultado de P -> Q é: 1 - VERDADE\n\n" : "\n\n    O resultado de P -> Q é: 0 - FALSO\n\n"));
}

//Função designada para a lógica de P<->Q.
int PretornaQ(int valor1, int valor2)
{
    int valor;
    if(valor1 != valor2){
        valor = 0;

    } else {
        valor = 1;

    }
    return(printf(valor == 1 ? "\n\n    O resultado de P <-> Q é: 1 - VERDADE\n\n" : "\n\n    O resultado de P <-> Q é: 0 - FALSO\n\n"));

}
// Fim das funções de lógicas proposicionais.

// Inicio das funcoes para menu SOMATÓRIO.

//Função designada para o Somatório de J = 0 até N para a regra J.
int somatorioOne(int valor)
{
    int soma;

    for (int j = 0; j <= valor; ++j){
        soma += j;

    }
    return(printf("\n    O resultado do somatório é: %d\n\n", soma));
}

//Função designada para o Somatório de J = 0 até N para a regra (-J)^(J + 1)
int somatorioTwo(int valor)
{
    int soma;

    for(int j = 0; j <= valor; ++j){
        soma += pow(-j, (j+1));

    }
    return(printf("\n    O resultado do somatório é: %d\n\n", soma));

}

//Função designada para a aproximação do número pi com somatório até N.
int somatorioThree(int valor)
{
    double soma, j;


    for (j; j <= valor; ++j){
        soma += 8/((4*j+1)*(4*j+3));

    }
    return(printf("\n    A aproximação do número PI é: %lf...\n\n", soma));
}

//Função designada para a aproximação do NEPERIANO por somatório até N
int somatorioFour(double valor)
{
    double soma, fatorial, k;

    for (double j = 0; j <= valor; ++j){
        k = j; // k é uma variavel "Auxiliar" que recebe o valor J para poder fazer a lógica do fatorial, sendo assim, nao substituindo o valor real de J.
        for (fatorial = 1; k >= 1; --k){
            fatorial *= k;
        }
        soma += (1/fatorial);
    }
    return(printf("\n    A aproximação do número NEPERIANO é: %lf...\n\n", soma));
}
//Fim das funções do menu somatório.

//Inicio das funcoes do menu combinatório.

//Função designada para permutação simples P(n).
int Psimples (double valor)
{
    double fatorial = funcaoFatorial(valor);

    return(printf("\n    O resultado de P(n) é: %.0lf\n\n", fatorial));
}

//Função designada para A(n,k).
int Asimples (double valor1, double valor2)
{
    double resultado = 1;

    if(valor1 > valor2){
        for(resultado; valor1 >= valor2; --valor1){
            resultado *= valor1;

        }//fim for.
    } else {
            resultado = funcaoFatorial(valor1);
    }

    return(printf("\n    O resultado de A(n,k) é: %.0lf\n\n", resultado));
}

//Função designada para C(n,k).
int Csimples (double valor1, double valor2)
{
    double resultado, subtracaoNK;

    subtracaoNK = valor1 - valor2;
    subtracaoNK = funcaoFatorial(subtracaoNK);
    valor1 = funcaoFatorial(valor1);
    valor2 = funcaoFatorial(valor2);
    resultado = valor1 / (valor2 * subtracaoNK);


    return(printf("\n    O resultado de C(n,k) é: %.0lf\n\n", resultado));
}

//Função designada para AR(n,k).
int Arepeticao (double valor1, double valor2)
{
    double resultado;

    resultado = valor1 - valor2;
    valor1 = funcaoFatorial(valor1);
    resultado = funcaoFatorial(resultado);
    resultado = valor1/resultado;

    return(printf("\n    O resultado de AR(n,k) é: %.0lf\n\n", resultado));
}

//Função designada para CR(n,k).
int Crepeticao (double valor1, double valor2)
{
    double resultado, fatorialN, fatorialK;

    fatorialN = valor1 + (valor2 - 1);
    fatorialN = funcaoFatorial(fatorialN);
    fatorialK = funcaoFatorial(valor2) * funcaoFatorial(valor1 - 1);
    resultado = fatorialN / fatorialK;

    return(printf("\n    O resultado de CR(n,k) é: %.0lf\n\n", resultado));
}

//Função designada para permutação com repetição.
int Prepeticao (double valor1, double valor2)
{
    double resultado, i, repLetras, resultadoWhile;

    resultadoWhile = 1;


    for (i = 1; i <= valor2; ++i){
        printf("\n    Entre a quantidade de vezes que o %.0lfº elemento se repete: ", i);
        scanf("%lf", &repLetras);
        resultadoWhile *= funcaoFatorial(repLetras);
    }

    valor1 = funcaoFatorial(valor1);
    resultado = valor1 / resultadoWhile;

    return(printf("\n    O resultado da Permutação é: %.0lf\n\n", resultado));
}
