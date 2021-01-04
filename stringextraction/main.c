#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("main.c","r");
    char ch[1000][1000];
    char ch2[1000][1000];
    int i=0;
    int j=0;
    int k=0;
    while(!feof(fp))
    {
        ch[i][j]=fgetc(fp);
        //printf("%c\n",ch[i][j]);
        i++;
        j++;

    }
    fclose(fp);

    fp=fopen("yeni.txt","w");
    for(i=0; i<1000; i++)
    {
        for(j=0; j<1000; j++)
        {
            if(ch[i][j]=='/')
            {
                if(ch[i+1][j+1]=='/')
                {
                    while(ch[i][j]!='\n')
                    {
                        ch2[i][j]=ch[i+2][j+2];
                        fprintf(fp,"%c",ch2[i][j]);

                        i++;
                        j++;
                    }

                }
                //printf("%c",ch[i+1][j+1]);
            }//hj
        }
    }
    printf("yorum satirlari dosyaya yazdirildi");
}








