#include<stdio.h>
#include<stdlib.h>/*exit and system("cls")*/
#include<process.h>
#include<string.h> 

void Menu();
void Quick_bites();
void Drinks();
void Desserts();
void Empty();
void Cart();
/*creating a structure*/
struct Order{
	int sno;
	char Item_Name[100];
	int quantity;
	int price;
};
char fname[]={"chewdatabase.dat"};

int main()
{
	char start;
	printf("\t\t\t======================================================================\n");
	printf("\t\t\t=         *******     **    **    ********    **           **        =\n");
	printf("\t\t\t=         **          **    **    *           **           **        =\n");
	printf("\t\t\t=         **          ********    ******      **    **     **        =\n");
	printf("\t\t\t=         **          **    **    *           **  **   **  **        =\n");
	printf("\t\t\t=         *******     **    **    ********    ****       ****        =\n");
	printf("\t\t\t=                                                                    =\n");
	printf("\t\t\t======================================================================\n");
	printf("\n");
	printf("\n");
	printf("\t\t\t\t       WELCOME TO CHEW'S FOOD TAKE AWAY PORTAL                      \n");
	printf("\n");
	printf("\t\t\t      Press [Y] to start building your order and [N] to exit portal         ");
	scanf("%c",&start);
	if(start=='y'||start=='Y')
	{
		system("cls");
		Empty();
		Menu();
	}
	else
	{
		exit(0);
	}
}
void Menu()
{
	system("cls");
	int choice;/*choice of user*/
	printf("\t\t\t                          MENU                                          \n");
	printf("\t\t\t      (Press the number of desired category indicated on the left)      \n");
	printf("\n");
	printf("\n");
	printf("\t\t\t                        1. Quick Bites                                  \n");
    printf("\t\t\t                        2. Drinks                                       \n");	
	printf("\t\t\t                        3. Desserts                                     \n");
	printf("\n");
	printf("\n");
	printf("\t\t\t                        8. Empty Cart                                   \n");
	printf("\t\t\t                        9. View your cart                               \n");
	printf("\t\t\t                        0. Quit                                         \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			system("cls");
			Quick_bites();
			break;
		case 2:
			system("cls");
			Drinks();
			break;
		case 3:
			system("cls");
			Desserts();
			break;
		case 8:
			system("cls");
			Empty();
			break;
		case 9:
			system("cls");
			Cart();
			break;
		case 0:
			system("cls");
			exit(0);
		default:
			system("cls");
			main();
	}
}
void Quick_bites()
{
	FILE *fp;
	struct Order Order1;
	struct Order Order2;
	/*Declaration of Order 1 and Order 2*/
	int sno_item,price_item,quantity_item;char more;
	printf("\t\t\t\t                      QUICK BITES                                    \n");
	printf("\t\t\t\t     You can choose from the multiple items in the menu              \n");
	printf("\n");
	printf("\t\t\t\t     S.No      	       Item                          Price per unit  \n");
	printf("\t\t\t\t     1.     Crispy Shitake Mushrooms                    295          \n");
	printf("\t\t\t\t     2.     Honey Chilli Potatoes                       220          \n");
	printf("\n");	
	printf("\n");	
	printf("\t\t\t\t   Enter the serial number of the item which you would like          \n");
	printf("\t\t\t\t   Press any other key to go back to the Main Menu                   \n");
	scanf("%d",&sno_item);
	if(sno_item==1)
	{
		fp=fopen(fname,"ab");
		printf("Please enter the quantity");
		scanf("%d",&quantity_item);
		printf("\t\t\t\tItem added to the cart successfully\n");
		price_item=295*quantity_item;
		/*order 1 specification*/
		Order1.sno=1;
		strcpy(Order1.Item_Name,"Crispy Shitake Mushrooms");
		Order1.quantity=quantity_item;
		Order1.price=price_item;
		fwrite(&Order1,sizeof(Order1),1,fp);
		fclose(fp);  
		fflush(stdin);
		printf("\nWant to add more items from this category?.\nPress Y for yes and any other key to return to the main menu.");
		scanf("%c",&more);
		if(more=='y'||more=='Y')
		{
			system("cls");
			 Quick_bites();
		}
		else
		{
			system("cls");
			Menu();
		}	
		
	 	
	}
	else if(sno_item==2)
	{
		fp=fopen(fname,"ab");
		printf("Please enter the quantity");
		scanf("%d",&quantity_item);
		price_item=220*quantity_item;
		printf("Item added to the cart successfully");
		/*order 2 specification*/
		Order2.sno=1;
		strcpy(Order2.Item_Name,"Honey Chilli Potatoes");
		Order2.quantity=quantity_item;
		Order2.price=price_item;
		fwrite(&Order2,sizeof(Order2),1,fp);
		fclose(fp);
		fflush(stdin);
		printf("\nWant to add more items from this category?.\nPress Y for yes and any other key to return to the main menu.");
		scanf("%c",&more);
		if(more=='y'||more=='Y')
		{
			system("cls");
			Quick_bites();
		}
		else
			system("cls");
			 Menu();
		
	 	
	}
	else
	{
		system("cls");
		Menu();
	}
}
void Drinks()
{
	FILE *fp;
	struct Order Order3;
	struct Order Order4;
	/*Declaration of Order 3 and Order 4*/
	int sno_item,price_item,quantity_item;char more;
	printf("\t\t\t\t                      DRINKS                                    \n");
	printf("\t\t\t\t     You can choose from the multiple items in the menu              \n");
	printf("\n");
	printf("\t\t\t\t     S.No      	       Item                          Price per unit  \n");
	printf("\t\t\t\t     3.              Cappucino                           95          \n");
	printf("\t\t\t\t     4.              Cafe Americano                      80          \n");
	printf("\n");	
	printf("\n");	
	printf("\t\t\t\t   Enter the serial number of the item which you would like          \n");
	printf("\t\t\t\t   Press any other key to go back to the Main Menu                   \n");
	scanf("%d",&sno_item);
	if(sno_item==3)
	{
		fp=fopen(fname,"ab");
		printf("Please enter the quantity");
		scanf("%d",&quantity_item);
		printf("\nItem added to the cart successfully\n");
		price_item=95*quantity_item;
		/*order 1 specification*/
		Order3.sno=3;
		strcpy(Order3.Item_Name,"Cappucino");
		Order3.quantity=quantity_item;
		Order3.price=price_item;
		fwrite(&Order3,sizeof(Order3),1,fp);
		fclose(fp);
		fflush(stdin);
		printf("\nWant to add more items from this category?.\nPress Y for yes and any other key to return to the main menu.");
		scanf("%c",&more);
		if(more=='y'||more=='Y')
		{
			system("cls");
			 Drinks();
		}
		else
		{
			system("cls");
			Menu();
		}
		
	 	
	}
	if(sno_item==4)
	{
		fp=fopen(fname,"ab");
		printf("Please enter the quantity\n");
		scanf("%d",&quantity_item);
		price_item=80*quantity_item;
		printf("Item added to the cart successfully\n");
		/*order 4 specification*/
		Order4.sno=4;
		strcpy(Order4.Item_Name,"Cafe Americano");
		Order4.quantity=quantity_item;
		Order4.price=price_item;
		fwrite(&Order4,sizeof(Order4),1,fp);
		fclose(fp);
		fflush(stdin);
		printf("\nWant to add more items from this category?.\nPress Y for yes and any other key to return to the main menu.\n");
		scanf("%c",&more);
		if(more=='y'||more=='Y')
		{
			system("cls");
			Drinks();
		}
		else
		{
			system("cls");
			Menu();
		}
		
	 	
	}
	else
	{
		system("cls");
		Menu();
	}	
}
void Desserts()
{
		FILE *fp;
	struct Order Order5;
	struct Order Order6;
	/*Declaration of Order 5 and Order 6*/
	int sno_item,price_item,quantity_item;char more;
	printf("\t\t\t\t                      QUICK BITES                                    \n");
	printf("\t\t\t\t     You can choose from the multiple items in the menu              \n");
	printf("\n");
	printf("\t\t\t\t     S.No      	       Item                          Price per unit  \n");
	printf("\t\t\t\t     5.     Banana Split                                195          \n");
	printf("\t\t\t\t     6.     Oreo Strawberry Sundae                      175          \n");
	printf("\n");	
	printf("\n");	
	printf("\t\t\t\t   Enter the serial number of the item which you would like          \n");
	printf("\t\t\t\t   Press any other key to go back to the Main Menu                   \n");
	scanf("%d",&sno_item);
	if(sno_item==5)
	{
		fp=fopen(fname,"ab");
		printf("Please enter the quantity");
		scanf("%d",&quantity_item);
		printf("\nItem added to the cart successfully\n");
		price_item=195*quantity_item;
		/*order 5 specification*/
		Order5.sno=5;
		strcpy(Order5.Item_Name,"Banana Split");
		Order5.quantity=quantity_item;
		Order5.price=price_item;
		fwrite(&Order5,sizeof(Order5),1,fp);
		fclose(fp);
		fflush(stdin);
		printf("\nWant to add more items from this category?.Press Y for yes and any other key to return to the main menu.");
		scanf("%c",&more);
		if(more=='y'||more=='Y')
		{
			system("cls");
			 Desserts();
		}
		else
		{
			system("cls");
			Menu();
		}
		
	 	
	}
	if(sno_item==6)
	{
		fp=fopen(fname,"ab");
		printf("Please enter the quantity\n");
		scanf("%d",&quantity_item);
		price_item=175*quantity_item;
		printf("Item added to the cart successfully\n");
		/*order 4 specification*/
		Order6.sno=6;
		strcpy(Order6.Item_Name,"Cafe Americano");
		Order6.quantity=quantity_item;
		Order6.price=price_item;
		fwrite(&Order6,sizeof(Order6),1,fp);
		fclose(fp);
		fflush(stdin);
		printf("\nWant to add more items from this category?.Press Y for yes and any other key to return to the main menu.\n");
		scanf("%c",&more);
		if(more=='y'||more=='Y')
		{
			system("cls");
			Desserts();
		}
		else
		{
			system("cls");
			Menu();
		}
		
	 	
	}
	else
	{
		system("cls");
		Menu();
	}
}
void Cart()
{
	FILE *fp;
	static int total;char finalise;
	struct Order Orderf;
	fp=fopen(fname,"rb");
	printf("\t\t              ORDER                               \n");
	printf("\t\t\tS.No\t\t\tItem Name\t\t\t\tQuantity\t\t\t\tPrice\t\t\n");
	while(1)
	{
		fread(&Orderf,sizeof(Orderf),1,fp);
		if(feof(fp))
		{
			break;
		}
		printf("\t\t\t%d\t\t\t%s\t\t\t\t%d\t\t\t\t%d\t\t\n",Orderf.sno,Orderf.Item_Name,Orderf.quantity,Orderf.price);
		total=total+Orderf.price;
	}
	printf("\n\n====================================> Total Bill Amount [Rs. %d]\n",total);
	printf("\n");
	printf("\n");
	printf("Are you sure you want to place your order[Y/N]");
	fflush(stdin);
	scanf("%c",&finalise);
	if(finalise=='y'||finalise=='Y')
	{
		system("cls");
		printf("\t\t Thank you for placing your order\n\t\t Your order will be ready in 10 min\n\t\tCollect your order from Counter 1");
		getch();
		exit(1);
		
	}
	else
	{
		Menu();
	}
	return;
}
void Empty()
{
	int ret;
	ret=remove(fname);
	if(ret==0)
	{
		printf("Cart is empty");
		
	}
	else
	{
		printf("Error:[Unable to empty cart]");
	}
	return;
}
