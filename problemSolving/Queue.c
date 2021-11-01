#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* front;
struct node* rear;
void enqueue(int value){
    struct node* new;
    new=(struct node *)malloc(sizeof(struct node));
    if(rear==NULL){
        rear=new;
        rear->data=value;
        rear->next=NULL;
        front=rear;
    }
    else{
        rear->next=new;
        new->data=value;
        new->next=NULL;
        rear=new;
    }
}
void dequeue(){
struct node* temp;
temp=front;
if(rear==NULL&&front==NULL){
    printf("Queue is empty,Deletion is not possible !!\n");
}
else if(front->next==NULL){
    printf("The deleted element is: %d\n", front->data);
    free(front);
    front=NULL;
    rear=NULL;
}
else{
    temp=temp->next;
    printf("The deleted element is: %d\n", front->data);
    free(front);
    front=temp;
    }
}
void display(){
    struct node* temp;
    temp=front;
    if(front==NULL&&rear==NULL){
        printf("Queue is empty\n");
    }
    else{
        printf("Elements is the queue are: ");
        while(temp != NULL){
            printf("->%d", temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main(){
    int v,choice;
    do{
        printf("Enter the choice:\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter the value: ");
                scanf("%d",&v);
                enqueue(v);
                break;

            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exit Program\n: ");
                break;
            default:
                printf("Invalid choice");
                break;
        }
    }
    while(choice!=4);
    return 0;
}
