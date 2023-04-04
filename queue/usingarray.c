#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int front;      
    int rear;
    int *Q;
};

void create(struct queue*q){
    printf("enter the size of the array\n");
    scanf("%d",&q->size);
    q->front=q->rear=-1;
    q->Q=(int*)malloc(q->size *sizeof(int));
}

void insert(struct queue*q ,int x){
    if (q->rear==q->size-1)
    {
        printf("queue is full\n");
    }
    else{
        q->rear++;
        q->Q[q->rear]=x;
    }
}

int delete(struct queue*q){
    int x=-1;
    if (q->front==q->rear)
    {
        printf("queue is empty\n");
    }
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}

void display(struct queue q){
    for (int i = q.front +1; i <=q.rear; i++)
    {
        printf("%d\n",q.Q[i]);
    }
    
}

int main()
{
    struct queue q;
    create(&q);
    printf("\n");
    insert(&q,3);
    insert(&q,3);
    insert(&q,12);
    insert(&q,12);
    insert(&q,12);
    insert(&q,2);
    display(q);
    printf("\n");
    printf("%d",delete(&q));
    return 0;
}