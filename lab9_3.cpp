//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include<fstream>
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

    int count;
    float sum;
    float sumX2;
    float Mean;
    float T;
    ifstream source;
    string textline;
    source.open("score.txt");
    while(getline(source,textline)){

        sum += atof(textline.c_str());
        sumX2 += pow(atof(textline.c_str()),2);
        count++;
    }
    Mean = sum/count;
    T = sqrt(sumX2/count - pow(Mean,2));

    cout << "Number of data = " << count << "\n";
    cout << "Mean = " << Mean << "\n";
    cout << "Standard deviation = " << T;

    source.close();

    return 0;
}