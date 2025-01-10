#include <iostream>
#include <string>
using namespace std;
#define SIZE 5

template <class T>
class stack {
private:
    int top;
    T st[SIZE];

public:
    stack();
    void push(T k);
    T pop();
    T topElement();
    bool isFull();
    bool isEmpty();
};

template <class T>
stack<T>::stack() {
    top = -1;
}

/*template <class T>
void stack<T>::push(T k) {
    if (top == SIZE - 1) {
        cout << "Stack is full. Cannot push." << endl;
        return;
    }
 

    cout<<"Inserted element"<<K<<endl;

    top=top+1;
    st[top]=k;
}

template <class T>
T stack<T>::pop() {
    if (top == -1) {
        cout << "Stack is empty. Cannot pop." << endl;
        return T(); // Return a default value for T
    }
    return st[top--];
}*/

template <class T>
T stack<T>::topElement() {
    if (top == -1) {
        cout << "Stack is empty. No top element." << endl;
        return T(); // Return a default value for T
    }
    return st[top];
}

template <class T>
bool stack<T>::isFull() {
    return (top == SIZE - 1);
}

template <class T>
bool stack<T>::isEmpty() {
    return (top == -1);
}

template <class T>
void stack<T>::push(T k) {
    if (top == SIZE - 1) {
        cout << "Stack is full. Cannot push." << endl;
        return;
    }
 

    cout<<"Inserted element"<<K<<endl;

    top=top+1;
    st[top]=k;
}


template <class T>
T stack<T>::pop() {
   T popped_element =st[top];
   top--;
   return popped_element;
}

int main(){
    stack<int>integer_stack;
    stack<string>string_stack;

    integer_stack.push(10);
     integer_stack.push(20);
     integer_stack.push(30);

     string_stack.pop("Hello");
     string_stack.pop("welcome");
     string_stack.pop("stack");

     int int_poppedItem=integer_stack.pop();
     cout<<int_poppedItem<<"is removed from the stack"<<endl;

     string st_poppedItem=string_stack.pop();

     int int_topItem=integer_staack.topElement

}