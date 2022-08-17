//Implementing Queue using two stacks
struct Queue_Using_Stack {
    stack<int> a,b;
 
    void push(int x)
    {
        while (!s1.empty()) {
            b.push(a.top());
            a.pop();
        }
        a.push(x);
        while (!s2.empty()) {
            a.push(b.top());
            b.pop();
        }
    }
 
    
    int pop()
    {
        if (a.empty()) {
            cout << "Q is Empty";
            return -1;
        }
        int x = a.top();
        a.pop();
        return x;
    }
};