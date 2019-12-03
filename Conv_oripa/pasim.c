#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[])
{
        int n=0;
        FILE* fp;
        char buff[BUFFER_SIZE];
        //fp = fopen(argv[1], "r");
        //fout = fopen(argv[1], "w");

        if ((fp = fopen(argv[1],"r")) == NULL){
                printf("Error! opening file\n");
                // Program exits if the file pointer returns NULL.
                return 0;
        }

        printf("\n%s\n", argv[1]);
        //printf("\n\n%d\n", fscanf(fp, "%1023[^\n]s", buff));
        printf("MERE\n");
        while(fscanf(fp, "%s", buff)==1){
                printf ("%s", buff);
                if(strstr(buff, "class=\"mo\"")){
                        printf("MO:GOTCHA\n");
                } else if(strstr(buff, "class=\"va\"")){
                        printf("VA:GOTCHA\n");
                } else if(strstr(buff, "class=\"fl\"")){
                        //fprintf(fp, " style=\"stroke:#ffff00;stroke-opacity:1 \"" );
                        printf("FL:GOTCHA\n");
                } else if(strstr(buff, "class=\"bo\"")){
                        printf("BO:GOTCHA\n");
                }

        }




        return 0;
}
