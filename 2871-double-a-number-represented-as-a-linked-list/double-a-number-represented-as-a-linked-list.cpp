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
auto speedUp=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp=head;
        vector<int>v;
        while(temp!=nullptr){
            v.push_back(temp->val);
            temp=temp->next;
        }
        reverse(begin(v),end(v));
        int carr=0;
        for(int i=0;i<v.size();i++){
            int a=v[i]*2+carr;
            if(a>9){
                v[i]=a%10;
                carr=1;
            }
            else{
                v[i]=a;
                carr=0;
            }
        }
        if(carr==1)
        v.push_back(1);
        ListNode* nxt=nullptr;
        for(int i=0;i<v.size();i++){
            ListNode* temp=new ListNode(v[i]);
            // temp->val=v[i];
            temp->next=nxt;
            nxt=temp;
        }
        return nxt;
    }
};