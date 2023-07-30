//print digits of a number

// #include<iostream>
// using namespace std;

// void printDigits(int number){
//    while(number != 0){
//         int rem = number%10;
//         cout << rem << endl;
//         number=number/10;
//    }
// }
// int main(){
//     int n=623;
//     printDigits(n);

// }


//Creating a number using digits -> 5 , 6 , 8 => 568

// #include<iostream>
// using namespace std;

// int main(){
//     int digit[4]={4,5 ,2 ,4};
//        int ans=0;

//     for(int i=0; i<4; i++){
//          ans = ans*10 + digit[i];
//     }
//     cout << ans;
// }


//count number of set bits in a number


// #include<iostream>
// using namespace std;

// int getSetBits(int a){
//     int count=0;

//     while(a != 0){
//         if(a&1 == 1){
//             count++;
//         }
//         a=a>>1;
//     }
//     return count;
// }
// int main(){
//     int n = 7;

//     int ans = getSetBits(n);
//     cout<< ans;
// }


//program to reverse an intezer => 123


// #include<iostream>
// using namespace std;

// int reverseIntezer(int n){
//     int lastdigit;
//     int ans=0;

//     while(n != 0){
//         lastdigit = n%10;
//         ans = ans * 10 + lastdigit;
//         n=n/10;
//     }
//     return ans;
// }
// int main(){
//     int n=321;
//     int ans = reverseIntezer(n);
//     cout << ans;
// }




