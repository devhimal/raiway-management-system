#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defining Structure
typedef struct mynode
{
    char name[20];
    char gen[6];
    int age;
    struct mynode *link;
} Node;

Node *start = NULL;

void details(int);
int seat(int);
int cal(int, int, int);
void bill(int, int);
void add_node(char[], char[], int);

// Global variables
char source[20], des[20], train[40];
char station[40], cla[40];
int time1, time2, a[55];
FILE *text;

// Function prototypes
int main()
{
    int i, j, d, x = 0;
    printf("Enter Number Of Passengers: ");
    scanf("%d", &j);

    // Calling details() function with
    // argument number of passengers
    details(j);

    printf("Enter The Source Place: ");
    scanf("%s", source);
    printf("Enter The Destination Place: ");
    scanf("%s", des);

    printf("\t\tThe Following Trains Are Available.....\n");
    printf("\t\t1. Mishra Express........10:00 a.m........Sealdah Station\n");
    printf("\t\t2. Ashray Express.........05:00 p.m........Howrah Station\n");
    printf("\t\t3. Sabin Express........11:00 p.m........Kolkata Chitpur Station\n");
    printf("\t\t4. Penjor Express......05:00 p.m........Sealdah Station\n");
    printf("\t\t5. Kings Express..........07:00 a.m........Santraganchi Station\n");
    scanf("%d", &i);

    do
    {
        switch (i)
        {
        case 1:
            strcpy(train, "Rajdhani Express");
            strcpy(station, "Sealdah Station");
            time1 = 10;
            time2 = 00;
            d = cal(2099, 1560, j);
            printf("Total Bill Amount: %d\n", d);
            break;
        case 2:
            strcpy(train, "Satabdi Express");
            strcpy(station, "Howrah Station");
            time1 = 17;
            time2 = 00;
            d = cal(1801, 981, j);
            printf("Total Bill Amount: %d\n", d);
            break;
        case 3:
            strcpy(train, "Humsafar Express");
            strcpy(station, "Kolkata Chitpur Station");
            time1 = 23;
            time2 = 00;
            d = cal(2199, 1780, j);
            printf("Total Bill Amount: %d\n", d);
            break;
        case 4:
            strcpy(train, "Garib-Rath Express");
            strcpy(station, "Sealdah Station");
            time1 = 17;
            time2 = 00;
            d = cal(1759, 1200, j);
            printf("Total Bill Amount: %d\n", d);
            break;
        case 5:
            strcpy(train, "Duronto Express");
            strcpy(station, "Santraganchi Station");
            time1 = 07;
            time2 = 00;
            d = cal(2205, 1905, j);
            printf("Total Bill Amount: %d\n", d);
            break;
        default:
            printf("Enter Correct choice.....\n");
            x = 1;
            break;
        }
    } while (x);

    printf("Now Book Your Seats......\n");

    // Calling seat() function with number
    // of passengers
    seat(j);

    // Calling bill() function with
    // the number of passengers
    // and amount argument
    bill(d, j);

    return 0;
}

// Function for calculation of amount
int cal(int y1, int y2, int h)
{
    int b, c, i, n;
    printf("\t\tEnter Your Choice......\n");
    printf("\t\t1. Sleeper Class....\n");
    printf("\t\t2. A.C Class.......\n");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        strcpy(cla, "Sleeper Class");
        b = y2 * h;
        c = b + (b * 0.18);
        break;
    case 2:
        printf("\t\tEnter Your Choice....\n");
        printf("\t\t1. 3A Class....\n");
        printf("\t\t2. 2A Class....\n");
        printf("\t\t3. 1st Class A.C.....\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            strcpy(cla, "3A Class");
            b = y1 * h;
            c = b + (b * 0.18);
            break;
        case 2:
            strcpy(cla, "2A Class");
            b = (y1 + 1000) * h;
            c = b + (b * 0.18);
            break;
        case 3:
            strcpy(cla, "1st Class A.C.");
            b = (y1 + 5000) * h;
            c = b + (b * 0.18);
            break;
        default:
            printf("\t\tEnter Right Choice......\n");
        }
        break;
    default:
        printf("\t\tEnter Right Choice......\n");
    }
    return c;
}

