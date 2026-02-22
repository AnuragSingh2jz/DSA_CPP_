#include <iostream>
#include <algorithm> // for std::sort
using namespace std;

int main()
{
    int a[100], b[100], c[200], n, m;

    // Input for array a
    cout << "Enter the number of elements in array a: ";
    cin >> n;
    cout << "Enter the elements of array a: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Input for array b
    cout << "Enter the number of elements in array b: ";
    cin >> m;
    cout << "Enter the elements of array b: ";
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    // Sort both arrays
    sort(a, a + n);
    sort(b, b + m);

    // Merge both arrays into c
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j]){
            c[k++] = a[i++];
        }else{
            c[k++] = b[j++];
        }
    }
    while (i<n){
        c[k++] = a[i++];
    }
    while (j<m){
        c[k++] = b[j++];
    }

    // Print the merged array c
    cout << "Merged and sorted array: ";
    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}
