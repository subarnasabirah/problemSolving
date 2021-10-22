#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node *nextNode;
};

static struct Node *topNode;

static void push(int newData);
static int pop();
static int peek();
static void printStack();

int main(){
    int selectedOperation = 0;
    int nodeData = 0;
    while(1){
        printf("\n What do you want to do?");
        printf("\n 0 - Push");
        printf("\n 1 - Pop");
        printf("\n 2 - Peek");
        printf("\n 3 - Print");
        printf("\n 4 - Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &selectedOperation);

        switch(selectedOperation)
        {
            case 0:
                //push
                printf("\n New Node Data: ");
                scanf("%d", &nodeData);
                push(nodeData);
                break;

            case 1:
                //pop
                break;

            case 2:
                //peek
                break;

            case 3:
                //print
                printStack();
                break;

            case 4:
                //exit
                break;

        }
    }
    return 0;
}

static void push(int newData)
{
    struct node *newNode = (struct node *)malloc(sizeof (struct node));
    newNode->data = newData;

    if(topNode == NULL)
    {
        newNode->nextNode = NULL;
    }
    else
    {
        newNode->nextNode = topNode;
    }
    topNode = newNode;
}

static void printStack()
{
    struct node *topNodeCopy = topNode;

    while (topNodeCopy != NULL)
    {
        printf ("%d", topNodeCopy->data);
        topNodeCopy = topNodeCopy->nextNode;

        if(topNodeCopy != NULL)
        {
            printf("->");
        }
    }
}
