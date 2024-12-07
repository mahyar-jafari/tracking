#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


int main()
{
    int n =100,arr[100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }       

cout << "done" << endl;
return 0;

}