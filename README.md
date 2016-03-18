Secure Banking System
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

Role: To perform all the major Banking tasks.
Description: Used C++ classes (inheritance, polymorphism, abstraction etc.) and Efficient File Handling to make a fully password protected code with features like login logoff, block user.

Basic Information:-
•	The project has been made in Codeblocks and with the compiler - Dev-Cpp 5.4.2 MinGW 4.7.2.
•	The header files used are:
1.	include<iostream>
2.	include<string>
3.	include<stdlib.h>

Objective of the Project:-
The objective of our Project is Bank Account Management.
The name of my bank is “PAISA HI PAISA”.
The major Benefits of my program would be to:-
1.	OPEN ACCOUNT
2.	DEPOSITE AMOUNT
3.	WITHDRAW MONEY
4.	DISPLAY ALL INFO
5.	SEARCH FOR THE ACCOUNT
6.	CHANGE PASSWORD OF EXISTING ACCOUNT
7.	BLOCK THE ACCOUNT IF WRONG PASSWORD ENTERED MORE THAN 3 TIMES
8.	FULLY SECURED PRIVATED PASSWORD PROTECTION IN EVERY FUNCTION

Class used in the Project:-
Class name – Bank.

Member functions used in the class bank:-
The functions used in the class bank so far do come under the category of:-
•	Basic String Functions.
•	Basic Integer/Float Functions.
The member functions are:- 
Public:
1.	int open(void);
2.	int changepw(string,int);
3.	int deposite(int);
4.	int withdraw(int);
5.	int search(int);
6.	int display(void);

Data members of the class Bank:-
The Data members of the class Bank are:
Private:
1.	int ac_no;
2.	int account;
3.	int status;
4.	float balance;
5.	string name;
6.	string pw;