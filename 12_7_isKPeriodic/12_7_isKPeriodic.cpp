// 12_7_isKPeriodic.cpp : 

#include <iostream>

bool isKPeriodic(const std::string& txt, int K)
{
    if (K == 0)
    {
        std::cout << "K = 0,  This is wrong!!!" << std::endl;
        return false;
    }
        
    if (K < 0)
        K = -K;

    if (K > txt.size())
    {
        std::cout << "K is too big" << std::endl;
        return false;
    }

    if (txt.size() % K != 0)
    {
        std::cout << "Length is wrong!!!" << std::endl;
        return false;
    }
    else
    {
        for (int i = 0; i < txt.size() / K; ++i)
        {
            for (int j = 0; j < K; ++j)
            {
                if (txt[j] != txt[j + i * K])
                    return false;
            }
        }
    }
    return true;
}

int main()
{

    std::string txt = "abcabcabcabc";
    int K = 2;
    if (isKPeriodic(txt, K))
        std::cout << "Yes" << std::endl;
    else
        std::cout << "No" << std::endl;

    return 0;
}
