typedef struct queue{
    int *element;
    int front;
    int rear;
    int size;
    int capacity;
}queue;
queue *createQueue(int capacity);
void printQueue(queue *q);
void enQueue(queue *q,int element);
int deQueue(queue *q);