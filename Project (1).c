

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//   Array
void arrayImplement();
void createArray();
void arrayInsertion();
void arrayDeletion();
void arrayTraverse();
void searchInArray();
void menu();
int choice, n = 0, i, val, pos, c, counter = 0, data;
int arr[10];

//stack
#define size 10
int top = -1;
int stackarr[size];
void push(int value);
void pop();
void printStack();
void stackmenu();
void searchFromStack(int value);


//Queue
void implementQueue();

void simpleQueue();
void enqueue(int value);
void dequeue();
void printQueue();

void circularQueue();
void circularenqueue(int data);
void circulardequeue();
void printcircular();
int queue[size];
int front =-1, rear = -1;



// singly link list
struct node{
  int data;
  struct node *next;
};
struct node *head = NULL;
struct node *temp = NULL;

void linklist();
void singlylinklist();
struct node* createNode(struct node *head, int value);
struct node* insertAtbegin(struct node *head, int value);
struct node* insertAtmiddle(struct node *head, int position, int value);
struct node* insertAtend(struct node *head, int value);
void printnode(struct node* head);
struct node* deleteatbegin(struct node *head);
struct node* deleteatmiddle(struct node *head, int position);
struct node* deleteatend(struct node *head);
void searchnode(struct node *head, int value);
struct node* sortLinklist(struct node *head);


//doubly link list

struct Node{
  int data;
  struct Node *next;
   struct Node *prev;
};

struct Node *doublyhead = NULL;
struct Node *tail = NULL;


struct Node* createDoublyNode(struct Node *doublyhead, int value);
void printdoublynode(struct Node *doublyhead);
struct Node* insertAtbeginIndoubly(struct Node *doublyhead, int value);
struct Node* insertAtmiddleInDoubly(struct Node *doublyhead, int position, int value);
struct Node* insertAtendIndoubly(struct Node *doublyhead, int value);
struct Node* deleteatbeginInDoubly(struct Node *doublyhead);
struct Node* deleteAtmiddleInDoubly(struct Node *doublyhead, int position);
struct Node* deleteAtendInDoubly(struct Node *doublyhead);
void searchnodeInDoubly(struct Node *doublyhead, int value);
struct Node* sortLinklistdoubly(struct Node *head);

//Circular link list

struct node *circularhead = NULL;
struct node *circulartail = NULL;

void circularlinklist();
struct node* createcircularNode(struct node *circularhead, int value);
void printcircularnode(struct node* circularhead);
struct node* insertAtbeginInCircular(struct node *circularhead, int value);
struct node* insertAtmiddleInCircular(struct node *circularhead, int position, int value);
struct node* insertAtendInCircular(struct node *circularhead, int value);
struct node* deleteatbeginInCircular(struct node *circularhead);
struct node* deleteatmiddleInCircular(struct node *circularhead, int position);
struct node* deleteatendInCircular(struct node *circularhead);
void searchnodeInCircular(struct node *circularhead, int value);
struct node* sortLinklistInCircular(struct node *circularhead);

//tree
struct treenode{
  int data;
  struct treenode *left;
  struct treenode *right;
};

void tree();
void binarytree();
struct treenode* create();
void inorder(struct treenode *root);
void preorder(struct treenode *root);
void postorder(struct treenode *root);
int searchnodefromtree(struct treenode *root, int data);

void bst();
struct treenode* insert(struct treenode *node, int data);
struct treenode* newNode(int data);
void inorderbst(struct treenode *root);
void inorder(struct treenode *root);
void preorder(struct treenode *root);
void postorder(struct treenode *root);
struct treenode *deleteNode(struct treenode *root, int data);
struct treenode *minValueNode(struct treenode *node);

struct treenode *root = NULL;

//Graph
int numofvertices;

int s, d, start;
void graph();
void graphwithAm();


int main(){
system("color 2F");
menu();


return 0;
}

void menu(){

while(1){

printf("\n\n\n\t\t\t------------------ Implementation Of Data Structure -------------------\n\n\n\n\n\n");
printf("1. Implement The Array Data Structure.\n");
printf("2. Implement The Stack Data Structure.\n");
printf("3. Implement Queue Data Structure\n");
printf("4. Implement The Linked List Data Structure.\n");
printf("5. Implement The TREE Data Structure.\n");
printf("6. Implement The GRAPH Data Structure.\n");
printf("6. Exit\n");
printf("\nEnter your choice: ");
scanf("%d", &choice);
switch(choice){
 case 1:
      system("cls");
      array();
      break;
 case 2:
     stackmenu();
     break;
 case 3:
    implementQueue();
    break;
 case 4:
    linklist();
    break;
 case 5:
    tree();
    break;
 case 6:
    graph();
    break;
 case 7:
    exit(0);

}
}

}

