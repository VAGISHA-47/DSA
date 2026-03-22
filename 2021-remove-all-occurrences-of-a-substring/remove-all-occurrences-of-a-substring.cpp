class Solution {
public:
    string removeOccurrences(string s, string part) {
    string result = "";

    for (char c : s) {
        result += c;

        // Check if last characters match 'part'
        if (result.size() >= part.size() &&
            result.substr(result.size() - part.size()) == part) {
            
            // Remove the substring
            result.erase(result.size() - part.size());
        }
    }

    return result;
}

int main() {
    string s = "daabcbaabcbc";
    string part = "abc";

    cout << removeOccurrences(s, part);
    return 0;
}
};
