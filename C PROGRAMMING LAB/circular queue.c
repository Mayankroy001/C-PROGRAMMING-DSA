#include <stdio.h>
#include <stdbool.h>

#define MAX 6

typedef struct {
    int front;
    int rear;
    int arr[MAX];
} CircularQueue;

bool QueueFull(CircularQueue *q) {
    if ((q->front == q->rear + 1) || (q->front == 0 && q->rear == MAX - 1)) {
        return true;
    } else {
        return false;
    }
}

bool QueueEmpty(CircularQueue *q) {
    if (q->front == -1 && q->rear == -1) {
        return true;
    } else {
        return false;
    }
}

void Enqueue(CircularQueue *q, int item) {
    if (QueueFull(q)) {
        printf("Overflow\n");
        return;
    }

    if (QueueEmpty(q)) {
        q->front = 0;
        q->rear = 0;
    } else if (q->rear == MAX - 1) {
        q->rear = 0;
    } else {
        q->rear = q->rear + 1;
    }

    q->arr[q->rear] = item;
    printf("Enqueued: %d\n", item);
}

void Dequeue(CircularQueue *q) {
    if (QueueEmpty(q)) {
        printf("Queue Underflow\n");
        return;
    }

    printf("Dequeued element: %d\n", q->arr[q->front]);

    // Find new value of front
    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else if (q->front == MAX - 1) {
        q->front = 0;
    } else {
        q->front = q->front + 1;
    }
}

void displayQueue(CircularQueue *q) {
    if (QueueEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    int i = q->front;
    if (q->front <= q->rear) {
        while (i <= q->rear) {
            printf("%d ", q->arr[i]);
            i++;
        }
    } else {
        while (i < MAX) {
            printf("%d ", q->arr[i]);
            i++;
        }
        i = 0;
        while (i <= q->rear) {
            printf("%d ", q->arr[i]);
            i++;
        }
    }
    printf("\n");
}

int main() {
    CircularQueue q;
    q.front = -1;
    q.rear = -1;
    
    int choice, item;

    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display Queue\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &item);
                Enqueue(&q, item);
                break;
            case 2:
                Dequeue(&q);
                break;
            case 3:
                displayQueue(&q);
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}
