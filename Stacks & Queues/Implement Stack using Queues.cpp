class MyStack {
private:
    queue<int> que1;
    queue<int> que2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        que2.push(x);

        while(!que1.empty()) {
            que2.push(que1.front());
            que1.pop();
        }

        swap(que1, que2);
    }
    
    int pop() {
        int result = que1.front();
        que1.pop();

        return result;
    }
    
    int top() {
        return que1.front();
    }
    
    bool empty() {
        return que1.empty();
    }
};
