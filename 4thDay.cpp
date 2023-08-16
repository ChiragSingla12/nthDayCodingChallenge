//creation of linked list(not good method to create LL )

// #include <iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node *next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };

// void print(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<< temp->data << " ";
//         temp=temp->next;
//     }
// }

// int main(){
//     Node* first = new Node(1);
//     Node* second = new Node(2);
//     Node* third = new Node(3);

//     first->next = second;
//     second->next = third;

//     print(first);

// }



// InsertAt head



// #include <iostream>
// using namespace std;

// class Node{
//     public:
//         int data;
//         Node *next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };

// void insertAtHead(Node* &head, int data){
//     Node* newNode = new Node(data);

//     newNode->next= head;

//     head = newNode;
// }
// void print(Node* &head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<< temp->data << " ";
//         temp=temp->next;
//     }
// }
// int main(){
//     Node* head = new Node(10);
//     insertAtHead(head, 20);
//     insertAtHead(head, 30);
//     insertAtHead(head, 40);
//     insertAtHead(head, 50);
//     insertAtHead(head, 60);
//     print(head);

// }


//insert at tail




#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertAtTail(Node* &head, Node* &tail, int data){
   
    Node* newNode = new Node(data);

    tail->next=newNode;

    tail=newNode;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data << " ";
        temp=temp->next;
    }
}
int main(){
    Node* head = new Node(10);
    Node* tail = head;
    insertAtTail(head,tail, 20);
    insertAtTail(head,tail, 30);
    insertAtTail(head,tail, 40);
    insertAtTail(head,tail, 50);
    insertAtTail(head,tail, 60);
    insertAtTail(head, tail, 70);
    print(head);

}