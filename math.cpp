#include <iostream>
//void Log(const char* message);
// int Multiply(int a, int b) {
//	Log("Multiply");
//	return a * b;
//}
//int main() 
//{
//	/*std::cout << Multiply(5, 8) << std::endl;*/
//	std::cin.get();
//#include "EndBrace.h"
//// //֤�� #include �����Ǹ���ճ��
//int main()
//{
//	int a = 8;
//	a++;
//	const char* c = nullptr;
//	if (c)
//	{
//		std::cout << c << std::endl;
//	}
//	else if(a==9) //"else if" is just that "else" and "if" in the same line;
//	{
//		a++;
//		std::cout << a << std::endl;
//	}
//	else
//	{
//		std::cout << a << std::endl;
//	}
//	std::cin.get();
//} 
//int main()
//{
//	for (int i = 0; i < 5; i++) //������������һ��ѭ��ǰ��ִ�еĴ���
//	{
//		std::cout << "Hello World!" << std::endl;
//		std::cout << i << std::endl;
//	}
//	// i����ʱ����
//	// std::cout << i << std::endl;  ->error C2065: ��i��: δ�����ı�ʶ��
//	//  equal
//	int i = 0;
//	for (; i < 5; ) //������������һ��ѭ��ǰ��ִ�еĴ���
//	{
//		std::cout << "Hello World!" << std::endl;
//		i++;
//	}
//	// equal
//	i = 0;
//	bool flag = true;
//	for (; flag; ) //������������һ��ѭ��ǰ��ִ�еĴ���
//	{
//		std::cout << "Hello World!" << std::endl;
//		i++;
//		if (!(i < 5)) flag = false;
//	}
//	std::cin.get();
//}
//int main ()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		std::cout << "iloveyou" << std::endl;
//		i++;
//	}
//	
//	do // ����ִ��һ��
//	{
//		std::cout << "metoo" <<std::endl;
//	} while (false);
//	std::cin.get();
//}

// 15 continue break return
//int main()
//{
//	for (int i = 0; i < 5; i++) //������������һ��ѭ��ǰ��ִ�еĴ���
//	{
//		if (i > 2)
//			continue; // ֻҪ���е� continue �Ϳ�ʼ����һ��ѭ���ĵ���
//		std::cout << "Hello World!"<<std::endl;
//		std::cout << i << std::endl;
//	}   
//}
// 16 pointer  �������͵�ָ�붼��һ�����������һ���ڴ��ַ,�������޹�
//int main()
//{ 
//	int var = 8;
//	int* ptr = &var;
//	*ptr = 10; 
//
//	std::cout << var << std::endl;
//	std::cin.get();
//}
//int main()
//{
//	char* buffer = new char[8]; // 8 bytes
//	memset(buffer, 0, 8); // 0x00
//	// Ϊָ������������� ptr,data,size
//	char** ptr = &buffer;
//
//	delete[] buffer;
//	
//	std::cin.get();
//}
//-----------------------
//void Increment(int value)
//{
//	value++;
//}
//void Increment2(int* value)
//{
//	(*value)++;
//}
//void Increment3(int& value)
//{
//	value++;
//}
//int main()
//{
//	int a = 8;
//	Increment(a); // aû�����ӣ�ֻ��value������
//	std::cout << a << std::endl;
//	Increment2(&a); // a����,����ַ
//	std::cout << a << std::endl;
//	Increment3(a); // a����,����ֵ������
//	std::cout << a << std::endl;
//
//	int& ref = a; // ����,��� ref ���������������ڣ���ֻ���������ǵ�Դ����
//	int b = 8;
//	std::cout << ref << std::endl;
//	// ����һ����Ҫ���¾���һ����������һ�����ã���Ͳ��ܸ����������õĶ���
//	//int& ref = b;
//	//std::cout << ref << std::endl;
//	//std::cin.get();
//	int* ref1 = &a;
//	*ref1 = 2;
//	ref1 = &b;
//	*ref1 = 100;
//	std::cout << a << std::endl;
//	std::cout << b << std::endl;
//}
//----------------

