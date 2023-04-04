#include<stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*front = NULL,*rear=NULL;

void enqueue(int x){
    struct node *t=malloc(sizeof(struct node));
    if (t==NULL)
    {
        printf("full\n");
    }
    else{
        t->data=x;
        t->next=NULL;
        if (front==NULL)
        {
            front=rear=t;
        }
        else{
            rear->next=t;
            rear=t;
        }
    }
}

int dequeue(){
    int x=-1;
    struct node*t;
    if (front==NULL)
    {
        printf("empty\n");
    }
    else{
        x=t->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
}

void display(){
    struct node*p=front;
    while (p)
    {
        printf("%d\n",p->data);
        p=p->next;
    }
    
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    printf("%d  ",dequeue());
    return 0;
}