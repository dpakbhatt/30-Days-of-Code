#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution {
private:
    queue<char> str1;
    stack<char> str2;
public:
    char popCharacter(){
        char temp = str2.top();
        str2.pop();
        return temp;
    }

    char dequeueCharacter(){
        char temp = str1.front();
        str1.pop();
        return temp;
    }

    void pushCharacter(char alpha){
        str2.push(alpha);
    }

    void enqueueCharacter(char alpha){
        str1.push(alpha);
    }
};

int main()
{
    string s;
    getline(cin, s);

    Solution obj;

    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;

            break;
        }
    }

    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}
