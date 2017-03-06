#include <bits/stdc++.h>
using namespace std;
#define MAX 101
int top = -1, arr[MAX];
int IsEmpty();
void Push(int x);
void Pop();
int Top();
void Print();

int main(){
    Push(1);
    Push(2);
    Push(3);
    Pop();
    Print();
    if(IsEmpty()) cout << "Stack is empty!" << endl;
    else cout << "Stack is not empty!" << endl;
    return 0;
}
int IsEmpty(){
    if(top == -1) return 1;
    return 0;
}
void Push(int x){
    if(top == MAX - 1){
        cout << "Error: Stack overflow!" << endl;
        return;
    }
    arr[++top] = x;
}
void Pop(){
    if(IsEmpty() == 1){
        cout << "Error: No element to pop!" << endl;
        return;
    }
    top--;
}
int Top(){
    return arr[top];
}
void Print(){
    cout << "Stack: ";
    for(int i = 0; i <= top; i++)
        cout << arr[i] << " ";
    cout << endl;
}
