#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"dyqueue.h"

queue *createQueue(int capacity){
    queue *q = (queue*)malloc(sizeof(queue));
    q->element = (int*)malloc(capacity*sizeof(int));
    memset(q->element,0,capacity*sizeof(int));
    q->rear = q->front = q->size = 0;
    q->capacity = capacity;
    printf("%p\n",q);
    return q;
}

void printQueue(queue *q){
    printf("[ ");
    for(int i=0;i<q->capacity;i++){
        printf("%d ",*(q->element+i));
    }
    printf("]");
    printf("%d %d %d",q->capacity,q->front,q->rear,q->size);
    printf("\n");
}

void enQueue(queue *q,int element1){
    if(q->size>q->capacity){
        printf("Queue Overflow");
        return;
    }
    *(q->element+(q->rear))=element1;
    if(q->size == q->capacity -1){
        q->rear =0;
    }
    else{
        q->rear++;
    }
    q->size++;
}

int deQueue(queue *q){
    if(q->size == 0){
        printf("Queue underflow");
        return 0;
    }
    int element1 = *(q->element+(q->front));
    *(q->element+(q->front)) = 0;
    if(q->front == q->capacity -1){
        q->front =0;
    }
    else{
        q->front++;
    }
    q->size--;
    return element1;
}
