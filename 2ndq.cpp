// #include<iostream>
// using namespace std;

// int main(){
//     cout << "Hello world";
// }



// functions to add 2 numbers

// #include <iostream>
// using namespace std;

// int sum(int a, int b)
// {
//     return a + b;
// }
// int main()
// {
//     int a = 5, b = 10;
//     int ans = sum(a, b);
//     cout << ans;
// }

// max of three numbers

// #include <iostream>
// using namespace std;

// int max(int a, int b, int c){
//     if(a>b && a>c){
//         return a;
//     }
//     else if(b>a && b>c){
//         return b;
//     }
//     else{
//         return c;
//     }
// }

// int main(){
//     int a=5;
//     int b=4;
//     int c=12;

//     int ans = max(a,b,c);
//     cout<< ans;
// }

// even/odd

// #include <iostream>
// using namespace std;

// void checkevenornot(int n){
//     if(n%2 == 0){
//         cout << "Given number is even";
//     }
//     else{
//         cout << "Given number is odd";
//     }
// }
// int main(){
//     int n;
//     cin>>n;

//     checkevenornot(n);
// }

// sum of even number upto n

// #include <iostream>
// using namespace std;

// int printEvenSum(int number){
//     int sum = 0;
//     for(int i=1; i<=number; i++){
//         if(number%i == 0){
//             sum=sum+i;
//         }
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cin>>n;

//     int sum = printEvenSum(n);
//     cout << sum;
// }


// 2nd method for this question is;


// #include <iostream>
// using namespace std;

// int printEvenSum(int number)
// {
//     int sum = 0;
//     for (int i = 2; i <= number; i += 2)
//     {
//         sum = sum + i;
//     }
//     return sum;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int sum = printEvenSum(n);
//     cout << sum;
// }


//Factorial of a number


// #include <iostream>
// using namespace std;

// int calculateFactorial(int n){
//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int main(){
//     int n = 3;
//     cout << calculateFactorial(n);

// }


// Function to find a number is prime or not


// #include <iostream>
// using namespace std;

// bool checkPrimeOrNot(int n){
//     int factor = 0;
//     if(n<2){
//         return false;
//     }else{
//         return true;
//     }

//     for(int i=2; i<n; i++){
//         if(n%i == 0){
//             factor++;
//             break;
//         }
//     }
//     if(factor == 1 ){
//         return false;
//     }
//     else{
//         return true;
//     }
// }

// int main(){
//     int n = 50;
//     cout << checkPrimeOrNot(n);
// }