#Railway Reservation System
This is a simple C program for a Railway Reservation System. It allows users to book train tickets, manage reservations, and generate a receipt for their journey. The program demonstrates the use of structures, linked lists, and basic file handling in C.

##Features
Book train tickets for multiple passengers.
Select from available trains and classes.
Calculate total bill amount based on fare and class.
Choose seats from a seat matrix.
Generate a receipt with passenger details and journey information.
##Usage
Compile the program using a C compiler:
gcc railway_reservation.c -o railway_reservation
##Run the compiled program:

./railway_reservation
##Follow the prompts to book tickets:
Enter the number of passengers and their details.
Select the source and destination.
Choose a train from the available options.
Select the class (sleeper/AC).
Choose seats from the displayed seat matrix.
The program will calculate the total bill amount and display a receipt.
##Structure
railway_reservation.c: Main C program file.
README.md: This README file providing information about the project.
LICENSE: MIT License file for the project.
##Requirements
C compiler (gcc recommended)
Standard C libraries (stdio.h, stdlib.h, string.h)
##Sample Output

        Enter Number Of Passengers: 2
        Enter The 1th Passenger Name: Alice
        Enter The 1th Passenger Gender: F
        Enter The 1th Passenger Age: 25
        Enter The 2th Passenger Name: Bob
        Enter The 2th Passenger Gender: M
        Enter The 2th Passenger Age: 30
        Enter The Source Place: New York
        Enter The Destination Place: Los Angeles

        The Following Trains Are Available.....
        1. Rajdhani Express........10:00 a.m........Sealdah Station
        2. Satabdi Express.........05:00 p.m........Howrah Station
        3. Humsafar Express........11:00 p.m........Kolkata Chitpur Station
        4. Garib-Rath Express......05:00 p.m........Sealdah Station
        5. Duronto Express..........07:00 a.m........Santraganchi Station
Enter your choice: 1

        Enter Your Choice......
        1. Sleeper Class....
        2. A.C Class......
1

        Source Place: New York
        Destination Place: Los Angeles
        The Boarding Station: Sealdah Station
        Train Is: Rajdhani Express
        Allocated Class: Sleeper Class
        Boarding Time: 10:00
        Total Bill Amount: 4092
        Allocated Seats Are: 1 2
                Thank You......