//array
void array(){
    while(1){
            system("cls");
  printf("\n\n\n1. Create an Array\n");
  printf("2. Insert An Element In Array\n");
  printf("3. Delete An Element From Array\n");
    printf("4. Traverse The Array\n");
    printf("5. Search An Element From Array\n");
    printf("6. Exit\n");
  printf("\nEnter your choice: ");
  scanf("%d", &choice);
switch(choice){
 case 1:
    createArray();
    break;
 case 2:
     if(n == 0){
        printf("\nPlease create An Array First...........\n ");
     }
     else{
    arrayInsertion();
    printf("\nInserted An Element In Array Successfully........\n");
     }
     break;
 case 3:
     if(n == 0){
        printf("\nNo Element In Array. Please create An Array First..........\n ");
     }
     else{
        arrayDeletion();
        printf("\nDeleted An Element From Array Successfully........\n");
     }
     break;
 case 4:
      if(n == 0){
        printf("\nArray is Empty. Please create An Array First...........\n ");
     }
     else{
      arrayTraverse();
     }
     break;
 case 5:
      if(n == 0){
        printf("\nArray is Empty. Please create An Array First...........\n ");
     }
     else{
        searchInArray();
     }
     break;
 case 6:
     system("cls");
     menu();
     exit(0);
}
printf("\n\nPress Any key to Continue.........");
getch();
}
}


void createArray(){
 printf("\nEnter the size of array: ");
 scanf("%d", &n);

 for(i = 0; i < n; i++){
    printf("Enter the %d element of Array: ", i+1);
    scanf("%d", &arr[i]);
 }

}

void arrayInsertion(){
printf("\nEnter the value you want to insert In Array: ");
scanf("%d", &val);
printf("Enter The position You want to Insert an element: ");
scanf("%d", &pos);

for(i = n - 1; i >= pos-1; i--){
    arr[i+1] = arr[i];
}
arr[i+1] = val;
n++;
}

void arrayDeletion(){
printf("\nEnter The position You want to Delete an element From Array: ");
scanf("%d", &pos);
for(i = pos - 1; i < n; i++){
    arr[i] = arr[i+1];
}
n--;
}

void arrayTraverse(){
    printf("\nYour Array is:  ");
for(i = 0; i < n; i++){
    printf("%d ", arr[i]);
 }

}

void searchInArray(){
printf("\nEnter The Value you Want to Search From Array:  ");
scanf("%d", &val);

for(i = 0; i < n; i++){
    c = 0;
   if(arr[i] == val){
        c = 1;
    break;
   }
 }
 if(c == 1){
    printf("\nYour search Element Found on %d index In Array...........", i);
 }
 else{
    printf("\nYour search Element is not Found in This Array...\n");
 }

}

//Stack
void stackmenu(){

  while(1){
            system("cls");
  printf("\n\n\n1. Push An Element In Stack.\n");
  printf("2. Pop An Element In Stack\n");
  printf("3. Traverse The Stack\n");
  printf("4. Search An Element From The Stack\n");
 printf("5. Exit\n");
  printf("\nEnter your choice: ");
  scanf("%d", &choice);
  switch(choice){
   case 1:
       if(top == size - 1){
    printf("Stack Is FULL. Can't Push Element....\n");
      }
      else{
        printf("Enter The Element You Want To Push In Stack: ");
        scanf("%d", &val);
        push(val);
        printf("Push Successfully in Stack........\n");
      }
        break;
   case 2:
       if(top == -1){
     printf("Stack Is Empty. Can't POP Element....\n");
      }
     else{
        pop();
       }
         break;
   case 3:
       printStack();
       break;
   case 4:
        if(top == -1){
     printf("Stack Is Empty. Search Is Impossible. Please Push In Stack First..........\n");
      }
      else{
        printf("Enter The Element You Want To Search In Stack: ");
        scanf("%d", &val);
    searchFromStack(val);
      }
    break;
   case 5:
       system("cls");
       menu();
      exit(0);

  }
printf("\n\nPress Any key to Continue.........");
getch();
}
}

void push(int value){
    top++;
    stackarr[top] = value;
}

void pop(){
    printf("Element %d Pop Successfully From Stack........ \n", stackarr[top]);
    top--;

}

void printStack(){
    if(top == -1){
         printf("Stack Is Empty. Please Push Element First....\n");
    }
    else{
 printf("\nElement In stack is:  ");
 for(i = 0; i<= top; i++){
    printf("%d ", stackarr[i]);
 }
    }

}

void searchFromStack(int value){
for(i = 0; i<= top; i++){
        if(stackarr[i] == value){
             c = 1;
             break;
         }
  }
 if(c == 1){
    printf("\nYour search Element Found on %d index In Stack...........", i);
 }
 else{
    printf("\nYour search Element is not Found in This Stack.......\n");
 }
}


//Queue
void implementQueue(){

while(1){
            system("cls");
  printf("\n\n\n1. Simple Queue.\n");
  printf("2. Circular Queue\n");
 printf("3. Exit\n");
  printf("\nEnter your choice: ");
  scanf("%d", &choice);
  switch(choice){
   case 1:
       simpleQueue();
        break;
   case 2:
       circularQueue();
       break;
   case 3:
       system("cls");
     menu();
    exit(0);
}

}

}

void simpleQueue(){

while(1){
            system("cls");
  printf("\n\n\n1. Enqueue Oparetion.\n");
  printf("2. Dequeue Operation\n");
  printf("3. Traverse The Queue\n");
 printf("4. Exit\n");
  printf("\nEnter your choice: ");
  scanf("%d", &choice);
  switch(choice){
   case 1:
       printf("Enter The Data You Want to Add To Queue:  ");
       scanf("%d", &val);
       enqueue(val);
        break;
   case 2:
       dequeue();
       break;
   case 3:
    printqueue();
    break;
   case 4:
      system("cls");
      implementQueue();
    exit(0);
}
printf("\n\nPress Any key to Continue.........");
        getch();
}

}


