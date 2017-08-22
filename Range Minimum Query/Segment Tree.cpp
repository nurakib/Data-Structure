#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
int arr[MAX], tree[4 * MAX];
void build(int curr, int b, int e){
    if(b == e){
        tree[curr] = arr[b];
        return;
    }
    int mid = (b + e) / 2;
    int chd1 = 2 * curr;
    int chd2 = 2 * curr + 1;
    build(chd1, b, mid);
    build(chd2, mid+1, e);
    tree[curr] = tree[chd1] + tree[chd2];
}
int query(int curr, int b, int e, int i, int j){
    if(i > e || j < b) return 0;
    if(b >= i && e <= j) return tree[curr];
    int mid = (b + e) / 2;
    int chd1 = 2 * curr;
    int chd2 = 2 * curr + 1;
    int p1 = query(chd1, b, mid, i, j);
    int p2 = query(chd2, mid+1, e, i, j);
    return p1 + p2;
}
void update(int curr, int b, int e, int pos, int val){
    if(pos > e || pos < b) return;
    if(b >= pos && e <= pos){
        tree[curr] = val;
        return;
    }
    int mid = (b + e) / 2;
    int chd1 = 2 * curr;
    int chd2 = 2 * curr + 1;
    update(chd1, b, mid, pos, val);
    update(chd2, mid+1, e, pos, val);
    tree[curr] = tree[chd1] + tree[chd2];
}
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i]; 
    build(1, 1, n); //building segment tree
    for(int i = 0; i < 20; i++) cout << tree[i] << " ";
    cout << endl;
    cout << query(1, 1, n, 2, 4); //query from 2 to 4
    update(1, 1, n, 3, 8); // update at position 3
    cout << endl;
    for(int i = 0; i < 20; i++) cout << tree[i] << " "; // printing updated tree
    return 0;
}
