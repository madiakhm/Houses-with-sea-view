# Finding Houses with Sea View

**Introduction**  
This C++ program finds the indexes of houses with a sea view based on their heights. The program demonstrates a simple algorithm for identifying houses with a higher height than the houses to their right, indicating a sea view.

**Files**  
- `houses_with_sea_view.cpp`: This file contains the implementation of the algorithm to find houses with a sea view.
- `README.md`: This file provides information about the program.

**Implementation Details**  
The program defines a function `findHousesWithSeaView` that takes a vector of house heights as input and returns a vector containing the indexes of houses with a sea view. The algorithm iterates through the heights in reverse order, identifying houses with heights greater than the maximum height seen so far. Houses meeting this criterion are considered to have a sea view.

**`main` Function**  
The `main` function initializes a vector of house heights and calls the `findHousesWithSeaView` function to find houses with a sea view. It then outputs the indexes of these houses.

**Usage**  
To compile and run the program, follow these steps:
1. Ensure you have a C++ compiler installed on your system.
2. Open a terminal or command prompt.
3. Navigate to the directory containing the `houses_with_sea_view.cpp` file.
4. Compile the program using the following command:g++ -o houses_with_sea_view houses_with_sea_view.cpp 
5. Run the compiled executable:./houses_with_sea_view


**Example Output**  
Indexes of houses with sea views: 5 4 3 2 1 0


**Notes**  
- The program assumes that higher house heights indicate a sea view.
- This implementation iterates through the heights in reverse order to efficiently identify houses with a sea view.
