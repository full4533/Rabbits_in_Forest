#include <iostream>
#include <string>
#include <unordered_map>



int numRabbits(std::vector<int>& answers)
{
    
    std::unordered_map<int, int>response;
    int minimum_number = 0;
    
    for (int i = 0; i < answers.size(); ++i)
    {
        response[answers[i]] += 1;
    }
    
    if (response.size() == 1)
    {
       return minimum_number = answers[0] + 1;
        
    }
    
    for (const auto& pair : response)
    {
        if (pair.first < pair.second)
        {
            if (pair.second - pair.first == 1 || pair.first == 0)
            {
                minimum_number += pair.second;
            }
            
            else
            {
                minimum_number += pair.second+1;
            }
        }
        else
        {
            minimum_number += pair.first+1;
        }
    }
    
    return minimum_number;
}


int main()
{
    std::vector<int>answers = {1, 1, 2};
    int result = numRabbits(answers);

    return result;
}
