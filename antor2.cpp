#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout << "Entrt size for first array : ";
    cin >> n1;
    cout << "\nEnter arrray elements :";
    int arr[n1];
    int c1=0;
    for(int i=0; i<n1; i++)
    {
        cin >> arr[i];
        if(arr[i]%2==0) c1++;
    }
    cout << "Entrt size for second array : ";
    cin >> n2;
    cout << "\nEnter arrray elements :";
    int arr2[n2];
    for(int i=0; i<n2; i++)
    {
        cin >> arr2[i];
        if(arr2[i]%2==0) c1++;
    }
    int result[c1];
    int j=0;
    for(int i=0; i<n1; i++)
    {
        if(arr[i]%2==0)
        {
            result[j] = arr[i];
            j++;
        }
    }
    for(int i=0; i<n2; i++)
    {
        if(arr2[i]%2==0)
        {
            result[j] = arr2[i];
            j++;
        }
    }
    cout << " result is : ";
    for(int i=0; i<c1; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}