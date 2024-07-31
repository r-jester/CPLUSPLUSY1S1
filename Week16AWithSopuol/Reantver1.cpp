#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

// Credit AI

using namespace std;

// Function to convert string to lowercase
string toLowercase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

// Function to find the best matching response for the given input
string getResponse(const string& input, const map<string, vector<string>>& responses) {
    string inputLower = toLowercase(input);
    for (const auto& pair : responses) {
        if (inputLower.find(pair.first) != string::npos) {
            return pair.second[rand() % pair.second.size()];
        }
    }
    return "I'm sorry, I don't understand.";
}

int main() {
    // Initialize responses
    map<string, vector<string>> responses = {
        {"hello", {"Hello!", "Hi there!", "Hey!"}},
        {"how are you", {"I'm doing well, thank you!", "I'm good, thanks for asking!"}},
        {"bye", {"Goodbye!", "See you later!", "Take care!"}},
        // Add more responses...
    };

    // Main chat loop
    cout << "Chatbot: Hello! How can I help you?" << endl;
    string input;
    while (true) {
        cout << "You: ";
        getline(cin, input);
        if (input == "exit") {
            break;
        }
        cout << "Chatbot: " << getResponse(input, responses) << endl;
    }

    return 0;
}
