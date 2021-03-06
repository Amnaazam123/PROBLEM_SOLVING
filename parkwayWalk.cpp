
/*Problem Statement:
You are walking through a parkway near your house. The parkway has n+1 benches in a row numbered from 1 to n+1 from left to right. 
The distance between the bench i and i+1 is ai meters.
Initially, you have m units of energy. To walk 1 meter of distance, you spend 1 unit of your energy.
You can't walk if you have no energy. Also, you can restore your energy by sitting on benches (and this is the only way to restore the energy).
When you are sitting, you can restore any integer amount of energy you want (if you sit longer, you restore more energy). 
Note that the amount of your energy can exceed m.
Your task is to find the minimum amount of energy you have to restore (by sitting on benches) to reach the bench n+1 from the bench 1 (and end your walk).
*/


#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m,input;
		int sum = 0;
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			cin >> input;
			sum = sum + input;
		}
		if (sum <= m) {
			cout << "0\n";
		}
		else
		{
			cout << sum - m << "\n";
		}
	}




	return 0;
}
