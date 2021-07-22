#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Enode
{
char ssn[15];  // Employee ID 
char name[20];  //Employee Name
char dept[5];   // Department
char designation[10];   //Designation
int salary;            //Salary
long long int phno;    //Phone Number
struct Enode *left;    // Linked List Left node
struct Enode *right;   //Linked List RIght Node
}
*head=NULL;            //making head node NULL
struct Enode *tail,*temp1,*temp2;
void create(char [],char [],char [],char [],int ,long long int);
void ins_beg(char [],char [],char [],char [],int ,long long int);
void ins_end(char [],char [],char [],char [],int ,long long int);
void del_beg();
void del_end();
void display();

int main()
{
int count=0;
int choice;
char s[15],n[20],dpt[5],des[10];
int sal;
long long int p;
printf("1.Create\n2.Display\n3.Insert at beginning\n4.Insert at End\n5.Delete at beginning\n6.Delete at End\n7.Exit\n");
while(1)
{
printf("\nEnter your choice\n");
scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter the required data(Emp no,Name,Dept,Desig,sal,phone\n");
            scanf("%s%s%s%s%d%lld",s,n,dpt,des,&sal,&p);
            create(s,n,dpt,des,sal,p);
        break;
        case 2:display();
        break;
        case 3:
            printf("Enter the required data (Emp no,Name,Dept,Desig,sal,phone\n");
scanf("%s%s%s%s%d%lld",s,n,dpt,des,&sal,&p);
ins_beg(s,n,dpt,des,sal,p);
break;
case 4:
printf("Enter the required data(Emp no,Name,Dept,Desig,sal,phone\n");
scanf("%s%s%s%s%d%lld",s,n,dpt,des,&sal,&p);
ins_end(s,n,dpt,des,sal,p);
break;
case 5:
del_beg();
break;
case 6:
del_end();
break;
case 7:
exit(0);
}
}
}
void create(char s[15],char n[20],char dpt[5],char des[10],int sal,long long int p) {
    int count=0;
    if(head==NULL)
    {
    head=(struct Enode *)malloc(1*sizeof(struct Enode));
    strcpy(head->ssn,s);       //Copying employee id to ssn as these are characters we can't directly assign these to head->node
    strcpy(head->name,n);       //copying employee name to head->name as these are characters we can't directly assign these to head->node
    strcpy(head->dept,dpt);       //Copying dept to head->dept as these are characters we can't directly assign these to head->node
    strcpy(head->designation,des); //copying designation to head->designation as these are characters we can't directly assign these to head->node
    head->salary=sal;               //assigning input salary to Linked list salary as this is integer type data and we can assign directly
    head->phno=p;                      //Assigning input phone number to LL ph as this is integer type data and we can assign directly
    head->left=NULL;                    //Since this is our first node in this LL so we are making left and right node NULL
    head->right=NULL;
    tail=head;                          //Making head and tail as same.
    }
    else
    {
        temp1=(struct Enode *)malloc(1*sizeof(struct Enode));
        strcpy(temp1->ssn,s);    //Copying employee id to ssn as these are characters we can't directly assign these to head->node
        strcpy(temp1->name,n);      //copying employee name to head->name as these are characters we can't directly assign these to head->node
        strcpy(temp1->dept,dpt);        //Copying dept to head->dept as these are characters we can't directly assign these to head->node
        strcpy(temp1->designation,des);     //copying designation to head->designation as these are characters we can't directly assign these to head->node
        temp1->salary=sal;                  //assigning input salary to Linked list salary as this is integer type data and we can assign directly
        temp1->phno=p;                      //Assigning input phone number to LL ph as this is integer type data and we can assign directly
        tail->right=temp1;                  //making tail next node as new node i.e. temp1
        temp1->right=NULL;                  //making temp1 next NULL
        temp1->left=tail;                   //making previous node as tail of new node i.e. temp1
        tail=temp1;                         
    }
}
void display()
{
    int count=0;
    temp1=head;
    printf("Employee Details \n");
    while(temp1!=NULL)
    {
    printf(" \n");
    printf("%s\n%s\n%s\n%s\n%d\n%lld\n",temp1->ssn,temp1->name,temp1->dept,temp1->designation,temp1->salary,temp1->phno); printf(" ");
    temp1=temp1->right;
    }
}
void ins_beg(char s[15],char n[20],char dpt[5],char des[10],int sal,long long int p)
{
    int count=0;
    temp1=(struct Enode *)malloc(1*sizeof(struct Enode));
    strcpy(temp1->ssn,s);        //Copying employee id to ssn as these are characters we can't directly assign these to head->node
    strcpy(temp1->name,n);
    strcpy(temp1->dept,dpt);
    strcpy(temp1->designation,des);
    temp1->salary=sal;
    temp1->phno=p;
    temp1->right=head;
    head->left=temp1;
    head=temp1;
    temp1->left=NULL;
}
void ins_end(char s[15],char n[20],char dpt[5],char des[10],int sal,long long int p)
{
    int count=0;
    temp1=(struct Enode *)malloc(1*sizeof(struct Enode));
    strcpy(temp1->ssn,s);            //Copying employee id to ssn as these are characters we can't directly assign these to head->node
    strcpy(temp1->name,n);
    strcpy(temp1->dept,dpt);
    strcpy(temp1->designation,des);
    temp1->salary=sal;
    temp1->phno=p;
    tail->right=temp1;
    temp1->left=tail;
    temp1->right=NULL;
    tail=temp1;
}
void del_beg()
{
    int count=0;
    temp1=head->right;
    free(head);
    head=temp1;
    head->left=NULL;
}
void del_end()
{
    temp1=tail->left;
    free(tail);
    tail=temp1;
    tail->right=NULL;
}
