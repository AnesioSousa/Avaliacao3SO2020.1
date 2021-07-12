#include <stdio.h>
#include <stdlib.h>

int main()
{
    char texto[100];
    FILE *leitura, *escrita;
    leitura = fopen("arq1.txt", "r");
    if(leitura == NULL)
        printf("Nao abriu o arq1.txt");
    else
    {
        escrita = fopen("arq2.txt", "w");
        if(escrita == NULL)
            printf("Nao abriu o arq2.txt");
        else
        {
            fscanf(leitura, "%s", texto);
            fprintf(escrita, "%s", texto);
            fclose(leitura);
            fclose(escrita);
        }
    }

    return 0;
}
