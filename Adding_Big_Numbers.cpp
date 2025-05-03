// https://www.codewars.com/kata/525f4206b73515bffb000b21
#include <string>

std::string add(const std::string& a, const std::string& b) 
{
    std::string out;
    int carry = 0, 
    width = std::max(a.size(),b.size());

    for(int i = 0; i < width; i++)
    {
        if (i < a.size()) carry += a[a.size() - 1 - i] - '0';
        if (i < b.size()) carry += b[b.size() - 1 - i] - '0';
        out.push_back('0' + carry % 10);
        carry /= 10;
    }
    out.push_back(carry + '0');
            
    while (out.size() > 1 && out.back() == '0') out.pop_back();
    std::reverse(out.begin(), out.end());
    return out;
}
