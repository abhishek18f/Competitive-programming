//Needle-in-Haystack Problem for pattern searching
//Given a text txt[0..n-1] and a pattern pat[0..m-1],
// write a function search(char pat[], char txt[]) that prints all occurrences of pat[] in txt[]. 
//You may assume that n > m. 

void computeLPSarray(char* pat ,int m,  int* lps )
{
    //int m = strlen(pat);      //uncomment if m is not given as an argument

    //int m = pat.size()        //if pat is passed as a vector 
                                //also remove m forn argument

    lps[0] = 0;
    int len = 0 , i = 1;

    while(i<m)
    {
        if(pat[len] == pat[i])
        {
            len++;
            lps[i++] = len;
        }
        else
        {
            if(len == 0) 
                lps[i++] = 0;
            else
                len = lps[len-1];
            
        }
    }
}

void KMPSearch(char* txt , char*pat )
{
    int m= strlen(pat);
    int n = strlen(txt);

    int i =0 , j = 0;
    int lps[m];
    computeLPSarray(pat , m , lps);

    while(i<n)
    {
        if(txt[i] == pat[j])
        {
            i++;
            j++;
        }

        if(j==m) 
        {
            //match found at index = i-j;
            cout << "match found at index = " << i-j << "\n";
            j = lps[j-1];
        }

        else if( i < n && pat[j] != txt[i])
        {
            if(j==0) 
                i++;
            else 
                j = lps[j-1];
        }
    }
}