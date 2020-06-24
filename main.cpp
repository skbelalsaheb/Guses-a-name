#include<iostream>
//#include<conio.h>
//#include<windows.h>

#include<fstream>
#include<string.h>
#include<stdlib.h>
void fordelay(int j);
void loading();
using namespace std;
void rules()
{

}
 int c2=0;
//int return (char []);
int login()
{
     char u[100];
     char p[100];
     ifstream ob,ob1;
     ob.open("password.txt");
     ob>>u;
     ob>>p;
  //  system("color 7");
    char user[100];
    char pass[100];
    cout<<" \nENTER LOG IN DETAILS:-";
    cout<<"\n username:-"<<endl;
    system("color 3");
    cin.getline(user,100);
    cout<<"password:-"<<endl;
    cin.getline(pass,100);
    if(strcmp(u,user)==0 && strcmp(p,pass)==0)

    {
       cout<<"LOADING:-";
        loading();
        return 0;
    }
    else
      return 1;
;
}
void loading()
{
    cout<<"\a";
        for(int i=0;i<=100;i++)
    {
        fordelay(10000000);
        if(i>0 && i<=9)
        {
            cout<<"\b\b\b";
        }
        if(i>=10 && i<=99)
        {
            cout<<"\b\b\b\b";
        }
        if(i>99 && i<=100)
        {
            cout<<"\b\b\b\b\b";
        }
        cout<<"\xB2";
        cout<<i<<" %";
    }
}
void fordelay(int j)
{
    int i;
    int k;
    for(i=0;i<j;i++)
    {
    k=i;

    }
}
int main()
{

 label3: system("cls");
    //system("color 9");
    char first[]={'a','f','k','p','u'};
    char second[]={'b','g','l','q','v'};
    char third[]={'c','h','m','r','w'};
    char fourth[]={'d','i','n','s','x'};
    char fifth[]={'e','j','o','t','y'};
    char letter[100];
    char letter1[100];
    char name[100];
    int lc;
   int i=0;
   cout<<"1\t2\t3\t4\t5 \n"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<first[i]<<"\t";
        cout<<second[i]<<"\t";
        cout<<third[i]<<"\t";
        cout<<fourth[i]<<"\t";
        cout<<fifth[i]<<endl;
    }
    cout<<"\n\n";
   cout<<"******WELCOME TO THE NAME GUESSING PROGRAM THIS PROGRAM COULD TELL THE NAME YOU HAVE GUESSED ******:-"<<endl;
   cout<<"\nRead rules before enter in this game:--\n\t1.There have no such mind reading techniqe , this program will guess the name by your some inputs....";
   cout<<"\n\t2.This is a very strong program and designed only for adults";
   cout<<"\n\t3.There are 5 rows which are 1,2,3,4,5 now guess a name in your  mind";
   cout<<"\n\t4.Now count how many letters in your name and put it where it is required";
   cout<<"\n\t5.Now according to your name put inputs like in which row (1,2,3,4,5) your first letter lies";
   cout<<"\n\t6.Thats it we dont require anymore  input but there may some technichal problem  , so keep patient enter one more ";
   cout<<"\n\t7.Thank u";
   cout<<"\n\n\nenter any key to start this program:-";
   // system("cls");


   cout<<"\n------MADE BY SK BELAL SAHEB BCA 3rd SEM MIDNAPORE COLLEGE------\n\n";
    int l;
    l=login();

    if(l==0)
    {
       do{

        cout<<"\n------MADE BY SK BELAL SAHEB BCA 3rd SEM MIDNAPORE COLLEGE------\n\n";
        system("color 6");
        cout<<"1\t2\t3\t4\t5 \n"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<first[i]<<"\t";
        cout<<second[i]<<"\t";
        cout<<third[i]<<"\t";
        cout<<fourth[i]<<"\t";
        cout<<fifth[i]<<endl;
    }
    char choice1[10];
    cout<<"The name is boy / girl name :-b/g"<<endl;
    cin.getline(choice1,10);
 cout<<"enter how many letters in the name :-\t";
    cin>>lc;
    char q;
    q=lc+'0';
    if(q>=48 && q<=57)
    {
        cout<<"enter ok";
    }
    else
        {
            cout<<"want to enter onece again enter 1";
        int z;
        cin>>z;
        if(z==1)
        {
            goto label3;
        }
        else
        {
            return 0;
        }
    }
label:  int p;
    char number;
        for(i=0;i<lc;i++)
    {
        cout<<"\n enter the"<<i+1<< "letter contained row:-";
        cin>>number;
        if(number>= 48 && number <=90)
        {
            letter[i]=number;
            p=0;

        }
        else

        {
            cout<<endl<<"sorry you have enter wrong input do you want to enter one more time  press 1??";
             cin>>p;
             if(p==1)
             {
                 goto label;
             }
             else
                return 0;
        }
    }

    //system("cls");
     cout<<"\n";
   //system("color 9");
   cout<<"CHEAKING:-";
   loading();
   cout<<"\n";

    cout<<"1\t2\t3\t4\t5\n";
    for(i=0;i<lc;i++)
    {

        if(letter[i]=='1')
        {
            int i;
            cout<<endl;
            for(i=0;i<5;i++)
            {
                cout<<first[i]<<"\t";
            }

        }
     else  if(letter[i]=='2')
        {
            cout<<endl;
            int i;
            for(i=0;i<5;i++)
            {
                cout<<second[i]<<"\t";
            }

        }
       else if(letter[i]=='3')
        {   cout<<endl;
            int i;
            for(i=0;i<5;i++)
            {
                cout<<third[i]<<"\t";
            }
        }
       else if(letter[i]=='4')
        {   cout<<endl;
            int i;
            for(i=0;i<5;i++)
            {
                cout<<fourth[i]<<"\t";
            }
        }
       else if(letter[i]=='5')
        {   cout<<endl;
            int i;
            for(i=0;i<5;i++)
            {
                cout<<fifth[i]<<"\t";
            }
        }


    }
    char new1[100];
    char new2[100];
    char new3[100];
    char new4[100];
    char new5[100];
    int c=0;
   for(i=0;i<lc;i++)
   {

       if(letter[i]=='1')
       {
           new1[i]=first[c];
       }
       if (letter[i]=='2')
       {

           new1[i]=second[c];
       }
        if (letter[i]=='3')
       {

           new1[i]=third[c];
       }
        if (letter[i]=='4')
       {

           new1[i]=fourth[c];
       }
        if (letter[i]=='5')
       {

           new1[i]=fifth[c];
       }

   }
   c++;
   for(i=0;i<lc;i++)
   {

       if(letter[i]=='1')
       {
           new2[i]=first[c];
       }
       if (letter[i]=='2')
       {

           new2[i]=second[c];
       }
        if (letter[i]=='3')
       {

           new2[i]=third[c];
       }
        if (letter[i]=='4')
       {

           new2[i]=fourth[c];
       }
        if (letter[i]=='5')
       {

           new2[i]=fifth[c];
       }

   }
   c++;
   for(i=0;i<lc;i++)
   {

       if(letter[i]=='1')
       {
           new3[i]=first[c];
       }
       if (letter[i]=='2')
       {

           new3[i]=second[c];
       }
        if (letter[i]=='3')
       {

           new3[i]=third[c];
       }
        if (letter[i]=='4')
       {

           new3[i]=fourth[c];
       }
        if (letter[i]=='5')
       {

           new3[i]=fifth[c];
       }

   }
   c++;
   for(i=0;i<lc;i++)
   {

       if(letter[i]=='1')
       {
           new4[i]=first[c];
       }
       if (letter[i]=='2')
       {

           new4[i]=second[c];
       }
        if (letter[i]=='4')
       {

           new4[i]=third[c];
       }
        if (letter[i]=='4')
       {

           new4[i]=fourth[c];
       }
        if (letter[i]=='5')
       {

           new4[i]=fifth[c];
       }

   }
   c++;
   for(i=0;i<lc;i++)
   {

       if(letter[i]=='1')
       {
           new5[i]=first[c];
       }
       if (letter[i]=='2')
       {

           new5[i]=second[c];
       }
        if (letter[i]=='3')
       {

           new5[i]=third[c];
       }
        if (letter[i]=='4')
       {

           new5[i]=fourth[c];
       }
        if (letter[i]=='5')
       {

           new5[i]=fifth[c];
       }


   }
    cout<<"\a";
    cout<<"\nThere are some technical problem please enter the row's  onece again";
    label1: int p1;
     for(i=0;i<lc;i++)
     {
         cout<<"\nenter "<<i+1<<"containing row no:-";
         cin>>number;
         if(number>=48 && number<=57)
         {
             letter1[i]=number;
         }
         else
         {
             cout<<"sorry you have enter wrong input do you want a more try??:- press 1 else press any key:-";
             cin>>p1;
             if(p1==1)
                goto label1;
             else
                return 0;
         }
     }
     int count=0;
     for(i=0;i<lc;i++)
     {
         if (letter1[i]=='1')
         {
             name[i]=new1[i];
         }
         if (letter1[i]=='2')
         {
             name[i]=new2[i];
         }
         if (letter1[i]=='3')
         {
             name[i]=new3[i];
         }
         if (letter1[i]=='4')
         {
             name[i]=new4[i];
         }
         if (letter1[i]=='5')
         {
             name[i]=new5[i];
         }

     }
cout<<"Do you want to see the name:- y/n ??"<<endl;
char choice;
cin>>choice;
if(choice=='y')
{
    cout<<"PLEASE WAIT:-";
    loading();
    cout<<"\n";
cout<<"\n GENARATING:-";
loading();
cout<<"\n";
cout<<"\a";
     if(choice1[0]=='b'||choice1[0]=='B')
        cout<<"The handsome boy name is :-- ";
     else if(choice1[0]=='g'||choice1[0]=='G')
        cout<<"The sweet girl name is :--  ";
     int d=0;
     for(d=0;d<lc;d++)
     {
         cout<<name[d];

     }

     cout<<"\noece more enter 1 else enter 0";
     cin>>c2;
     system("cls");
if(c2==0 || c2==1)
{
    if(c2==0)
        return 0;

}

}
else{
    cout<<"wrong choice";
}
}while(c2==1);

}
else if(l==1)
{
cout<<"invalid login details:-";
}
return 0;
}

