#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Nhap vao cac tu (ket thuc bang dau cham): " << endl;
    vector<string> words;

    string input;
    while(cin >> input)
    {
        if(input == ".") break;
        words.push_back(input);
    }

    srand(time(0));
    string chosen_word = words[rand() % words.size()];

    int wrong_guesses = 0;
    const int max_wrong_guesses = 10;
    string guessed_word(chosen_word.size(), '_');

    while(wrong_guesses < max_wrong_guesses && guessed_word != chosen_word)
    {
        cout << "So lan doan sai: " << wrong_guesses << endl;
        cout << "Tu can doan: " << guessed_word << endl;
        cout << "Nhap vao mot ki tu: ";
        char c;
        cin >> c;

        bool guessed = false;
        for(int i = 0; i < chosen_word.size(); ++i)
        {
            if(chosen_word[i] == c || chosen_word[i] == c + 'A' - 'a' || chosen_word[i] == c - 'A' + 'a') {
                guessed_word[i] = chosen_word[i];
                guessed = true;
            }
        }

        if(!guessed) ++wrong_guesses;
    }

    if(wrong_guesses >= max_wrong_guesses) {
        cout << "Tro choi ket thuc. Ban da thua. Tu can tim la: " << chosen_word << endl;
    } else {
        cout << "Tro choi ket thuc. Ban da thang. Tu can tim la: " << chosen_word << endl;
    }

    return 0;
}
