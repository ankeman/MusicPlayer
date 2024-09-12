#include<iostream>
#include<string>
using namespace std;
struct Songdata{
    string title;
    string singer;
    string releaseDate;
    };
struct Node{
    Songdata data;
    Node* next;
    Node* prev;

    Node(string a, string b, string c){
        data.title = a;
        data.singer = b;
        data.releaseDate= c;
        next = nullptr;
        prev = nullptr;
    }
};

class stack{
    public:
    Node* head;
    Node*current;
    Node* tail;
    void printCurrent();
    void printAll();
    void printReverse();
    void insertFirst(string title, string singer, string releaseDate);
    void insertLast();
    void Search();
    void removeSong();

    stack(){
        head=nullptr;
        current= nullptr;
        tail= nullptr;

    }
};
void stack::printCurrent(){
    if (current){
cout<<current->data.title<<endl;
cout<<current->data.singer<<endl;
cout<<current->data.releaseDate<<endl;
}
}

void insertFirst(string title, string singer , string releaseDate){
    Node* head;
    Node* tail;
    Node* current;
    Node* n = new Node(title, singer, releaseDate);
    if(head==nullptr){
        head=tail= current= n;
    }
    else{
        n->next=head;
        head->prev=n;
        head=n;
        current = head;
        
        
    }
}

