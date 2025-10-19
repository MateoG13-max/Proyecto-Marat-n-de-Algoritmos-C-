#include <bits/stdc++.h>
using namespace std;
struct Node{ int val; Node* next; Node(int v):val(v),next(nullptr){} };
Node* mid_node(Node* head){
    if(!head) return nullptr;
    Node* slow=head; Node* fast=head->next;
    while(fast && fast->next){ slow=slow->next; fast=fast->next->next; }
    return slow;
}
Node* merge_list(Node* a, Node* b){
    Node dummy(0); Node* t=&dummy;
    while(a && b){
        if(a->val < b->val){ t->next=a; a=a->next; }
        else { t->next=b; b=b->next; }
        t=t->next;
    }
    t->next = (a? a: b);
    return dummy.next;
}
Node* merge_sort(Node* head){
    if(!head || !head->next) return head;
    Node* mid = mid_node(head);
    Node* right = mid->next; mid->next = nullptr;
    Node* l = merge_sort(head);
    Node* r = merge_sort(right);
    return merge_list(l,r);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; if(!(cin>>n)) return 0;
    Node* head = nullptr; Node* tail=nullptr;
    for(int i=0;i<n;i++){ int v; cin>>v; Node* node=new Node(v); if(!head) head=tail=node; else { tail->next=node; tail=node; } }
    head = merge_sort(head);
    for(Node* p=head; p; p=p->next) cout<<p->val<<" ";
    cout<<"\n";
    return 0;
}
