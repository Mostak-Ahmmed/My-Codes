#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>


int insertion();
int delation();
int LinerSearch();
int binarySearch();
int insertionsort();
int bubblesort();
int selectionsort();
int quicksort();
int margesort();
int stack();
int circularqueue();
int singlylinkedlist();
int doublylinkedlist();
int graphbfs();
int graphdfs();
void treeTraversing();
void prims();
int kruskal();
void exit();

int main()
{

    int choice;
    do
    {

        printf("             WELLCOME OUR DATA STRUCTURE PROJECT\n                  MY NAME IS MOSTAK AHMEED\n                       my ID-21390226\n\n         ");
        printf("\nChoose one option from the following list ...\n");
        printf (" \n1.insertion\t\t2.Deletion \n3.Liner search\t\t4.binary search\n5.InsertionSort\t\t6.Bubble sort\n7.selectionsort\t\t8.quicksort\n9.margesort\t\t10.Stack \n11.Queue\t\t12.sinlyLinkedList\n13.Doublylinkedlist\t14.GraphBFA\n15.graphDFS\t\t16.TreeTraversal\n17.Prim's\t\t18.Kruskal\n19.Exit \n \n Please, Make a choice ");
        scanf ("%d", &choice);
        switch (choice)
        {
        case 1:
            insertion();
            break;

        case 2:
            delation();
            break;

        case 3:
            LinerSearch();
            break;
        case 4:
            binarySearch();
            break;

        case 5:
            insertionsort();
            break;

        case 6:
            bubblesort();
            break;

        case 7:
            selectionsort();
            break;
        case 8:
            quicksort();
            break;
        case 9:
            margesort();
            break;
        case 10:
            stack();
            break;
        case 11:
            circularqueue();
            break;
        case 12:
            singlylinkedlist();
            break;
        case 13:
            doublylinkedlist();
            break;
        case 14:
            graphbfs();
            break;
        case 15:
            graphdfs();
            break;
        case 16:
            treeTraversing();
            break;
        case 17:
            prims();
            break;
        case 18:
            kruskal();
            break;
        case 19:
            exit(0);
            break;

        default:
            printf(" Something is wrong!! ");
            break;
        }
        printf (" \n \n ********************************************** \n ");
    }
    while (choice != 19);

    return 0;
}

// insertion in array
int insertion()
{
    int arr[100],i,j,n,pos,value;
    printf("Enter number you want=");
    scanf("%d",&n);
    printf("\nEnter Array element\n");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);


    printf("Enter The location to insert element=");
    scanf("%d",&pos);
    printf("Enter value to insert=");
    scanf("%d",&value);

    for(i=n-1; i>=pos-1; i--)

        arr[i+1]=arr[i];

    arr[pos-1]=value;

    for(i=0; i<n; i++)

        printf("%d\n",arr[i]);

    return 0;



}
// delete element in array
int delation()
{

    int arr[100],i,j,n,pos;
    printf("Enter number you want=");
    scanf("%d",&n);
    printf("\nEnter Array element\n");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);


    printf("Enter The location to delate element=");
    scanf("%d",&pos);
    for(i=pos; i<n-1; i++)
    {
        arr[i]=arr[i+1];

    }
    n=n-1;
    for(i=0; i<n; i++)

        printf("%d\n",arr[i]);

    return 0;
}
// LinerSerch in array
int LinerSearch()
{
    int arr[100], i, n,index;
    printf("Enter number you want");
    scanf("%d",&n);
    printf("Enter array element\n");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    printf("the search element=");
    scanf("%d",&index);

    for(i=0; i<n; ++i)

        if(arr[i]==index)
            break;



    if(i<n)
        printf("linera search index=%d",i);

    else
        printf("no found ");

    return 0;
}

// Binary search
int binarySearch()
{
    int arr[100],i,n;
    int left,right,mid,x;
    printf("Enter number you want:");
    scanf("%d",&n);
    printf("Enter array element:");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    printf("The search value:");
    scanf("%d",&x);
    {

        left=0;
        right=n-1;
        mid=(left+right)/2;

        while(left<=right)
        {
            if(arr[mid]<x)


                left=mid+1;
            else if(arr[mid]==x)
            {

                printf("Binary search=%d",x,mid+1);
                break;
            }


            else
                right=mid-1;
            mid=(left+right)/2;
        }
        if(left>right)
            printf("not found this value",x);
        return 0;


    }
}

