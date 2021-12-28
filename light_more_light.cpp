#include <iostream>
#include <math.h>
unsigned int in, sq;

// Time: O(1)
// Space: O(1)
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1051
int main()
{
    while (std::cin >> in && in != 0)
    {
        sq = (int)sqrt(in);
        std::cout << (sq * sq == in ? "yes\n" : "no\n");
    }
}