#include <iostream>
#include <stack>
using namespace std;

void insert(stack<int>& stk, int temp) {
    if (stk.empty() || stk.top() <= temp) {
        stk.push(temp);
        return;
    }
    int val = stk.top();
    stk.pop();
    insert(stk, temp);
    stk.push(val);
    return;
}

void sort(stack<int>& stk) {
    // base condition
    if (stk.size() == 1) {
        return;
    }
    int temp = stk.top();
    stk.pop();
    sort(stk);
    insert(stk, temp);
}

int main() {
    stack<int> stk;
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(2);
    stk.push(1);
    stk.push(7);
    stk.push(8);
    stk.push(2);
    stk.push(0);
    stk.push(1);

    sort(stk);

    while (!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }

    return 0;
}
