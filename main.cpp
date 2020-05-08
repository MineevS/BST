#include "header.h"
#include <iostream>


int main(int argc, char** argv)
{
	Tree Tree1;//Создаем дерево.
	
	Tree1.Add("010", 2);// Первое значение кладется в корень дерева.
	
	Tree1.add("005", 9);//Добавляем ключ и значение. //add(key="008", value=1);
	
	Tree1.add("017", 4);//Добавляем ключ и значение. //add(key="018", value=5);
	
	Tree1.add("004", 3);//Добавляем ключ и значение. //add(key="018", value=3);
	
	Tree1.add("007", 8);//Добавляем ключ и значение. //add(key="018", value=3);
	
	Tree1.add("031", 4);//Добавляем ключ и значение. //add(key="009", value=6);
	
	Tree1.add("014", 3);//Добавляем ключ и значение. //add(key="018", value=3);
	
	Tree1.add("067", 3);//Добавляем ключ и значение. //add(key="018", value=3);
	
	Tree1.add("014", 3);//Добавляем ключ и значение. //add(key="018", value=3);
	
	cout << Tree1.find("007") << endl;//Поиск по ключу.
	
	cout << Tree1.find("004") << endl;//Поиск по ключу.
	
	cout << Tree1.find("067") << endl;//Поиск по ключу.
	
	Tree1.remove("007");//Удаление по ключу.
	
	Tree1.remove("004");//Удаление по ключу.
	
	Tree1.remove("067");//Удаление по ключу.
	
	return 0;
}