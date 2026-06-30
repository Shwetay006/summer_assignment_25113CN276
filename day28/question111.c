#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
};

int main()
{
    struct Ticket t[100];
    int n = 0, choice, i, ticketNo, found;

    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Booked Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Ticket Number: ");
                scanf("%d", &t[n].ticketNo);

                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", t[n].name);

                printf("Enter Number of Seats: ");
                scanf("%d", &t[n].seats);

                n++;
                printf("Ticket Booked Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Tickets Booked.\n");
                }
                else
                {
                    printf("\nBooked Tickets:\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nTicket No : %d", t[i].ticketNo);
                        printf("\nPassenger : %s", t[i].name);
                        printf("\nSeats     : %d\n", t[i].seats);
                    }
                }
                break;

            case 3:
                printf("Enter Ticket Number to Search: ");
                scanf("%d", &ticketNo);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(t[i].ticketNo == ticketNo)
                    {
                        printf("\nTicket Found!\n");
                        printf("Ticket No : %d\n", t[i].ticketNo);
                        printf("Passenger : %s\n", t[i].name);
                        printf("Seats     : %d\n", t[i].seats);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Ticket Not Found!\n");
                break;

            case 4:
                printf("Enter Ticket Number to Cancel: ");
                scanf("%d", &ticketNo);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(t[i].ticketNo == ticketNo)
                    {
                        int j;
                        for(j = i; j < n - 1; j++)
                        {
                            t[j] = t[j + 1];
                        }
                        n--;
                        printf("Ticket Cancelled Successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Ticket Not Found!\n");
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