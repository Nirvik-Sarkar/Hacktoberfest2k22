#include<stdio.h>
#define N 4
int Stack[N],top=-1;
int Push(int x)
{
    if(top== N-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        Stack[top]=x;
    }
}
int Pop()
{
    if(top==-1)
    {
        printf("Stack Underflow\n");
    }
    else{
        printf("%dth element of the stack i.e %d has been popped out\n",top,Stack[top]);
        top--;
    }
}
int Peek()
{
    if(top==-1)
    {
        printf("Stack Underflow\n");
    }
    else{
        printf(" %d is at the TOP\n",Stack[top]);
    }
}
int Display()
{
    int i;
    if(top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d\t",Stack[i]);
        }
        printf("\n");
    }
}
int main()
{
    int ch;
    int n;
    do
    {
        printf("Press 1 for push\n");
        printf("Press 2 for pop\n");
        printf("press 3 for peek\n");
        printf("press 4 for display\n");
        printf("press 0 for exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter the item you want to push in the stack\n");
            scanf("%d",&n);
            Push(n);
            break;
        case 2:
            Pop();
            break;
        case 3:
            Peek();
            break;
        case 4:
            Display();
            break;
        
        default:
        printf("Invalid choice\n");
            break;
        }
        
    } while (ch !=0);
    //ch=getchar();
}
