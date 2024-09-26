// Write a program that uses a switch-case statement to determine whether an entered character is a vowel or a consonant. The program should also validate (using if-else) the input to ensure that only alphabetic characters are processed. If the input is a number or a special symbol, the program should indicate that the input is not an alphabetic character.

#include <iostream>
using namespace std;
int main()
{

    char ch;
    cout << "Enter a character: ";
    cin>>ch;
    if( ch >=65 && ch<=90 || ch>=97 && ch<=122)
    {
    switch (ch)
    {
    case 'a':
        cout << ch << " is a vowel";

        break;
        case 'e':
        cout << ch << " is a vowel ";
        break;
        case 'i':
        cout << ch << " is a vowel ";
        break;
        case 'o':
        cout << ch << " is a vowel ";
        break;
        case 'u':
        cout << ch << " is a vowel";
        break;
        
    default:
    cout<<"Entered character is a consonant";
        break;
    }
}
}