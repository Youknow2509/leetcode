

#include <bits/stdc++.h>

using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(-1);
        ListNode *cur = head;
        
        while(l1 != nullptr && l2 != nullptr){
            if(l1->val <= l2->val){
                cur->next = l1;
                l1 = l1->next;
            }else{
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        
        if(l1 != nullptr) cur->next = l1;
        else if(l2 != nullptr) cur->next = l2;
        
        return head->next;
    }
};

int main(){

    int n, sz_ls_1, sz_ls_2, x;
    Solution st;
    ListNode *ls1, *ls2, *res;

    cout << "Test case: "; cin >> n;
    cout << endl;

    while(n--){
        cout << "Size ListNode 1: "; cin >> sz_ls_1;
        cout << "Input ListNode 1: ";
        for (int i = 0; i < sz_ls_1; i++) {
            cin >> ls1->val;
            ls1 = ls1->next;
        }
        cout << "Size ListNode 2: "; cin >> sz_ls_2;
        cout << "Input ListNode 2: ";
        for (int i = 0; i < sz_ls_2; i++) {
            cin >> ls2->val;
            ls2 = ls2->next;
        }
        res = st.mergeTwoLists(ls1, ls2);
        while(res->next != NULL){
            cout << res->val;
            res = res->next;
        }
    }

    return 0;
}