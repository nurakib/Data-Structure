#include <bits/stdc++.h>
using namespace std;
#define MAX 101

class Stack{
private:
    int arr[MAX];
    int top;
public:
    Stack(){
        top = -1;
    }
    int IsEmpty(){
        if(top == -1) return 1;
        return 0;
    }
    void Push(int x){
        if(top == MAX - 1){
            cout << "Stack overflow!" << endl;
            return;
        }
        arr[++top] = x;
    }
    void Pop(){
        if(IsEmpty() == 1){
            cout << "No element to pop!" << endl;
            return;
        }
        top--;
    }
    void Print(){
        cout << "Stack: ";
        for(int i = 0; i <= top; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main(){
    Stack st;
    st.Push(1);
    st.Push(2);
    st.Push(3);
    st.Pop();
    st.Pop();
    st.Print();
    if(st.IsEmpty()) cout << "Stack is empty!" << endl;
    else cout << "Stack is not empty!" << endl;
    return 0;
}
