#include<stdio.h>
int NumeroReceber,nbi,bhexa,noct;
int main(){
    int saidaP=0,escolha;
     do {
            printf("Digite o numero:");
            scanf("%d",&NumeroReceber);
            printf("Escolha uma opcao:\n[1] Binario\n[2] Hexadecimal\n[3] Octal\n[4] Encerrar\n");
            scanf("%d", &escolha);

            switch(escolha) {
                case 1:

                    printf("Converter para binário\n");
                    break;
                case 2:

                    printf("Converter para hexadecimal\n");
                    break;
                case 3:

                    printf("Converter para octal\n");
                    break;
                case 4:
                    saidaP = 1;
                    break;
                default:
                    printf("Opção inválida. Tente novamente.\n");
            }
        } while(saidaP == 0);
}
void Cb(){
    int binario[100000];
    if(NumeroReceber==0){

    printf("\nO resultado e:0");}
    else{
        int n =0;
        while(NumeroReceber>0){
        binario[n] = NumeroReceber % 2;
        NumeroReceber = NumeroReceber / 2;
        n++;
    }
    printf("\nBinario: ");
    for (int j = n - 1; j >= 0; j--) {
        printf("%d", binario[j]);
    }
    }
}
