//��Ԫ
//�ڳ������Щ˽������ Ҳ�������������һЩ������������з��� ������Ҫ�õ���Ԫ
//��Ԫ��Ŀ�ľ�����һ������������ ������һ������˽�г�Ա
//
//��Ԫ�Ĺؼ��� friend
//��Ԫ������ʵ��
//ȫ�ֺ��� ����Ԫ
//�� ����Ԫ
//��Ա���� ����Ԫ



//ȫ�ֺ�������Ԫ
//#include<iostream>
//using namespace std;
//class Building
//{
//	friend void func(Building *building);
//public:
//	Building()
//	{
//		m_sittingroom = "����";
//		m_bedroom = "����";
//	}
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
//void func(Building *building) 
//{
//	cout << "���������" << building->m_sittingroom << endl;
//	cout << "���������" << building->m_bedroom << endl;
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

//������Ԫ
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
// ����ʵ�ֳ�Ա����
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//Building::Building()
//{
//	m_sittingroom = "����";
//	m_bedroom = "����";
//}
//void GoodGay::visit()
//{
//	cout << "�ι۵ķ�����" << building->m_sittingroom << endl;
//	cout << "�ι۵ķ�����" << building->m_bedroom << endl;
//}
//int main()
//{
//	GoodGay G1;
//	G1.visit();
//	system("pause");
//	return 0;
//}

//��Ա��������Ԫ
//class Building
//{
//	friend void GoodGay::visit();//����ϵͳGoodGay���visit���� �Ǻ����� ���Է���˽�г�Ա
//};