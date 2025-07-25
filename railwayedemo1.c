#include<stdio.h>
#include<string.h>
#define pi 3.14  
char name[20],address[40],email[30],phone[10];
int place,date,time,station,arrvil,type;
void registration();
void train();
void registration()
{
    //char name[20],address[40],email[30],phone[10];

    printf("\nNow plz tell Me Your First Name:");
        scanf("%s",&name);

    printf("\nNow plz tell Me Your Address:");
        gets(address);
        gets(address);

    printf("\nNow plz tell Me Your Email:");
        scanf("%s",&email);

    printf("\nNow plz tell Me Your Phone Number:");
        scanf("%s",&phone);

    printf("Thanks For Registration\n");
}
void train()
{
    //int place,date,time,station,arrvil,type;

    printf("\nType 1 For Ahemdabad To manali");
    printf("\nType 2 For Ahemdabad To Kerala");
    printf("\nType 3 For Ahemdabad To kashmir");
    printf("\nType 4 For Ahemdabad To Delhousie\n");
    scanf("%d",&place);
    switch(place)
            {
                case 1:
                {
                    printf("You Like To Chose Ahemdabad To manali");
                    break;
                }
                case 2:
                {
                    printf("You Like To Chose Ahemdabad To Kerala");
                    break;
                }
                case 3:
                {   
                    printf("You Like To Chose Ahemdabad To Kashmir");
                    break;
                }
                case 4:
                {
                    printf("You Like To Chose Ahemdabad To Delhousie");
                    break;
                }
                default:
                {
                    printf("Inviled Number Please Try Again some Time Later");
                    break;
                }
            }

            printf("\nplz Tell Me The perfect Date To Deparchar:- ");
                scanf("%d",&date);

        printf("\nOn This day %dth of June owr train are deparching at time mutlipules time: ",date);
        printf("\nYou Have To Choise The Time As par Your comfort: \n");
        
        printf("Type 1 For 7:00am at Morning: \n");
        printf("Type 2 For 11:00am at Morning: \n");
        printf("Type 3 For 15:00pm at Evening: \n");
        printf("Type 4 For 19:00pm at Afternone: \n");
        scanf("%d",&time);
            switch(time)
            {
            case 1:
                {
                    printf("You Like To Chose Your Deparchar Time at sharp 7:00am");
                    break;
                }
                case 2:
                {
                    printf("You Like To Chose Your Deparchar Time at sharp 11:00am");
                    break;
                }
                case 3:
                {   
                    printf("You Like To Chose Your Deparchar Time at sharp 3:00pm");
                    break;
                }
                case 4:
                {
                    printf("You Like To Chose Your Deparchar Time at sharp 6:00pm");
                    break;
                }
                default:
                {
                    printf("Inviled Number Please Try Again some Time Later");
                    break;
                }
            }

        printf("\nNow You Have To Choics Station To Deparchar:-");
        printf("\nType 1 For sabarmati station: \n");
        printf("Type 2 For Ranip Station: \n");
        printf("Type 3 For New Ranip Station: \n");
        printf("Type 4 For vadj Station: \n");
        scanf("%d",&arrvil);
            switch(arrvil)
            {
            case 1:
                {
                    printf("You Like To Chose Sabermati Station");
                    break;
                }
                case 2:
                {
                    printf("You Like To Chose Ranip Station");
                    break;
                }
                case 3:
                {   
                    printf("You Like To Chose New Ranip Staion");
                    break;
                }
                case 4:
                {
                    printf("You Like To Chose Vadj Station");
                    break;
                }
                default:
                {
                    printf("Inviled Number Please Try Again some Time Later");
                    break;
                }
            }

        printf("\nThanks For Your Coporation\n\nNow Tell me which Train Do you Like TO Choies: ");
        printf("\nWe Have Few Oppsion To give\n");
        
        printf("write 1 For Tear 2 Non AC\n");
        printf("write 2 For Tear 3 Non AC \n");
        printf("write 3 For Tear 2 With AC\n");
        printf("write 4 For Tear 3 With AC \n");
            scanf("%d",&type);
            switch (type)
            {
                case 1:
                {
                    printf("So,You Choies Tear 2 Non AC\n");
                    break;
               }
                case 2:
                {
                    printf("So,You Choies Tear 3 Non AC\n");
                    break;
                }
                case 3:
                {   
                    printf("So,You Choies Tear 2 With AC\n");
                    break;
                }
                case 4:
                {
                    printf("So,You Choies Tear 3 With AC\n");
                    break;
                }
                default:
                {
                    printf("Invited Plz Try Again \n");
                    break;
                }
            }
}
int main()
{
    int Age,aadhar,del;
    char handicap,gender[20];
    printf("Welcome To Bhavya National Railway Station \n");
    printf("Here You Have To Registrated First\n");

    registration();

    printf("\nCan You Tell Me Which Location Do You Like To Choise From Below:-");
    printf("\nSorry,We Don't Have So Many Opsion For You");

    train();

    printf("\nNow plz tell Me Your Age:");
        scanf("%d",&Age);

    printf("\nNow plz tell Me Your Gender:");
        scanf("%s",&gender);

    printf("\nNow plz tell Me Your Aadhar Card NO:");
        scanf("%d",&aadhar);

    printf("\nAre You Physical Handicap:-(Y/N):-");
        scanf("%c",&handicap);
        scanf("%c",&handicap);

        if (handicap=='Y'|| handicap=='y')     printf("You Don't Have To Pay:-");

        else if(Age>60)      printf("You Have To 2000/-");

        else if(Age>18)      printf("You Have To 4000/-");

        else                 printf("You Have To 3000/-");

        printf("\n\t\tYOUR TICKET:-");
        printf("\n\n\tNAME:- %s",name);
        printf("\t\tAGE:- %d",Age);
        //printf("\t\tPLACE OF ARRIVAL:- %s",place);
        printf("\n\tPLACE OF DEPARCHAR:- sabarmate station");
        printf("\t\tAADHAR NO:- %d",aadhar);
        printf("\n\tPHONE NUMBER:- %d",phone);
        printf("\t\tTime To Deparcher:- 11:00am Of Morning");
        printf("\t\tTrain Type:- Tear 2 With AC");
        printf("\n\tYour Reservation seet no:- 12Bc98~");
        printf("\t\tGENDER:- %c",gender);

        if (handicap=='Y'||handicap=='y')        printf("You Don't Have To Pay:-");
        else if(Age>60)                          printf("\t\tAMOUNT OF PAYMENT:- 2,000/-");
        else if(Age>18)                          printf("\t\tAMOUNT OF PAYMENT:- 4,000/-");
        else                                     printf("\t\tAMOUNT OF PAYMENT:- 3,000/-");
        
        printf("\t\tGENDER:- %s\n",gender);
        printf("\n\tIf You Want To Delete Your Ticket");
        printf("\n\twrite 1 To Cancel Your Ticket");
        printf("\n\twrite 2 To Conform Your Ticket\n\t");
        scanf("%d",&del);
            switch (del)
            {
                case 1:
                {
                    printf("\n\tYour Ticket Is Cancel");
                    break;
                }
                case 2:
                {
                    printf("\n\tYour Ticket Is Conform");
                    break;
                }
                default:
                {
                    printf("inveled number ");
                    break;
                }
            }
    return 0;
}