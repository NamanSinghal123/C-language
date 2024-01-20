#include<stdio.h>
#include<stdlib.h>

#include<string.h>
#include"queue.h"

queue *createQueue()
{
    queue *q = (queue*)malloc(sizeof(queue));
    memset(q,0,sizeof(queue));
}
void printQueue(queue *q)
{   
    printf("[");
    for(int i = 0;i<5;i++){
        printf("%d ",q->elements[i]);
    }
    printf("]");
    printf(" %d %d %d",q->front,q->rear,q->size);
    printf("\n");
}
void enQueue(queue *q,int element)
{   
    if(q->size >= 5){
        printf("queue overflow");
        return;
    }

    q->elements[q->rear] = element;
    if(q->rear == 4){
        q->rear=0;
    }
    else{
        q->rear++;
    }
    q->size++;
}
int deQueue(queue *q)
{
    if(q->size == 0){
        printf("queue underflow");
        return 0;
    }
    int element = q->elements[q->front];
    q->elements[q->front] = 0;
    if(q->front == 4){
        q->front = 0;
    }
    else{
        q->front++;
    }
    q->size--;
    return element;
}