// 18 class:����һ�ֽ����ݺͺ�����֯��һ��ķ�ʽ
//
//class Player
//{ // Ĭ������£����еĳ�Ա�ķ��ʿ��ƶ���˽�е�,��ζ��ֻ�����ڲ��ĺ������ܷ�����Щ����,��Ҫpublic
//public:
//	int x, y;
//	int Speed;
//	// ���ڵĺ������� method (����)
//	void Move(int xa, int ya) 
//	{
//		x += xa;
//		y += ya;
//	}
//};
//int main() 
//{
//	Player player; // ���������Ƴɵı�����������,�´����Ĺ��̽���ʵ����
//	player.x = 0;
//	player.y = 0;
//	player.Move(1, 1);
//}
//// Cֻ�нṹ����ҽṹ�岻���з�����C++�Ľṹ������з���,C++�ṹ���Class��Ψһ������ǰ��Ĭ��public������Ĭ��private

// 20 Log Class
//class Log
//{
//public:
//	const int LogLevelError = 0;
//	const int LogLevelWarning = 1;
//	const int LogLevelInfo = 2;
//private:
//	int m_LogLevel = LogLevelInfo; // m ǰ׺ A һ��������Ǹ�˽�е����Ա����
//public:
//	void SetLevel(int level)
//	{
//		m_LogLevel = level;
//	}
//
//	void Error(const char* message)
//	{
//		if (m_LogLevel >= LogLevelError)
//		std::cout << "[ERROR]:" << message << std::endl;
//	}
//
//	void Warn(const char* message)
//	{
//		if (m_LogLevel >= LogLevelWarning)
//		std::cout << "[WARNING]:" << message << std::endl;
//	}
//	void Info(const char* message)
//	{
//		if (m_LogLevel >= LogLevelInfo)
//		std::cout << "[INFO]:" << message << std::endl;
//	}
//
//
//
//
//};
//int main()
//{
//
//	Log log;
//	log.SetLevel(log.LogLevelInfo);
//	log.Warn("Hello!");
//	log.Error("World!");
//	log.Info("Iloveyou!");
//	std::cin.get();
//}
// 21 static: ����� static ���εķ����� link �׶��Ǿֲ��� , Ҳ������ֻ�Զ������ı��뵥Ԫ (. ob) �ɼ�
//    ������߽ṹ������� static , ��ʾ�ⲿ���ڴ�������������ʵ�������,����˵��������ʵ�����˺ܶ�
//    ��������ṹ�� , ���Ǹ���̬ (static) ����ֻ����һ��ʵ��
// s ��ͷ��������ʾ��������� staticl ��

/*��C++�У�static�ؼ����ж�����;������Ҫ���ڿ��Ʊ����Ĵ洢�ںͿɼ��ԡ��������۵���static�����������ʹ��ʱ�Ĳ�ͬ���塣
�����static
��static���������ȫ�ֱ�������ʱ�������ñ��������������Դ��ⲿ�����Ը�Ϊ�ڲ������ԡ�����ζ����Щ��̬ȫ�ֱ�������
ֻ�ڶ������ǵı��뵥Ԫ��ͨ����һ��.cpp�ļ����������ͷ�ļ����ڿɼ�����ʹ�������뵥Ԫ��������ͬ���Ƶ��ⲿ������������
��Ҳ�ǲ�ͬ��ʵ�塣�������ڱ���ȫ�������ռ����Ⱦ��ͬʱ�����ڲ�ͬ�ı��뵥Ԫ��ʹ����ͬ�����ơ�
���ڵ�static
��static�������ṹ���ڲ��ĳ�Ա����ʱ�����ı��˳�Ա�����Ĵ洢�ں������������ľ�̬��Ա��������������κε���ʵ������
���ɸ��������ʵ���������۴����˶��ٸ����ʵ������̬��Ա����ֻ��һ������������ڴ洢�༶���״̬�����磬�������ʵ��
�������ǳ����á�
��̬��Ա����Ҳ���ƣ����ǲ���������κε���ʵ������ˣ���̬��Ա����ֻ�ܷ�����ľ�̬��Ա������������̬��Ա���������ǲ���
������ķǾ�̬��Ա������������Ϊ��Щ��Ա��Ҫһ�����ʵ�����ܴ��ڡ�*/

