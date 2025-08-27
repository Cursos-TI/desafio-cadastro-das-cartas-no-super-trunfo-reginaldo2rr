#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char cartaum[]="1";
    char cartdois[]="2";
    char estado[1];
    char codcarta[2];
    char nomecidade[30];
    int populacao; //Variavel tipo inteiro recebe valor da população
    float area; //Variavel tipo decimal recebe o valor a área da cidade.
    float pib;// Variavel tipo decimal recebe o valor do PIB da cidade.
    int nropturistico; //Variavel tipo inteiro recebe o valor Número ponto turistico.
    size_t espaco = sizeof(estado) - strlen(cartaum) - 1;
    
    

    printf ("**Jogo de Cartas Super Trunfo**\n\n");

    printf ("Digite o estado da Carta 1: ");
    scanf("%s", estado); //Expressão regular que ler depois do espaço em branco-%[^\n]s @pDc�
    
    printf("Digite Código da carta: ");
    scanf("%s", codcarta);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade);
    
    printf("Digite o quantidade da população: ");
    scanf("%d", &populacao);

    printf("Digite a área em Km²: ");
    scanf(" %f", &area);

    printf("Digite o PIB: ");
    scanf(" %f", &pib);

    printf("Digite quantidad de número turistícos: ");
    scanf("%x", &nropturistico);


    printf("\n");
    strncat(cartaum, estado,espaco);

    printf("***Resumo da Carta 1***\n");
    printf("Carta %s:\n", cartaum);
    printf("Código: %s\n", estado);
    printf("Estado: %s\n", estado);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %x", nropturistico);
    



    // Sugestão: Defina variáveis separadas para cadaA atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
