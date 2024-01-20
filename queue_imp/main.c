#include<stdio.h>
#include"queue.h"
void main()
{
    queue *myQueue;
    myQueue = createQueue();
    printQueue(myQueue);
    enQueue(myQueue,4);
    printQueue(myQueue);
    enQueue(myQueue,6);
    printQueue(myQueue);
    deQueue(myQueue);
    printQueue(myQueue);

}