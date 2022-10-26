#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char c;
    fp = fopen("test_file.txt", "w");

    while ((c = getchar()) != '\n')
    {
        putc(c, fp);
    }
    fclose(fp);
    fp=fopen("test_file.txt","r");
    while ((c = getc(fp)) != '\n')
    {
        printf("%c",c);
    }
    fclose(fp);
}