//extern int s_Variable; // If Static.cpp contains the static keyword, there will be an error.
//void Function()
//{
//
//}
//// ������ȫ�ֺ����ͱ����� static ���
//int main() 
//{
//	
//	std::cout << s_Variable << std::endl;
//	std::cin.get();
//}

//struct Entity
//{
//	static int x;
//	static int y;
//	static void Print() // ��̬�������ܷ��ʷǾ�̬����
//	{
//		std::cout << x << "," << y << std::endl;
//	}
//};
//
//int Entity::x;
//int Entity::y;
//int main()
//{
//	Entity e;
//	Entity::x = 2;
//	Entity::y = 3;
//	Entity::Print();
//
//	Entity e1;
//	Entity::x = 5;
//	Entity::y = 8;
//	Entity::Print();
//
//	std::cin.get();
//}
// 22
//struct Entity
//{
//	int x;
//	int y;
//	static void Print() // ��̬�������ܷ��ʷǾ�̬����  ��̬����û���Ǹ����ز��� (this)
//	{
//		std::cout << x << "," << y << std::endl;
//	}
//};
//
//static void Print(Entity e) // �Ǿ�̬�������������з�ʽ
//{
//   std::cout << e.x << ", " << e.y << std::endl;
//}
//
//int main()
//{
//	Entity e;
//	e.x = 2;
//	e.y = 3;
//	Print(e); 
//
//	Entity e1;
//	e1.x = 5;
//	e1.y = 8;
//	Print(e1);
//
//	std::cin.get();
//}

// git:
/* ��ȡ��fetch������Զ�̻�ȡ���°汾�ļ������أ����Զ��ϲ������°汾�ڡ���֧��ѡ����
��remotes/origin���ļ����¿��Բ鿴������ѡ����ϲ���master��֧�ϡ�

��ȡ��pull����Զ�ֿ̲���ȡ���°汾�ļ������أ��Զ��ϲ�/merge��

����ߵ���������ȡ��pull�������Զ��ϲ��򸲸Ǳ��ش��룬���ǽ��䴢���ڷ�֧ѡ��У�
������������ѡ��ϲ������Ա����ƶ��뱾��һЩ�������ͻʱ�����ݶ�ʧ��

����ȡ��pull�����Ǳ����ϲ����������Ŀ������һ�˽��п�������ô����ȡ��pull�������㣬
��Ϊû�������˵ĸĶ���������Ǻ��Ŷ�һ��Э��������������ȡ��fetch�����������𲻱�
Ҫ�ĳ�ͻ��

���ͼ������زֿ��ϴ����ƶˣ�ͬ��������ȡ�������������衣

ͬ���أ������һ�˿�����Ŀ�����߽�������ͬ�����ش��뵽�ƶˣ������;��㹻�ˡ�

��������Ŷ�Э����������ôǿ�ҽ���ʹ��ͬ����������ȡ�����ͣ���Ȼ���ܻ������Ŀ������
����δ�����µ��ƶ˲ֿⱣ��һ�µ���ʾ��*/

// 23 Local Static 
// ����̬�ֲ� (local static) ����������������һ������,�����������������������������,
// �������������������������

/*
���� ������Ҫȫ�ֱ���
�ֲ���Ҫ�κ��˶��ܷ��ʵ��������ʱ
������ھֲ�����������������̬����*/
//void Function ()
//{
//	static int i = 0;
//	int j = 0;
//	i++;
//	j++;
//	std::cout << i << std::endl;
//	std::cout << j << std::endl;
//}
//
//int main()
//{
//	Function();
//	Function();
//	std::cin.get();
//}

// ����ģʽ

class Singleton
{
private:
	static Singleton* s_Instance;
public:
	static Singleton& Get()
	{
		return *s_Instance;
	}

	void Hello()
	{
		std::cout << "Hello" << std::endl;
	}
};
Singleton* Singleton::s_Instance = nullptr;

int main()
{
	Singleton::Get().Hello();
	std::cin.get();
}
