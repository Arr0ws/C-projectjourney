#include <stdio.h>
#include <iostream>
#include <string>
#include <utility>

int main() 
{
    int nums[3] = {2, 1, 3};
    int n = 3;

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n - i - 1; j++)
       {
            if (nums[j] > nums[j+1])
            {
                std::swap(nums[j], nums[j + 1]);
            }
       }
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << nums[i] << std::endl;
    }
    
    return 0;
}
