#include <stdio.h>

// linked list


struct node
{
    int data;
    struct node* next; 
};

struct node* head;
void Insert(int x)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    (*temp).data = x;
    (*temp).next = head;
    head = temp;
}

void Print()
{
    struct node* temp = head;
    printf("List is:");
    while(temp != NULL)
    {
        printf(" %d", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}


int main()
{
    /*int a; // goes on stack
    int *p;
    p = (int*)malloc(sizeof(int));
    *p = 10;
    free(p);
    p = (int*)malloc(sizeof(int));
    *p = 20;*/

    head = NULL; // empty list
    printf("How many numbers?\n");
    int i, n, x;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter the number\n");
        scanf("%d", &x);
        Insert(x);
        Print();
    }

    return 0;
}