void enqueue(int value){

if(rear == size - 1){
    printf("Queue is full\n");
}
else if(front == -1 && rear == -1){
    front = 0;
    rear = 0;
    queue[rear] = value;
}
else{
    rear = rear + 1;
    queue[rear] = value;
}

}

void dequeue(){

if(front == -1 && rear == -1 ){
    printf("Queue is empty");
}
else if(front == rear){
    front = -1;
    rear = -1;
}
else{
    front = front + 1;
}

}

void printqueue(){
for(int i = front; i <= rear; i++){
    printf("\n%d ", queue[i]);
}

}

//circular Queue
void circularQueue(){

while(1){
            system("cls");
  printf("\n\n\n1. Enqueue Oparetion.\n");
  printf("2. Dequeue Operation\n");
  printf("3. Traverse The Circular Queue\n");
 printf("4. Exit\n");
  printf("\nEnter your choice: ");
  scanf("%d", &choice);
  switch(choice){
   case 1:
       printf("Enter The Data You Want to Add To Queue:  ");
       scanf("%d", &val);
       circularenqueue(val);
        break;
   case 2:
       circulardequeue();
       break;
   case 3:
    printcircular();
    break;
   case 4:
      system("cls");
      implementQueue();
    exit(0);
}
printf("\n\nPress Any key to Continue.........");
        getch();
}

}

void circularenqueue(int value){

if(( (rear+1) % size) == front){
    printf("Queue is full\n");
}
else if(front == -1 && rear == -1){
    front = 0;
    rear = 0;
    queue[rear] = value;
}
else{
    rear = (rear + 1) % size;
    queue[rear] = value;
}

}

void circulardequeue(){

if(front == -1 && rear == -1 ){
    printf("Queue is empty\n");
}
else if(front == rear){
    front = -1;
    rear = -1;
}
else{
    front = (front + 1) % size;
}
}

void printcircular(){
   int i = front;
while(i != rear){
    printf("%d ", queue[i]);
   i = (i + 1) % size;
}
printf("%d ", queue[i]);
printf("\n");
}


//Link list
void linklist(){
    while(1){
             system("cls");
 printf("\n\n1. Implement Singly Linked List.\n");
  printf("2. Implement Doubly Linked List.\n");
    printf("3. Implement Circular Linked List.\n");
    printf("4. Exit.\n");
   printf("\nEnter Your choice: ");
   scanf("%d", &choice);
   switch(choice){
 case 1:
     singlylinklist();
      break;
 case 2:
    doublylinklist();
    break;

 case 3:
    circularlinklist();
    break;
 case 4:
     system("cls");
     menu();
    exit(0);
}

}
}
//singly link list
void singlylinklist(){
    while(1){
             system("cls");
printf("\n\n1. Create A Link List.\n");
printf("2. Insert A Node Into Link List.\n");
printf("3. Delete A node From Link List.\n");
printf("4. Traverse The Link List.\n");
printf("5. Search A Node From Link List.\n");
printf("6. Sort The Link List.\n");
printf("7. Exit\n");
 printf("\nEnter Your choice: ");
scanf("%d", &choice);
//link list
switch(choice){
 case 1:
   printf("Enter The Value You want to insert: ");
      scanf("%d", &val);
      head = createNode(head, val);
      printf("\nNode Created Successfully...........\n");
       break;
 case 2:
     if(head == NULL){
        printf("Link List Is Empty. Create Link List First.....\n");
     }
     else{
            // insertion
     while(1){
             system("cls");
    printf("\n\n1. Insert A Node At The Beginning Of Link List.\n");
    printf("2. Insert A Node At The Middle Of Link List.\n");
    printf("3. Insert A Node At The End Of Link List.\n");
    printf("4. Exit.\n");
     printf("\nEnter Your choice: ");
     scanf("%d", &choice);
     if(choice == 1){
        printf("Enter The Value You want to insert: ");
               scanf("%d", &val);
            head = insertAtbegin(head, val);
             printf("\nInsert Node Successfully At Begin...........\n");
     }
      else if(choice == 2){
             printf("Enter The Value You want to insert :");
               scanf("%d", &val);
                 printf("Enter The position You want to insert the Node: ");
               scanf("%d", &pos);
          head = insertAtmiddle(head, pos, val);
           printf("\nInsert Node Successfully At Middle...........\n");

      }
      else if(choice == 3){
            printf("Enter The Value You want to insert At the End: ");
               scanf("%d", &val);
             head =  insertAtend(head, val);
              printf("\nInsert Node Successfully At End...........\n");

        }
        else{
             system("cls");
                 singlylinklist();
            exit(0);
        }
        printf("\n\nPress Any key to Continue.........");
        getch();
     }
}

break;

 case 3:
     if(head == NULL){
        printf("Link List Is Empty. Create Link List First.....\n");
     }
     else{
            // Deletion
     while(1){
             system("cls");
    printf("\n\n1. Delete A Node From The Beginning Of Link List.\n");
    printf("2. Delete A Node From The Middle Of Link List.\n");
    printf("3. Delete A Node From The End Of Link List.\n");
    printf("4. Exit.\n");
     printf("\nEnter Your choice: ");
     scanf("%d", &choice);
     if(choice == 1){
         head = deleteatbegin(head);
             printf("\nDelete Successfully At Begin...........\n");
     }
      else if(choice == 2){
              printf("Enter The position That Node You want to Delete: ");
               scanf("%d", &pos);
          head = deleteatmiddle(head, pos);
           printf("\nDelete Successfully At Middle...........\n");
      }
      else if(choice == 3){
           head =  deleteatend(head);
             printf("\nDelete Successfully At End...........\n");
        }
        else{
             system("cls");
                 singlylinklist();
            exit(0);
        }
        printf("\n\nPress Any key to Continue.........");
        getch();
     }
}
break;

 case 4:
     if(head == NULL){
        printf("Link List Is Empty. Create Link List First.....\n");
     }
     else{
      printnode(head);
     }
      break;
 case 5:
     if(head == NULL){
        printf("Link List Is Empty. Create Link List First.....\n");
     }
     else{
     printf("Enter The data of Node That you want to search: ");
    scanf("%d", &val);
    searchnode(head, val);
     }
    break;
 case 6:
     if(head == NULL){
        printf("Link List Is Empty. Create Link List First.....\n");
     }
     else{
    sortLinklist(head);
    printf("Link List Sorted Successfully..........\n");
     }
    break;
 case 7:
     system("cls");
     linklist();
    exit(0);

}
printf("\n\nPress Any key to Continue.........");
getch();
}
}

