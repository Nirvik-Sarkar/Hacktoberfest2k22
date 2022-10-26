#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
typedef struct node node;
node *head = NULL;
void create_node()
{
    node *temp, *next;
    temp = (node *)malloc(sizeof(node));
    printf("Enter data");
    scanf("%d", &temp->data);
    if (head == NULL)
    {
        head = temp;
        next = head;
    }
    else
    {
        next->link = temp;
        next = next->link;
    }
}
void print(node *head)
{
    node *q;
    q = head;
    while (q != NULL)
    {
        printf("%d\t", q->data);
        q = q->link;
    }
}
int main()
{
    int i, n;
    printf("Enter the no. of nodes you want in the LL");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        create_node();
    }
    print(head);
}
