
#include<bits/stdc++.h>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// my code ll
ListNode *newNode(int val){
    ListNode *temp = new ListNode;
    temp->val = val;
    temp->next = NULL;
    return temp;
}

ListNode *push_back(ListNode *ll, int val){
    if (ll == NULL) return newNode(val);
    ListNode *temp_ll = ll;

    while(temp_ll->next != NULL){
        temp_ll = temp_ll->next;
    }
    temp_ll->next = newNode(val);
    return ll;
}

void print_ll(ListNode *ll){
    ListNode *temp_ll = ll;
    while(temp_ll->next != NULL){
        cout << temp_ll->val << " -> ";
        temp_ll = temp_ll->next;
    }
}

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if( head == NULL || head->next == NULL) 
            return head;
        
        ListNode *prt1 = head,
            *prt2 = head->next;
        
        while(prt2 != NULL){
            if(prt2->val == prt1->val){
                prt1->next = prt2->next;
            }
            else{
                prt1 = prt2;
            }
            prt2 = prt2->next;
        }
        return head;
    }
};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("Show_screen/INP.TXT", "r", stdin);
	freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    ListNode *ll = NULL;
    int size_ll,
        temp_data;
    Solution st;

    cin >> size_ll;
    for (int i = 0; i < size_ll; i++){
        cin >> temp_data;
        ll = push_back(ll, temp_data);
    }

    cout << "Link list: "; print_ll(ll);
    cout << endl << "Solve: ";
    ll = st.deleteDuplicates(ll);
    print_ll(ll);

    return 0;
}
