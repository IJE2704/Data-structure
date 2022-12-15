#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout << "Entrt size for first array : ";
    cin >> n1;
    cout << "\nEnter arrray elements :";
    int arr[n1];
    for(int i=0; i<n1; i++)
    {
        cin >> arr[i];
    }
    cout << "Entrt size for second array : ";
    cin >> n2;
    cout << "\nEnter arrray elements :";
    int arr2[n2];
    for(int i=0; i<n1; i++)
    {
        cin >> arr2[i];
    }
    int result[(n1+n2)-1];
    int j=0;
    for(int i=0; i<(n1+n2)-1; i++)
    {
        if(i>=(n1-1))
        {
            result[i] = arr2[j];
            j++;
        }
        else{
            result[i] = arr[i];
        }
    }
    cout << "Final arrau is: ";
    for(int i = 0; i <(n1+n2)-1; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}