//basic c++ program
#include <iostream>
using namespace std;
// int main(){
//     cout << "Hello, humans!";

// }

// int main(){
//     int x, y;
//     cout << "Enter the first number: ";
//     cin >> x;
//     cout << "Enter the second number: ";
//     cin >> y;
//     cout << "product is: " << x * y << endl;
//     return 0;
// }

// 
// int main(){
//     cout << "My Name" <<endl <<endl << "potato\n"<<endl<<"and"<<"IEat"<<"Tomato";
// }

// int main(){
//     // decimal to binary conversion
//     int n, i = 0, binary[32];
//     cout << "Enter a decimal number: ";
//     cin >> n;
//     while (n > 0) {
//         binary[i] = n % 2;
//         n = n / 2;
//         i++;
//     }
//     cout << "Binary representation: ";
//     for (int j = i - 1; j >= 0; j--) {
//         cout << binary[j];
//     }

// }

// int main(){
//     int x;
//     cout << x;
//     return 0;

    
// }

// int main(){
//     int $ab =2;
//     cout<<$ab;
//     return 0;
// }

// * Sum of element
// int main(){
//     int a[4];
//     for(int i=0; i<4; i++){
//         cout << "Enter element " << i+1 << ": ";
//         cin >> a[i];
//     }
//     int sum = 0;
//     for(int i=0; i<4; i++){
//         sum += a[i];
//     }
//     cout <<"sum: " << sum ;
// }

// max and min
// int main(){
//     int a[4];
//     for(int i=0; i<4; i++){
//         cout << "Enter element " << i+1 << ": ";
//         cin >> a[i];
//     }
//     int max = a[0], min = a[0];
//     for(int i=1; i<4; i++){
//         if(a[i] > max) max = a[i];
//         if(a[i] < min) min = a[i];
//     }
//     cout << "Max: " << max << ", Min: " << min;
// }

//reverse the array
// int main(){
//     int a[4];
//     for(int i=0; i<4; i++){
//         cout << "Enter element " << i+1 << ": ";
//         cin >> a[i];
//     }
//     cout << "Reversed array: ";
//     for(int i=3; i>=0; i--){
//         cout << a[i] << " ";
//     }
//     return 0;
// }


// count the frequency of given element
// int main(){
//     int a[4];
//     for(int i=0; i<4; i++){
//         cout << "Enter the element" << i+1 << ": ";
//         cin >> a[i];
//     }
//     int element, count = 0;
//     cout << "Enter the element to count: ";
//     cin >> element;

//     for(int i=0; i<4; i++){
//         if(a[i] == element) {
//             count++;
//         }
//     }
//     cout << count;
// }






// //right angle triangle
// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// // inverted right angle triangle
// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// //number triangle
// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// // inverted number triangle
// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     for(int i=n; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// //pyramid pattern
// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     for(int i=1; i<=n; i++){
//         for(int j=n; j>i; j--){
//             cout << " ";
//         }
//         for(int j=1; j<=i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// // diamond pattern
// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     // upper part
//     for(int i=1; i<=n; i++){
//         for(int j=n; j>i; j--){
//             cout << " ";
//         }
//         for(int j=1; j<=i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     // lower part
//     for(int i=n-1; i>=1; i--){
//         for(int j=n; j>i; j--){
//             cout << " ";
//         }
//         for(int j=1; j<=i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
// // butterfly pattern
// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     // upper part
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << "*";
//         }
//         for(int j=2*n-2*i; j>0; j--){
//             cout << " ";
//         }
//         for(int j=1; j<=i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
    

//     return 0;
// }
//floyd's triangle
int main(){
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << num << " ";
            num++; 
        }
        cout << endl;
    }
    return 0;
}
