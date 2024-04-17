#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

bool button() {
    char choice;
    cout << "Press 'y' to continue or 'n' to exit: ";
    cin >> choice;
    if (choice == 'y') {
        system("cls");
        return true;
    }
    else {
        return false;
    }
}

void typewriter(const string& text, int delay_ms = 45 ) {
    for (char text : text) {
        cout << text << flush;
        this_thread::sleep_for(chrono::milliseconds(delay_ms));
    }
    cout << endl;
}

int intro() {
    string name;
    typewriter("You open your eyes, your body floating in a warm light");
    if (button()) {
        typewriter("there is no sense of space only light all around. With three tall cloaked beings staring down upon you");
        typewriter("*In Unison they speak*");
        cout << "Welcome child, what may we call you by ? : ";
        cin.ignore();
        getline(cin, name);
        typewriter("\nYou mutter..... Is this heaven? Am I dead? Why can't I move");
        typewriter("*In Unison they shout*");
        typewriter("\nSILENCE " + name);
        if (button()) {
            typewriter(name + " You are indeed dead, You have been given a choice");
            typewriter("You can face the judgment for how you lived your life, and possibly earn your place in the heavens.");
            typewriter("Or, you can take on a different path, one that will allow you to return to the world of the living, but at a great cost.");
        }
    }
    return 0;
}

int main() {
    intro();
    if (button()) {
        cout << "You chose to risk it! You're playing the Arena" << endl;
    }
    else {
        cout << "You chose to exit the program." << endl;
    }
    return 0;
}