struct node* createNode(struct node *head, int value){
struct node *newNode;
 newNode = (struct node*)malloc(sizeof(struct node));
 newNode->data = value;
 newNode->next = NULL;

 if(head == NULL){
    head = newNode;
    temp = newNode;
 }
 else{
    temp->next = newNode;
    temp = temp->next;
 }
return head;
}

 void printnode(struct node* head){
 struct node *temp =head;
printf("\nLink List Are--------->>>>      ");
 while(temp != NULL){
    printf("%d->", temp->data);
    temp = temp->next;
 }
printf("NULL\n");
}

struct node* insertAtbegin(struct node *head, int value){
struct node *newhead, *current;
current = head;

newhead = (struct node*)malloc(sizeof(struct node));
newhead->data = value;
newhead->next = current;

return newhead;
}

struct node* insertAtmiddle(struct node *head, int position, int value){
struct node *current = head;

int counter = 0;
while(current != NULL){
    counter++;
    if(counter == position){
        struct node *newnode;
       newnode = (struct node*)malloc(sizeof(struct node));
       newnode->data = value;
       newnode->next = current->next;
       current->next = newnode;
    }
    current = current->next;
}
return head;
}

struct node* insertAtend(struct node *head, int value){
struct node *current = head;
struct node *lastnode;
lastnode = (struct node*)malloc(sizeof(struct node));
lastnode->data = value;
lastnode->next = NULL;

while(current->next != NULL){
    current = current->next;
}
current->next = lastnode;

return head;
}

//delete
struct node* deleteatbegin(struct node *head){
struct node *current = head;

current = current->next;

return current;

}

struct node* deleteatmiddle(struct node *head, int position){
int counter = 0;
struct node *current = head;

while(current != NULL){
    counter++;
    if(counter == position){
        current->next = current->next->next;
    }
    current = current->next;
}

return head;
}

struct node* deleteatend(struct node *head){

struct node *current = head;

while(current->next->next != NULL){
    current = current->next;
}
current->next = NULL;
return head;

}

void searchnode(struct node *head, int value){

struct node *current = head;
int count = 0;
while(current != NULL){
        count++;
    if(current->data == value){

       printf("Your Node Is Present in The position %d In The link list\n", count);
       return 0;
    }
    current = current->next;
}
printf("Your Node Is Not Present in The Link list\n");
}

struct node* sortLinklist(struct node *head){
int temporary;
struct node *current = head;
struct node *index;

while(current != NULL){
        index = current->next;
        while(index != NULL){
    if(current->data >  index->data){
        temporary = current->data;
        current->data =  index->data;
         index->data = temporary;
    }
    index = index->next;
}
current = current->next;
}
return head;
}

//doubly link list

