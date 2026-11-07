#include <iostream>
using namespace std;

// เขียน linklist แบบ Basic
// แบบ ใช้ struct 
struct Link {
    int data;
    Link *next;
    //construct  
   Link(int val) : data(val), next(nullptr) {}
};

int main(){
    // ของ struct
    Link * first = new Link(10) ;
    Link * second = new Link(20);
    Link * third = new Link(30);
    
    // มันคือ เอา fist ไปชี้ nextที่มีค่า nullptr ให้ = ค่าของตัว  second
    first->next = second;
    second->next = third;

    // ค่าที่ชี้ ออกมา แสดง
    cout << first->data << endl;
    cout << second->data << endl;
    cout << third->data << endl;

    // ลบ แล้วเพื่อมคือค่า
    delete  first ;
    delete  second ;
    delete  third ;

    return 0 ;
    
}