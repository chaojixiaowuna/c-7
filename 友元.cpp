//友元
//在程序里，有些私有属性 也想让类外特殊的一些函数或者类进行访问 ，就需要用到友元
//友元的目的就是让一个函数或者类 访问另一个类中私有成员
//
//友元的关键字 friend
//友元的三种实现
//全局函数 做友元
//类 做友元
//成员函数 做友元



//全局函数做友元
//#include<iostream>
//using namespace std;
//class Building
//{
//	friend void func(Building *building);
//public:
//	Building()
//	{
//		m_sittingroom = "客厅";
//		m_bedroom = "卧室";
//	}
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
//void func(Building *building) 
//{
//	cout << "这件房间是" << building->m_sittingroom << endl;
//	cout << "这件房间是" << building->m_bedroom << endl;
//}
//void test01()
//{
//	Building b1;
//	func(&b1);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//类做友元
//#include<iostream>
//using namespace std;
//
//class Building
//{
//	friend class GoodGay;
//public:
//	Building();
//	string m_sittingroom;
//private:
//	string m_bedroom;
//
//};
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();
//private:
//	Building* building;
//};
// 类外实现成员函数
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//Building::Building()
//{
//	m_sittingroom = "客厅";
//	m_bedroom = "卧室";
//}
//void GoodGay::visit()
//{
//	cout << "参观的房间是" << building->m_sittingroom << endl;
//	cout << "参观的房间是" << building->m_bedroom << endl;
//}
//int main()
//{
//	GoodGay G1;
//	G1.visit();
//	system("pause");
//	return 0;
//}

//成员函数做友元
//class Building
//{
//	friend void GoodGay::visit();//告诉系统GoodGay里的visit函数 是好朋友 可以访问私有成员
//};