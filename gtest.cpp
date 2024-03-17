#include <gtest/gtest.h>
#include "houses_with_sea_view.h"

TEST(FindHousesWithSeaViewTest, EmptyInput) {
    std::vector<int> empty;
    std::vector<int> result = findHousesWithSeaView(empty);
    EXPECT_TRUE(result.empty());
}
TEST(FindHousesWithSeaViewTest, BasicTest)
{
    std::vector<int> heights = {1, 2, 3, 4, 5, 6};
    std::vector<int> expected = {5};

    std::vector<int> result = findHousesWithSeaView(heights);

    ASSERT_EQ(expected, result);
}
TEST(FindHousesWithSeaViewTest, EmptyInput)
{
    std::vector<int> heights;
    std::vector<int> expected;

    std::vector<int> result = findHousesWithSeaView(heights);

    ASSERT_EQ(expected, result);
}
TEST(FindHousesWithSeaViewTest, AllSameHeights)
{
    std::vector<int> heights = {3, 3, 3, 3};
    std::vector<int> expected = {3};

    std::vector<int> result = findHousesWithSeaView(heights);

    ASSERT_EQ(expected, result);
}
TEST(FindHousesWithSeaViewTest, NoSeaView)
{
    std::vector<int> heights = {6, 5, 4, 3, 2, 1};
    std::vector<int> expected;

    std::vector<int> result = findHousesWithSeaView(heights);

    ASSERT_EQ(expected, result);
}

TEST(FindHousesWithSeaViewTest, RandomHeights)
{
    std::vector<int> heights = {3, 7, 2, 9, 5, 4};
    std::vector<int> expected = {7, 9};

    std::vector<int> result = findHousesWithSeaView(heights);

    ASSERT_EQ(expected, result);
}
TEST(FindHousesWithSeaViewTest, NegativeHeights)
{
    std::vector<int> heights = {-1, -2, -3, -4, -5};
    std::vector<int> expected = {-1};

    std::vector<int> result = findHousesWithSeaView(heights);

    ASSERT_EQ(expected, result);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
