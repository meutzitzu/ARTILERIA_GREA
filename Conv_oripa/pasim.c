#include <stdio.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
        printf("MERE");
        FILE* fin;
        printf("\n%s\n", argv[1]);
        fin = fopen(argv[1], "r");
        char buff[BUFFER_SIZE];
        fscanf(fin, "%1023[^\n]s", buff);
        printf("\nfin: %s\n", buff );
        

        return 0;
}
