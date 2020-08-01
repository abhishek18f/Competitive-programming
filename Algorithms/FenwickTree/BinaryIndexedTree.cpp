//arr is 0 indexed
//BIT is 1 indexed
int* constructBIT(int arr[] , int n)        //arr = frequency array with size n;
{
    int *BITree = new int[n+1];
    for(int i = 0 ; i<=n ; i++) BITree[i] = 0;

    int k;
    for(int i = 1 ; i<=n ; i++)
    {
        int value_to_be_added = arr[i-1];
         k = i;
        while(k<=n)
        {
            BITree[k] += value_to_be_added;
            k += (k & (-k));

        }
    }

    //for(int i = 1 ; i<=n ; i++) cout << BITree[i] << " ";
    return BITree;
}

//to update value in original arr , we have to make appropriate changes in BITree
void updateBIT(int BITree[] , int n , int value , int index)
{
    //index of BITree to be increased by "value" where n is last index of BITree
    //index is of original arr which is 0-indexed
    index = index +1;
    while(index<=n)
    {
        BITree[index] += value;
        index += (index & (-index));
    }
    //for(int i = 1 ; i<=n ; i++) cout << BITree[i] << " ";
}

int getSum(int BITree[] , int index)
{
    //here index is of original arr which is 0-indexed
    index = index + 1;
    int sum = 0;
    while(index > 0 )
    {
        sum+= BITree[index];
        index -= (index & (-index));
    }

    return sum;
}