//insrtion sort
int insertionsort()
{

    void insertionSort(int arr[], int n)
    {
        int i, key, j;
        for (i = 1; i < n; i++)
        {
            key = arr[i];
            j = i - 1;

            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }


    {
        int arr[100],i,j,n,pos,value;
        printf("Enter number you want=");
        scanf("%d",&n);
        printf("\nEnter Array element\n");
        for(i=0; i<n; i++)
        {

            scanf("%d",&arr[i]);
        }
        printf("The sorted Elemen is\n");
        for (i = 0; i < n; i++)
        {
            insertionSort(arr, n);

            printf("%d ", arr[i]);
        }
        printf("\n");

        return 0;
    }
}

//Bouble sort
int bubblesort()
{
    /* Bubble sort code */
    {
        int array[20], n, i, j, swap;

        printf("Enter number of elements\n");
        scanf("%d", &n);

        printf("Enter %d integers\n", n);

        for (i = 0; i< n; i++)
            scanf("%d", &array[i]);

        for (i = 0 ; i < n - 1; i++)
        {
            for (j = 0 ; j < n - i - 1; j++)
            {
                if (array[j] > array[j+1])
                {
                    swap = array[j];
                    array[j]= array[j+1];
                    array[j+1]= swap;
                }
            }
        }

        printf("Sorted list in order:\n");

        for (i = 0; i < n; i++)
            printf("%d\n", array[i]);

        return 0;
    }

}

//selection sort
int selectionsort()
{
    {
        int array[100], n, i, j, position, swap;

        printf("Enter number of elements\n");
        scanf("%d", &n);

        printf("Enter %d integers\n", n);

        for (i= 0; i < n; i++)
            scanf("%d", &array[i]);

        for (i = 0; i < (n - 1); i++) // finding minimum element (n-1) times
        {
            position = i;

            for (j = i+ 1; j < n; j++)
            {
                if (array[position] > array[j])
                    position = j;
            }
            if (position != i)
            {
                swap = array[i];
                array[i] = array[position];
                array[position] = swap;
            }
        }

        printf("Sorted list in  order:\n");

        for (i = 0; i < n; i++)
            printf("%d\n", array[i]);

        return 0;
    }

}

// Stack implementation in C
int stack()
{
#define MAX 10
    int count = 0;

    struct stack
    {
        int items[MAX];
        int top;
    };
    typedef struct stack st;

    void createEmptyStack(st *s)
    {
        s->top = -1;
    }

    int isfull(st *s)
    {
        if (s->top == MAX - 1)
            return 1;
        else
            return 0;
    }

    int isempty(st *s)
    {
        if (s->top == -1)
            return 1;
        else
            return 0;
    }

    void push(st *s, int newitem)
    {
        if (isfull(s))
        {
            printf("STACK FULL");
        }
        else
        {
            s->top++;
            s->items[s->top] = newitem;
        }
        count++;
    }

    void pop(st *s)
    {
        if (isempty(s))
        {
            printf("\n STACK EMPTY \n");
        }
        else
        {
            printf("Item popped= %d", s->items[s->top]);
            s->top--;
        }
        count--;
        printf("\n");
    }

    void printStack(st *s)
    {
        printf("Stack: ");
        for (int i = 0; i < count; i++)
        {
            printf("%d ", s->items[i]);
        }
        printf("\n");
    }

    {
        int ch;
        st *s = (st *)malloc(sizeof(st));

        createEmptyStack(s);

        push(s, 1);
        push(s, 2);
        push(s, 3);
        push(s, 4);

        printStack(s);

        pop(s);

        printf("\nAfter popping out\n");
        printStack(s);
    }
}

//queue implement
int circularqueue()
{
#define SIZE 5

    int items[SIZE];
    int front = -1, rear = -1;

    int isFull()
    {
        if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) return 1;
        return 0;
    }

    int isEmpty()
    {
        if (front == -1) return 1;
        return 0;
    }

    void enQueue(int element)
    {
        if (isFull())
            printf("\n Queue is full!! \n");
        else
        {
            if (front == -1) front = 0;
            rear = (rear + 1) % SIZE;
            items[rear] = element;
            printf("\n Inserted -> %d", element);
        }
    }

    int deQueue()
    {
        int element;
        if (isEmpty())
        {
            printf("\n Queue is empty !! \n");
            return (-1);
        }
        else
        {
            element = items[front];
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }

            else
            {
                front = (front + 1) % SIZE;
            }
            printf("\n Deleted element -> %d \n", element);
            return (element);
        }
    }

    void display()
    {
        int i;
        if (isEmpty())
            printf(" \n Empty Queue\n");
        else
        {
            printf("\n Front -> %d ", front);
            printf("\n Items -> ");
            for (i = front; i != rear; i = (i + 1) % SIZE)
            {
                printf("%d ", items[i]);
            }
            printf("%d ", items[i]);
            printf("\n Rear -> %d \n", rear);
        }
    }

    {

        deQueue();

        enQueue(1);
        enQueue(2);
        enQueue(3);
        enQueue(4);
        enQueue(5);
        enQueue(6);

        display();
        deQueue();

        display();

        enQueue(7);
        display();

        enQueue(8);

    }

}

