
class MyQueue {
private:
    stack<int> s1;
    stack<int> s2;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int result = peek();
        s2.pop();
        return result;
    }
    
    int peek() {
        if(s2.empty()) {
            while(!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int result = s2.top();
        return result;
    }
    
    bool empty() {
        if(s1.empty()) return s2.empty();
        return false;
    }
};
