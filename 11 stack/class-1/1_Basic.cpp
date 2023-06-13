#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;

    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.pop();

    st.empty() ? cout << "Empty " << endl : cout << "Not Empty" << endl;

    cout << "Size of the stack : " << st.size() << endl;

    // print all the element of empty
    while (!(st.empty()))
    {
        // print top element
        cout << st.top() << endl;
        // remove element
        st.pop();
    }

    return 0;
}