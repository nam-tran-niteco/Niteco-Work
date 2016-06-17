#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){
    cout << "Fibonaci \n";

    int number = 1;

    cout << "Insert a number ( > 0 ): "; cin >> number;

	int s1 = 1;
    int s2 = 1;
	int sum = s1 + s2;
	cout << s1 << " " << s2;

    while (true){
    	int s3 = s1 + s2;
    	if(s3 > number) break;
    	cout << " " << s3 ;
    	sum += s3;
    	s1 = s2; s2 = s3;

    }
    cout << "\nSum: " << sum;
}
