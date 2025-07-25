#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Linked List Cycle
bool hasCycle(ListNode *head){
    if(head == NULL){
        return false;
    }
    ListNode *fast = head;
    ListNode *slow = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            return true;
        }
    }
    return false;
}