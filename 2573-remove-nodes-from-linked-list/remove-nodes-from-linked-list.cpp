auto speed=[](){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*>st;
        ListNode* temp=head;
        while(temp!=nullptr){
            while(!st.empty() and temp->val>st.top()->val){
                st.pop();
            }
            st.push(temp);
            temp=temp->next;
        }
        ListNode* nxt=nullptr;
        while(!st.empty()){
            temp=st.top();
            st.pop();
            temp->next=nxt;
            nxt=temp;
        }
        return nxt;
    }
};