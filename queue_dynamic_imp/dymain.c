#include<stdio.h>
#include"dyqueue.h"
void main()
{
    queue *myQ;
    myQ = createQueue(10);
    printf("%p\n",myQ);
    printQueue(myQ);
    enQueue(myQ,4);
    printQueue(myQ);
    enQueue(myQ,6);
    printQueue(myQ);
    deQueue(myQ);
    printQueue(myQ);

}