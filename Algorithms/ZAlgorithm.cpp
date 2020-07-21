//Needle-in-Haystack Problem for pattern searching
//Given a text txt[0..n-1] and a pattern pat[0..m-1],
// write a function search(char pat[], char txt[]) that prints all occurrences of pat[] in txt[]. 
//You may assume that n > m. 


void getZarr(string str  , int Z[])
{
    int n = str.length();
    Z[0] = -1;
    int L = 0 , R = 0 , k;

    for(int i = 1 ; i<n ; i++)
    {
        if(i>R)
        {
            L = R = i;
            while(R<n && str[R-L] == str[R])
                R++;
            Z[i] = R-L;
            R--;
        }
        else
        {
            k = i-L;
            if(Z[k] < R-i+1)
                Z[i] = Z[k];

            else
            {
                L = i;
                while(R<n && str[R-L] == str[R])
                    R++;
                Z[i] = R-L;
                R--;
            }
        }
    }
    for(int i = 0 ; i< n ; i++ ) cout << Z[i] << " ";
    cout << endl;
}

void Zsearch(string txt  , string pat)
{
    string concat = pat + "$" + txt;
    int l = concat.length();

    int Z[l];   //Z-array
    getZarr(concat , Z);
    {
        for(int i =  pat.length() ;  i < l ; i++)
        {
            if(Z[i] == pat.length())
                //pattern found at i - pattern.length() - 1;
                 cout << "pattern found at : " << i - pat.length() - 1 << endl;
        }
    }

    
}

