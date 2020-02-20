//6210400744 Sitthiphong singthong
#include<stdio.h>
#include<stdlib.h>
struct node 
{ 
    int data;
    struct node *next;
    struct node *prev;
};typedef struct node Noden;
Noden *create_list(int data)
{
    Noden *nNode = malloc(sizeof(Noden));
    nNode->data = data;
    nNode->next = NULL;
    nNode->prev = NULL;
    return nNode;
}
void insert_node(Noden *nNode, Noden **head)
{
    Noden *tmp = *head;
    for(tmp;tmp != NULL;tmp = tmp->next)
    {
        if(nNode->data < tmp->data)
        {
            if(*head == tmp)
            {
                *head = nNode;
                nNode->next = tmp;
                tmp->prev = nNode;
            }
            else
            {
                tmp->prev->next = nNode;
                nNode->next = tmp;
                nNode->prev = tmp->prev;
                tmp->prev = nNode;
            }
            break;
        }
        else if(tmp->next == NULL && tmp->data <= nNode->data)
        {
            nNode->next = tmp->next;
            nNode->prev = tmp;
            tmp->next = nNode;
            break;
        }
    }
}
void print_list(Noden *head)
{
    Noden *tmp;
    for(tmp = head;tmp;tmp = tmp->next)
    {
        printf("%d\n",tmp->data);
    }
}
int main()
{
    Noden *head, *tmp;
    int num;

    scanf("%d",&num);
    if(num > -1)
    {
        tmp = create_list(num);
        head = tmp;
        while(1)
        {
            scanf("%d",&num);
            if(num < 0)
            {
                break;
            }
            tmp = create_list(num);
            insert_node(tmp,&head);
        }
    }
    print_list(head);
}