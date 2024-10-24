/*There is a road, which can be represented as a number line. You are located in the point 0 of the number line, and you want to travel from the point 0 to the point 𝑥, and back to the point 0.

You travel by car, which spends 1 liter of gasoline per 1 unit of distance travelled. When you start at the point 0, your car is fully fueled (its gas tank contains the maximum possible amount of fuel).

There are 𝑛 gas stations, located in points 𝑎1,𝑎2,…,𝑎𝑛. When you arrive at a gas station, you fully refuel your car. Note that you can refuel only at gas stations, and there are no gas stations in points 0 and 𝑥.

You have to calculate the minimum possible volume of the gas tank in your car (in liters) that will allow you to travel from the point 0 to the point 𝑥 and back to the point 0.*/
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, x;
        cin >> n >> x;
        int *arr = new int[n];
        for (int j = 0; j < n; j++)
            cin >> arr[j];
        int min = 0;
        for (int j = 1; j < n; j++)
            if (min < arr[j] - arr[j - 1])
                min = arr[j] - arr[j - 1];
        if (min < arr[0])
            min = arr[0];
        if (min < 2 * (x - arr[n - 1]))
            min = 2 * (x - arr[n - 1]);
        cout << min << endl;
    }
    return 0;
}