#include<iostream.h>
#include<conio.h>
#include<process.h>
struct Node
{
   int info;
   Node *next;
} *top,*newptr,*save,*ptr;

Node * Create_New_Node(int);       //function declaration
void Push(Node*);                  //function declaration
void Display(Node*);               //function declaration
void Pop();                        //function declaration
Node * Create_New_Node(int n)
{
   ptr= new Node;                 //creates new node dynamically and retuns
   ptr->info=n;                      //the pointer to the new node
   ptr->next=NULL ;
   return ptr;
}
void Push(Node * np)
{                                   //to push a node into the linked stack
   if(top==NULL)
     top=np;
   else
   {
      save=top;
      top=np;
      np->next=save;
   }
}
void Pop()
{
   if(top==NULL)                    //deletes a node from the beginning of linked stack
     cout<<"\nUNDERFLOW!!!";
   else
   {
      ptr=top;
      top=top->next;
      delete ptr;
   }
}
void Display(Node *np)
{                                //displays linked stack
   while(np!=NULL)
   {
      cout<<np->info<<"->";
      np=np->next;
   }
   cout<<"!!!\n";
}
void main()
{
  int inf;
  char ch='y';
  top=NULL;
  clrscr();
  cout<<"\n **** M E N U ****";
  cout<<"\n   1. Push element into the linked stack ";
  cout<<"\n   2. Pop element into the linked stack";
  int opt;
  cout<<"\n Enter your choice:";
  cin>>opt;
  switch(opt)
  {
     case 1:   while(ch=='y'||ch=='Y')
	       {
		  cout<<"\n Enter information for new node..";
		  cin>>inf;
		  newptr=Create_New_Node(inf);
		  if(newptr==NULL)
		  {
		    cout<<"\n Cannot create new node.!!Aborting!!";
		    exit(0);
		  }
		  Push(newptr);
		  cout<<"\n Now the linked stack is:\n ";
		  Display(top);
		  cout<<"\n Press Y to enter more nodes,N to exit..";
		  cin>>ch;
		}
		break;

     case 2:    while(ch=='y'||ch=='Y')
		{
		  cout<<"\n Enter information for new node..";
		  cin>>inf;
		  newptr=Create_New_Node(inf);
		  if(newptr==NULL)
		  {
		    cout<<"\n Cannot create new node.!!Aborting!!";
		    exit(0);
		  }
		  Push(newptr);
		  cout<<"\n Press Y to enter more nodes,N to exit..";
		  cin>>ch;
		}
		do
		{
		  cout<<"\n The Stack now is:\n";
		  Display(top);
		  cout<<"\n Want to pop an element?(y/n)...";
		  cin>>ch;
		  if(ch=='y'||ch=='Y')
		     Pop();
		}while(ch=='y'||ch=='Y');
		break;
     default:   cout<<"\n Sorry!!!Wrong choice..!!";
  }
}