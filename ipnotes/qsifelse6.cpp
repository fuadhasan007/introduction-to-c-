#include <iostream>
using namespace std;
//1.	Write a program that calculates the batting average of a cricket player by taking the number of innings, total runs scored, and number of times out. If the player was never out, print "Batting Average Not Available"; otherwise, calculate and print the batting average as (Total Runs / Times Out).
int main() {
    int innings, totalRuns, timesOut;
    cout << "enter the number of innings, total runs scored, and number of times out:";
    cin >> innings >> totalRuns >> timesOut;
    if (timesOut == 0){
        cout << "Batting Average Not Available" <<endl;
    } 
    else{
        cout << "Batting Average: " << (double)totalRuns/timesOut <<endl;
    }
}
// What is the output of the following code?
// a) Batting Average: 50
// b) Batting Average: 25
// c) Batting Average: 0
// d) Batting Average Not Available
// e) None of the above
// Answer: a) Batting Average: 50
// Explanation: The code calculates the batting average as (Total Runs / Times Out) and prints it. In this case, the total runs are 100 and the player was out twice, so the batting average is 100/2 = 50. Therefore, the output will be "Batting Average: 50".
// Note: The code uses type casting to ensure that the division result is a double value. This is important to avoid integer division truncation.