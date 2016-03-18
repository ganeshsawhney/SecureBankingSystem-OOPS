/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */

#include<iostream>
#include<string>
#include<stdlib.h>

int temp;

using namespace std;
class bank
{
 private:
 int ac_no,account;
 int status;
 float balance;
 string name;
 string pw;

 public:
 int open(void);
 int changepw(string,int);
 int deposite(int);
 int withdraw(int);
 int search(int);
 int display(void);
};

int bank::changepw(string str,int j)
{if(account==j)
  {
      if(status==0)
      {
          cout<<"Blocked \n";
          return 0;
      }
 string x,y;
 int q=1,i=0;
 while(q!=0 && i!=3)
 {
     if(str==pw)
     {
         cout<<"ENTER NEW PASSWORD :  ";
         cin>>x;
         cout<<"REENTER TO CONFIRM :  ";
         cin>>y;
         if(x==y)
            {
                pw=x;
                q=0;
            }
         else
            cout<<"YOUR PASSWORDS DON'T MATCH";
     }
     else
        cout<<"WRONG PASSWORD ENTERRED";
        i++;
 }
 if(i==3)
    status=0;
  }
}


int bank::open()
{
 cout<<"ENTER YOUR NAME :  ";
 cin>>name;
 cout<<"ENTER YOUR ACCOUNT NUMBER :  ";
 cin>>account;
 cout<<"ENTER THE AMOUNT OF MONEY : BDT  ";
 cin>>balance;
 int temp1=1;
 string x,y;
 while(temp1!=0)
 {
     cout<<"ENTER PASSWORD : ";
 cin>>x;
 cout<<"REENTER PASSWORD TO CONFIRM : ";
 cin>>y;
 if(x==y)
 {
     pw=x;
     temp1=0;
 }
 }
 status=1;
}

int bank::deposite(int j)
{
  int bnc;
  if(account==j)
  {
      if(status==0)
      {
          cout<<"Blocked \n";
          return 0;
      }
      int temp1=1;
      string x;
      while(temp1!=0 && temp1!=4)
        {
            cout<<"ENTER PASSWORD : ";
            cin>>x;
            if(x==pw)
                temp1=0;
            else
            {cout<<"Wrong password entered kindly check";temp1++;}
        }
        if(temp1==4)
        {
            status=0;
            cout<<"Blocked";
            return 0;
        }

    cout<<"ENTER THE AMOUNT OF MONEY : BDT ";
    cin>>bnc;
    balance=balance+bnc;
    cout<<"\n\n\tJOB HAS DONE WELL !!! \n";
   }
}

int bank::withdraw(int k)
{
  int blnc,p;
  if(account==k)
  {
      if(status==0)
      {
          cout<<"Blocked \n";
          return 0;
      }
      int temp1=1;
      string x;
      while(temp1!=0 && temp1!=4)
        {
            cout<<"ENTER PASSWORD : ";
            cin>>x;
            if(x==pw)
                temp1=0;
            else
            {cout<<"Wrong password entered kindly check";temp1++;}
        }
        if(temp1==4)
        {
            status=0;
            cout<<"Blocked";
            return 0;
        }
    cout<<"YOUR CURRENT ACCOUNT BALANCE IS BDT "<<balance<<"\n"<<"THE AMOUNT OF MONEY YOU WANT TO WITHDRAW IS BDT ";
    cin>>blnc;
    p=balance-blnc;
    if(p<0)
    cout<<"SORRY !!! THERE IS NOT ENOUGH MONEY IN YOUR ACCOUNT\n";
    else if(p>=0)
    {
    cout<<"\n\tYOUR REQUEST TO WITHDRAW MONEY HAS DONE\n\n";
    balance=p;
    }
   }
}

int bank::display(void)
{
    if(status==0)
      {
          cout<<"Blocked \n";
      }
      else
      cout<<"\n\nNAME : "<<name<<"\n\nACCOUNT NO. "<<account<<"\n\nBALANCE : BDT "<<balance<<"\n\n";
}

int bank::search(int m)
{
 if(account==m)
 {
     if(status==0)
      {
          cout<<"Blocked \n";
          return 0;
      }
      int temp1=1;
      string x;
      while(temp1!=0 && temp1!=4)
        {
            cout<<"ENTER PASSWORD : ";
            cin>>x;
            if(x==pw)
                temp1=0;
            else
            {cout<<"Wrong password entered kindly check";temp1++;}
        }
        if(temp1==4)
        {
            status=0;
            cout<<"Blocked";
            return 0;
        }
 cout<<"\n\n*******Account Holder's INFO*******";
 cout<<"\n\nNAME : "<<name<<"\n\nACCOUNT NO. "<<account<<"\n\nBALANCE : BDT "<<balance<<"\n\n";
 cout<<"\n***************************************\n\n";
 }
}

int main()
{
    int i,j,k,m,l,y=0,index;
    string ltm;
    bank b[20];
    do
    {

  system("cls");
  cout<<"\t\tWelcome to PAISA HI PAISA Bank\t\t\n\n\n";

        cout<<"\a\nPRESS 1 TO OPEN ACCOUNT\n\n"<<"PRESS 2 TO DEPOSITE AMOUNT\n\n"<<"PRESS 3 TO WITHDRAW MONEY \n\n"<<"PRESS 4 TO DISPLAY \n\n"<<"PRESS 5 TO SEARCH \n\n"<<"PRESS 6 TO CHANGE PASSWORD \n\n"<<"PRESS 7 TO EXIT \n\n\t\n";
        cout<<"Your option......";
        cin>>index;
        switch(index)
        {
            case 1:
                cout<<"\nHOW MANY ACCOUNT YOU WANT TO OPEN? :"; //opening account
                cin>>y;
                for(i=0;i<y;i++)
                    b[i].open();
                break;
            case 2:
                cout<<"\nENTER YOUR ACCOUNT NO. "; //deposite amount
                cin>>j;
                for(i=0;i<y;i++)
                    b[i].deposite(j);
                break;
            case 3:
                cout<<"\nENTER YOUR ACCOUNT NO. ";  //withdraw money
                cin>>k;
                for(i=0;i<y;i++)
                    b[i].withdraw(k);
                break;
            case 4:
                for(i=0;i<y;i++)
                    b[i].display();
                break;
            case 5:
                cout<<"\nENTER YOUR ACCOUNT NO. ";  //search option
                cin>>m;
                for(i=0;i<y;i++)
                    b[i].search(m);
                break;
            case 6:
                cout<<"\nENTER YOUR ACCOUNT NO. ";  //search option
                cin>>m;
                cout<<"\nENTER YOUR ORRIGINAL PASSWORD ";  //search option
                cin>>ltm;
                for(i=0;i<y;i++)
                    b[i].changepw(ltm,m);
                break;
            case 7:
                break;

            default:cout<<"\nYOU HAVE PRESSED THE WRONG KEY. PLEASE TRY AGAIN. \n\n\n";
            break;
        }
   }while(index!=7);
}
/* Created by Ganesh Sawhney       **
** Email: ganeshsawhney@gmail.com  **
** Github Username: ganeshsawhney  */
