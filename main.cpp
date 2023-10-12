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

    void AddAtIndex(int data, int index){
        if (index < 0){
            cout << "Index musi byc nieujemny" << endl;
            return;
        }
        Node* new_node = new Node(data);
        if(index == 0){
            AddToBeggining(data);
        }else{
            Node* current = head;
            int i = 0;
            while(i < index - 1 && current){
                current = current->next; 
                i++;
            }
            if(!current){
                cout << "Index poza zakresem" << endl;
                return;
            }
            new_node->next = current->next;
            new_node->prev = current;
            if(current->next){
                current->next->prev = new_node;
            }
            current->next = new_node;
        }

        void RemoveFromTheBeginning(int data){
            if(!head){
                cout << "Lista jest pusta" << endl;
                return;
            {

            if(head == tail){
                delete head;
                head = tail = NULL;        
            }else{
                Node* temp = head;
                head = head->next;
                head->prev = NULL;
                delete temp;
            }
        void RemoveFromTheEnd(int data){
            if(!tail){
                cout << "Lista jest pusta" << endl;
                return;
            }
            if(head == tail){
                delete head;
                head = tail = NULL;
            }else{
                Node* temp = tail;
                tail = tail->prev;
                tail->next = NULL;
                delete temp;
            }
        }    
            
            
            


            


    }








    

};


int main() {
    return 0;
}