first we check nodes value how many time the occurs using map
then create a new linkedlist with element which occurs only one time in a map

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
    ListNode* deleteDuplicates(ListNode* head) {
       map<int,int>list;
        ListNode* temp,*distinct_list=NULL;
        while(head!=NULL)
        {
            list[head->val]++;
            head=head->next;
        }
        for(auto z:list)
        {
            if(z.second==1)
            {
                if(distinct_list==NULL)
                {
                    distinct_list=new ListNode(z.first);
                    temp=distinct_list;
                }
                else{
                    temp->next=new ListNode(z.first);
                    temp=temp->next;
                }
            }
        }
        return distinct_list;
        
    }
};
