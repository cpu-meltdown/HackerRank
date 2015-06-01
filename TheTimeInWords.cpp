#include <iostream>
#include <string>

using namespace std;

int main(){
	int hour, minutes;
	string result;
	string hours[] = {"\b", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve" };
	string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "", "sixteen", "seventeen", "eighteen", "nineteen" };
	cin >> hour >> minutes;
	if (minutes == 0)
		result = hours[hour] + " o' clock";
	else
	if (minutes == 30){
		result = "half past " + hours[hour];
	}
	else if (minutes == 45 || minutes == 15){
		result = (minutes == 45) ? "quarter to " + hours[hour + 1] : "quarter past " + hours[hour];
	}
	else{
		if (minutes < 30){
			if (minutes >= 20 && minutes <= 29){
				result = "twenty " + hours[minutes % 10] + " minutes past " + hours[hour];
			}
			else if (minutes >= 10 && minutes <= 19){
				result = teens[minutes - 10] + " minutes past " + hours[hour];
			}
			else{
				(minutes == 1) ? result = hours[minutes] + " minute past " + hours[hour] : result = hours[minutes] + " minutes past " + hours[hour];
			}
		}
		else{
			if (minutes > 30 && minutes <= 40){
				result = "twenty " + hours[(60 - minutes) % 10] + " minutes to " + hours[hour + 1];
			}
			else if (minutes > 40 && minutes <= 49){
				result = teens[(60 - minutes) - 10] + " minutes to " + hours[hour + 1];
			}
			else{
				(minutes == 1) ? result = hours[60 - minutes] + " minute to " + hours[hour + 1] : result = hours[60 - minutes] + " minutes to " + hours[hour+1];
			}
		}
	}
	cout << result << endl;
	return 0;
}
