#include <iostream>
#include <vector>

std::vector<int> findHousesWithSeaView(const std::vector<int>& heights)
{
    std::vector<int> seaViewHouses;

    int max_height = 0;
    for (int i = heights.size() - 1; i >= 0; --i)
    {
        if (heights[i] > max_height)
        {
            seaViewHouses.push_back(i);
            max_height = heights[i];
        }
    }

    return seaViewHouses;
}

int main()
{
    std::vector<int> heights = {1, 2, 3, 4, 5, 6}; 
    std::vector<int> seaViewHouses = findHousesWithSeaView(heights);

    std::cout << "Indexes of houses with sea views: ";
    for (int idx : seaViewHouses)
    {
        std::cout << idx << " ";
    }
    std::cout << std::endl;

    return 0;
}
