#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <stack>
#include <queue>

using namespace std;

struct TreeNodeA {
     int val;
     TreeNodeA *left;
     TreeNodeA *right;
	 TreeNodeA(int x) : val(x), left(NULL), right(NULL) {};
};


class Solution
{
public:
	Solution();
	~Solution();
	
	//无重复字符的最长子串
	int lengthOfLongestSubstring(string s);

	//给定两个数组，编写一个函数来计算它们的交集。
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2);

	//求两数之和
	vector<int> Solution::twoSum(vector<int>& nums, int target);

	//打气球问题
	int hitBall(vector<pair<int,int>>& ball);

	// 961. 重复 N 次的元素
	int repeatedNTimes(vector<int>& A);

	//最长公共前缀
	string longestCommonPrefix(vector<string>& strs);

	//整数反转
	int reverse(int x);

	//8. 字符串转换整数 (atoi)
	int myAtoi(string str);

	//967. 连续差相同的数字 二叉树实现
	vector<int> numsSameConsecDiff(int N, int K);

	//209. 长度最小的子数组
	int minSubArrayLen(int s, vector<int>& nums);

	//973. 最接近原点的 K 个点
	vector<vector<int>> kClosest(vector<vector<int>>& points, int K);

	//976. 三角形的最大周长
	int largestPerimeter(vector<int>& A);

	//974. 和可被 K 整除的子数组
	int subarraysDivByK(vector<int>& A, int K);

	//984. 不含 AAA 或 BBB 的字符串
	string strWithout3a3b(int A, int B);

	//985. 查询后的偶数和
	vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries);

	//988. 从叶结点开始的最小字符串
	string smallestFromLeaf(TreeNodeA* root);

	//989. 数组形式的整数加法
	vector<int> addToArrayForm(vector<int>& A, int K);
};

