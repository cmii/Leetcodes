/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      if(list1==NULL) return list2;
      if(list2==NULL) return list1;
      ListNode* temp = list1;
      vector<int> op;
      while(temp->next!= NULL) {
        op.push_back(temp->val);
        temp=temp->next;
      }
      op.push_back(temp->val);
      temp->next = list2;
      temp=temp->next;
      while(temp!= NULL) {
        op.push_back(temp->val);
        temp=temp->next;
      }
      temp=list1;
      int i=0;
      sort(op.begin(), op.end());
      while(temp!= NULL) {
        temp->val= op[i];
        i++;
        temp=temp->next;
      }
      return list1;
    }
};