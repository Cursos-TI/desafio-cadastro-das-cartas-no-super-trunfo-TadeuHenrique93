#include <stdio.h>

    int main (){
    char estado;
    char codigo[10];
    char cidade[20];
    int populaçao;
    float área;
    float PIB;
    int pontos_turisticos;
    printf("digite o nome do estado: \n");
    scanf("%s" , &estado);

    printf("digite o codigo: \n");
    scanf("%s",codigo);

    printf("digite a cidade: \n");
    scanf("%s",cidade);

    printf("digite a populaçao:  \n");
    scanf("%d", &populaçao);
        
    printf("digite a área:   \n");
    scanf("%f" , &área);

    printf("digite o PIB:  \n");
    scanf("%f",&PIB );

    printf("digite o numero de pontos turisticos:  \n");
    scanf("%d", &pontos_turisticos);

    printf("Populaçao:%d\nárea:%f\n",populaçao,área);
    printf("PIB:%f\n pontos turisticos:%d\n estado:%s\n",PIB,pontos_turisticos,estado);
    printf("codigo: %s\n cidade: %s\n",codigo,cidade);

   







 }



