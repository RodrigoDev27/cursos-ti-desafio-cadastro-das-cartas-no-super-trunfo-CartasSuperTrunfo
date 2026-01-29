#include <stdio.h>
int main(){
    char carta1[25]= "";
    char nomeestado[50];
    int codigo;
    char nomecidade[20];
    int populacao;
    float area;
    float pib;
    int pontoturismo;

    printf("Diginte o numeo da carta: \n");
    scanf("%s", &carta1);

    printf("Qual e o estado: \n");
    scanf("%s", &nomeestado);

    printf("Digite o codigo: \n");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade);

    printf("qual e o numero da população: \n");
    scanf("%d", &populacao);

    printf("Qual e o tamanho da Área: \n");
    scanf("%f", &area);

    printf("Qual e o PIB: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos tem: \n");
    scanf("%d", &pontoturismo);

      
    printf("Qual e a Carta: %s  ", carta1);
    printf("Qual e o estado : %s ", nomeestado);
    printf(" Qual e o numero do codigo : %d ", codigo);
    printf("Qual e o nome da cidade : %s  ", nomecidade);
    printf("Qual e o numero populacional : %d  ", populacao);
    printf("Qual e o tamanho da àrea : %f  ", area);
    printf(" Qual e o numero do PIB : %f  ", pib);
    printf("Qual e o total de pontos turisticos: %d  ", pontoturismo);

    return 0;

}
