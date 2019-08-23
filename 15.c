//28 <3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int
main()
{
    srand(time(NULL));
    int x = rand()%101;
    int tentativas = 1;
    printf("Jogo do casal 28\n");
    printf("Adivinhe o numero que estou pensando!\n");
    printf("Uma dica e um numero entre 0 e 100\n");

    int escolha;

    

    do
    {
        scanf("%d", &escolha);
        if(escolha == x)
        {
            printf("Parabens voce acertou!\n");
            printf("So foi preciso %d tentativas.\n",tentativas);

        }
        else
        {
            if(escolha > x)
                printf("O numero que eu to pensando e menor.\n");
            else
                printf("o numero que eu to pensando e maior.\n");
            
                tentativas++;
        }
    }
    while(escolha != x);

}