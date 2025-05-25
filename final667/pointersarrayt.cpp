/*Problem 1: Write a function that counts the number of vowels in a string using pointers.
Sample Input: obcdef
Sample Output: Number of vowels here 2
*/
#include <iostream>
using namespace std;
int countVowels(char *str) {
    int count = 0;
    while (*str) {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            count++;
        }
        str++;
    }
    return count;
}
int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;
    int vowelCount = countVowels(str);
    cout << "Number of vowels here: " << vowelCount << endl;
    return 0;
}
