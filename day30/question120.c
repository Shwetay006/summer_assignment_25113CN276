#include <stdio.h>

int ticketNo[100], studentId[100], seatNo[100], n = 0;
char name[100][50], destination[100][50];

void bookTicket()
{
    printf("\nEnter Ticket Number: ");
    scanf("%d", &ticketNo[n]);

    printf("Enter Student ID: ");
    scanf("%d", &studentId[n]);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", name[n]);

    printf("Enter Destination: ");
    scanf(" %[^\n]", destination[n]);

    printf("Enter Seat Number: ");
    scanf("%d", &seatNo[n]);

    n++;

    printf("\nTicket Booked Successfully!\n");
}

void displayTickets()
{
    int i;

    if(n == 0)
    {
        printf("\nNo Tickets Booked!\n");
        return;
    }

    printf("\n===== BOOKED TICKETS =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nTicket Number : %d", ticketNo[i]);
        printf("\nStudent ID    : %d", studentId[i]);
        printf("\nStudent Name  : %s", name[i]);
        printf("\nDestination   : %s", destination[i]);
        printf("\nSeat Number   : %d\n", seatNo[i]);
    }
}

void searchTicket()
{
    int id, i, found = 0;

    printf("\nEnter Student ID to Search: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(studentId[i] == id)
        {
            printf("\nTicket Found!\n");
            printf("Ticket Number : %d\n", ticketNo[i]);
            printf("Student ID    : %d\n", studentId[i]);
            printf("Student Name  : %s\n", name[i]);
            printf("Destination   : %s\n", destination[i]);
            printf("Seat Number   : %d\n", seatNo[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Ticket Not Found!\n");
}

void cancelTicket()
{
    int id, i, j, k, found = 0;

    printf("\nEnter Student ID to Cancel Ticket: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++)
    {
        if(studentId[i] == id)
        {
            for(j = i; j < n - 1; j++)
            {
                ticketNo[j] = ticketNo[j + 1];
                studentId[j] = studentId[j + 1];
                seatNo[j] = seatNo[j + 1];

                k = 0;
                while(name[j + 1][k] != '\0')
                {
                    name[j][k] = name[j + 1][k];
                    k++;
                }
                name[j][k] = '\0';

                k = 0;
                while(destination[j + 1][k] != '\0')
                {
                    destination[j][k] = destination[j + 1][k];
                    k++;
                }
                destination[j][k] = '\0';
            }

            n--;
            found = 1;
            printf("Ticket Cancelled Successfully!\n");
            break;
        }
    }

    if(found == 0)
        printf("Student ID Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n===== TRAIN TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Search Ticket by Student ID\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                bookTicket();
                break;

            case 2:
                displayTickets();
                break;

            case 3:
                searchTicket();
                break;

            case 4:
                cancelTicket();
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}