// linear search in array

// #include<iostream>
// using namespace std;

// int linearSearch(int arr[], int size, int target){
//     for(int i=0; i<size; i++){
//         if(arr[i] == target){
//             return i;
//         }
//     }
//     return 0;
// }
// int main(){
//     int arr[10] = {2,9,6,7,4,12,15};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int key = 6;
//     int ans = linearSearch(arr, n, key);
//     cout << ans;
// }

// count 0's and 1's in an array

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1,0,0,0,0,0};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int zeroCount = 0;
//     int oneCount = 0;

//      for(int i=0; i<n; i++){
//         if(arr[i]==0){
//             zeroCount++;
//         }
//         else{
//             oneCount++;
//         }
//     }

//     cout<< "No of zeroes are: " << zeroCount << endl;
    
//     cout<< "No of ones are: " << oneCount << endl;
// }



//find maximum number in an array



// #include <iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int arr[10]= {3,1,2,5,4,12,23,45,67,89};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int maxi = INT_MIN;

//     for(int i=0; i<n; i++){
//         if(arr[i] > maxi){
//             maxi = arr[i];
//         }
//     }

//     cout<< maxi;
// }


//find minimum number in an array



// #include <iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int arr[10]= {3,1,2,5,4,12,23,45,67,89};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int mini = INT_MAX;

//     for(int i=0; i<n; i++){
//         if(mini > arr[i]){
//             mini = arr[i];
//         }
//     }

//     cout << mini;
// }



