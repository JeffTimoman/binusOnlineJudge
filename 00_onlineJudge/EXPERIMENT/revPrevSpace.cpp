// // #include <stdio.h>
// // #include <string.h>


// // void reverse(char str[101]){
// //     int length = strlen(str);
// //     char result[length];
// //     for(int i = 0; i < length; i++){
// //         if (str[i] == ' ')
// //         {result[i] == ' ';}

// //     }
// //     int j = length - 1; 
// //     for (int i = 0; i < length; i++){
// //         if(str[i] != ' '){
// //             while (result[j] == ' '){
// //                 j--;
// //             }
// //             result[j] = str[i];
// //             j--;
// //         }
// //     }
// //     printf("%s", result);
// // }

// // int main(){
// //     char str[101] = "internship at geeks for geeks";
// //     reverse(str);
// //     return 0;
// // }

// // / C++ program to reverse a string preserving
// // spaces.
// #include <iostream>
// using namespace std;
 
// // Function to reverse the string
// // and preserve the space position
// string reverses(string str)
// {
//     // Mark spaces in result
//     int counter = 0;
//     int n = str.size();
//     string result(n, '\0');
//     for (int i = 0; i < n; i++)
//         if (str[i] == ' ')
//             result[i] = ' ';
//     cout << result << endl;
//     // Traverse input string from beginning
//     // and put characters in result from end
//     int j = n - 1;
//     for (int i = 0; i < str.length(); i++) {
//         // Ignore spaces in input string
//         if (str[i] != ' ') {
//             // ignore spaces in result.
//             while(result[j] == ' ')
//                 j--;
 
//             result[j] = str[i];
//             j--;
//             cout << counter << " : " << result << endl; 
//             counter++;
//         }
//     }
 
//     return result;
// }
 
// // Driver code
// int main()
// {
//     string str = "internship at geeks for geeks";
//     cout << reverses(str) << endl;
//     return 0;
// }



#include <stdio.h>
#include <string.h>

int main(){

    char str[101] = "Michello gassss teruss sampe mampusss";
    int length = strlen(str);
    printf("%d\n", length);
    char result[length];

    for(int i = 0; i < length; i++){
        if (str[i] == ' '){
            result[i] = ' ';
            printf("This works\n");
        }
    }
    
    int j = strlen(str) - 1;
    for (int i = 0; i < strlen(str); i++){
        if(str[i] != ' '){
            while (result[j] == ' '){
                j--;
            }
            result[j] = str[i];
            j--;
        }
    }
    // if (str[i] != ' '){
    //     while (result[j] == ' '){
    //         j--;
    //     }
    //     result[j] = str[i];
    //     j--;
    // }
    printf("Before : %s\n", str);
    printf("After  : %s", result);
    return 0;

}
//https://www.geeksforgeeks.org/reverse-a-string-without-affecting-special-characters/