#include <stdio.h>
int top = -1;

void push(int stack[], int item, int n)
{
    if (top == n - 1)
        printf("\nStack full");
    else
    {
        top++;
        stack[top] = item;
    }
}

void pop(int stack[])
{
    int item;
    if (top == -1)
        printf("\nStack empty");
    else
    {
        item = stack[top];
        top--;
        printf("\nPopped element: %d", item);
    }
}

void display(int stack[])
{
    if (top == -1)
        printf("\nStack empty");
    else
    {
        printf("\nSTACK:\n");
        for (int i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}

int main()
{
    int n, c;
    printf("\nEnter size of stack: ");
    scanf("%d", &n);
    int a[n];
start:
    printf("\n\t MENU\n\t ----\n1.Add element\n2.Delete element\n3.Display stack\n4.Exit\n\nEnter option: ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("\nEnter element: ");
        scanf("%d", &c);
        push(a, c, n);
        break;

    case 2:
        pop(a);
        break;

    case 3:
        display(a);
        break;

    case 4:
        goto label;
    }
    goto start;
label:
    return 0;
}
