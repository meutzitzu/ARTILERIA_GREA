#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
        int n=0;
        FILE* fin;
        fin = fopen(argv[1], "r");
        printf("\n%s\n", argv[1]);
        char buff[BUFFER_SIZE];
        //printf("\n\n%d\n", fscanf(fin, "%1023[^\n]s", buff));
        while(fgets(buff, BUFFER_SIZE - 1, fin) != NULL){
                printf ("%s", buff);
                if(strstr(buff, "class=\"mo\"")){
                        printf("MO:GOTCHA\n");
                } else if(strstr(buff, "class=\"va\"")){
                        printf("VA:GOTCHA\n");
                } else if(strstr(buff, "class=\"fl\"")){
                        printf("FL:GOTCHA\n");
                } else if(strstr(buff, "class=\"bo\"")){
                        printf("BO:GOTCHA\n");
                }

        }




        return 0;
}
