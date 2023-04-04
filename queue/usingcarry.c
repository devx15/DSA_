#include<stdio.h>
#include<stdlib.h>

struct queue 
{
    int front;
    int rear;
    int size;
    int *Q;
};

void enqueue(struct queue*q,int x){
    if ((q->rear +1)%q->size==q->front)
    {   
        printf("fulll\n");
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}

int dequeue(struct queue*q){
    int x=-1;
    if (q->rear==q->front)
    {
        printf("emptyy\n");
    }
    else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}

void display(struct queue*q){
    for (int i = q->front+1; i <= q->rear; i++)
    {
        printf("%d\n",q->Q[i]);
    }
    
}

int main()
{
    struct queue q;
    printf("enter the size\n");
    scanf("%d",&q.size);
    q.front=q.rear=-1;
    q.Q=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    display(&q);
    printf("\n");
    printf("%d\n",dequeue(&q));
    printf("\n");
    display(&q);
    return 0;
}