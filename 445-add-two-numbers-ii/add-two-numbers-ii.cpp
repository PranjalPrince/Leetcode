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
 auto speed=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
 }();
class Solution {
public:
    ListNode* reverse(ListNode* node){
        ListNode* nxt=nullptr;
        ListNode* head=node;
        while(head!=nullptr){
            ListNode* tre=head->next;
            head->next=nxt;
            nxt=head;
            head=tre;
        }
       
        return nxt;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        ListNode* ans=nullptr;
        int curr=0;
        while(l1!=nullptr and l2!=nullptr){
            int a=l1->val+l2->val+curr;
            if(a>9){
                curr=1;
                a=a%10;
            }
            else curr=0;
            ListNode* temp=new ListNode(a);
            temp->next=ans;
            ans=temp;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=nullptr){
            int a=l1->val+curr;
            if(a>9){
                curr=1;
                a=a%10;
            }
            else curr=0;
            ListNode* temp=new ListNode(a);
            temp->next=ans;
            ans=temp;
            l1=l1->next;
        
        }
        while(l2!=nullptr){
            int a=l2->val+curr;
            if(a>9){
                curr=1;
                a=a%10;
            }
            else curr=0;
            ListNode* temp=new ListNode(a);
            temp->next=ans;
            ans=temp;
            l2=l2->next;
        }
        if(curr==1){
            ListNode* temp=new ListNode(1);
            temp->next=ans;
            ans=temp;
        }
        return ans;
    }
};