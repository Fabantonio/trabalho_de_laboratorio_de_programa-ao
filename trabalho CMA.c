#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct
{
    char tipo_de_peca[MAX];
    char marca[MAX];
    char cor[MAX];
    char genero[MAX];
    int tamanho;
    float valor;
    int numero_da_peca;
    char tipo_de_logo[MAX];
    char composicao_do_tecido[MAX];
    int garantia_do_fornecedor;
} Produto;

Produto insereProduto(int i)
{
    Produto prod;
    printf("Digite o tipo de peca: ");
    gets(prod.tipo_de_peca);

    if (strcmp(prod.tipo_de_peca, "Blusa") == 0 || strcmp(prod.tipo_de_peca, "blusa") == 0)
    {
        prod.valor = 120.00;
    }else if (strcmp(prod.tipo_de_peca, "Calca") == 0 || strcmp(prod.tipo_de_peca, "calca") == 0)
    {
        prod.valor = 90.00;
    }else if (strcmp(prod.tipo_de_peca,"Camisa")==0||strcmp(prod.tipo_de_peca,"camisa")==0)
    {
        prod.valor = 80.00;
    }else if (strcmp(prod.tipo_de_peca, "Camiseta") == 0 || strcmp(prod.tipo_de_peca, "camiseta") == 0)
    {
        prod.valor = 40.00;
    }else if (strcmp(prod.tipo_de_peca, "Tenis") == 0 || strcmp(prod.tipo_de_peca, "tenis") == 0)
    {
        prod.valor = 180.00;
    }

    printf("Digite a marca: ");
    gets(prod.marca);

    printf("Digite a cor: ");
    gets(prod.cor);

    printf("Digite o genero: ");
    gets(prod.genero);

    printf("Digite o tipo de logo: ");
    gets(prod.tipo_de_logo);
    if (strcmp(prod.tipo_de_logo, "Bordada") == 0 || strcmp(prod.tipo_de_logo, "bordada") == 0)
    {
        prod.valor += 10.00;
    }

    printf("Digite a composicao: ");
    gets(prod.composicao_do_tecido);
    if (strcmp(prod.composicao_do_tecido, "Dry Fit") == 0 || strcmp(prod.composicao_do_tecido, "dry fit") == 0)
    {
        prod.valor += 10.00;
    }

    printf("Digite o tamanho: ");
    scanf("%d", &prod.tamanho);

    while (prod.tamanho < 0)
    {
        printf("Valor invalido, digite novamente: ");
        scanf("%d", &prod.tamanho);
    }

    //Numero da peça
    /*printf("Digite o numero da peca: ");
    scanf("%d", &prod.numero_da_peca);*/
    prod.numero_da_peca = i;

    while (prod.numero_da_peca < 0)
    {
        printf("Valor invalido, digite novamente: ");
        scanf("%d", &prod.numero_da_peca);
    }

    //Garantia do fornecedor
    prod.garantia_do_fornecedor = 2;

    return prod;
}

void imprimeCompra(Produto prod)
{
    printf("\n-----Detalhes do produto-----");
    printf("\n");
    printf("\n");
    printf("Tipo de peca: ");
    puts(prod.tipo_de_peca);
    printf("\n");
    printf("Marca: ");
    puts(prod.marca);
    printf("\n");
    printf("Cor: ");
    puts(prod.cor);
    printf("\n");
    printf("Genero: ");
    puts(prod.genero);
    printf("\n");
    printf("Tamanho: %d", prod.tamanho);
    printf("\n");
    printf("\n");
    printf("Valor: %.2f", prod.valor);
    printf("\n");
    printf("\n");
    printf("Numero da peca: %d", prod.numero_da_peca);
    printf("\n");
    printf("\n");
    printf("Tipo de logo: ");
    puts(prod.tipo_de_logo);
    printf("\n");
    printf("Composicao do tecido: ");
    puts(prod.composicao_do_tecido);
    printf("\n");
    printf("Garantia do fornecedor: %d meses", prod.garantia_do_fornecedor);
    printf("\n");
    printf("\n");
}

int main()
{

    int resp;
    char opcao=0, aux;
    int encerrar=3;
    Produto p[MAX];
    int i = 0, id;

    do
    {
        do
        {

            

            printf("Bem vindo ao nosso sistema de produtos esportivos, o que deseja aqui?\n\n");
            printf("1 - Inserir Produto\n2 - Consultar produto pelo id\n");
            printf("3- Editar produto pelo id\n");
            printf("4- Sair\n\nOpção; ");

            scanf("%d", &resp);
            scanf("%c", &aux);
            if (resp==1)
            {
                printf("Produto de numero: %d\n", i );
                p[i] = insereProduto(i);
                printf("\n-----Produto inserido com sucesso-----\n");
                system("pause");
            }else if (resp==2)
            {
                printf("Digite o numero do produto para consulta: ");
                scanf("%d", &id);
                imprimeCompra(p[id]);
                system("pause");
            }else if (resp==3)
            {
                printf("Digite o ID do produto que deseja editar: ");
                scanf("%d", &id);
                scanf("%c", &aux);
                p[id] = insereProduto(id);
                printf("\n-----Produto editado com sucesso-----\n");
                system("pause");
            }else if (resp==4)
            {
                printf("Saindo...");
                system("pause");
                encerrar=0;1
            }
            
        

            
            
            system("cls");
            i++;
        } while (encerrar == 3);
        printf("\n\t\t\tDigite 0 para mudar o cliente: ");
        scanf("%d", &opcao);
        system("pause");
        system("cls");
    } while (opcao == 0);
    return 0;
}
