#include <iostream>
using namespace std;

class Link {
    public:
    int data;
    Link *next;

    Link(int val){
        data = val;
        next = nullptr;
    }

};

 void  printList(Link *n){
    while (n!=nullptr )
    {
        cout << n->data << " ";
        n = n->next;
    }
    
 }


int main (){
    Link *first  = new Link(10);
    Link *second  = new Link(20);
    Link *third  = new Link(30);

    first->next = second;
    second->next = third;

    printList(first);

    return 0 ;
}