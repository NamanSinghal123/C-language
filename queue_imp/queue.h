typedef struct queue
{
    int elements[5];
    int front;
    int rear;
    int size;
}queue;
queue *createQueue();
void printQueue(queue *q);
void enQueue(queue *q,int element);
int deQueue(queue *q);