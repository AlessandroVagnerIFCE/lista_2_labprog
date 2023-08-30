#include <stdio.h>

//Candidatos:
//5- Paulo
//7- Renata
//0- Voto branco
//Qualquer outro número positivo- Voto nulo
//Número negativo- Encerrar a votação

//O voto deve ser confirmado
//Quando finalizar, deve emitir um relatório contendo as porcentagens de votos
//Contendo as porcentages de cada candidato, nulo e braco, além de mostrar o candidato eleito

int main()
{
    char voto, confirma;
    unsigned int p = 0, r = 0, branco = 0, nulo = 0, total = 0; //Votos de cada candidato

    //Menu de votação
    puts("Insira o número correspondente ao seu voto:");
    puts("5- Paulo");
    puts("7- Renata");
    puts("0- Voto branco");
    puts("Qualquer outro número positivo será considerado voto nulo");
    scanf("%hhd", &voto); //Nesse caso acredito que o scanf() é mais indicado do que o getchar()

    //Processar votos
    while(voto >= 0){ //Isso só funciona com teste no início
        switch(voto){
            case 5:
                puts("Candidato: Paulo");
                puts("Deseja confirmar o seu voto?");
                puts("0- Cancelar o voto");
                puts("1- Confirmar o voto");
                scanf("%hhd", &confirma);
                p = confirma ? p + 1 : p; //Confirmar ou cancelar o voto
                break;
            case 7:
                puts("Candidata: Renata");
                puts("Deseja confirmar o seu voto?");
                puts("0- Cancelar o voto");
                puts("1- Confirmar o voto");
                scanf("%hhd", &confirma);
                r = confirma ? r + 1 : r;
                break;
            case 0:
                puts("Voto Branco");
                puts("Deseja confirmar o seu voto?");
                puts("0- Cancelar o voto");
                puts("1- Confirmar o voto");
                scanf("%hhd", &confirma);
                branco = confirma ? branco + 1 : branco;
                break;
            default:
                puts("Voto Nulo");
                puts("Deseja confirmar o seu voto?");
                puts("0- Cancelar o voto");
                puts("1- Confirmar o voto");
                scanf("%hhd", &confirma);
                nulo = confirma ? nulo + 1 : nulo;
                break;
        }
        
        //Mostrar o menu novamente para dar continuidade ao loop
        puts("Insira o número correspondente ao seu voto:");
        puts("5- Paulo");
        puts("7- Renata");
        puts("0- Voto branco");
        puts("Qualquer outro número positivo será considerado voto nulo");
        //puts("Insira um número negativo para encerrar a votação");
        scanf("%hhd", &voto);
    }

    //Gerar um relatório
    total = p + r + branco + nulo;
    printf("Total de votos: %u\n", total);
    printf("Percentual do candidato Paulo: %.2f%%\n", (float)p/total*100);
    printf("Percentual da candidata Renata: %.2f%%\n", (float)r/total*100);
    printf("Percentual de votos brancos: %.2f%%\n", (float)branco/total*100);
    printf("Percentual do votos nulos: %.2f%%\n", (float)nulo/total*100);

    //Contabilizar votos brancos e mostrar o vencedor
    if (p > r) {
        p += branco;
        printf("O(a) candidato(a) eleito(a) é Paulo, com %u votos (brancos contabilizados)\n", p);
    } else if (r > p) {
        r += branco;
        printf("O(a) candidato(a) eleito(a) é Renata, com %u votos (brancos contabilizados)\n", r);
    } else {
        printf("Os candidatos empataram\n");
    }

    return 0;
}