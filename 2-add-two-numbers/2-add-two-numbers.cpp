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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      if(l1==NULL) return l2;
      if(l2==NULL) return l1;
      int carry=0, sum;
      ListNode*max, *min, *t=l1, *b=l2, *cc;
      while(t!=NULL && b != NULL) {
        if(t!=NULL) t= t->next;
        if(b!=NULL) b= b->next;
      }
      if(t == NULL) {
        min=l1;
        max = l2;
      } else {
        max=l1;
        min =l2;
      }
      cc= max;
      while(min != NULL) {
        sum = max->val+min->val+carry;
        max->val = sum%10;
        carry = sum/10;
        max=max->next;
        min=min->next;
      }
      while(max != NULL) {
        sum =max->val+carry;
        max->val = (sum)%10;
        carry = (sum)/10;
        max=max->next;
      }
      
      if(carry) {
        t=cc;
        while(t->next != NULL) t=t->next;
        t->next= new ListNode(carry);
      }
      return cc;
    }
};