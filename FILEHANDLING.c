#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp;
	char ch;
	int i,pos;
	fp = fopen("filehandling.txt","r");	
    fseek(fp,0,SEEK_END);
    pos=ftell(fp);  
    i=0;
    while(i<pos)
    {
		i++;
		fseek(fp,-i,SEEK_END);
        ch=fgetc(fp);
        printf("%c",ch);
    }
    return 0;
	fclose(fp);
}
