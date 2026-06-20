/*You are provided with two functions for visualizing numerical data as bar charts on the console. One function handles integer values, and the other handles floating-point values. Your task is to create a generic function that combines the functionality of these two non-generic functions.

Requirements:

The first non-generic function visualizes integer values by drawing a bar with # symbols. Each
 unit (1) should be represented by 4 # characters.
The second non-generic function visualizes floating-point values by first multiplying them by 4
 and then rounding them to the nearest integer (number of quarters). The result is visualized in
 the same bar chart format, with a # character representing each quarter.
Your task is to create a generic function that can handle both integer and floating-point values.
 This function should:
Scale integer values so that each unit corresponds to 4 # characters.
Round floating-point values to the nearest integer and scale them similarly.
Use if  (is_floating_point<T>::value) to check whether rounding is required or not.
Work with any numeric type (int, float, double, etc.).
Zum Beispiel:

Test	Resultat
// Example for integer data
vector<int> int_data = {3, 5, 6, 10, 1};
// Call the generic function for integers
visualize_data(int_data);
Bar chart:
############ 3
#################### 5
######################## 6
######################################## 10
#### 1 */
#include <iostream>
#include <vector>
#include <cmath>

#include <type_traits>
using namespace std;

template <typename T >
void visualize_data (const vector<T> &data) {
    cout << "Bar chart:\n";
    for (const auto &value: data) {
        T scale_value = value * 4;
        size_t bar_length;
        if (is_floating_point<T>::value) {
            bar_length = static_cast<int>(round(scale_value));
        }
        cout << string(static_cast<size_t>(bar_length), '#') << " " << value << "\n";

    }
}
int main(){
   vector<int> intData = {1,2,34,565,6};
   vector<double> doubleData = {2.43,4.66,4.56,5.66};
   cout<< "integer data : \n";
    visualize_data(intData);

    cout << "\nDouble data:\n";
    visualize_data(doubleData);

    return 0;
}