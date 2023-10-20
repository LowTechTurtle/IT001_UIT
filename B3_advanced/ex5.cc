#include <iostream>
using namespace std;

int candle(int candles, int makeNew) 
{
	int rc = 0;
	if (candles > 0) {
		candles *= makeNew;
		candles = -candles;
		rc = 1;
	} else if (abs(candles) < makeNew) {
		return 0;
	} 
	int c = abs(candles);

	return (c / makeNew + candle(-(c / makeNew + c % makeNew), makeNew));
}

int main (){
    int candles, makeNew;
    cin >> candles >> makeNew;
	cout << candle(candles, makeNew);
}
