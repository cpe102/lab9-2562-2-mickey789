#include<iostream>
#include<string>
using namespace std;

int main(){
	string grade;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << count[5] +1 << "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == "A")// if grade is A
			{ count[0]++;
			  count[5]++; //Do something
		}else if(grade == "B") // if grade is B
			{ count[1]++;
			  count[5]++;
				//Do something
		}else if(grade == "C") 
			{ count[2]++;
			  count[5]++;
		}else if(grade == "D") 
			{ count[3]++;
			  count[5]++;
		}else if(grade == "F") 
			{ count[4]++;
			  count[5]++;
		//and so on ... for grade = C, D, F	
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again.\n"; //Do something
		} 
	}while(grade != "0");
	
	
	cout << "In total "<< count[5] << " students.\n";
	cout << "A = " << count[0] <<",";
	cout << " B = " << count[1] <<",";
	cout << " C = " << count[2] <<",";
	cout << " D = " << count[3] <<",";
	cout << " F = " << count[4];	
	//	and so on ... for grade = C, D, F	
	
	
	return 0;
}
