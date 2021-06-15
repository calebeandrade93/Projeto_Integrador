/*
    - Todos os c�lculos realizados dentro do arquivo main.c est�o neste arquivo. -
*/

//Fun��o apenas designada para gerar um tempo no c�digo.
void delay(int number_of_seconds)
{
    // converte tempo em milisegundos
    int milli_seconds = 1000 * number_of_seconds;

    // guardando o hor�rio real
    clock_t start_time = clock();

    // faz o loop at� chegar no hor�rio programado.
    while (clock() < start_time + milli_seconds);
}

//Fun��o designada apenas para fazer os calc�los fatoriais, tornando assim o c�dgio mais enxuto poss�vel.
double funcaoFatorial (double valor)
{
    double fatorial = 1;

    for(valor; valor >= 1; --valor){
        fatorial *= valor;

    }
    return(fatorial);
}

//--------------------------------------------------------------------------//

//In�cio das fun��es das l�gicas proposicionais.

//Fun��o designada para a l�gica de ~P.
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
    return(printf(valor == 1 ? "\n\n   O resultado de ~P �: 1 - VERDADE\n\n" : "\n\n   O resultado de ~P �: 0 - FALSO\n\n"));
}

//Fun��o designada para a l�gica de ~Q.
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
    return(printf(valor == 1 ? "\n\n   O resultado de ~Q �: 1 - VERDADE\n\n" : "\n\n   O resultado de ~Q �: 0 - FALSO\n\n"));
}

//Fun��o designada para a l�gica de P^Q.
int PeQ(int valor1, int valor2)
{
    int valor;
    if (valor1 != 1 || valor2 != 1){
        valor = 0;

    } else {
        valor = 1;

    }
    return(printf(valor == 1 ? "\n\n    O resultado de P ^ Q �: 1 - VERDADE\n\n" : "\n\n    O resultado de P ^ Q �: 0 - FALSO\n\n"));
}

//Fun��o designada para a l�gica de PvQ.
int PouQ(int valor1, int valor2)
{
    int valor;
    if (valor1 != 0 || valor2 != 0){
        valor = 1;

    } else {
        valor = 0;

    }
    return(printf(valor == 1 ? "\n\n    O resultado de P v Q �: 1 - VERDADE\n\n" : "\n\n    O resultado de P v Q �: 0 - FALSO\n\n"));
}

//Fun��o designada para a l�gica de P_v_Q (ou exclusivo).
int PououQ(int valor1, int valor2)
{
    int valor;
    if(valor1 == valor2){
        valor = 0;

    } else {
        valor = 1;

    }
    return(printf(valor == 1 ? "\n\n    O resultado de P _v_ Q �: 1 - VERDADE\n\n" : "\n\n    O resultado de P _v_ Q �: 0 - FALSO\n\n"));
}

//Fun��o designada para a l�gica de P->Q.
int PimplicaQ(int valor1, int valor2)
{
    int valor;
    if(valor1 == 1 && valor2 == 0){
        valor = 0;

    } else {
        valor = 1;

    }
    return(printf(valor == 1 ? "\n\n    O resultado de P -> Q �: 1 - VERDADE\n\n" : "\n\n    O resultado de P -> Q �: 0 - FALSO\n\n"));
}

//Fun��o designada para a l�gica de P<->Q.
int PretornaQ(int valor1, int valor2)
{
    int valor;
    if(valor1 != valor2){
        valor = 0;

    } else {
        valor = 1;

    }
    return(printf(valor == 1 ? "\n\n    O resultado de P <-> Q �: 1 - VERDADE\n\n" : "\n\n    O resultado de P <-> Q �: 0 - FALSO\n\n"));

}
// Fim das fun��es de l�gicas proposicionais.

// Inicio das funcoes para menu SOMAT�RIO.

//Fun��o designada para o Somat�rio de J = 0 at� N para a regra J.
int somatorioOne(int valor)
{
    int soma;

    for (int j = 0; j <= valor; ++j){
        soma += j;

    }
    return(printf("\n    O resultado do somat�rio �: %d\n\n", soma));
}

