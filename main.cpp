#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    queue<int> q;
    s.push(4);
    q.push(4);
    s.top();
    q.front();
    s.pop();
    q.pop();

    return 0;
}