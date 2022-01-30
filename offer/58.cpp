// 剑指 Offer 58 - II. 左旋转字符串
// 字符串的左旋转操作是把字符串前面的若干个字符转移到字符串的尾部。
// 请定义一个函数实现字符串左旋转操作的功能。比如，输入字符串"abcdefg"和数字2，该函数将返回左旋转两位得到的结果"cdefgab"。

#include<iostream>
#include<string>

using namespace std;

class Solution
{
    public:
        string reverseLeftWords(string s, int n)
        {
            for (int i=0;i<n;++i)
            {
                s.push_back(s[i]);
            }
            s.erase(0,n);
            return s;
        }
};

class Splution_2
{
    public:
        string reverseLeftWords(string s, int n)
        {
            string strLeft=s.substr(0,n);
            string strRight=s.substr(n,s.size());
            string strAns=strRight+strLeft;
            return strAns;
        }
};