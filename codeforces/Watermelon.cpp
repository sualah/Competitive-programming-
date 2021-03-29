
/*
Author: Salifu Abdullai(zekula)
Date: Monday, 29 March, 2021
*/

/*
One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion. After that the watermelon was weighed, and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry, however they faced a hard problem.

Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts weighs even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For sure, each of them should get a part of positive weight.

Input
The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.

Output
Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.
*/

#include <iostream>
#include <vector>

using namespace std;

bool isEven(int num)
{
    bool numberIsEven = false;

    if (num % 2 == 0)
    {

        numberIsEven = true;
    }

    return numberIsEven;
}



vector < vector<int> > findCombinations(int n)
{


   vector < vector<int> > myCombinations;
     
     for (int i = 1; i < n; i++)
     {

        vector<int> arr;

        arr.push_back(i);
        arr.push_back(n - i);

       
        myCombinations.push_back(arr);
      
     }
     
return myCombinations;
}

int main()
{
    int number;
    cin >> number;

    vector < vector<int> > numCombinations =  findCombinations(number);
     
     string divisible = "NO";
      for (int m = 0; m < numCombinations.size(); m++)
      {
          vector<int> newArr = numCombinations[m];
          for (int j = 0; j < newArr.size(); j++)
        {
          

           if(isEven(newArr[0]) && isEven(newArr[1])){
              divisible = "YES";
           }
        }
      

      }
   
    cout << divisible << endl;
  
}