void doublylinklist(){
    while(1){
             system("cls");
printf("\n\n1. Create A Doubly Link List.\n");
printf("2. Insert A Node Into Doubly Link List.\n");
printf("3. Delete A node From The Doubly Link List.\n");
printf("4. Traverse The Doubly Link List.\n");
printf("5. Search A Node From The Doubly Link List.\n");
printf("6. Sort The Doubly Link List.\n");
printf("7. Exit\n");
 printf("\nEnter Your choice: ");
scanf("%d", &choice);
//link list
switch(choice){
 case 1:
   printf("Enter The Value You want to insert: ");
      scanf("%d", &val);
      doublyhead = createDoublyNode(doublyhead, val);
      printf("\nNode Created Successfully...........\n");
       break;
 case 2:
     if(doublyhead == NULL){
        printf("Link List Is Empty. Create Link List First.....\n");
     }
     else{
            // insertion
     while(1){
             system("cls");
    printf("\n\n1. Insert A Node At The Beginning Of The Doubly Link List.\n");
    printf("2. Insert A Node At The Middle Of The Doubly Link List.\n");
    printf("3. Insert A Node At The End Of The Doubly Link List.\n");
    printf("4. Exit.\n");
     printf("\nEnter Your choice: ");
     scanf("%d", &choice);
     if(choice == 1){
        printf("Enter The Value You want to insert: ");
               scanf("%d", &val);
            doublyhead = insertAtbeginIndoubly(doublyhead, val);
             printf("\nInsert Node Successfully At Begin...........\n");
     }
      else if(choice == 2){
             printf("Enter The Value You want to insert :");
               scanf("%d", &val);
                 printf("Enter The position You want to insert the Node: ");
               scanf("%d", &pos);
          doublyhead = insertAtmiddleInDoubly(doublyhead, pos, val);
           printf("\nInsert Node Successfully At Middle...........\n");

      }
      else if(choice == 3){
            printf("Enter The Value You want to insert At the End: ");
               scanf("%d", &val);
             doublyhead =  insertAtendIndoubly(doublyhead, val);
              printf("\nInsert Node Successfully At End...........\n");

        }
        else{
             system("cls");
                 doublylinklist();
            exit(0);
        }
        printf("\n\nPress Any key to Continue.........");
        getch();
     }
}

break;

 case 3:
     if(doublyhead == NULL){
        printf("Link List Is Empty. Create Link List First.....\n");
     }
     else{
            // Deletion
     while(1){
             system("cls");
    printf("\n\n1. Delete A Node From The Beginning Of Doubly Link List.\n");
    printf("2. Delete A Node From The Middle Of Doubly Link List.\n");
    printf("3. Delete A Node From The End Of Doubly Link List.\n");
    printf("4. Exit.\n");
     printf("\nEnter Your choice: ");
     scanf("%d", &choice);
     if(choice == 1){
         doublyhead = deleteatbeginInDoubly(doublyhead);
             printf("\nDelete Successfully At Begin...........\n");
     }
      else if(choice == 2){
              printf("Enter The position That Node You want to Delete: ");
               scanf("%d", &pos);
          doublyhead = deleteAtmiddleInDoubly(doublyhead, pos);
           printf("\nDelete Successfully At Middle...........\n");
      }
      else if(choice == 3){
           doublyhead =  deleteAtendInDoubly(doublyhead);
             printf("\nDelete Successfully At End...........\n");
        }
        else{
             system("cls");
                doublylinklist();
            exit(0);
        }
        printf("\n\nPress Any key to Continue.........");
        getch();
     }
}
break;

 case 4:
     if(doublyhead == NULL){
        printf("Link List Is Empty. Create Doubly Link List First.....\n");
     }
     else{
      printdoublynode(doublyhead);
     }
      break;
 case 5:
     if(doublyhead == NULL){
        printf("Link List Is Empty. Create Link List First.....\n");
     }
     else{
     printf("Enter The data of Node That you want to search: ");
    scanf("%d", &val);
    searchnodeInDoubly(doublyhead, val);
     }
    break;
 case 6:
     if(doublyhead == NULL){
        printf("Link List Is Empty. Create Link List First.....\n");
     }
     else{
    sortLinklistdoubly(doublyhead);
    printf("Link List Sorted Successfully..........\n");
     }
    break;
 case 7:
     system("cls");
     linklist();
    exit(0);

}
printf("\n\nPress Any key to Continue.........");
getch();
}
}

struct Node* createDoublyNode(struct Node *doublyhead, int value){
struct Node *newNode;
 newNode = (struct Node*)malloc(sizeof(struct Node));
 newNode->data = value;
 newNode->prev = NULL;
 newNode->next = NULL;

 if(doublyhead == NULL){
    doublyhead = newNode;
    tail = newNode;
 }
 else{
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
 }

return doublyhead;
}

void printdoublynode(struct Node* doublyhead){
 struct Node *current = doublyhead;
printf("\nDoubly Link List Are--------->>>>      ");
 while(current != NULL){
    printf("%d->", current->data);
   current = current->next;
 }
printf("NULL\n");
}

struct Node* insertAtbeginIndoubly(struct Node *doublyhead, int value){
struct Node *newhead, *current;
current = doublyhead;

newhead = (struct Node*)malloc(sizeof(struct Node));
newhead->data = value;
newhead->prev = NULL;
newhead->next = current;
current->prev = newhead;

return newhead;
}

struct Node* insertAtmiddleInDoubly(struct Node *doublyhead, int position, int value){
struct Node *current = doublyhead;

int counter = 0;
while(current != NULL){
    counter++;
    if(counter == position){
        struct Node *newnode;
       newnode = (struct Node*)malloc(sizeof(struct Node));
       newnode->data = value;
       newnode->next = current->next;
       newnode->prev = current;
       current->next->prev = newnode;
       current->next = newnode;
    }
    current = current->next;
}
return doublyhead;
}

struct Node* insertAtendIndoubly(struct Node *doublyhead, int value){
struct Node *current = doublyhead;
struct Node *lastnode;
lastnode = (struct Node*)malloc(sizeof(struct Node));
lastnode->data = value;
lastnode->next = NULL;
lastnode->prev = tail;
tail->next = lastnode;
tail = lastnode;

return doublyhead;
}

struct Node* deleteatbeginInDoubly(struct Node *doublyhead){

doublyhead = doublyhead->next;
doublyhead->prev = NULL;
return doublyhead;
}

struct Node* deleteAtmiddleInDoubly(struct Node *doublyhead, int position){
struct Node *current = doublyhead;
int counter;
while(current->next != NULL){
        counter++;
    if(counter == position){
            current->next->next->prev = current;
            current->next = current->next->next;
    }
    else{
        current = current->next;
    }
}
return doublyhead;
}