//quicksort implement
int quicksort()
{
    void quicksort(int arr[20],int first,int last)
    {
        int i, j, pivot, temp;
        if(first<last)
        {
            pivot=first;
            i=first;
            j=last;
            while(i<j)
            {
                while(arr[i]<=arr[pivot]&&i<last)
                    i++;
                while(arr[j]>arr[pivot])
                    j--;
                if(i<j)
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
            temp=arr[pivot];
            arr[pivot]=arr[j];
            arr[j]=temp;
            quicksort(arr,first,j-1);
            quicksort(arr,j+1,last);
        }
    }
    {
        int i, count, arr[20];
        printf("How many elements are enter: ");
        scanf("%d",&count);
        printf("Enter %d elements: ", count);
        for(i=0; i<count; i++)
            scanf("%d",&arr[i]);

        quicksort(arr,0,count-1);
        printf("Order of Sorted elements: ");
        for(i=0; i<count; i++)
            printf(" %d",arr[i]);
        return 0;
    }

}

//Marge sort
int margesort()
{
#define max 10

    int a[11] = { 10, 14, 19, 26, 27, 5, 33, 35, 9, 50 };
    int b[11];

    void merging(int low, int mid, int high)
    {
        int l1, l2, i;

        for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++)
        {
            if(a[l1] <= a[l2])
                b[i] = a[l1++];
            else
                b[i] = a[l2++];
        }

        while(l1 <= mid)
            b[i++] = a[l1++];

        while(l2 <= high)
            b[i++] = a[l2++];

        for(i = low; i <= high; i++)
            a[i] = b[i];
    }

    void sort(int low, int high)
    {
        int mid;

        if(low < high)
        {
            mid = (low + high) / 2;
            sort(low, mid);
            sort(mid+1, high);
            merging(low, mid, high);
        }
        else
        {
            return;
        }
    }

    {
        int i;

        printf("List before sorting\n");

        for(i = 0; i <= max; i++)
            printf("%d ", a[i]);

        sort(0, max);

        printf("\nList after sorting\n");

        for(i = 0; i <= max; i++)
            printf("%d ", a[i]);
    }
}

