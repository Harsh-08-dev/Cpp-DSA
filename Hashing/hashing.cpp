#include <bits/stdc++.h>
using namespace std;

// method 1
/*
int main()
{
    int arr[10] = {0, 1, 2, 1, 2, 1, 2, 2, 1, 0};
    int hasharray[3] = {0, 0, 0};
    for (int i = 0; i < 10; i++)
    {
        int num = arr[i];
        hasharray[num] += 1;
    }
    cout << "Hash Array created." << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "The number " << i << " appears " << hasharray[i] << " times" << endl;
    }
    // character hashing
    char array[10] = {'a', 'a', 'c', 'b', 'b', 'c', 'a', 'b', 'd', 'b'};
    int hashh[26] = {0};
    for (int i = 0; i < 10; i++)
    {
        int num = (array[i] - 'a');
        hashh[num] += 1;
    }
    cout << "Hash Array created." << endl;
    for (int i = 0; i < 26; i++)
    {
        cout << "The character " << char(i + 'a') << " appears " << hashh[i] << " times" << endl;
    }
    return 0;
}
*/

// method 2

int main()
{
    int n;
    cout << "Enter size of arrray" << endl;
    cin >> n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number: ";
        cin >> arr[i];
    }

    map<long int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    cout << "Hash Map created" << endl;

    int number;
    cout << "Enter the number: ";
    cin >> number;
    cout << mpp[number] << endl;
    return 0;
}