struct Node* deleteAtendInDoubly(struct Node *doublyhead){
tail->prev->next = NULL;
tail = tail->prev;
return doublyhead;
}

void searchnodeInDoubly(struct Node *doublyhead, int value){

struct Node *current = doublyhead;
int count = 0;
while(current != NULL){
        count++;
    if(current->data == value){

       printf("Your Node Is Present in The position %d In The Doubly Link list\n", count);
       return 0;
    }
    current = current->next;
}
printf("Your Node Is Not Present in The Doubly Link list\n");
}

struct Node* sortLinklistdoubly(struct Node *doublyhead){
int temporary;
struct node *current = doublyhead;
struct node *index;

while(current != NULL){
        index = current->next;
        while(index != NULL){
    if(current->data >  index->data){
        temporary = current->data;
        current->data =  index->data;
         index->data = temporary;
    }
    index = index->next;
}
current = current->next;
}
return doublyhead;
}

//circular link list

void circularlinklist(){
    while(1){
             system("cls");
printf("\n\n1. Create A Circular Link List.\n");
printf("2. Insert A Node Into Circular Link List.\n");
printf("3. Delete A node From The Circular Link List.\n");
printf("4. Traverse The Circular Link List.\n");
printf("5. Search A Node From The Circular Link List.\n");
printf("6. Sort The Circular Link List.\n");
printf("7. Exit\n");
 printf("\nEnter Your choice: ");
scanf("%d", &choice);
//link list
switch(choice){
 case 1:
   printf("Enter The Value You want to insert: ");
      scanf("%d", &val);
      circularhead = createcircularNode(circularhead, val);
      printf("\nNode Created Successfully...........\n");
       break;
 case 2:
     if(circularhead == NULL){
        printf("Link List Is Empty. Create Link List First.....\n");
     }
     else{
            // insertion
     while(1){
             system("cls");
    printf("\n\n1. Insert A Node At The Beginning Of The Circular Link List.\n");
    printf("2. Insert A Node At The Middle Of The Circular Link List.\n");
    printf("3. Insert A Node At The End Of The Circular Link List.\n");
    printf("4. Exit.\n");
     printf("\nEnter Your choice: ");
     scanf("%d", &choice);
     if(choice == 1){
        printf("Enter The Value You want to insert: ");
               scanf("%d", &val);
            circularhead = insertAtbeginInCircular(circularhead, val);
             printf("\nInsert Node Successfully At Begin...........\n");
     }
      else if(choice == 2){
             printf("Enter The Value You want to insert :");
               scanf("%d", &val);
                 printf("Enter The position You want to insert the Node: ");
               scanf("%d", &pos);
          circularhead =  insertAtmiddleInCircular(circularhead, pos, val);
           printf("\nInsert Node Successfully At Middle...........\n");

      }
      else if(choice == 3){
            printf("Enter The Value You want to insert At the End: ");
               scanf("%d", &val);
             circularhead =  insertAtendInCircular(circularhead, val);
              printf("\nInsert Node Successfully At End...........\n");

        }
        else{
             system("cls");
                 circularlinklist();
            exit(0);
        }
        printf("\n\nPress Any key to Continue.........");
        getch();
     }
}

break;

 case 3:
    if(circularhead == NULL){
        printf("Link List Is Empty. Create Link List First.....\n");
     }
     else{
            // Deletion
     while(1){
             system("cls");
    printf("\n\n1. Delete A Node From The Beginning Of Circular Link List.\n");
    printf("2. Delete A Node From The Middle Of Circular Link List.\n");
    printf("3. Delete A Node From The End Of Circular Link List.\n");
    printf("4. Exit.\n");
     printf("\nEnter Your choice: ");
     scanf("%d", &choice);
     if(choice == 1){
         circularhead = deleteatbeginInCircular(circularhead);
             printf("\nDelete Successfully At Begin...........\n");
     }
      else if(choice == 2){
              printf("Enter The position That Node You want to Delete: ");
               scanf("%d", &pos);
          circularhead = deleteatmiddleInCircular(circularhead, pos);
           printf("\nDelete Successfully At Middle...........\n");
      }
      else if(choice == 3){
           circularhead =  deleteatendInCircular(circularhead);
             printf("\nDelete Successfully At End...........\n");
        }
        else{
             system("cls");
                circularlinklist();
            exit(0);
        }
        printf("\n\nPress Any key to Continue.........");
        getch();
     }
}
break;

 case 4:
     if(circularhead == NULL){
        printf("Link List Is Empty. Create Circular Link List First.....\n");
     }
     else{
      printcircularnode(circularhead);
     }
      break;
 case 5:
     if(circularhead == NULL){
        printf("Link List Is Empty. Create Link List First.....\n");
     }
     else{
     printf("Enter The data of Node That you want to search: ");
    scanf("%d", &val);
    searchnodeInCircular(circularhead, val);
     }
    break;
 case 6:
     if(circularhead == NULL){
        printf("Link List Is Empty. Create Link List First.....\n");
     }
     else{
    sortLinklistInCircular(circularhead);
    printf("Link List Sorted Successfully..........\n");
     }
    break;
 case 7:
     system("cls");
     linklist();
    exit(0);

}
printf("\n\nPress Any key to Continue.........");
getch();
}
}

