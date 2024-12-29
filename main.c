#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int array[100];
    int numero;
    int conteggio=0;
    srand(time(NULL));
    for(int i=0;i<100;i++) {
        array[i]=rand()%10;
    }
    printf("array generato\n");
    for(int i;i<100;i++) {
        printf("%d",array[i]);
        if((i+1)%10==0) {
            printf("\n");
        }
    }
    do {
        printf("inserisci un numero da 0 a 9:\n");
        scanf("%d",&numero);
    }while(numero<0||numero>9);

    for(int i=0;i<100;i++) {
        if(array[i]==numero){
            conteggio++;
        }
    }
    printf("il numero %d e' presente %d volte nell'array.\n",numero,conteggio);
    return 0;
}
