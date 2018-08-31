//WAMDP to print N no. of fibonacci series or to display factorial of no.
#include<iostream.h>
#include<conio.h>
#include<process.h>
int main()
{
 int ch;
 A:
 clrscr();
 cout<<"* * * * Number Game * * * *";
 cout<<"\n1.Fibonacci Series";
 cout<<"\n2.Factorial Number";
 cout<<"\n3.Exit";
 cout<<"\n\nEnter your choice:";
 cin>>ch;
 if(ch==1)
 {
   long int a,b,c,ctr,n;
   cout<<"How many numbers:- ";
   cin>>n;
   ctr=0;
   a=-1;
   b=1;
   while(ctr<n)
  {
   c=a+b;
   cout<<c<<" ";
   a=b;
   b=c;
   ctr++;
  }
  goto B;
 }
 else if(ch==2)
 {
  long int f,n;
  cout<<"Enter number:- ";
  cin>>f;
  n=f;
  while(f!=1)
  {
    n=n*(f-1);
    f-=1;
  }
  cout<<n;
  goto B;
 }
 else if(ch==3) exit(0);
 else cout<<"Wrong input";
 B:
 cout<<"\nPress any key to continue...";
 getch();
 goto A;
 return 0;
}
