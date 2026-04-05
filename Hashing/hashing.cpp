#include <bits/stdc++.h>
using namespace std;

// method 1

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