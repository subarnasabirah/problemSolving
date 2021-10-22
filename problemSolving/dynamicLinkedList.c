#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct mylist *next;
}node;
int main()
{
    void insert(node *s, int data)
    {
        while(s->next != NULL)
        {
            s = s->next;
        }
        s->next = (node*) malloc(sizeof(node));
        s->next->data = data;
        s->next->next = NULL;
    }

    void display(node *s)
    {
        while(s->next != NULL)
        {
            printf("%d\n", s->next->data);
            s = s->next;
        }
    }

    void search(node *s, int data)
    {
        int count = 0;
        while(s->next != NULL)
        {
            if(s->next->data == data)
            {
                count++;
            }
            s = s->next;
        }
        printf("Total %d results found\n", count);
    }

    void deleteNode(node *s int data);
    {
        while(s->next !=NULL)
        {
            if(a->next->data == data)
            {
                a->next = a->next->next;
                return 0;
            }
            s = s->next;
        }
    }

    void main()
    {
        node *first = (node*) malloc(sizeof(node));
        first->next = NULL;

        insert(first, 9);
        insert(first, 5);
        insert(first, 11);
        insert(first, 4);

        display(first);

        search(first, 2);

        deleteNode(first, 11);
        display(first);
    }
}
