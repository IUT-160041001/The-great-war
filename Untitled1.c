#include <stdio.h>
int main()
{
    int n,m,i;
    char s[65000];
    FILE *fp;
    fp=fopen("part1.txt","r");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }
    for(i=0;i<10000;i++)
    {
        s[i]=fgetc(fp);
        if(feof(fp)){
            printf("\nSelect your choice\n");
            break;
        }
        if(ferror(fp)){
            printf("Error");
            return 0;
        }
        printf("%c",s[i]);
    }
    fclose(fp);
    return 0;
}
