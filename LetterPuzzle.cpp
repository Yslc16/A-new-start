/*This program is used to solve the following question:
	Suppose there are several people who want to post letters to others, which means they can't write to themselves.
	The question is if there are n people, how many ways can they mail to each other? (one letter per person)
*/
#include<iostream>
using namespace std;
int n;
int next(int a) {
	if(a==1)
		return 0;
	if(a==2)
		return 1;
	return (a-1)*(next(a-1)+next(a-2));
}
int main() {
	cin>>n;//input the number of people.
	cout<<next(n);
}
