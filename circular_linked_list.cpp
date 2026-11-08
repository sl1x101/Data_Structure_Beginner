#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};


void printList(Node *head) {
  Node *temp = head; // สร้าง  temp ขึ้น มารับ head

  // วงจาก 1 ถึงตัวมันเอง 
  if (head != nullptr) {
    do {
      cout << temp->data << " ";
      temp = temp->next;
    } while (temp != head); 
  } 
}

int main() {
  Node *head = new Node(1);
  Node *second = new Node(2);
  Node *third = new Node(3);

  // 1->2  2->3 3->1
  head->next = second;
  second->next = third;
  third->next = head;// ตั้งวนกลับ ไป head

  printList(head);

  return 0;
}