//singly Linkedlist
singlylinkedlist()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head;

    {
        int choice =0;
        while(choice !=5)
        {



            printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Display\n5.Exit\n");
            printf("\nEnter your choice\n");
            scanf("\n%d",&choice);
            switch(choice)
            {
            case 1:
            {
                struct node *ptr;
                int item;
                ptr = (struct node *) malloc(sizeof(struct node *));
                if(ptr == NULL)
                {
                    printf("\nOVERFLOW");
                }
                else
                {
                    printf("\nEnter value\n");
                    scanf("%d",&item);
                    ptr->data = item;
                    ptr->next = head;
                    head = ptr;
                    printf("\nNode inserted");
                }

            }
            break;
            case 2:
            {
                struct node *ptr,*temp;
                int item;
                ptr = (struct node*)malloc(sizeof(struct node));
                if(ptr == NULL)
                {
                    printf("\nOVERFLOW");
                }
                else
                {
                    printf("\nEnter value?\n");
                    scanf("%d",&item);
                    ptr->data = item;
                    if(head == NULL)
                    {
                        ptr -> next = NULL;
                        head = ptr;
                        printf("\nNode inserted");
                    }
                    else
                    {
                        temp = head;
                        while (temp -> next != NULL)
                        {
                            temp = temp -> next;
                        }
                        temp->next = ptr;
                        ptr->next = NULL;
                        printf("\nNode inserted");

                    }
                }
            }
            break;
            case 3:
            {
                int i,loc,item;
                struct node *ptr, *temp;
                ptr = (struct node *) malloc (sizeof(struct node));
                if(ptr == NULL)
                {
                    printf("\nOVERFLOW");
                }
                else
                {
                    printf("\nEnter element value");
                    scanf("%d",&item);
                    ptr->data = item;
                    printf("\nEnter the location you want to insert ");
                    scanf("\n%d",&loc);
                    temp=head;
                    for(i=0; i<loc; i++)
                    {
                        temp = temp->next;
                        if(temp == NULL)
                        {
                            printf("\ncan't insert\n");
                            return;
                        }

                    }
                    ptr ->next = temp ->next;
                    temp ->next = ptr;
                    printf("\nNode inserted");
                }
            }
            break;
            case 4:
            {
                struct node *ptr;
                ptr = head;
                if(ptr == NULL)
                {
                    printf("List is Empty ");
                }
                else
                {
                    printf("\nprinting values . . \n");
                    while (ptr!=NULL)
                    {
                        printf("\n%d",ptr->data);
                        ptr = ptr -> next;
                    }
                }
            }

            break;
            case 5:
                exit(0);
                break;
            default:
                printf("Please enter valid choice..");
            }
        }

    }



}

//Doubly Linked List
int doublylinkedlist()
{

    struct node
    {
        struct node *prev;
        struct node *next;
        int data;
    };
    struct node *head;


    {
        int choice =0;
        while(choice != 9)
        {

            printf("\n===============================================\n");
            printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete the node after the given data\n7.Search\n8.Show\n9.Exit\n");
            printf("\nEnter your choice?\n");
            scanf("\n%d",&choice);
            switch(choice)
            {
            case 1://Insert in begining
            {
                struct node *ptr;
                int item;
                ptr = (struct node *)malloc(sizeof(struct node));
                if(ptr == NULL)
                {
                    printf("\nOVERFLOW");
                }
                else
                {
                    printf("\nEnter Item value");
                    scanf("%d",&item);

                    if(head==NULL)
                    {
                        ptr->next = NULL;
                        ptr->prev=NULL;
                        ptr->data=item;
                        head=ptr;
                    }
                    else
                    {
                        ptr->data=item;
                        ptr->prev=NULL;
                        ptr->next = head;
                        head->prev=ptr;
                        head=ptr;
                    }
                    printf("\nNode inserted\n");
                }

            }
            break;
            case 2:
            {
                struct node *ptr,*temp;
                int item;
                ptr = (struct node *) malloc(sizeof(struct node));
                if(ptr == NULL)
                {
                    printf("\nOVERFLOW");
                }
                else
                {
                    printf("\nEnter value");
                    scanf("%d",&item);
                    ptr->data=item;
                    if(head == NULL)
                    {
                        ptr->next = NULL;
                        ptr->prev = NULL;
                        head = ptr;
                    }
                    else
                    {
                        temp = head;
                        while(temp->next!=NULL)
                        {
                            temp = temp->next;
                        }
                        temp->next = ptr;
                        ptr ->prev=temp;
                        ptr->next = NULL;
                    }

                }
                printf("\nnode inserted\n");
            }


            break;
            case 3:
            {
                struct node *ptr,*temp;
                int item,loc,i;
                ptr = (struct node *)malloc(sizeof(struct node));
                if(ptr == NULL)
                {
                    printf("\n OVERFLOW");
                }
                else
                {
                    temp=head;
                    printf("Enter the location");
                    scanf("%d",&loc);
                    for(i=0; i<loc; i++)
                    {
                        temp = temp->next;
                        if(temp == NULL)
                        {
                            printf("\n There are less than %d elements", loc);
                            return;
                        }
                    }
                    printf("Enter value");
                    scanf("%d",&item);
                    ptr->data = item;
                    ptr->next = temp->next;
                    ptr -> prev = temp;
                    temp->next = ptr;
                    temp->next->prev=ptr;
                    printf("\nnode inserted\n");
                }
            }
            break;
            case 4:
            {
                struct node *ptr;
                if(head == NULL)
                {
                    printf("\n UNDERFLOW");
                }
                else if(head->next == NULL)
                {
                    head = NULL;
                    free(head);
                    printf("\nnode deleted\n");
                }
                else
                {
                    ptr = head;
                    head = head -> next;
                    head -> prev = NULL;
                    free(ptr);
                    printf("\nnode deleted\n");
                }

            }

            break;
            case 5:
            {
                struct node *ptr;
                if(head == NULL)
                {
                    printf("\n UNDERFLOW");
                }
                else if(head->next == NULL)
                {
                    head = NULL;
                    free(head);
                    printf("\nnode deleted\n");
                }
                else
                {
                    ptr = head;
                    if(ptr->next != NULL)
                    {
                        ptr = ptr -> next;
                    }
                    ptr -> prev -> next = NULL;
                    free(ptr);
                    printf("\nnode deleted\n");
                }
            }
            break;
            case 6:
            {
                struct node *ptr, *temp;
                int val;
                printf("\n Enter the data after which the node is to be deleted : ");
                scanf("%d", &val);
                ptr = head;
                while(ptr -> data != val)
                    ptr = ptr -> next;
                if(ptr -> next == NULL)
                {
                    printf("\nCan't delete\n");
                }
                else if(ptr -> next -> next == NULL)
                {
                    ptr ->next = NULL;
                }
                else
                {
                    temp = ptr -> next;
                    ptr -> next = temp -> next;
                    temp -> next -> prev = ptr;
                    free(temp);
                    printf("\nnode deleted\n");
                }
            }
            break;
            case 7://  search();
            {
                struct node *ptr;
                int item,i=0,flag;
                ptr = head;
                if(ptr == NULL)
                {
                    printf("\nEmpty List\n");
                }
                else
                {
                    printf("\nEnter item which you want to search?\n");
                    scanf("%d",&item);
                    while (ptr!=NULL)
                    {
                        if(ptr->data == item)
                        {
                            printf("\nitem found at location %d ",i+1);
                            flag=0;
                            break;
                        }
                        else
                        {
                            flag=1;
                        }
                        i++;
                        ptr = ptr -> next;
                    }
                    if(flag==1)
                    {
                        printf("\nItem not found\n");
                    }
                }

            }

            break;
            case 8:// display();
            {
                struct node *ptr;
                printf("\n printing values...\n");
                ptr = head;
                while(ptr != NULL)
                {
                    printf("%d\n",ptr->data);
                    ptr=ptr->next;
                }
            }
            break;
            case 9:
                exit(0);
                break;
            default:
                printf("Please enter valid choice..");
            }
        }
    }

}

