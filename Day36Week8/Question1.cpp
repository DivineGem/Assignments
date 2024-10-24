/*Turtle and Piggy are playing a game on a sequence. They are given a sequence 𝑎1,𝑎2,…,𝑎𝑛, and Turtle goes first. Turtle and Piggy alternate in turns (so, Turtle does the first turn, Piggy does the second, Turtle does the third, etc.).

The game goes as follows:

Let the current length of the sequence be 𝑚. If 𝑚=1, the game ends.
If the game does not end and it's Turtle's turn, then Turtle must choose an integer 𝑖 such that 1≤𝑖≤𝑚−1, set 𝑎𝑖 to max(𝑎𝑖,𝑎𝑖+1), and remove 𝑎𝑖+1.
If the game does not end and it's Piggy's turn, then Piggy must choose an integer 𝑖 such that 1≤𝑖≤𝑚−1, set 𝑎𝑖 to min(𝑎𝑖,𝑎𝑖+1), and remove 𝑎𝑖+1.
Turtle wants to maximize the value of 𝑎1 in the end, while Piggy wants to minimize the value of 𝑎1 in the end. Find the value of 𝑎1 in the end if both players play optimally. Each test contains multiple test cases. The first line contains the number of test cases 𝑡 (1≤𝑡≤104). The description of the test cases follows.

The first line of each test case contains a single integer 𝑛 (2≤𝑛≤105) — the length of the sequence.

The second line of each test case contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (1≤𝑎𝑖≤105) — the elements of the sequence 𝑎.

It is guaranteed that the sum of 𝑛 over all test cases does not exceed 105.*/
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        int arr[105];
        for (int j = 0; j < n; j++)
            cin >> arr[j];
        bool turtle = 1;
        while(n > 1){
            if (turtle){
                int a;
                a = arr[0] > arr[1] ? arr[0] : arr[1];
                if (a == arr[0]){
                    for (int j = 1; j < n - 1; j++)
                        arr[j] = arr[j + 1];
                }else{
                    for (int j = 0; j < n - 1; j++)
                        arr[j] = arr[j + 1];
                }
                arr[0] = a;
            }else{
                int a;
                a = arr[0] < arr[1] ? arr[0] : arr[1];
                if (a == arr[0]){
                    for (int j = 1; j < n - 1; j++)
                        arr[j] = arr[j + 1];
                }else{
                    for (int j = 0; j < n - 1; j++)
                        arr[j] = arr[j + 1];
                }
                arr[0] = a;
            }
            turtle = !turtle;
            --n;
        }
        cout << arr[0] << endl;
    }
    return 0;
}