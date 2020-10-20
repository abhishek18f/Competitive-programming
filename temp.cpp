// //https://codeforces.com/contest/1380/problem/A

// #include <bits/stdc++.h>
// using namespace std;

// #define vi vector<int>
// #define watch(x) cout << (#x) << " is " << (x) << endl 
// #define PI 3.14
// #define ll long long
// #define fo(i, a, b) for (ll i = a; i < b; i++)
// #define foi(i, a, b) for (ll i = b - 1; i >= a; i--)
// #define vl vector<ll>
// #define vi vector<int>
// #define vll vector<pair<ll, ll>>
// #define vii vector<pair<int, int>>  
// int gcd(int a, int b) {if (a == 0 || b == 0) return max(a,b); if (b % a == 0) return a; return gcd(b%a, a);}
// const int maxn=1e6+15;
// const int maxm=1e7+5;
// const int mod=1e9+7;
// const int inf=0x3f3f3f3f;


// void substring()

// {

//     int len1 = 0;
//     int len2 =0 ;
//     int i=0;
//     int j=0;

//     char str1[15];
//     char str2[15];

//     printf("Enter the First string in str1:\n");
//     scanf("%s",str1);
//     printf("Enter the Second string in str2:\n");
//     scanf("%s",str2);

//     //int k take length of string
//     while(str1[len1]!='\0')
//       len1++;

//     while(str2[len2]!='\0')
//       len2++;

//     bool flag   = false;
//     for(int i = 0 ; i < len1 - len2 + 1 ; i++)
//     {
//       for(j = 0 ; j < len2 ; j++)
//       {
//         if(str1[i+j] != str2[j])
//               break;
//       }

//       if(j == len2)
//       {
//           printf("Substring is found.");
//           return;
//       }
//     }

//     printf("Substring is not found.");
// }

// int main()
// {
// #ifndef ONLINE_JUDGE
//    // freopen("input.txt", "r", stdin);
//     //freopen("output.txt", "w", stdout);
// #endif

//     // ios_base::sync_with_stdio(false);
//     // cin.tie(NULL);

//     // int t;
//     // cin >> t;
//     // while(t--)
//     // {
//     //     solve();
//     // }

//     // char txt[] = "ABABDABACDABABCABAB"; 
//     // char pat[] = "ABABCABAB"; 

//     // //  char txt[] = "GEEKS FOR GEEKS";  
//     // //  char pat[] = "GEEK";  
//     // vector<bool> v = SieveOfEratosthenes(19);
//     // fo(i , 0 , v.size()) if(v[i]) cout << i << " ";
//   substring();
  
  
//     return 0;
// }

#include<stdio.h>
int main() 
{
int i,key,n;
int array[100];
printf("enter the total number of elements you want in the array:\n");
scanf("%d",&n);
for(i=0;i<n;i++) 
{
printf("enter the elements:\n") ;
scanf("%d",&array[i]) ;
}
printf("the normal array is:\n") ;
for(i=0;i<n;i++)
{
printf("%d\t\n", array[i]) ;
}
printf("enter the element you want to search in the array:\n") ;
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(array[i]==key)
{
printf("the element is found at index number%d:\n",i) ;
break;
}
}
if(i==n) 
{
	printf("element not found\n");
	}
return 0;
}
