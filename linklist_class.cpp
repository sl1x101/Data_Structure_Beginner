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

int main (){
    Link *first  = new Link(10);
    Link *second  = new Link(20);
    Link *third  = new Link(30);

    first->next = second;
    second->next = third;

    cout << first->data << endl;
    cout << second->data << endl;
    cout << third->data << endl;

    return 0 ;
}