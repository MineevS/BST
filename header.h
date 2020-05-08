#pragma once

#include <string>
#include <cstdlib> //atoi();
#include <cstring> //strcmp;

using namespace std;

using ValueType = double;

/*
struct Node
{
	Node(){};
	~Node(){};
	
	Node* parent ;//Указатель на предыдущий узел.
	Node* children = new Node[2];//Массив указателей на следующие два узла.
	string key;//Ключ
	ValueType value;//Значение, хранящееся в данном узле.
	
};
*/


class Node // Класс - узел.
{
	private:
	
		Node* parent ;//Указатель на предыдущий узел.
		//Node* children;//Массив указателей на следующие два узла.//= new Node[2]
		
		Node* left;
		Node* right;
		
		string key;//Ключ
		ValueType value;//Значение, хранящееся в данном узле.
	//
	
	public:
	
		Node(){};
	   ~Node(){};
		
		Node* add(Node* ptr, string key,ValueType value);
		
		void remove();
	
	//
	
};

class Tree // Класс - дерево.
{
	private:  
	
		//Данные корня:
		Node* parent = nullptr;//Указатель на предыдущий узел.
		//Node* children;//Массив указателей на следующие два узла.
		
		Node* left = 0;
		Node* right = 0;
		
		string key;//Ключ
		ValueType value;//Значение хранящееся в данном узле.
	
	public:
	
		Tree();//Конструктор.
		
		~Tree();//Диструктор.
		
		void Add(string key, ValueType value);//Операция добавления в вершину.
		
		void add(string key, ValueType value);//Операция добавления.
		
		ValueType find(string key);//Операция поиска.
		
		void remove(string key);//Операция удаления.
		
		//ValueType bypass();//Операция обхода дерева.
		
		//Операторы:
		
		bool operator<=(Node* node);
		//bool operator==(Node* node);
		
	//
};

//+
template<typename _node>
inline bool operator<=(const basic_string<_node>& __lhs, const basic_string<_node>& __rhs)
{
	const char* per =&__lhs[0];

	int elem = atoi(per);
	
	//cout << elem << endl;
	
	const char* per2 =&__rhs[0];

	int elem2 = atoi(per2);
	
	//cout << elem2 << endl;
	
	
	if(elem <= elem2)
	{
		return false;
	}
	else
	{
		return true;
	}
}

/*
template<typename _StringT>
inline typename __gnu_cxx::__enable_if<__is_char<_StringT>::__value, bool>::__type
operator==(const basic_string<_StringT>& __lhs, const basic_string<_StringT>& __rhs)
{ 
	return (__lhs.size() == __rhs.size() && !std::char_traits<_StringT>::compare(__lhs.data(), __rhs.data(), __lhs.size())); 
} 
*/

/*
template<typename _node>
inline bool operator==(const basic_string<_node>& __lhs, const basic_string<_node>& __rhs)
{ 
	return 0; 
}
*/

/*
template<typename _node>
inline bool operator==(const basic_string<_node>& __lhs, const basic_string<_node>& __rhs)
{
	
	
	
}

template<typename _node>
inline bool operator>(const basic_string<_node>& __lhs, const basic_string<_node>& __rhs)
{ 
	return 0; 
}
*/

//Достоинста:
// - Простота реализации.
// - ассоциативный массив.
// - О(log(N)) для всех основных операций.
// - Самосортиро