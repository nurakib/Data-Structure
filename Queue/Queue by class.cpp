#include <bits/stdc++.h>
using namespace std;
#define MAX 101

class Queue{
private:
    int arr[MAX];
    int front, rear;
public:
    Queue(){
        front = rear = -1;
    }
    bool IsEmpty(){
        return (front == -1 && rear == -1);
    }
    bool IsFull(){
        return (rear + 1) % MAX == front ? true : false;
    }
    int Front(){
        if(front == -1){
			cout<<"Error: cannot return front from empty queue\n";
			return -1;
		}
		return arr[front];
    }
    void Push(int x){
        if(IsFull()){
            cout << "Error: Queue is full" << endl;
            return;
        }
        if(IsEmpty())
            front = rear = 0;
        else
            rear = (rear + 1) % MAX;
        arr[rear] = x;
    }
    void Pop(){
        if(IsEmpty()){
			cout << "Error: Queue is Empty" << endl;
			return;
		}
		else if(front == rear )
			rear = front = -1;
		else
			front = (front + 1) % MAX;
    }
    void Print(){
		int cnt = (rear + MAX - front) % MAX + 1;
		cout << "Queue: ";
		for(int i = 0; i < cnt; i++){
			int index = (front + i) % MAX;
			cout << arr[index] << " ";
		}
		cout << endl;
	}
};

int main(){
    Queue qu;
    qu.Push(1);
    qu.Push(2);
    qu.Push(3);
    qu.Pop();
    qu.Print();
    return 0;
}