struct node* createcircularNode(struct node *circularhead, int value){
struct node *newNode;
 newNode = (struct node*)malloc(sizeof(struct node));
 newNode->data = value;
 newNode->next = NULL;

 if(circularhead == NULL){
    circularhead = newNode;
    circulartail = newNode;
    circulartail->next = circularhead;
 }
 else{
    circulartail->next = newNode;
    circulartail = circulartail->next;
    circulartail->next = circularhead;
 }
return circularhead;
}

void printcircularnode(struct node* circularhead){
struct node *temp = circularhead;
printf("\nLink List Are--------->>>>      ");
 while(temp->next != circularhead){
    printf("%d->", temp->data);
    temp = temp->next;
 }
 printf("%d->", temp->data);
printf("HEAD\n");

}

struct node* insertAtbeginInCircular(struct node *circularhead, int value){
struct node *newhead, *current;
current = circularhead;


newhead = (struct node*)malloc(sizeof(struct node));
newhead->data = value;
newhead->next = current;
circulartail->next = newhead;
return newhead;
}

struct node* insertAtmiddleInCircular(struct node *circularhead, int position, int value){
struct node *current = circularhead;

int counter = 0;
while(current->next != circularhead){
    counter++;
    if(counter == position){
        struct node *newnode;
       newnode = (struct node*)malloc(sizeof(struct node));
       newnode->data = value;
       newnode->next = current->next;
       current->next = newnode;
    }
    current = current->next;
}
return circularhead;
}

struct node* insertAtendInCircular(struct node *circularhead, int value){
struct node *current = circularhead;
struct node *lastnode;
lastnode = (struct node*)malloc(sizeof(struct node));
lastnode->data = value;
circulartail->next = lastnode;
circulartail = circulartail->next;
circulartail->next = circularhead;

return circularhead;
}

struct node* deleteatbeginInCircular(struct node *circularhead){
struct node *current = circularhead;

current = current->next;
circulartail->next = current;

return current;
}

struct node* deleteatmiddleInCircular(struct node *circularhead, int position){
int counter;
struct node *current = circularhead;

while(current->next != circularhead){
    counter++;
    if(counter == position){
        current->next = current->next->next;
    }
    current = current->next;
}

return circularhead;
}

struct node* deleteatendInCircular(struct node *circularhead){

struct node *current = circularhead;

 while(current->next->next != circularhead){
    current = current->next;
 }
 circulartail = current;
 circulartail->next = circularhead;
return circularhead;
}

void searchnodeInCircular(struct node *circularhead, int value){

struct node *current = circularhead;
int c, count = 0;

while(current->next != circularhead){
        count++;
    if(current->data == value){
       c = 1;
       break;
    }
    current = current->next;
}
if(current->data == value){
    c = 2;
}

if(c == 1 || c == 2){
    printf("Your Node Is Present In The Circular link list\n");
}
else{
printf("Your Node Is Not present in link list\n");
}
}

struct node* sortLinklistInCircular(struct node *circularhead){
int temporary;
struct node *current = circularhead;
struct node *index;

while(current->next != circularhead){
        index = current->next;
        while(index->next != circularhead){
    if(current->data >  index->data){
        temporary = current->data;
        current->data =  index->data;
         index->data = temporary;
    }
    index = index->next;
}
if(current->data >  index->data){
        temporary = current->data;
        current->data =  index->data;
         index->data = temporary;
    }
current = current->next;
}
return circularhead;
}


void tree(){

while(1){
            system("cls");
  printf("\n\n\n1. Binary Tree.\n");
  printf("2. BST\n");
 printf("3. Exit\n");
  printf("\nEnter your choice: ");
  scanf("%d", &choice);
  switch(choice){
   case 1:
       binarytree();
        break;
   case 2:
       bst();
       break;
   case 3:
      system("cls");
      menu();
    exit(0);
}
printf("\n\nPress Any key to Continue.........");
        getch();
}

}

void binarytree(){


while(1){
            system("cls");
  printf("\n\n\n1. Create A Binary Tree.\n");
  printf("2. Traverse The Binary Tree In Preorder\n");
  printf("3. Traverse The Binary Tree In Inorder\n");
 printf("4. Traverse The Binary Tree In Postorder\n");
  printf("5. Search A node From The tree\n");
  printf("6. Exit\n");
  printf("\nEnter your choice: ");
  scanf("%d", &choice);
  switch(choice){
   case 1:
      root = create();
        break;
   case 2:
       printf("\n preorder Travarsal:  ");
       preorder(root);
       break;
   case 3:
     printf("\n Inorder Travarsal:  ");
       inorder(root);
    break;
   case 4:
     printf("\n postorder Travarsal:  ");
       postorder(root);
       break;
   case 5:
       printf("\nEnter the Node Data you Want to Search: ");
       scanf("%d", &data);
    searchnodefromtree(root, data);
    break;
   case 6:
      system("cls");
      tree();
    exit(0);
}
printf("\n\nPress Any key to Continue.........");
        getch();
}

}

struct treenode* create(){
struct treenode *newnode;
newnode = (struct treenode*)malloc(sizeof(struct treenode));
printf("Enter 1 for node and -1 for no node: ");
scanf("%d", &choice);
if(choice == -1){
    return 0;
}
else{
        printf("Enter Data: ");
    scanf("%d",&data);
    newnode->data = data;
     printf("\nEnter data for left child: \n");
     newnode->left = create();
      printf("\nEnter data for right child: \n");
     newnode->right = create();
return newnode;
}
}

