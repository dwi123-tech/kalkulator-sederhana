#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    cout << "=====================================\n";
    cout << "  Welcome to the Interactive Bot! 🤖\n";
    cout << "=====================================\n\n";

    cout << "Hello, I am a bot programmed by Dwi! Here are some keywords you can ask me about:\n";
    cout << "1. Favorite food\n";
    cout << "2. Favorite color\n";
    cout << "3. Friends\n";
    cout << "4. Close friend\n";
    cout << "5. Biodata (name, age, address, etc.)\n";
    cout << "6. About Dwi\n";
    cout << "7. Hobby\n";
    cout << "8. Girl I like (Special keyword required)\n";
    cout << "\nType 'save' to add new commands or 'exit' to quit.\n";

    unordered_map<string, string> responses = {
        {"food", "I love fried chicken and pizza! 🍗🍕"},
        {"color", "Neon blue and black are my favorite colors! 🔵⚫"},
        {"friends", "I have many awesome friends! 😃"},
        {"close friend", "Only special ones know this ;D"},
        {"biodata", "My name is Dwi, 17 years old, living in Bali."},
        {"about", "Dwi is a cool programmer who loves coding and gaming! 💻🎮"},
        {"hobby", "I enjoy playing games, listening to music, and programming! 🎵👨‍💻"}
    };

    string input;
    while (true) {
        cout << "\nYou: ";
        getline(cin, input);

        if (input == "exit") {
            cout << "Bot: Goodbye! Have a nice day! 👋\n";
            break;
        } else if (input == "save") {
            string keyword, response;
            cout << "Bot: Type the new keyword: ";
            getline(cin, keyword);
            cout << "Bot: Now type the response: ";
            getline(cin, response);

            if (!keyword.empty() && !response.empty()) {
                responses[keyword] = response;
                cout << "Bot: Command saved successfully! ✅\n";
            } else {
                cout << "Bot: Invalid input. Try again.\n";
            }
        } else {
            bool found = false;
            for (auto& pair : responses) {
                if (input.find(pair.first) != string::npos) {  
                    cout << "Bot: " << pair.second << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Bot: Sorry, I don't understand that command. 😕" << endl;
            }
        }
    }

    return 0;
}
