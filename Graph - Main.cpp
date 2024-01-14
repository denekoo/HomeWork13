#include"Graph.h"


int main()
{
	/// оцифровать граф - done!
	/// реализовать поиск по трем рукопожатиям
	///

	Graph gr;
	//gr.printMatrix(); // матрица знакомств, для общего развития

		//добавление пользователей
	gr.addUser("a");
	gr.addUser("b");
	gr.addUser("c");
	gr.addUser("d");
	gr.addUser("e");
	gr.addUser("f");

	//тест вывода 
//gr.printUser(gr.getUserbyName("a"));
//gr.printUser(gr.getUserbyName("b"));
//gr.printUser(gr.getUserbyName("c"));

	//добавление друзей (оцифровка графа)
//  (A) - (B) - (C)
//	 |	\  |	 |
//	(D) - (E) - (F)

	//узел А
	gr.addFriend(gr.getUserbyName("a"), gr.getUserbyName("b"));
	gr.addFriend(gr.getUserbyName("a"), gr.getUserbyName("d"));
	gr.addFriend(gr.getUserbyName("a"), gr.getUserbyName("e"));

	//узел В
	gr.addFriend(gr.getUserbyName("b"), gr.getUserbyName("e"));
	gr.addFriend(gr.getUserbyName("b"), gr.getUserbyName("c"));

	//узел C
	gr.addFriend(gr.getUserbyName("c"), gr.getUserbyName("f"));

	//узел D
	gr.addFriend(gr.getUserbyName("d"), gr.getUserbyName("e"));

	//узел E
	gr.addFriend(gr.getUserbyName("e"), gr.getUserbyName("f"));
	//узел F оцифрован другими узлами

//gr.printMatrix();

	gr.showThreeHands();
}