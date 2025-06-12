#include<iostream>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

//单调队列
class Myqueue
{
private:
    deque<int> que;
public:
    inline void pop(int val)
    {
        if (!que.empty() && val == que.front())
        {
            que.pop_front();
        }
    }

    inline void push(int val)
    {
        if(!que.empty() && val > que.back())
            que.pop_back();
        que.push_back(val);
    }

    inline int front()
    {
        return que.front();
    }

};
//滑动窗口最大值 //lee239
vector<int> maxSlidingWindow(vector<int>& nums, int k)
{
    Myqueue que;
    vector<int> res;
    for (int i = 0; i < k; i++)
    {
        que.push(nums[i]);
    }
    res.push_back(que.front());
    for (int i = k; i < nums.size(); i++)
    {
        que.pop(nums[i - k]);
        que.push(nums[i]);
        res.push_back(que.front());
    }
    return res;
}

class MyQueue {
private:
    stack<int> stIn;
    stack<int> stOut;
public:
    MyQueue() {       
    }
    
    void push(int x) {
        stIn.push(x);
    }
    
    int pop() {
        if(empty())
        {
            throw runtime_error("Queue is empty");
        }
        if(stOut.empty())
        {
            while (!stIn.empty())
            {
                stOut.push(stIn.top());
                stIn.pop();
            }
        }
        int result = stOut.top();
        stOut.pop();
        return result;
    }
    
    int peek() {
        int res = this->pop();
        stIn.push(res);
        return res;
    }
    
    bool empty() {
        return stIn.empty() && stOut.empty();
    }
};


class MyStack {
private:
    queue<int> Myqueue;
public:
    MyStack() {
    }
    
    void push(int x) {
        Myqueue.push(x);
    }
    
    int pop() {
        int size = Myqueue.size() - 1;
        while (size--)
        {
            Myqueue.push(Myqueue.front());
            Myqueue.pop();
        }
        int result = Myqueue.front();
        Myqueue.pop();
        return result;
    }
    
    int top() {
        return Myqueue.back();
    }
    
    bool empty() {
        return Myqueue.empty();
    }
};
//左右括号
bool isValid(string s) {
    // 长度为奇数，一定不匹配
    if (s.size() % 2 != 0) {
        return false;
    }

    stack<char> st;  // 使用char类型更合适
    
    for (char c : s) {  // 使用范围for循环更简洁
        switch (c) {
            // 左括号情况：压入对应的右括号
            case '(':
                st.push(')');
                break;
            case '[':
                st.push(']');
                break;
            case '{':
                st.push('}');
                break;
            // 右括号情况：检查是否匹配
            case ')':
            case ']':
            case '}':
                // 栈空或当前字符与栈顶不匹配
                if (st.empty() || c != st.top()) {
                    return false;
                }
                st.pop();  // 匹配成功，弹出栈顶
                break;
            default:
                return false;  // 非法字符
        }
    }
    
    return st.empty();  // 栈为空说明所有括号都匹配
}


// 测试代码
void testIsValid() {
    vector<string> tests = {
        "()",        // true
        "()[]{}",    // true
        "(]",        // false
        "([)]",      // false
        "{[]}",      // true
        ""          // true
    };
    
    for (const string& test : tests) {
        cout << "Test \"" << test << "\": " 
             << (isValid(test) ? "Valid" : "Invalid") << endl;
    }
}

string removeDuplicates(string s)
{
    string str;
    for(auto st: s)
    {
        if(str.empty() || str.back() != st)
            str.push_back(st);
        else    
            str.pop_back();
    }
    return str;
}

int evalRPN(vector<string>& tokens)
{
    stack<long long> st;
    for (int i = 0; i < tokens.size(); i++)
    {
        if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
        {
            long long num1 = st.top();
            st.pop();
            long long num2 = st.top();
            st.pop();
            if(tokens[i] == "+") st.push(num2 + num1);
            if(tokens[i] == "-") st.push(num2 - num1);
            if(tokens[i] == "*") st.push(num2 * num1);
            if(tokens[i] == "/") st.push(num2 / num1);
        }
        else
            st.push(stoll(tokens[i]));
    }
    int result = st.top();
    st.pop();
    return result;
}

int main()
{
    // Example usage of MyQueue
    // cout << "Example usage of Mystack:" << endl;
    // MyStack myStack;
    // myStack.push(2);
    // myStack.push(3);
    // cout << myStack.top() << endl;
    // cout << myStack.pop() << endl;
    // cout << myStack.pop() << endl;
    // cout << myStack.empty() << endl;
    // // MyQueue myQueue;
    // // myQueue.push(3);
    // // myQueue.push(2);
    // // cout << myQueue.peek() << endl;  // returns 1
    // // cout << myQueue.pop() << endl;   // returns 1
    // // cout << myQueue.empty() << endl; // returns false
    //testIsValid();
    vector<int> vec {1,3,-1,-3,5,3,6,7};
    vec = maxSlidingWindow(vec,3);
    for(auto a: vec)
    {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}

