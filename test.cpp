#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<set>

//set容器构造与赋值
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	set<int>s1;
//	//插入数据只有insert方式
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(30);
//	//set容器特点：所有元素自动排序
//	//set容器不允许插入重复值
//	printSet(s1);
//	//拷贝构造
//	set<int>s2(s1);
//	printSet(s2);
//	//赋值
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}

//set大小和交换
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////大小
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(30);
//	printSet(s1);
//	//判断是否为空
//	if (s1.empty())
//		cout << "s1为空" << endl;
//	else
//	{
//		cout << "s1不为空" << endl;
//		cout << "s1的大小为：" << s1.size() << endl;
//	}
//}
////交换
//void test02()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	set<int>s2;
//	s2.insert(100);
//	s2.insert(400);
//	s2.insert(300);
//	s2.insert(200);
//	cout << "交换前：" << endl;
//	printSet(s1);
//	printSet(s2);
//	cout << "交换后：" << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//}

//set插入与删除
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////大小
//void test01()
//{
//	set<int>s1;
//	s1.insert(30);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//	//删除
//	s1.erase(s1.begin());
//	printSet(s1);
//	//删除的重载版本
//	s1.erase(30);
//	printSet(s1);
//	//清空
//	s1.clear();
//	printSet(s1);
//}

//set查找与统计
//void test01()
//{
//	set<int>s1;
//	s1.insert(30);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	//查找
//	set<int>::iterator pos = s1.find(300);
//	if (pos != s1.end())
//	{
//		cout << "找到元素:" << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到!" << endl;
//	}
//}
////统计
//void test02()
//{
//	set<int>s1;
//	s1.insert(30);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	int num = s1.count(30);
//	cout << "num = " << num << endl;
//}

//set和multiset区别
//void test01()
//{
//	set<int>s;
//	pair<set<int>::iterator, bool> ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "第一次插入成功" << endl;
//	}
//	else
//	{
//		cout<< "第一次插入失败" << endl;
//	}
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "第二次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败" << endl;
//	}
//	//
//	multiset<int>ms;
//	//允许插入重复值
//	ms.insert(10);
//	ms.insert(10);
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}

//pair对组创建
#include<string>
//void test01()
//{
//	//第一种：
//	pair<string, int>p("Tom", 18);
//	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;
//	//第二种：
//	pair<string, int>p2 = make_pair("Jerry", 20);
//	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
//}

//set容器排序
//class MyCompare
//{
//public:
//	bool operator()(int v1,int v2)const
//	{
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(50);
//	s1.insert(30);
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	//指定排序为从大到小
//	set<int, MyCompare>s2;
//	s2.insert(10);
//	s2.insert(40);
//	s2.insert(20);
//	s2.insert(50);
//	s2.insert(30);
//	for (set<int,MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}

//set容器排序
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
class comparePerson
{
public:
	bool operator()(const Person&p1,const Person&p2)const
	{
		//按年龄降序
		return p1.m_Age > p2.m_Age;
	}
};
void test01()
{
	//自定义数据类型，会指定排序规则
	set<Person, comparePerson>s;
	//创建Person对象
	Person p1("刘备", 24);
	Person p2("关羽", 28);
	Person p3("张飞", 25);
	Person p4("赵云", 21);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}