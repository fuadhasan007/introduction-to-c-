#include <iostream>
using namespace std;
int main()
{
    int n, num;
    int sumDivBy3 = 0, sumNotDivBy3 = 0, countDivBy3 = 0, countNotDIvBy3 = 0;
    cout << "Enter the number of integers as input: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> num;
        if (num % 3 == 0)
        {
            cout << num << " is divisible by " << endl;
            sumDivBy3 += num;
            countDivBy3++;
        }
        else
        {
            cout << num << " is not divisible by 3" << endl;
            sumNotDivBy3 += num;
            countNotDIvBy3++;
        }
    }
    cout << "Sum of numbers divisible by 3: " << sumDivBy3 << endl;
    cout << "Sum of numbers not divisible by 3: " << sumNotDivBy3 << endl;
    cout << "Total numbers divisible by 3: " << countDivBy3 << endl;
    cout << "Total numbers not divisible by 3: " << countNotDIvBy3 << endl;
    return 0;
}