#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<set>

//set���������븳ֵ
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
//	//��������ֻ��insert��ʽ
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(30);
//	//set�����ص㣺����Ԫ���Զ�����
//	//set��������������ظ�ֵ
//	printSet(s1);
//	//��������
//	set<int>s2(s1);
//	printSet(s2);
//	//��ֵ
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}

//set��С�ͽ���
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////��С
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(30);
//	printSet(s1);
//	//�ж��Ƿ�Ϊ��
//	if (s1.empty())
//		cout << "s1Ϊ��" << endl;
//	else
//	{
//		cout << "s1��Ϊ��" << endl;
//		cout << "s1�Ĵ�СΪ��" << s1.size() << endl;
//	}
//}
////����
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
//	cout << "����ǰ��" << endl;
//	printSet(s1);
//	printSet(s2);
//	cout << "������" << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//}

//set������ɾ��
//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
////��С
//void test01()
//{
//	set<int>s1;
//	s1.insert(30);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	printSet(s1);
//	//ɾ��
//	s1.erase(s1.begin());
//	printSet(s1);
//	//ɾ�������ذ汾
//	s1.erase(30);
//	printSet(s1);
//	//���
//	s1.clear();
//	printSet(s1);
//}

//set������ͳ��
//void test01()
//{
//	set<int>s1;
//	s1.insert(30);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//	//����
//	set<int>::iterator pos = s1.find(300);
//	if (pos != s1.end())
//	{
//		cout << "�ҵ�Ԫ��:" << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�!" << endl;
//	}
//}
////ͳ��
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

//set��multiset����
//void test01()
//{
//	set<int>s;
//	pair<set<int>::iterator, bool> ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "��һ�β���ɹ�" << endl;
//	}
//	else
//	{
//		cout<< "��һ�β���ʧ��" << endl;
//	}
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "�ڶ��β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "�ڶ��β���ʧ��" << endl;
//	}
//	//
//	multiset<int>ms;
//	//��������ظ�ֵ
//	ms.insert(10);
//	ms.insert(10);
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}

//pair���鴴��
#include<string>
//void test01()
//{
//	//��һ�֣�
//	pair<string, int>p("Tom", 18);
//	cout << "������" << p.first << " ���䣺" << p.second << endl;
//	//�ڶ��֣�
//	pair<string, int>p2 = make_pair("Jerry", 20);
//	cout << "������" << p2.first << " ���䣺" << p2.second << endl;
//}

//set��������
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
//	//ָ������Ϊ�Ӵ�С
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

//set��������
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
		//�����併��
		return p1.m_Age > p2.m_Age;
	}
};
void test01()
{
	//�Զ����������ͣ���ָ���������
	set<Person, comparePerson>s;
	//����Person����
	Person p1("����", 24);
	Person p2("����", 28);
	Person p3("�ŷ�", 25);
	Person p4("����", 21);
	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);
	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}