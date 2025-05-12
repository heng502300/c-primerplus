#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <vector>
#include <cstdlib> // for exit()
#include <ctime> // for time()
using namespace std;

int main()
{
    srand(time(0));
    ifstream fin("file.txt");
    vector<string> words;
    string word;
    
    if (!fin.is_open())
    {
        cout << "Could not open the file.\n";
        exit(EXIT_FAILURE);
    }
    while (fin >> word)
    {
        words.push_back(word);
    }

    cout << "Will you play a word game? <y/n> ";
    char play;
    cin >> play;
    play = tolower(play);
    while (play == 'y')
    {
        string target = words[rand() % words.size()];
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        cout << "Guess my secret word. It has " << length
             << " letters, and you guess\n"
             << "one letter at a time. You get " << guesses
             << " wrong guesses.\n";
        cout << "Your word: " << attempt << endl;
        while (guesses > 0 && attempt != target)
        {
            char letter;
            cout << "Guess a letter: ";
            cin >> letter;
            if (badchars.find(letter) != string::npos
                || attempt.find(letter)!= string::npos)
            {
                cout << "You already guessed that. Try again.\n";
                continue;
            }
            int loc = target.find(letter);
            if (loc == string::npos)
            {
                cout << "Oh, bad guess!\n";
                --guesses;
                badchars += letter;
            }
            else
            {
                cout << "Good guess!\n";
                attempt[loc] = letter;
                loc = target.find(letter, loc + 1);
                while (loc != string::npos)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }
            }
            cout << "Your word: " << attempt << endl;
            if (attempt!= target)
            {
                if (badchars.length() > 0)
                    cout << "Bad choices: " << badchars << endl;
                cout << guesses << " bad guesses left\n";
            }
        }
        if (guesses > 0)
            cout << "That's right!\n";
        else
            cout << "Sorry, the word is " << target << ".\n";
        cout << "Will you play another? <y/n> ";
        cin >> play;
        play = tolower(play);
    }
    fin.close(); // close file after using it
    cout << "Bye\n";
    return 0;
}