//BFS
int graphbfs()
{
    int a[20][20], q[20], visited[20], n, i, j, f = 0, r = -1;

    void bfs(int v)
    {
        for(i = 1; i <= n; i++)
            if(a[v][i] && !visited[i])
                q[++r] = i;
        if(f <= r)
        {
            visited[q[f]] = 1;
            bfs(q[f++]);
        }
    }

    {
        int v;
        printf("\n Enter the number of vertices:");
        scanf("%d", &n);

        for(i=1; i <= n; i++)
        {
            q[i] = 0;
            visited[i] = 0;
        }

        printf("\n Enter graph data in matrix form:\n");
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        printf("\n Enter the starting vertex:");
        scanf("%d", &v);
        bfs(v);
        printf("\n The node which are reachable are:\n");

        for(i=1; i <= n; i++)
        {
            if(visited[i])
                printf("%d\t", i);
            else
            {
                printf("\n Bfs is not possible. Not all nodes are reachable");
                break;
            }
        }
    }

}
//DFS
int graphdfs()
{
    int a[20][20],reach[20],n;
    void dfs(int v)
    {
        int i;
        reach[v]=1;
        for (i=1; i<=n; i++)
            if(a[v][i] && !reach[i])
            {
                printf("\n %d->%d",v,i);
                dfs(i);
            }
    }
    {
        int i,j,count=0;
        printf("\n Enter number of vertices:");
        scanf("%d",&n);
        for (i=1; i<=n; i++)
        {
            reach[i]=0;
            for (j=1; j<=n; j++)
                a[i][j]=0;
        }
        printf("\n Enter the adjacency matrix:\n");
        for (i=1; i<=n; i++)
            for (j=1; j<=n; j++)
                scanf("%d",&a[i][j]);
        dfs(1);
        printf("\n");
        for (i=1; i<=n; i++)
        {
            if(reach[i])
                count++;
        }
        if(count==n)
            printf("\n Graph is connected");
        else
            printf("\n Graph is not connected");
        return 0;
    }
}

