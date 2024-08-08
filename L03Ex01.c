#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main (){

setlocale( LC_ALL, "portugese");

int qtdA, nAluno;
char aluno[30];
float n1, n2, media;

printf("Qual o total dos alunos\n");
scanf("%d", &qtdA);





    for(qtdA = 1; nAluno <= qtdA; qtdA++){
            printf("Digite o nome do aluno:\n");
            scanf("%s", &aluno);
            printf("Digite as duas notas do aluno:\n");
            scanf("%f%f", &n1, &n2 );
          
          media = (n1+n2)/2;
          
                if(media >= 6){
                    printf("%s foi aprovado!\n", aluno);
    }            else{
                    printf("%s foi reprovado\n", aluno);
    }
        }
        
        
}