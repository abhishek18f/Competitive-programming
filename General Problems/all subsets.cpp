//using recursion 
//Time complexity= O(2^n)

void printAllSubsets(int arr[] , int size ,int k, vector<int> v)
{
    if(k==size)
    {
        cout<< "found\n" ;
        for(auto x: v) cout << x << " " ;
        cout << "\n";
        return;
    }

    printAllSubsets(arr , size , k+1 , v);
    v.push_back(arr[k]);
    printAllSubsets(arr, size , k+1 , v);

}