#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main()
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
    int resp;
    char opcao, aux;
    int encerrar;

    do
    {
        do
        {
            //Escolha do tipo de peça
            printf("-Escolha o tipo de peca desejado-\n\n");
            printf("A - Blusa - RS120.00\nB - Calca - RS90.00\nC - Camisa - RS80.00\nD - Camiseta - RS65.00\nE - Short - RS40.00\nF - Tenis - RS180.00\n\n");
            printf("Opcao: ");
            scanf("%c", &opcao);
            scanf("%c", &aux);

            switch (opcao)
            {
            case 'a':
            case 'A':
                strcpy(tipo_de_peca, "Blusa");
                valor = 120.00;
                break;
            case 'b':
            case 'B':
                strcpy(tipo_de_peca, "Calca");
                valor = 90.00;
                break;
            case 'c':
            case 'C':
                strcpy(tipo_de_peca, "Camisa");
                valor = 80.00;
                break;
            case 'd':
            case 'D':
                strcpy(tipo_de_peca, "Camiseta");
                valor = 65.00;
                break;
            case 'e':
            case 'E':
                strcpy(tipo_de_peca, "Shorts");
                valor = 40.00;
                break;
            case 'f':
            case 'F':
                strcpy(tipo_de_peca, "Tenis");
                valor = 180.00;
                break;
            default:
                printf("Opcao Invalida!!!\n");
                break;
            }
            //printf("Tipo de peca: ");
            //puts(tipo_de_peca);

            //Escolha da marca

            printf("-Escolha a marca-\n\n");
            printf("A - Nike\nB - Puma\nC - Adidas\n\n");
            printf("Opcao: ");
            scanf("%c", &opcao);
            scanf("%c", &aux);

            switch (opcao)
            {
            case 'a':
            case 'A':
                strcpy(marca, "Nike");
                break;
            case 'b':
            case 'B':
                strcpy(marca, "Puma");
                break;
            case 'c':
            case 'C':
                strcpy(marca, "Adidas");
                break;
            default:
                printf("Opcao Invalida!!!\n");
                break;
            }

            //Escolha da cor

            printf("-Escolha a cor-\n\n");
            printf("A - Azul\nB - Preto\nC - Branco\nD - Laranja\nE - Amarelo\nF - Verde\nG - Rosa\n\n");
            printf("Opcao: ");
            scanf("%c", &opcao);
            scanf("%c", &aux);

            switch (opcao)
            {
            case 'a':
            case 'A':
                strcpy(cor, "Azul");
                break;
            case 'b':
            case 'B':
                strcpy(cor, "Preto");
                break;
            case 'c':
            case 'C':
                strcpy(cor, "Branco");
                break;
            case 'd':
            case 'D':
                strcpy(cor, "Laranja");
                break;
            case 'e':
            case 'E':
                strcpy(cor, "Amarelo");
                break;
            case 'f':
            case 'F':
                strcpy(cor, "Verde");
                break;
            case 'g':
            case 'G':
                strcpy(cor, "Rosa");
            break;
            default:
                printf("Opcao Invalida!!!\n");
                break;
            }

            //Escolha do genero
            printf("-Escolha o genero-\n\n");
            printf("A - Masculino\nB - Feminino\nC - Unisex\n\n");
            printf("Opcao: ");
            scanf("%c", &opcao);
            scanf("%c", &aux);

            switch (opcao)
            {
            case 'a':
            case 'A':
                strcpy(genero, "Masculino");
                break;
            case 'b':
            case 'B':
                strcpy(genero, "Feminino");
                break;
            case 'c':
            case 'C':
                strcpy(genero, "Unisex");
                break;
            default:
                printf("Opcao Invalida!!!\n");
                break;
            }

            //tipo de logo

            printf("-Escolha o tipo de logo-\n\n");
            printf("A - Bordada - Acrescimo de RS10.00\nB - Colada\nC - Junta\n\n");
            printf("Opcao: ");
            scanf("%c", &opcao);
            scanf("%c", &aux);

            switch (opcao)
            {
            case 'a':
            case 'A':
                strcpy(tipo_de_logo, "Bordada");
                valor += 10.00;
                break;
            case 'b':
            case 'B':
                strcpy(tipo_de_logo, "Colada");
                break;
            case 'c':
            case 'C':
                strcpy(tipo_de_logo, "Junta");
                break;
            default:
                printf("Opcao Invalida!!!\n");
                break;
            }

            //tecido

            printf("-Escolha a composicao do tecido-\n\n");
            printf("A - Poliester\nB - Malha fria\nC - Algodao\nD - Dry Fit - Acrescimo de RS10.00\n\n");
            printf("Opcao: ");
            scanf("%c", &opcao);
            scanf("%c", &aux);

            switch (opcao)
            {
            case 'a':
            case 'A':
                strcpy(composicao_do_tecido, "Poliester");
                break;
            case 'b':
            case 'B':
                strcpy(composicao_do_tecido, "Malha fria");
                break;
            case 'c':
            case 'C':
                strcpy(composicao_do_tecido, "Algodao");
                break;
            case 'd':
            case 'D':
                strcpy(composicao_do_tecido, "Dry Fit");
                valor += 10.00;
                break;
            default:
                printf("Opcao Invalida!!!\n");
                break;
            }

            //tamanho
            printf("Digite o tamanho: ");
            scanf("%d", &tamanho);

            while (tamanho < 0)
            {
                printf("Valor invalido, digite novamente: ");
                scanf("%d", &tamanho);
            }

            //Numero da peça
            printf("Digite o numero da peca: ");
            scanf("%d", &numero_da_peca);

            while (numero_da_peca < 0)
            {
                printf("Valor invalido, digite novamente: ");
                scanf("%d", &numero_da_peca);
            }

            //Garantia do fornecedor
            garantia_do_fornecedor = 2;

            system("cls");

            printf("\n-----Detalhes da compra-----");
            printf("\n");
            printf("\n");
            printf("Tipo de peca: ");
            puts(tipo_de_peca);
            printf("\n");
            printf("Marca: ");
            puts(marca);
            printf("\n");
            printf("Cor: ");
            puts(cor);
            printf("\n");
            printf("Genero: ");
            puts(genero);
            printf("\n");
            printf("Tamanho: %d", tamanho);
            printf("\n");
            printf("\n");
            printf("Valor: %.2f", valor);
            printf("\n");
            printf("\n");
            printf("Numero da peca: %d", numero_da_peca);
            printf("\n");
            printf("\n");
            printf("Tipo de logo: ");
            puts(tipo_de_logo);
            printf("\n");
            printf("Composicao do tecido: ");
            puts(composicao_do_tecido);
            printf("\n");
            printf("Garantia do fornecedor: %d meses", garantia_do_fornecedor);
            printf("\n");
            printf("\n");

            printf("Obrigada pela compra, o que deseja fazer agora?\n\n");
            printf("1 - Finalizar compra\n2 - Cancelar compra\n");
            printf("3- Continuar comprando\n\nOpção; ");
            scanf("%d", &encerrar);

            if (encerrar == 1)
            {
                printf("Compra finalizada com sucesso!!!\n");
            }
            else if (encerrar == 2)
            {
                printf("Compra cancelada\n");
            }
            else if (encerrar == 3)
            {
                printf("Continuar comprando\n");
            }
            else
            {
                printf("Opcao Invalida!!!\n");
            }
            system("pause");
            system("cls");
        } while (encerrar == 3);
        printf("\n\t\t\tDigite 0 para mudar o cliente: ");
        scanf("%d", &resp);
        system("pause");
        system("cls");
    } while (resp == 0);
    return 0;
}
