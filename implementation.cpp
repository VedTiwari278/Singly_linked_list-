
/*  Program to Implement all Operation on singly linked list */

#include <iostream>
using namespace std;

struct Node {
   int data;
   struct Node *next;
};

Node *head = NULL;
/*   Insertion of item at the Head */
void insert_at_beg(int data)
{
    Node* newnode = new Node();
    newnode->data = data;
    newnode->next = head; 
    head = newnode;

    cout << "Inserted: " << newnode->data << endl;
}


/*  Insertion of item at the End/Tail  */  


void insert_At_Last(int data){
        Node* newnode = new Node();
        newnode->data = data;
        newnode->next=NULL;
        if(head==NULL){
         head=newnode;
        }
        else{   
               Node* temp = head;
                while(temp->next!= NULL){
                temp=temp->next;
       }   
       temp->next=newnode;
        }
       cout<<"Inserted : "<<newnode->data<<endl;

}

/*  Insertion of item at the End/Tail  */

void insert_at_Mid(int data){
   Node* newnode=new Node();
   newnode->data=data;
   newnode->next=NULL;
   int key;
   cout<<"Enter Key value after which you want to insert";
   cin>>key;
   Node* temp=head;
   while(temp->data!=key){
      temp=temp->next;
   }
   newnode->next=temp->next;
   temp->next=newnode;
}


/* Deletion of node from HEAD */

void Delete_at_head(){
   if(head->next==NULL){
      cout<<"\n List is Empty Now . \n";
   }
   Node*temp=head;
   head=head->next;
}

/* Deletion from Tail */

void Delete_from_END(){
   Node* temp=head;
   if(head->next==NULL){
      cout<<"List is Empty Now ";
   }
   while(temp->next->next!=NULL){
      temp=temp->next;
   }
   temp->next=NULL;

}

/* Deletion of Node from mid of linked list */

void Delete_from_mid_of_list(){
   Node* temp=head;
   int key;
   cout<<"Enter key which you want to delete from the list : ";
   cin>>key;
   while(temp->next->data==key){
            temp=temp->next;
   }
   temp->next=temp->next->next;
}

/*  Traversal of Linked List  */


void traverse() {
   cout<<"Data of linked list :"<<" ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data<< " " ;
        temp = temp->next;
    }
}

/*
   Main section of program or Driver code
*/


int main()
{
int con=1;
while(con==1){
   cout<<"Choose your option : \n";
   cout<<"1.Insert at beg \t 2.Insert at last \t 3.Insert at mid \t 4. Deletion at head \t 5.Deletion from End \t 6.Deletion from mid";     // User choice accepted to implement singly linked list  
int ch;
cin>>ch;
switch(ch){
    case 1:
           int item;
           cout<<"Enter data to be inserted : ";
           cin>>item;
           insert_at_beg(item);    // Beginning insertion 
           traverse();
           break;
    case 2: int value;
           cout<<"Enter data to be inserted : ";
           cin>>value;
           insert_At_Last(value); // Last insertion 
           traverse();
           break;

    case 3:int mid;
           cout<<"Enter data to be inserted : ";
           cin>>mid;
           insert_at_Mid(mid);   // Mid insertion
           traverse();
           break;

    case 4:Delete_at_head(); // Deletion from Head
           traverse();
           break;

    case 5:Delete_from_END();
           traverse();
           break;
    case 6:Delete_from_mid_of_list();
           traverse();
           break;
    return 0;
}
cout<<"\nTo perform operation enter 1 "<<endl;
cin>>con;
}
}