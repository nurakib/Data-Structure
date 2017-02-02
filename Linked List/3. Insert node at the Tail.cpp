#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* link;
};
node* head = NULL;
void insrtend(int n){
    node* ptr = new node();
    ptr->data = n;
    ptr->link = NULL;
    if(head == NULL)
        head = ptr;
    else{
        node* tmp = head;
        while(tmp->link != NULL){
            tmp = tmp->link;
        }
        tmp->link = ptr;
    }
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
    insrtend(1); dispLink();
    insrtend(2); dispLink();
    insrtend(3); dispLink();
    return 0;
}
