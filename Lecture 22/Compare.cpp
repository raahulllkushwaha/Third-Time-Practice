// #include <iostream>
// using namespace std;

// int main()
// {
//     char str[50] = {'a', 'b', '\0', 'c', 'd'};
//     string s = {'a', 'b', '\0', 'c', 'd'};
//     cout << str << endl;
//     cout << s;
// }

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "My name is rahul";
    string reversed_str;
    string final_str;

    // Split the original string by space
    size_t pos = 0;
    string delimiter = " ";
    while ((pos = str.find(delimiter)) != string::npos) {
        string word = str.substr(0, pos);
        str.erase(0, pos + delimiter.length());

        // Reverse each word and append to the final string
        string reversed_word;
        for (int i = word.length() - 1; i >= 0; i--) {
            reversed_word += word[i];
        }
        final_str += reversed_word + " ";
    }

    // Reverse the remaining word and append to the final string
    string reversed_word;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed_word += str[i];
    }
    final_str += reversed_word;

    cout << final_str;

    return 0;
}
