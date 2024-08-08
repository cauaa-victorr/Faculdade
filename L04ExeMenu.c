#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main (){

    int menu;

    	do {
		printf("\t\t**M E N U DE E X E R C I C I O S**\n\n");
		printf(" *1* Exe01\n");
		printf(" *2* Exe02\n");
		printf(" *3* Exe16\n");
		printf(" *4* Exe21\n");
		printf(" *5* Exe24\n");
        printf(" *6* Exe51\n");
        printf(" *7* Sair\n");
		printf(" Opcao-->  ");
		scanf("%d", &menu);

        switch(menu){
			case 1:{
                    int idade, menor21, idade50, pessoas, idade21;
                    char nome[25];
                    float peso, mediaId, mediaPeso, somaId, peso50;

                    printf("Digite a idade p/ continuar ou -1 para finalizar... ");
                    scanf("%d", &idade);

                    while( idade != -1){
                        printf("Digite seu nome:\n");
                        scanf("%s", nome);
                        printf("Digite o peso:\n");
                        scanf("%f", &peso);

                        if (idade <= 21){
                            menor21++;
                        }
                        if (idade >= 50){
                            idade50++;
                            peso50++;
                        }
                        mediaPeso = idade50/peso;
                        idade++;
                        idade += pessoas;
                        somaId += idade;
                        menor21 += idade21;

                        printf("Digite a idade p/ continuar ou -1 para finalizar... ");
                        scanf("%d", &idade);

                    }
                    mediaId = somaId/pessoas;
                    mediaPeso = idade50/peso50;

                    printf("O toltal de pessoas com 21 anos eh de %d\n", idade21);
                    printf("A media das idades sao de %.1f\n", mediaId);
                    printf("O peso media das pessoas de 50 anos eh de %.1f\n", mediaPeso);
                    break;
            }
            case 2:{
                    int conta, clienteM;
                    char cliente[100];
                    float saldo, porct;

                    printf("\nOla, digite o numero da sua conta p/ continuar ou -10 p/ finalizar \n");
                    scanf("%d", &conta);

                    while(conta != -10){
                        printf("Digite seu nome:__________\n");
                        scanf("%s", cliente);
                        printf("Digite o seu saldo: R$______\n");
                        scanf("%f", &saldo);

                        conta++;

                        if (saldo >= 500){
                            printf("%s voce eh Cliente Vip\n", cliente);
                        }
                        if (saldo >=100 && saldo <=200){
                            clienteM++;
                        }

                
                        porct = clienteM*0.1;

                        printf("\nOla, digite o numero da sua conta p/ continuar ou -10 p/ finalizar \n");
                        scanf("%d", &conta);

                    }

                       printf("O percentual de pessoas com saldo entre R$ 100 e 200 eh de %.2f\n", porct);
                       break;
            }
            case 3:{
                    int tipoT, codigo, nPulsos, nDesp;
                    char nome [100];
                    float totalC1, totalC2, somaT1 =0, somaT2 = 0, media1, media2;

                    printf("Olá, digite o codigo da sua assinatura ou 0 para finalizar:\n");
                    scanf("%d", &codigo);

                    while(codigo != 0){
                        printf("Olá, digite seu nome:.......\n");
                        scanf("%s", nome);
                        printf("Informe o tipo da sua linha telefonica:\n");
                        printf("Codigo 1 - Telefone Residencial\n");
                        printf("codigo 2 - Telefone Comercial\n");
                        scanf("%d", &tipoT);
                        printf("Informe o número de pulsos para chamadas locais:\n");
                        scanf("%d", &nPulsos);
                        printf("Informe a quantidade do serviço de despertador:\n");
                        scanf("%d", &nDesp);

                        if (tipoT == 1){
                            totalC1 = 23.00 + nPulsos * 0.10 + nDesp * 0.47;
                            totalC1++;
                            printf("%s o total da sua conta de R$ %.2f\n", nome, totalC1);
                        }
                        if (tipoT == 2){
                            totalC2 = 30.00 + nPulsos * 0.10 + nDesp * 0.47;
                            totalC2++;    
                            printf("%s o total da sua conta eh de R$ %.2f\n", nome, totalC2);
                        }
                        printf("Olá, digite o codigo da sua assinatura ou 0 para finalizar:\n");
                        scanf("%d", &codigo);
                    }
                    somaT1 += totalC1;
                    somaT2 += totalC1;
                    media1 = somaT1/30;
                    media2 = somaT2/30;



                    printf("O valor arrecado em media por mes do Tipo 1 um eh de %.2f\n", media1);
                    printf("O valor arrecado em media por mes do Tipo 2 um eh de %.2f\n", media2);
                    break;
            }
            case 4:{
                    int codigo;
                    float valor, totalCod, valor1, valor2, valor3;
                    float valorT1, valorT2, valorT3;

                    printf("\n  Olá digite o código da mercadoria desejada, ou 0 para finalizar. \n");
                    printf("Codigo 1 para limpeza\n");
                    printf("Codigo 2 para alimentação\n");
                    printf("Codigo 3 para higiene\n");
                    scanf("%d", &codigo);

                    while(codigo != 0){
                        if(codigo == 1){
                            printf("digite o valor do produto: R$__");
                            scanf("%f", &valor1);
                            valor1++;
                            valorT1 += valor1;
                        }
                        if (codigo == 2){
                            printf("digite o valor do produto: R$__");
                            scanf("%f", &valor2);
                            valor2++;
                            valorT2 += valor2;            
                        }
                        if(codigo == 3){
                            printf("digite o valor do produto: R$__");
                            scanf("%f", &valor3);
                            valor3++;
                            valorT3 += valor3;

                        }
                        totalCod = valorT1 + valorT2 + valorT3;

                        printf("\n  Olá digite o código da mercadoria desejada, ou 0 para finalizar. \n");
                        printf("Codigo 1 para limpeza\n");
                        printf("Codigo 2 para alimentação\n");
                        printf("Codigo 3 para higiene\n");
                        scanf("%d", &codigo);
                    } 

                    printf("O total vendido de todas as mercadoria eh de R$ %.2f\n", totalCod);
                    printf("O total vendido na mercadoria de limpeza foi de R$ %.2f\n", valor1);
                    printf("O total vendido na mercadoria de alimentção foi de R$ %.2f\n", valor2);
                    printf("O total vendido na mercadoria de higiene foi de R$ %.2f\n", valor3);
                    break;
            }
            case 5:{
                    int raca, brancas = 0, pretas = 0, qtdPess = 0, idade, idadeI;
                    int somaBr = 0, somaPr = 0, indigenas = 0, somaIn = 0, somaIdI = 0;
                    float porcentoP, mediaInd;

                    for (int i = 0; i <= 10; i++){
                        
                        printf("Digite sua idade:\n");
                        scanf("%d", &idade);
                        printf("Digite sua raça:\n");
                        printf("B para Pessoas Brancas.\n");
                        printf("P para pessoas pretas.\n");
                        printf("I para pessoas indigenas.\n");
                        scanf(" %c", &raca);


                        if (raca == 'B'){
                            brancas++;
                        }
                        if (raca == 'P'){
                            pretas++;

                        }
                        if (raca == 'I'){
                            indigenas++;
                            idadeI++;
                        
                        }


                    } 
                        somaBr += brancas;
                        somaPr += pretas;
                        porcentoP = somaPr*100 / 10;
                        somaIn += indigenas;
                        somaIdI += idadeI;
                        mediaInd = somaIdI/indigenas;

                    printf("A Quantidade de pessoas Brancas eh de %d\n", somaBr);
                    printf("A porcentagem de pessoas Pretas eh de %.2f\n", porcentoP);
                    printf("A media da idade das pessoas indigenas eh de %.2f\n", mediaInd);
                    break;
            }
            case 6:{
                    float bt, kb, mb, gb, tb,pb, hb;
                    double graos = 1, somaG = 0.01, pesoT = 0;

                    for(int i = 1; i < 65; i++){
                        pesoT += graos * somaG / 100000;
                        graos *= 2;
                        
                        printf("Qtd na casa %d __________________ %3f\n", i, graos*i);
                        

                    }
                    printf("\n\nTotal do pagamento do monge: %3f\n\n\n", pesoT);

                    bt = pesoT/8;
                    kb = pesoT/1024;
                    mb = pesoT/1048576;
                    gb = pesoT/1073741824;
                    tb = pesoT/1099511627776;
                    pb = pesoT/1125899906842624;
                    hb = pesoT/1152921504606846976;

                    printf("\n\nPagamento do NERD:\n");
                    printf("%f             bytes\n", bt);
                    printf("  %f            kb\n", kb);
                    printf("    %f          mb\n", mb);
                    printf("      %f        gb\n", gb);
                    printf("        %f      tb\n", tb);
                    printf("          %f    pb\n", pb);
                    printf("            %f  hexabytes\n", hb);

                    printf("Pagamento TRABALHOR\n\n");
                    printf("%f       Reais\n", pesoT/1);
                    printf("%f       Mil reias\n", pesoT/1000);
                    printf("%f       Milhoes de reias\n", pesoT/1000000);
                    printf("%f       Bilhoes de reias\n", pesoT/1000000000);
                    printf("%f       Trilhoes de reias\n", pesoT/1000000000000);
                    printf("%f       Quadrilhoes de reais\n", pesoT/1000000000000000);
                    break;
            }
            case 7:
                    printf("\n\nObrigado!!!\n\n");
				    break;
            default:
				printf("\n\nOpcao inexistente\n\n");
        }
    }while(menu != 7);
    printf("FIM");
                   


}
