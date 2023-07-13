#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int evaluatePostfix(vector<string>& str) {
    stack<int> st;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != "+" && str[i] != "-" && str[i] != "*" && str[i] != "/") {
            int x = stoi(str[i]);
            st.push(x);
        } else {
            if (st.size() < 2) {
                return 0;
            }
            int second = st.top();
            st.pop();
            int first = st.top();
            st.pop();
            if (str[i] == "+") {
                st.push(first + second);
            } else if (str[i] == "-") {
                st.push(first - second);
            } else if (str[i] == "*") {
                st.push(first * second);
            } else if (str[i] == "/") {
                if (second == 0) {
                    return 0;
                }
                st.push(first / second);
            }
        }
    }
    return st.top();
}

int main() {
    vector<string> str = {"10", "6", "9", "3", "+","-11","*","/","*","17","+","5","+"};
    int result = evaluatePostfix(str);
    cout << "Result: " << result << endl;
    
    return 0;
}