//Fun��o designada para o Somat�rio de J = 0 at� N para a regra (-J)^(J + 1)
int somatorioTwo(int valor)
{
    int soma;

    for(int j = 0; j <= valor; ++j){
        soma += pow(-j, (j+1));

    }
    return(printf("\n    O resultado do somat�rio �: %d\n\n", soma));

}

//Fun��o designada para a aproxima��o do n�mero pi com somat�rio at� N.
int somatorioThree(int valor)
{
    double soma, j;


    for (j; j <= valor; ++j){
        soma += 8/((4*j+1)*(4*j+3));

    }
    return(printf("\n    A aproxima��o do n�mero PI �: %lf...\n\n", soma));
}

//Fun��o designada para a aproxima��o do NEPERIANO por somat�rio at� N
int somatorioFour(double valor)
{
    double soma, fatorial, k;

    for (double j = 0; j <= valor; ++j){
        k = j; // k � uma variavel "Auxiliar" que recebe o valor J para poder fazer a l�gica do fatorial, sendo assim, nao substituindo o valor real de J.
        for (fatorial = 1; k >= 1; --k){
            fatorial *= k;
        }
        soma += (1/fatorial);
    }
    return(printf("\n    A aproxima��o do n�mero NEPERIANO �: %lf...\n\n", soma));
}
//Fim das fun��es do menu somat�rio.

//Inicio das funcoes do menu combinat�rio.

//Fun��o designada para permuta��o simples P(n).
int Psimples (double valor)
{
    double fatorial = funcaoFatorial(valor);

    return(printf("\n    O resultado de P(n) �: %.0lf\n\n", fatorial));
}

//Fun��o designada para A(n,k).
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

    return(printf("\n    O resultado de A(n,k) �: %.0lf\n\n", resultado));
}

//Fun��o designada para C(n,k).
int Csimples (double valor1, double valor2)
{
    double resultado, subtracaoNK;

    subtracaoNK = valor1 - valor2;
    subtracaoNK = funcaoFatorial(subtracaoNK);
    valor1 = funcaoFatorial(valor1);
    valor2 = funcaoFatorial(valor2);
    resultado = valor1 / (valor2 * subtracaoNK);


    return(printf("\n    O resultado de C(n,k) �: %.0lf\n\n", resultado));
}

//Fun��o designada para AR(n,k).
int Arepeticao (double valor1, double valor2)
{
    double resultado;

    resultado = valor1 - valor2;
    valor1 = funcaoFatorial(valor1);
    resultado = funcaoFatorial(resultado);
    resultado = valor1/resultado;

    return(printf("\n    O resultado de AR(n,k) �: %.0lf\n\n", resultado));
}

//Fun��o designada para CR(n,k).
int Crepeticao (double valor1, double valor2)
{
    double resultado, fatorialN, fatorialK;

    fatorialN = valor1 + (valor2 - 1);
    fatorialN = funcaoFatorial(fatorialN);
    fatorialK = funcaoFatorial(valor2) * funcaoFatorial(valor1 - 1);
    resultado = fatorialN / fatorialK;

    return(printf("\n    O resultado de CR(n,k) �: %.0lf\n\n", resultado));
}

//Fun��o designada para permuta��o com repeti��o.
int Prepeticao (double valor1, double valor2)
{
    double resultado, i, repLetras, resultadoWhile;

    resultadoWhile = 1;


    for (i = 1; i <= valor2; ++i){
        printf("\n    Entre a quantidade de vezes que o %.0lf� elemento se repete: ", i);
        scanf("%lf", &repLetras);
        resultadoWhile *= funcaoFatorial(repLetras);
    }

    valor1 = funcaoFatorial(valor1);
    resultado = valor1 / resultadoWhile;

    return(printf("\n    O resultado da Permuta��o �: %.0lf\n\n", resultado));
}
