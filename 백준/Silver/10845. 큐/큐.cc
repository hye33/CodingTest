#include <iostream>
using namespace std;

class Queue
{
private:
    int *p_queue;
    int f, b;

public:
    Queue(int n)
    {
        p_queue = new int[n];
        f = -1;
        b = -1;
    }
    void push(int x)
    {
        p_queue[++b] = x;
    }
    int pop()
    {
        return (b - f) ? p_queue[++f] : -1;
    }
    int size()
    {
        return (b - f);
    }
    int empty()
    {
        return (b - f) ? 0 : 1;
    }
    int front()
    {
        return (b - f) ? p_queue[f + 1] : -1;
    }
    int back()
    {
        return (b - f) ? p_queue[b] : -1;
    }
};

int
main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, input;
    string str;
    cin >> n;
    Queue queue(n);
    while(n--)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> input;
            queue.push(input);
        }
        else if (str == "pop")
            cout << queue.pop() << '\n';
        else if (str == "size")
            cout << queue.size() << '\n';
        else if (str == "empty")
            cout << queue.empty() << '\n';
        else if (str == "front")
            cout << queue.front() << '\n';
        else if (str == "back")
            cout << queue.back() << '\n';
    }
}