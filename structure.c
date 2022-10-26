#include<stdio.h>
#include<string.h>
struct student
{
    char Na[20];
    int U_ID;
    char Sx[10];
    char str[10];
};
typedef struct student student;
int main()
{
   int i,n;
   printf("Enter the no. of students whose records are to be kept\n");
   scanf("%d",&n);
   student L[n];
   for(i=0;i<n;i++)
   {
    printf("Enter the name of the student\n");
    scanf("%[^\n]s",&L[i].Na);
    printf("Enter the U.ID of the student\n");
    scanf("%d",&L[i].U_ID);
    printf("Enter the sex of the student\n");
    scanf("%s",&L[i].Sx);
    printf("Enter the stream of the student\n");
    scanf("%s",&L[i].str);

   }
   printf("Entered details \n");
   for(i=0;i<n;i++)
   {
    printf("Name : %s\n",L[i].Na);
    printf("U.Id: %d\n",L[i].U_ID);
    printf("Sex: %s\n",L[i].Sx);
    printf("stream: %s\n",L[i].str);
   }
}