void inorder(struct treenode *root){
if(root == NULL){
    return 0;
}
else{
    inorder(root->left);
    printf("%d->", root->data);
    inorder(root->right);
}
}

void preorder(struct treenode *root){
if(root == NULL){
    return 0;
}
else{
    printf("%d->", root->data);
    preorder(root->left);
    preorder(root->right);
}
}

void postorder(struct treenode *root){
if(root == NULL){
    return 0;
}
else{
    postorder(root->left);
    postorder(root->right);
    printf("%d->", root->data);
}
}

int searchnodefromtree(struct treenode *root, int data) {
  if (root != NULL) {
    searchnodefromtree(root->left, data);

    //printf("%d -> ", root->data);
    if(root->data == data){
    printf("The Node Is Present in The Tree\n");
    return;
    }

    searchnodefromtree(root->right, data);
  }
//printf("The Node Is Not Present in The Tree\n");
}


//bst
void bst(){

while(1){
            system("cls");
 printf("\n1. Create a BST Tree.\n");
 printf("2. Insert A node into BST.\n");
 printf("3. Delete A node from BST.\n");
  printf("4. Traverse The BST In Preorder\n");
  printf("5. Traverse The BST In Inorder\n");
 printf("6. Traverse The BST In Postorder\n");
printf("7. Search A Node From The BST.\n");
printf("8. Sort The BST.\n");
printf("9. Exit\n");
  printf("\nEnter your choice: ");
  scanf("%d", &choice);
  switch(choice){
   case 1:
       printf("Enter The Node Data: ");
     scanf("%d",&data);
      root = insert(root, data);
        break;
   case 2:
        printf("Enter The Node Data: ");
       scanf("%d",&data);
      root = insert(root, data);
       break;
   case 3:
    printf("Enter The Node Data: ");
       scanf("%d",&data);
      root = deleteNode(root, data);
      break;
   case 4:
   preorder(root);
    break;
   case 5:
    inorder(root);
    break;
   case 6:
    postorder(root);
    break;
   case 7:
    printf("\nEnter the Node Data you Want to Search: ");
       scanf("%d", &data);
    searchnodefromtree(root, data);
    break;
   case 8:
    inorder(root);
    break;
   case 9:
      system("cls");
      tree();
    exit(0);
}
printf("\n\nPress Any key to Continue.........");
        getch();
}

}

struct treenode* newNode(int data) {
  struct treenode *temp = (struct treenode *)malloc(sizeof(struct treenode));
  temp->data = data;
  temp->left = temp->right = NULL;
  return temp;
}
struct treenode* insert(struct treenode *node, int data) {
  if (node == NULL) return newNode(data);

  if (data < node->data){
    node->left = insert(node->left, data);
  }
  else{
    node->right = insert(node->right, data);
  }
  return node;
}

void inorderbst(struct treenode *root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d -> ", root->data);
    inorder(root->right);
  }
}

//delete
struct treenode *minValueNode(struct treenode *node) {
  struct treenode *current = node;

  while (current && current->left != NULL)
    current = current->left;

  return current;
}

// Deleting a node
struct treenode *deleteNode(struct treenode *root, int data) {

  if (root == NULL) return root;

  if (data < root->data)
    root->left = deleteNode(root->left, data);
  else if (data > root->data)
    root->right = deleteNode(root->right, data);

  else {
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    struct treenode *temp = minValueNode(root->right);

    root->data = temp->data;
    root->right = deleteNode(root->right, temp->data);
  }
  return root;
}

void graph(){
while(1){
            system("cls");
  printf("\n\n\n1. Graph Representation with Adjacency Matrix And BFS And DFS Traverse With Adjacency Matrix.\n");
 printf("2. Exit\n");
  printf("\nEnter your choice: ");
  scanf("%d", &choice);
  switch(choice){
   case 1:
       graphwithAm();
        break;
   case 2:
      system("cls");
      menu();
    exit(0);
}
printf("\n\nPress Any key to Continue.........");
        getch();
}

}


void graphwithAm(){

printf("Enter the number of vertices: ");
scanf("%d", &numofvertices);

int adj[numofvertices][numofvertices];
for(int i = 0; i < numofvertices ; i++){
  for(int j = 0; j < numofvertices; j++){
    adj[i][j] = 0;
  }
}

while(s != -1 && d != -1){
    printf("Enter S And D: ");
    scanf("%d %d", &s, &d);
    adj[s][d] = 1;
    adj[d][s] = 1;
}
printf("\n\nAdjacency Matrix Is: \n");
for(int i = 0; i < numofvertices ; i++){
  for(int j = 0; j < numofvertices; j++){
    printf("%d ",adj[i][j]);
  }
  printf("\n");
}

int visited[numofvertices], queue[numofvertices], front = -1, rear = -1;

for(int i = 0; i < numofvertices; i++){
    visited[i] = 0;
}

front++;
queue[++rear] = start;
visited[start] = 1;
printf("\n\n\nBFS Traverse Is:   ");
while(front <= rear){
        start = queue[front++];
        printf("%d ", start);
    for(int i = 0; i < numofvertices ; i++){
    if(adj[start][i] == 1 && visited[i] != 1){
        queue[++rear] = i;
        visited[i] = 1;
    }
}
}

}
