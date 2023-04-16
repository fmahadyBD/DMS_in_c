#include<stdlib.h>
#include <stdio.h>    
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
int Linkedlist()  ;
int Liniar_Search();
int searching();
int Sorting()  ;
int bainararySearch();
void Bubble_sort();
void countSort();
int InsertionSort();
int Selection();
int Stack();

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
 
void selectionSort(int a[], int n)
{
   int i, j;
   for (i=0;i<n-1;i++){
       for (j=i+1;j<n;j++){
           if(a[i]>a[j]){
               swap(&a[i], &a[j]);
           }
       }
   }    
}
 
void printArray(int a[], int size)
{
    int i;
    for (i=0; i < size; i++){
        printf("%d ", a[i]);
    }
}

int Selection()
{
    int a[] = {64, 25, 25, 12, 22, 11, 90};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Initial array: \n");
    printArray(a, n);
    selectionSort(a, n);
    printf("\nSorted array: \n");
    printArray(a, n);
    return 0;
}

#define MAX 10 


int front = -1, rear = -1, circQueue[MAX];


void enqueue(){
   int num;
   printf("Enter the number to be inserted: ");
   scanf("%d", &num);


   if(rear == MAX-1){
      printf("Overflow");
   }

   else if(front == -1 && rear == -1){
      front = 0;
      rear = 0;
   }
  
   else if(rear == MAX - 1 && front != 0){
      rear = 0;
   }
   else {
      rear += 1;
   }

   circQueue[rear] = num;
}


void dequeue(){

   if(front == -1){
      printf("Underflow");
   }

   else if(front == rear){
      front = -1;
      rear = -1;
   }

   else if(front == MAX - 1){
      front = 0;
   }
   else {
      front += 1;
   }
}

void displays(){
    int i;
    if(front == -1 || rear == -1)
    {
        printf("\nEmpty queue\n");
    }
    else {
       printf("The queue is: ");
       for (i = front; i <= rear; i++){
       printf("%d ", circQueue[i]);
    }
    printf("\n");
  }
}

int Qeue()
{
  
    int choice;
    while(1){
        printf("Enter your choice: \n1. Enqueue \n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d", &choice);

    switch(choice){
       case 1:
          enqueue(); 
          break;
       case 2:
          dequeue(); 
          break;
       case 3:
          displays(); 
          break;
       case 4:
          return 0;  
       default:
          printf("Enter valid choice");
          break;
       }
    }
    return 0;
}










int main()     

{
        int choice;
        while(1){
               
                 printf("\n\t\t                MENU                             \n\n");
                printf("\n 1.Searching     \n");
                printf("\n 2.Sorting    \n");
                printf("\n 3.Linkedlist       \n");
                printf("\n 4.Stack       \n");
                printf("\n 5.Queue      \n");
                printf("\n 6.Exit       \n\n\n");
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        searching();
                                        break;
                        case 2:
                                       Sorting() ;  
                                        break;
                        case 3: 
                                         Linkedlist() ;
                                        break;
                        case 4:
                   
                                         Stack();
                                        break;
                        case 5:
                                         Qeue();
                                   
                                        break;
                        case 6:
                                     
                                         exit(0);
                                        break;
                             
                        default:
                                        printf("\n Wrong Choice:\n");
                                          
                                        break;
                }
        }
        return 0;
}




int searching()     

{
        int choice;
        while(1){
               
                printf("\n\t\t                MENU                             \n\n");
                printf("\n 1.Liniar search     \n");
                printf("\n 2.bainarary Search    \n");
                printf("\n 3.Exit  Searching Functions     \n\n");
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                         Liniar_Search();
                                        break;
                        case 2:
                                       bainararySearch();
                                        break;
                        case 3: 
                                     exit(0);
                                        break;
                             
                        default:
                                        printf("\n Wrong Choice:\n");
                                           
                                        break;
                }
        }
        return 0;
}


int Sorting()     

{
        int choice;
        while(1){
               
                printf("\n                MENU                             \n");
                printf("\n 1.Bubble Sort     \n");

                printf("\n 2.Insertion Sort   \n");
                printf("\n 3.Selection Sort  \n");
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                         Bubble_sort();
                                        break;

                                        break;
                        case 2: 
                                       InsertionSort() ;
                                        break;
                        case 3:
                                        Selection();
                                        break;
                    
                             
                        default:
                                        printf("\n Wrong Choice:\n");
                                          
                                        break;
                }
        }
        return 0;
}

int Liniar_Search()
{
    int i, a,c=0,n;
    printf("Enter the number of element\n");
    scanf("%d",&n);
    int arr[n] ;
     for (i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }
     printf("\nSeach the element: \n");
    scanf("%d", &a);
    for (i = 0; i < 6; i++)
    {
        if (arr[i] == a)
        {
             printf("\nSuccesfuly find it!\n");
            return 0;
        }
        else
        {
           c++;
        }
    }
    if(c>=6){
         printf("Sorry not found");
    }
}


struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL;
int Linkedlist()     
{
        int choice;
        while(1){
               

                printf("\n 1.Create  \n");
                printf("\n 2.Display   \n");
                printf("\n 3.Insert at the beginning    \n");
                printf("\n 4.Insert at the end  \n");
                printf("\n 5.Insert at specified position       \n");
                printf("\n 6.Delete from beginning      \n");
                printf("\n 7.Delete from the end        \n");
                printf("\n 8.Delete from specified position     \n");
                printf("\n 9.Exit       \n");
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3: 
                                        insert_begin();
                                        break;
                        case 4:
                                        insert_end();
                                        break;
                        case 5:
                                        insert_pos();
                                        break;
                        case 6:
                                        delete_begin();
                                        break;
                        case 7:
                                        delete_end();
                                        break;
                        case 8:
                                        delete_pos();
                                        break;
                        
                        case 9:
                                        exit(0);
                                        break;
                             
                        default:
                                        printf("\n Wrong Choice:\n");
                                            main();
                                        break;
                }
        }
        return 0;
}
void create()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                exit(0);
        }
        printf("\nEnter the data value for the node:\t");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}
