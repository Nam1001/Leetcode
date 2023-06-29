
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int mid=-1000;
        vector<int>arr;
        while(temp!=0)
        {
            arr.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<arr.size();i++)
        {
            cout<<arr[i];
        }
        if(arr.size()%2==0)
        {
             mid=(arr.size()/2);
        }
        else
        {
             mid=ceil(arr.size()/2);
        }
        int i=0;
        while(head!=0 && i<=mid)
                     {
                         if(head->val==arr[mid] && i==mid)
                         {
                             return head;
                         }
                         head=head->next;
                          i++;
                     }
                     return head;
    }
};