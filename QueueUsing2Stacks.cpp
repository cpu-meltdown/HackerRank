/*implementation of a queue using two stacks*/
#include <iostream>
#include <string>
#include <stack>	

using namespace std;

class myQueue{
private: 
	stack<int> s1, s2;

public: 

	void enqueue(int value){
		s1.push(value);
	}

	void dequeue(){
		if (s2.empty()){
			if (s1.empty())
				cout << "Queue is empty" << endl;
			else{
				while (!s1.empty()){
					s2.push(s1.top());
					s1.pop();
				}
				s2.pop();
			}
		}
		else
			s2.pop();
	}

	int top(){
		if (s2.empty()){
			if (s1.empty())
				cout << "Queue is empty" << endl;
			else{
				while (!s1.empty()){
					s2.push(s1.top());
					s1.pop();
				}
				return s2.top();
			}
		}
		else
			return s2.top();
	}
	bool empty(){
		if (s1.empty() && s2.empty())
			return true;
		return false;
	}
};

int main() {
	myQueue q;
	//Enter your instructions here
	return 0;
}