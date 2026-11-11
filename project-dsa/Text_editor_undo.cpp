#include <iostream>
#include <vector>
using namespace std;
class Stack {
    private:
    vector <int> data ;
    
    public:
    void push_stack (int a) {
        data.push_back(a);
    }
    
    void pop_stack (){
        if (!data.empty()){
            data.pop_back();
        }
    
    }
    int top_stack (){
        return data.back();
    }

    bool empty (){
        return data.empty();
    }
    
};

int main(){
    Stack myStack ;
    myStack.push_stack(10);
    myStack.push_stack(20);

    cout << "Top is: " << myStack.top_stack() <<endl ; 
    
    myStack.pop_stack();

    cout << "Top after pop: "<< myStack.top_stack() << endl;
    
    return 0 ;
}