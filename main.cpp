#include <iostream>
using namespace std;
 
#include <iostream>
using namespace std;
 


class Node {
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int data): data(data), next(NULL), prev(NULL){}
        

};

class DoublyLinkedList{
    private:
        Node* head;
        Node* tail;
    public:
        DoublyLinkedList(): head(NULL), tail(NULL){}

    void AddToBeggining(int data){
        Node* new_node = new Node(data);
        if(!head){
            head = tail = new_node;
        }else{
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
    }

    void AddToEnd(int data){
        Node* new_node = new Node(data);
        if(!tail){
            tail = head = new_node;

        }else{
            new_node->prev = tail;
            tail->next = new_node;
            tail = new_node;



        }
    }



    

};


int main() {
    return 0;
}