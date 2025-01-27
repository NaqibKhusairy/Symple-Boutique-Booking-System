//PUTERA NAQIB KHUSAIRI - CB24019
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char BookingDate[250] , EventDate[250] , CustomerName[250] , PhoneNumber[250] , Email[250] , BridalDaisType[250] , WeddingAttireType[250];
    char Pakage[5][250] , PhotographerType[250];
    int NumberOfPakage , MenuPackage , NumberOfGuests , NumberOfTables;
    float price = 0;

    printf("Enter Booking Date:");
    gets(&BookingDate);
    printf("Enter Event Date:");
    gets(&EventDate);
    printf("Enter Customer Name:");
    gets(&CustomerName);
    printf("Enter Phone Number:");
    scanf("%s",&PhoneNumber);
    printf("Enter email:");
    scanf("%s",&Email);
    printf("Enter Number Of Packages:");
    scanf("%d",&NumberOfPakage);
    getchar();
    for(int num = 1; num <= NumberOfPakage; num++)
    {
        printf("Enter Package %d:",num);
        gets(&Pakage[num]);
        if(strcmp(Pakage[num], "Bridal Dais") == 0)
        {
            printf("Enter Type of %s: ", Pakage[num]);
            scanf("%s",&BridalDaisType);
            if(strcmp(BridalDaisType , "Modern") == 0)
            {
                price += 3500;
            }
            else if(strcmp(BridalDaisType , "Classic") == 0)
            {
                price += 3000;
            }
            else if(strcmp(BridalDaisType , "Budget") == 0)
            {
                price +=1000;
            }
        }
        else if(strcmp(Pakage[num], "Wedding Attire") == 0)
        {
            printf("Enter Type of %s: ", Pakage[num]);
            scanf("%s",&WeddingAttireType);
            if(strcmp(WeddingAttireType , "Songket") == 0)
            {
                price += 800;
            }
            else if(strcmp(WeddingAttireType , "Modern") == 0)
            {
                price += 760;
            }
            else if(strcmp(WeddingAttireType , "Traditional") == 0)
            {
                price +=700;
            }
        }
        else if(strcmp(Pakage[num], "Catering") == 0)
        {
            printf("Enter Menu Package:");
            scanf("%d",&MenuPackage);
            printf("Enter Number Of Guests:");
            scanf("%d",&NumberOfGuests);
            if(MenuPackage == 10)
            {
                price += (17 * NumberOfGuests);
            }
            else if(MenuPackage == 8)
            {
                price += (13 * NumberOfGuests);
            }
        }
        else if(strcmp(Pakage[num], "Photographer") == 0)
        {
            printf("Enter Type of %s: ", Pakage[num]);
            gets(&PhotographerType);
            if(strcmp(PhotographerType , "Indoor") == 0)
            {
                price += 1000;
            }
            else if(strcmp(PhotographerType , "Outdoor") == 0)
            {
                price += 1200;
            }
            else if(strcmp(PhotographerType , "Indoor & Outdoor") == 0)
            {
                price +=1800;
            }
        }
        else if(strcmp(Pakage[num], "Ceremony Hall") == 0)
        {
            printf("Enter Number Of Tables:");
            scanf("%d",&NumberOfTables);
            if(NumberOfTables == 15)
            {
                price += 5000;
            }
            else if(NumberOfTables == 10)
            {
                price += 3000;
            }
        }
        getchar();
    }

    printf("\nBooking Date:");
    puts(BookingDate);
    printf("Event Date:");
    puts(EventDate);
    printf("Customer Name:");
    puts(CustomerName);
    printf("Phone Number:%s\n",PhoneNumber);
    printf("Email:%s\n",Email);
    printf("Number Of Packages:%d\n",NumberOfPakage);
    for(int num = 1; num <= NumberOfPakage; num++)
    {
        printf("Package %d:",num);
        puts(Pakage[num]);
        if(strcmp(Pakage[num], "Bridal Dais") == 0)
        {
            printf("%s: ", Pakage[num]);
            printf(":%s\n",BridalDaisType);
        }
        else if(strcmp(Pakage[num], "Wedding Attire") == 0)
        {
            printf("%s: ", Pakage[num]);
            printf(":%s\n",WeddingAttireType);
        }
        else if(strcmp(Pakage[num], "Catering") == 0)
        {
            printf("Menu Package:%d\n",MenuPackage);
            printf("Enter Number Of Guests:%d\n",NumberOfGuests);
        }
        else if(strcmp(Pakage[num], "Photographer") == 0)
        {
            printf("%s: ", Pakage[num]);
            puts(PhotographerType);
        }
        else if(strcmp(Pakage[num], "Ceremony Hall") == 0)
        {
            printf("Number Of Tables:%d\n",NumberOfTables);
        }
    }
    printf("Total Payment: RM%.2f\n",price);
    return 0;
}