void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is empty:\n");
                return;
        }
        else
        {
                ptr=start;
                printf("\nThe List elements are:\n");
                while(ptr!=NULL)
                {
                        printf("%d\t",ptr->info );
                        ptr=ptr->next ;
                }
        }
}
void insert_begin()
{
        struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&temp->info);
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                temp->next=start;
                start=temp;
        }
}
void insert_end()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the data value for the node:\t" );
        scanf("%d",&temp->info );
        temp->next =NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next !=NULL)
                {
                        ptr=ptr->next ;
                }
                ptr->next =temp;
        }
}
void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                return;
        }
        printf("\nEnter the position for the new node to be inserted:\t");
        scanf("%d",&pos);
        printf("\nEnter the data value of the node:\t");
        scanf("%d",&temp->info) ;
  
        temp->next=NULL;
        if(pos==0)
        {
                temp->next=start;
                start=temp;
        }
        else
        {
                for(i=0,ptr=start;i<pos-1;i++) { ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("\nPosition not found:[Handle with care]\n");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }
}
void delete_begin()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("\nList is Empty:\n");
                return;
        }
        else
        {
                ptr=start;
                start=start->next ;
                printf("\nThe deleted element is :%d\t",ptr->info);
                free(ptr);
        }
}
void delete_end()
{
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nList is Empty:");
                exit(0);
        }
        else if(start->next ==NULL)
        {
                ptr=start;
                start=NULL;
                printf("\nThe deleted element is:%d\t",ptr->info);
                free(ptr);
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                printf("\nThe deleted element is:%d\t",ptr->info);
                free(ptr);
        }
}
void delete_pos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nThe List is Empty:\n");
                exit(0);
        }
        else
        {
                printf("\nEnter the position of the node to be deleted:\t");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=start;
                        start=start->next ;
                        printf("\nThe deleted element is:%d\t",ptr->info  );
                        free(ptr);
                }
                else
                {
                        ptr=start;
                        for(i=0;i<pos;i++) { temp=ptr; ptr=ptr->next ;
                                if(ptr==NULL)
                                {
                                        printf("\nPosition not Found:\n");
                                        return;
                                }
                        }
                        temp->next =ptr->next ;
                        printf("\nThe deleted element is:%d\t",ptr->info );
                        free(ptr);
                }
        }
}
int bainararySearch(){
    int aa[100];
    int n, i, j, f, k, b = 0, t, x = 0, tem;

    int s = 0, e, mid;
    printf("Enter the range:\n");
    scanf("%d", &n);
    printf("Enter the Array Element\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the Array Element of %d \n", i);
        scanf("%d", &aa[i]);
    }

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {

            if (aa[j] > aa[j + 1])
            {
                tem = aa[j];
                aa[j] = aa[j + 1];
                aa[j + 1] = tem;
            }
        }
    }

    printf("Target for search: :\n");
    scanf("%d", &t);

    while (s <= n)
    {

        mid = (s + n) / 2;
        if (aa[mid] == t)
        {
            printf("Matched index %d", mid);
            return 0;
        }
        else if (aa[mid] < t)
        {
            s = mid + 1;
        }
        else if (aa[mid] > t)
        {
            n = mid - 1;
        }
    }
    x++;
    if (x > 0)
    {
        printf("hay man,, this element Not found");
    }

    return 0;
}
void Bubble_sort()
{
    int a[5] ;
    for(int i=0;i<5;i++){
        printf("Enter the element of %d\n",i);
        scanf("%d",&a[i]);
    }
    int i, j, tem;
    for (i = 1; i < 5; i++)
    {
        for (j = 0; j < 5 - i; j++)
        {

            if (a[j] > a[j + 1])
            {
                tem = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tem;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}

int InsertionSort()
{
       int i, value, hole;
  int a[5] ;
    for( i=0;i<5;i++){
        printf("Enter the element of %d\n",i);
        scanf("%d",&a[i]);
    }
 

    for (int i = 1; i < 5; i++)
    {
        value = a[i];
        hole = i;
        while (hole > 0 && a[hole - 1] > value)
        {
            a[hole] = a[hole - 1];
            hole--;
        }
        a[hole] = value;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}




int Stack(){
    int stack[10];
int top=-1;
int max;

int d;
printf("Enter your Stack Size:");
scanf("%d",&max);
while (1)
{

printf("\nEnter 1 for pop\nEnter 2 for push\nEnter 3 for show\n Enter 4 for exit\n");
scanf("%d",&d);
switch (d)
{
case 1:
     if(top==-1){
        printf("There is no element to pop\n");
    }else{
     top--;
         printf("Successfully Pop the element:\n");
    }
    break;
case 2:
 if(top==max){
     printf("The Stack is not empty:\n");
    return 0;
}else{
    top++;
    printf("Enter the element that you want to push:\n");
    scanf("%d",&stack[top]);
    printf("your %d is succssfully Addede\n",stack[top]);


}
    break;
case 3:
 if(top==-1){
        printf("No element found\n");
        return 0;
    }else{
printf("Your Stacck is:\n");
for(int i=0;i<=top;i++){
    printf("%d\n",stack[i]);
}
    }
    break;

default:
    return 0;
    break;
}
}


}