//Treetraversal in-order,pre-order,post-order
void treeTraversing()
{
    struct node
    {
        int item;
        struct node* left;
        struct node* right;
    };


    struct node* createNode(value)
    {
        struct node* newNode = malloc(sizeof(struct node));
        newNode->item = value;
        newNode->left = NULL;
        newNode->right = NULL;

        return newNode;
    }


    struct node* insertLeft(struct node* root, int value)
    {
        root->left = createNode(value);
        return root->left;
    }


    struct node* insertRight(struct node* root, int value)
    {
        root->right = createNode(value);
        return root->right;
    }
    void inorderTraversal(struct node* root)
    {
        if (root == NULL) return;
        inorderTraversal(root->left);
        printf("%d ->", root->item);
        inorderTraversal(root->right);
    }

    void preorderTraversal(struct node* root)
    {
        if (root == NULL) return;
        printf("%d ->", root->item);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }


    void postorderTraversal(struct node* root)
    {
        if (root == NULL) return;
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ->", root->item);
    }

    {
        struct node* root = createNode(1);
        insertLeft(root, 12);
        insertRight(root, 9);
        insertLeft(root->left, 5);
        insertRight(root->right, 6);


        int cho=0;
        while(cho!=4)
        {

            printf("\n1.Inorder\n2.Preorder\n3.Postorder\n4.Exit\nEnter choice:\n");
            scanf("%d",&cho);


            switch(cho)
            {
            case 1:
                printf("Inorder traversal \n");
                inorderTraversal(root);
                break;
            case 2:

                printf("\nPreorder traversal \n");
                preorderTraversal(root);
                break;
            case 3:

                printf("\nPostorder traversal \n");
                postorderTraversal(root);
                break;
            case 4:
                exit(0);
                break;

            default:
                printf("wrong choice");
            }

        }
    }

}

// Prim's Algorithem
void prims()
{
    {
        int cost[10][10],visited[10]= {0},i,j,n,no_e=1,min,a,b,min_cost=0;
        printf("Enter number of nodes ");
        scanf("%d",&n);
        printf("Enter cost in form of adjacency matrix\n");

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf("%d",&cost[i][j]);

                if(cost[i][j]==0)
                    cost[i][j]=1000;
            }
        }


        visited[1]=1;
        while(no_e<n)
        {
            min=1000;

            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    if(cost[i][j]<min)
                    {
                        if(visited[i]!=0)
                        {
                            min=cost[i][j];
                            a=i;
                            b=j;
                        }
                    }
                }
            }

            if(visited[b]==0)
            {
                printf("\n%d to %d  cost=%d",a,b,min);
                min_cost=min_cost+min;
                no_e++;
            }
            visited[b]=1;

            cost[a][b]=cost[b][a]=1000;
        }
        printf("\nminimum weight is %d",min_cost);
        return 0;
    }

}


//Kruskal Algorithem
int kruskal()
{
#define VAL 999
    int i,j,k,a,b,u,v,n,ne=1;
    int min,mincost=0,cost[9][9],parent[9];

    int find(int i)
    {
        while(parent[i])
            i=parent[i];
        return i;
    }
    int uni(int i,int j)
    {
        if(i!=j)
        {
            parent[j]=i;
            return 1;
        }
        return 0;
    }

    {
        printf("Implementation of Kruskal's algorithm\n");
        printf("Enter the no. of vertices:");
        scanf("%d",&n);
        printf("Enter the cost adjacency matrix:\n");
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                scanf("%d",&cost[i][j]);
                if(cost[i][j]==0)
                    cost[i][j]=VAL;
            }
        }
        printf("The edges of Minimum Cost Spanning Tree are\n");
        while(ne < n)
        {
            for(i=1,min=VAL; i<=n; i++)
            {
                for(j=1; j <= n; j++)
                {
                    if(cost[i][j] < min)
                    {
                        min=cost[i][j];
                        a=u=i;
                        b=v=j;
                    }
                }
            }
            u=find(u);
            v=find(v);
            if(uni(u,v))
            {

                printf("%d edge (%d,%d) =%d\n",ne++,a,b,min);
                mincost +=min;
            }
            cost[a][b]=cost[b][a]=999;
        }
        printf("\n\tMinimum cost = %d\n",mincost);
        return 0;
    }

}
