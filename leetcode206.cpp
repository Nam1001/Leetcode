 #include<bits/stdc++.h>
 using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
          ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* ptr2=0;
        ListNode* ptr1=head; 
        if(head==0) return head;
        ListNode* temp=head->next;
        while(temp!=0)
        {
            ptr1->next=ptr2;
            ptr2=ptr1;
            ptr1=temp;
            temp=temp->next;
        }
        ptr1->next=ptr2;
        return ptr1;
        
        
    }
};