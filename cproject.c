#include<stdio.h>
#include<conio.h>
#include <string.h> // For strlen()

//Global integer variables
int choice,c=10,cf=20,ccf=50,l=50,np=20,qnty,total;

//function  declaration
void menu();
void chai();
void cofee();
void coldcofee();
void lassi();
void nimbupani();

//The main method
void main()
{

 //Call the function to show the menu items
 menu();

 //
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
	printf("Please enter valid item No.(1,2,3...)");

 }
getch();
}
//Function defination
void menu()
{
 printf("--------------------------------\n");
 printf("::::Raunak Family Restaurant::::\n");
 printf("--------------------------------\n");
 printf("         ::Menu Card::\n");
 printf("--------------------------------");
 printf("\n1.Chai                      10Rs");
 printf("\n2.Cofee                     20Rs");
 printf("\n3.Cold Cofee                50Rs");
 printf("\n4.Lassi                     50Rs");
 printf("\n5.NimbuPani                 20Rs");
 printf("\n---------------------------------");
 printf("\nPlease select your item(1,2...):");
 scanf("%d",&choice);
}
void chai()
       {
	printf("---------------------------------");
	printf("\nEnter Quantity:");
	scanf("%d",&qnty);
	total=c*qnty;
	printf("\n-----------------------");
	printf("\n   ::Bill Receipt::");
	printf("\n-----------------------");
	printf("\nItems  Quantity  Amount");
	printf("\n-----------------------");
	printf("\nChai     %d        %dRs",qnty,c);
	printf("\n-----------------------");
	printf("\nTotal Amount:     %dRs",total);
	printf("\n-----------------------");
       }
void cofee()
       {
	printf("---------------------------------");
	printf("\nEnter Quantity:");
	scanf("%d",&qnty);
	total=cf*qnty;
	printf("\n-----------------------");
	printf("\n   ::Bill Receipt::");
	printf("\n-----------------------");
	printf("\nItems  Quantity  Amount");
	printf("\n-----------------------");
	printf("\nChai     %d        %dRs",qnty,cf);
	printf("\n-----------------------");
	printf("\nTotal Amount:     %dRs",total);
	printf("\n-----------------------");
       }
void coldcofee()
       {
	printf("---------------------------------");
	printf("\nEnter Quantity:");
	scanf("%d",&qnty);
	total=ccf*qnty;
	printf("\n-----------------------");
	printf("\n   ::Bill Receipt::");
	printf("\n-----------------------");
	printf("\nItems  Quantity  Amount");
	printf("\n-----------------------");
	printf("\nChai     %d        %dRs",qnty,ccf);
	printf("\n-----------------------");
	printf("\nTotal Amount:     %dRs",total);
	printf("\n-----------------------");
       }
void lassi()
       {
	printf("---------------------------------");
	printf("\nEnter Quantity:");
	scanf("%d",&qnty);
	total=l*qnty;
	printf("\n-----------------------");
	printf("\n   ::Bill Receipt::");
	printf("\n-----------------------");
	printf("\nItems  Quantity  Amount");
	printf("\n-----------------------");
	printf("\nChai     %d        %dRs",qnty,l);
	printf("\n-----------------------");
	printf("\nTotal Amount:     %dRs",total);
	printf("\n-----------------------");
       }
void nimbupani()
       {
	printf("---------------------------------");
	printf("\nEnter Quantity:");
	scanf("%d",&qnty);
	total=np*qnty;
	printf("\n-----------------------");
	printf("\n   ::Bill Receipt::");
	printf("\n-----------------------");
	printf("\nItems  Quantity  Amount");
	printf("\n-----------------------");
	printf("\nChai     %d        %dRs",qnty,np);
	printf("\n-----------------------");
	printf("\nTotal Amount:     %dRs",total);
	printf("\n-----------------------");
       }
