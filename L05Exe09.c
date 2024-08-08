#include <stdio.h>


int main (){

    const char RESPOSTAS = 10;
    int alunos[60], numero[60], nota, aprov, totalA = 0; 
    char respostaA[10][20], qst[RESPOSTAS];
    float porct;

    printf("Digite as respostas do gabarito......:");
    for(int i = 0; i<RESPOSTAS; i++) {
        printf("[%d]-:\n", (i + 1));
        scanf("%s", qst[i]);
    }
    printf("Digite o total de alunos...: ");
    scanf("%d", &alunos[0]);

    for (int i = 0; i < alunos[0]; i++){
        printf("Digite o número do aluno...:\n",  i++);
        printf("Aluno nº %d .....", numero[i]);
        scanf("%d", &numero[i]);
        printf("Digite as respostas do aluno\n");
        scanf("%s", respostaA[i]);
    }
    for (int i = 0; i < alunos[0]; i++){
        nota = 0;
        for(int j = 0; j < RESPOSTAS; j++){
            if (qst[j] == respostaA[i][j]){
                nota++;
            }
        }
        if (nota > 6){
            aprov++;
        }
        printf("Aluno %d sua nota foi de %d\n", numero[i], nota);
    }
    totalA += aprov;
    porct = (float) totalA*100 / alunos[0];

    printf("A porcentagem de aprovação foi de %f", porct);

    return 0;
}
