#include<stdio.h>
#include <stdlib.h>
void ch(int numero) {
    char hexa[32];
    int i = 0;

    if (numero == 0) {
        printf("Hexadecimal: 0\n");
        return;
    }

    while (numero > 0) {
        int resto = numero % 16;

        if (resto < 10)
            hexa[i] = resto + '0';
        else
            hexa[i] = resto - 10 + 'A';

        numero = numero / 16;
        i++;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hexa[j]);
    }
    printf("\n");
}
void Cb(int Numero){
    printf("\nNumero digitado:%d",Numero);
    int binario[1000];
    if(Numero==0){
    printf("\nO resultado e:0");}
    else{
        int n =0;
        while(Numero>0){
        binario[n] = Numero % 2;
        Numero = Numero / 2;
        n++;
    }
    printf("\nBinario: ");
    for (int j = n - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    printf("\n");
    }
}
void co(int numero) {
    int octal[100], i = 0;

    if (numero == 0) {
        printf("\nOctal: 0\n");
        return;
    }

    while (numero > 0) {
        octal[i] = numero % 8;
        numero = numero / 8;
        i++;
    }

    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}
int main(){
    int NumeroReceber,saidaP=0,escolha,fuc;
     do {
            system("cls");
            printf("\nDigite o numero:");
            scanf("%d",&NumeroReceber);
            printf("\nEscolha uma opcao:\n[1] Binario\n[2] Hexadecimal\n[3] Octal\n[4] Todos\n[5] Encerrar\n");
            scanf("%d", &escolha);
            switch(escolha) {
                case 1:
                   system("cls");
                    printf("Converter para binario\n");
                    Cb(NumeroReceber);
                    printf("\n");
                    system("pause");
                    break;
                case 2:
                    system("cls");
                    printf("\nNumero digitado:%d\n",NumeroReceber);
                    printf("Converter para hexadecimal\n");
                    ch(NumeroReceber);
                    printf("\n");
                    system("pause");
                    break;
                case 3:
                    system("cls");
                    printf("\nNumero digitado:%d",NumeroReceber);
                    printf("Converter para octal\n");
                    co(NumeroReceber);
                    printf("\n");
                    system("pause");
                    break;
                case 4:
                    system("cls");
                    Cb(NumeroReceber);
                    co(NumeroReceber);
                    ch(NumeroReceber);
                    printf("\n");
                    system("pause");
                    break;
                    case 5:
                    saidaP = 1;
                    break;
                default:
            }
        } while(saidaP == 0);
        return 0;
}

