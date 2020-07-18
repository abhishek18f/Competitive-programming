//Needle-in-Haystack Problem for pattern searching
//Given a text txt[0..n-1] and a pattern pat[0..m-1],
// write a function search(char pat[], char txt[]) that prints all occurrences of pat[] in txt[]. 
//You may assume that n > m. 

//https://www.geeksforgeeks.org/rabin-karp-algorithm-for-pattern-searching/

/* pat -> pattern  
    txt -> text  
    q -> A prime number  
*/

// d is the number of characters in the input alphabet  
// d is basically the base for hashing function

void rabinKarp(char* txt , char* pat , int q)
{
    int m = strlen(pat);
    int n = strlen(txt);
    
    int d = 256;
    int p = 0; // hash value for pattern;
    int t = 0; //hash value for text;
    int h = 1;  //h = d^(m-1)

    

    for(int i  = 0 ; i <m-1 ; i++)
        h = (d*h) % q;

    //calculate hash value of pattern and first window
    for(int j = 0; j<m ; j++)
    {
        p = (d*p + pat[j]) % q;
        t = (d*t + txt[j]) % q;
    }

    //slide the window
    for(int i = 0 ; i<= n-m ; i++)
    {
        if(p==t)
        {
            int j;
            for( j = 0 ; j < m ; j++)
            {
                if(pat[j] != txt[i+j]) break;
            }

            if(j == m) 
                //pattern found at i :)
                cout << "pattern found at  = " << i << "\n";
        }
        
        if(i < n-m)
            {
                //rehaashing
                t = (d*(t - txt[i]*h) + txt[i+m]) % q;

                if(t<0) t = t + q;
            }
        
    }

}