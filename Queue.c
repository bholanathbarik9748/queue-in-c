#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



int main()
{
    
    int item, chose, i;
    int mx = 100;
    int arr[mx];
    int rear = 0;
    int front = 0;
    int exit = 1;

    do
    {
        printf(":::queue main menu:::");

        printf("\n1.insert \n2.remove \n3.display \n4.exit");
        printf("enter your choice:---->");
        scanf("%d", &chose);

        switch (chose)
        {
        case 1:
            if (rear == mx)
                printf("\n Queue is full");
            else
            {
                printf("enter the value to be insert:---->");
                scanf("%d", &item);
                printf("\n position : %d , insert no : %d ", rear + 1, item);
                arr[rear++] = item;
            }
            break;

        case 2:
            if (front == rear)

                printf("\n Que is empty");
            else
            {
                printf("\n position : %d ,remove value : %d,front,arr[front]");
            }
            break;

        case 3:
            printf("\nQueue size: %d",rear);
            for (i = front; i < rear; i++)
                printf("\n position : %d , value : %d",i,arr[i]);
            
            break;
        default:
    exit = 0;
            break;
        }

    } while (exit);
}
