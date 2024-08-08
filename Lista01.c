#include<stdio.h>
#include<Math.h>

int main (){
int idade, anoAtual, anoNascimento, qtdFaltas;
int tempoUso, kmRodado;
float nota1, nota2;
double media;
char nome[20] = "Cauã e Reinaldo", mensagem[] = "Obrigada..";
char sexo;
int aprovado, revisao, maioridade, homem;
anoNascimento = 2003;
nota1=7.5f;
nota2 = 9.1f;
qtdFaltas = 32;
tempoUso = 14;
kmRodado = 52000;
sexo = 'M';
media = (nota1 + nota2)/2.0;
idade = anoAtual - anoNascimento;
maioridade = (idade >= 18);
homem = ( sexo == 'M');
aprovado = (media>= 6) && (qtdFaltas<=25);
revisao = (tempoUso >= 12) || (kmRodado >= 30000);
// saída de dados
printf ("\n\n******** TESTE DAS VARIAVEIS *******");
printf ("\n%s sua media foi %.2f", nome, media) ;
printf ("\nMEDIA: (%.1f + %f = %.2f) ",nota1, nota2, media);
printf ("\nVoce tem %d anos", idade);
printf ("\nMaioridade? (0-N 1-S): %d", maioridade) ;
printf ("\nAprovada? (0-N 1-S) : Sd", aprovado) ;
printf ("\nHomem? (O N 1-S) : %d", homem) ;
printf ("\nRevisao do carro? (O=N 1-S) : %d\n", revisao); 
printf ("%s\n\n mensagem");
printf("******** TESTE DAS OPERACOES ******");
printf ("\nSoma ................ (7 + 3): %d",(7 + 3));
printf ("\nSubtracao ............(3 - 7): %d", (3-7));
printf ("\nMultiplicao...........(7 * 3): %d", (7 * 3));
printf ("\nQuociente Inteiro.....(7 / 3) : %d",(7 / 3));
printf ("\nResto.................(7 % 3): %d",(7%3));
printf ("\nDivisao...........(7 / 3): %.1f",(7.0 / 3.0));
printf ("\nRaiz quadrada........(sgrt (81) ) : %f", sqrt (81));
printf ("\nExponenciacao.......(2 pot 5): %.0f", pow (2,5));
printf("\n*****************************************\n");
printf("  /*\\*/*\\*/*\\ FIM /*\\*/*\\*/*\\\n\n");

return 0;
}

