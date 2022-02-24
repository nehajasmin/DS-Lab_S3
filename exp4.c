#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int q[MAX];
int front = -1, rear = -1;
void addq(int item)
{
    if (rear == MAX - 1)
    {
        printf("Queue full");
    }
    else
    {
        rear++;
        q[rear] = item;
    }
}
void deleteq()
{
    if (front == rear)
    {
        printf("Queue empty");
    }
    else
    {
        front++;
        printf("Item deleted:%d", q[front]);
    }
}
void displayq()
{
    for (int i = front + 1; i <= rear; i++)
    {
        printf("%d ", q[i]);
    }
}
void main()
{
    printf("MENU\n");
    printf("1.Add element\n");
    printf("2.Delete element\n");
    printf("3.Display\n");
    printf("4.Exit\n");
    printf("Enter your choice:");
    int c;
    scanf("%d", &c);
    while (c != 4)
    {
        switch (c)
        {
        case 1:
            printf("Enter the element to be added:");
            int item;
            scanf("%d", &item);
            addq(item);
            break;
        case 2:
            deleteq();
            break;
        case 3:
            displayq();
            break;
        }
        printf("\nEnter your next choice:");
        scanf("%d", &c);
    }
}
