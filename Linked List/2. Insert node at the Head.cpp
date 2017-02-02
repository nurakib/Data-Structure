#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* link;
};
node* head = NULL;
void insrtbeg(int n){
    node* ptr = new node();
    ptr->data = n;
    ptr->link = head;
    head = ptr;
}
void dispLink(){
    node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}
int main(){
    insrtbeg(1); dispLink();
    insrtbeg(2); dispLink();
    insrtbeg(3); dispLink();
    return 0;
}
