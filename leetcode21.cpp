
//  * Definition for singly-linked list.
 struct ListNode {
     int val;
          ListNode *next;

     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp=list1;
        ListNode* temp1=list1;
        ListNode* temp2=list1;
        ListNode* temp3=list2;
        ListNode* temp4=list2;
        
        vector<int>arr;
        if(temp==0 && list2==0) return temp;
        if(list2!=0 && temp==0)
        {
            while(temp3->next!=0)
            {
                arr.push_back(temp3->val);
                temp3=temp3->next;
            }
            sort(arr.begin(),arr.end());
            for(int i=0;i<arr.size();i++)
            {
                temp4->val=arr[i];
            temp4=temp4->next;
            }
            return list2;
            
        }
        while(temp->next!=0)
        {
            temp=temp->next;
        }
        temp->next=list2;
        while(temp1)
        {
            arr.push_back(temp1->val);
            temp1=temp1->next;
        } 
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            temp2->val=arr[i];
            temp2=temp2->next;
        }
        return list1;
        
        
    }
};