// Function for taking details
// of passengers
void details(int k)
{
    int i, a;
    char val[20], gen[6];
    for (i = 1; i <= k; i++)
    {
        printf("Enter The %dth Passenger Name: ", i);
        scanf("%s", val);
        printf("Enter The %dth Passenger Gender: ", i);
        scanf("%s", gen);
        printf("Enter The %dth Passenger Age: ", i);
        scanf("%d", &a);

        // Calling add_node() function
        add_node(val, gen, a);
    }
}

// Function to add details in node
// for each passenger
void add_node(char lol[20], char der[6], int b)
{
    Node *newptr = NULL, *ptr;
    newptr = (Node *)malloc(sizeof(Node));
    strcpy(newptr->name, lol);
    strcpy(newptr->gen, der);
    newptr->age = b;
    newptr->link = NULL;
    if (start == NULL)
        start = newptr;
    else
    {
        ptr = start;
        while (ptr->link != NULL)
            ptr = ptr->link;
        ptr->link = newptr;
    }
}

// Function for choosing seats
int seat(int p)
{
    int i;
    printf("\t		 -:SEAT MATRIX:-	 \n");
    printf("\t(U) (M)	 (L) (L) "
           " (U)\n\n");
    printf("\t01 02	 03\t04	 "
           "05\n\n");
    printf("\t06 07	 08\t09	 "
           "10\n");
    printf("\t11 12	 13\t14	 "
           "15\n\n");
    printf("\t16 17	 18\t19	 "
           "20\n");
    printf("\t21 22	 23\t24	 "
           "25\n\n");
    printf("\t26 27	 28\t29	 "
           "30\n");
    printf("\t31 32	 33\t34	 "
           "35\n\n");
    printf("\t36 37	 38\t39	 "
           "40\n");
    printf("\t41 42	 43\t44	 "
           "45\n\n");
    printf("\t46 47	 48\t49	 "
           "50\n");
    printf("\t51 52	 53\t54	 "
           "55\n\n");
    printf("\t56 57	 58\t59	 "
           "60\n");
    printf("\tEnter Seat Numbers: \n");
    for (i = 0; i < p; i++)
        scanf("%d", &a[i]);

    return 0;
}

// Function for printing receipt
void bill(int y, int j)
{
    int i;
    Node *ptr = start;
    for (i = 1; i <= j; i++)
    {
        printf("\t\t\%dst Passenger Name: %s\n", i, ptr->name);
        printf("\t\t%dst Passenger Gender: %s\n", i, ptr->gen);
        printf("\t\t%dst Passenger Age: %d\n\n", i, ptr->age);
        ptr = ptr->link;
    }
    printf("\t\tSource Place: %s\n", source);
    printf("\t\tDestination Place: %s\n", des);
    printf("\t\tThe Boarding Station: %s\n", station);
    printf("\t\tTrain Is: %s\n", train);
    printf("\t\tAllocated Class: %s\n", cla);
    printf("\t\tBoarding Time: %d:%d\n", time1, time2);
    printf("\t\tTotal Bill Amount: %d\n", y);
    printf("\t\tAllocated Seats Are: ");

    text = fopen("Railway_Ticket.txt", "w");
    fprintf(text, "Source of Travel:%s\n Destination of Travel:%s\n Station: %s\n  Train: %s\n Allocated Class: %s\n Boarding Time: %d:%d\n Total Bill Amount: %d\n ", source, des, station, train, cla, time1, time2, y);
    for (i = 0; i < j; i++)
    {
        printf("%d ", a[i]);
        fprintf(text, "Allocated Seat: %d\n", a[i]);
    }
    fclose(text);

    printf("\n");
    printf("\t\t\t\tThank You......\n");
}
