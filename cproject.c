#include<stdio.h>
#include<conio.h>
#include <string.h> 

// Global integer variables
int choice, c = 10, cf = 20, ccf = 50, l = 50, np = 20, qnty, total;

// Function declarations
void menu();
void chai();
void cofee();
void coldcofee();
void lassi();
void nimbupani();

void main()
{
    // Loop keeps running until user chooses to exit
    while(1) 
    {
        menu();

        // Exit condition if user enters 6
        if(choice == 6) {
            printf("\nThank you for visiting Raunak Family Restaurant!\n");
            break;
        }

        switch(choice)
        {
            case 1:
                chai();
                break;
            case 2:
                cofee();
                break;
            case 3:
                coldcofee();
                break;
            case 4:
                lassi();
                break;
            case 5:
                nimbupani();
                break;
            default:
                printf("\nPlease enter a valid item No. (1,2,3...)\n");
        }
        
        printf("\nPress any key to open the menu again...\n");
        
    }
}

// Function definitions
void menu()
{
    printf("\n--------------------------------\n");
    printf("::::Raunak Family Restaurant::::\n");
    printf("--------------------------------\n");
    printf("         ::Menu Card::\n");
    printf("--------------------------------");
    printf("\n1.Chai                      10Rs");
    printf("\n2.Cofee                     20Rs");
    printf("\n3.Cold Cofee                50Rs");
    printf("\n4.Lassi                     50Rs");
    printf("\n5.NimbuPani                 20Rs");
    printf("\n6.Exit");
    printf("\n---------------------------------");
    printf("\nPlease select your item (1-6): ");
    scanf("%d", &choice);
}

void chai()
{
    printf("---------------------------------");
    printf("\nEnter Quantity: ");
    scanf("%d", &qnty);
    total = c * qnty;
    printf("\n-----------------------");
    printf("\n   ::Bill Receipt::");
    printf("\n-----------------------");
    printf("\nItems    Quantity  Amount");
    printf("\n-----------------------");
    printf("\nChai       %d        %dRs", qnty, total);
    printf("\n-----------------------");
    printf("\nTotal Amount:     %dRs", total);
    printf("\n-----------------------");
}

void cofee()
{
    printf("---------------------------------");
    printf("\nEnter Quantity: ");
    scanf("%d", &qnty);
    total = cf * qnty;
    printf("\n-----------------------");
    printf("\n   ::Bill Receipt::");
    printf("\n-----------------------");
    printf("\nItems    Quantity  Amount");
    printf("\n-----------------------");
    printf("\nCoffee     %d        %dRs", qnty, total); // Fixed name and item total display
    printf("\n-----------------------");
    printf("\nTotal Amount:     %dRs", total);
    printf("\n-----------------------");
}

void coldcofee()
{
    printf("---------------------------------");
    printf("\nEnter Quantity: ");
    scanf("%d", &qnty);
    total = ccf * qnty;
    printf("\n-----------------------");
    printf("\n   ::Bill Receipt::");
    printf("\n-----------------------");
    printf("\nItems    Quantity  Amount");
    printf("\n-----------------------");
    printf("\nCold C.    %d        %dRs", qnty, total);
    printf("\n-----------------------");
    printf("\nTotal Amount:     %dRs", total);
    printf("\n-----------------------");
}

void lassi()
{
    printf("---------------------------------");
    printf("\nEnter Quantity: ");
    scanf("%d", &qnty);
    total = l * qnty;
    printf("\n-----------------------");
    printf("\n   ::Bill Receipt::");
    printf("\n-----------------------");
    printf("\nItems    Quantity  Amount");
    printf("\n-----------------------");
    printf("\nLassi      %d        %dRs", qnty, total);
    printf("\n-----------------------");
    printf("\nTotal Amount:     %dRs", total);
    printf("\n-----------------------");
}

void nimbupani()
{
    printf("---------------------------------");
    printf("\nEnter Quantity: ");
    scanf("%d", &qnty);
    total = np * qnty;
    printf("\n-----------------------");
    printf("\n   ::Bill Receipt::");
    printf("\n-----------------------");
    printf("\nItems    Quantity  Amount");
    printf("\n-----------------------");
    printf("\nNimbu P.   %d        %dRs", qnty, total);
    printf("\n-----------------------");
    printf("\nTotal Amount:     %dRs", total);
    printf("\n-----------------------");
}
