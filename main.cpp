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

};


int main() {
    return 0;
}