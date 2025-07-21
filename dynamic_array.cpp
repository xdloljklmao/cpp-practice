#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n; //define size of array to be inputted
    cout<<"Print number of elements: ";
    cin>>n; // save in n
    
    vector<int> v(n); //vector with size n
    
    cout<<"\nEnter the elements: ";
    for(int i=0;i<n;i++){
        cin >> v[i]; //put it in the arr
    }
    
    cout<<"\nEntered array: ";
    for(int i=0; i<n;i++){
        cout<< v[i] << " "; // prints space after each letter
    }

    return 0;
}
