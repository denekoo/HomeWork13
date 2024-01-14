#pragma once

#include<string>
#include<iostream>

#define SIZE 10

class Graph
{
private:
	struct User
	{
		User(std::string name, int id) :
			m_name(name), m_frID(id)
		{}
		User() {}

		std::string m_name;
		int m_frID;
		~User()  {}
	};

	bool matrix[SIZE][SIZE];
	User vertexes[SIZE];
	int vertexCount;

public:
	Graph()
	{
		for (int i = 0; i < SIZE; ++i)
			for (int j = 0; j < SIZE; ++j)
				matrix[i][j] = false;	

		vertexCount = 0;
	}

	void addUser(std::string userName);
	void addFriend(User fr1, User fr2);
	void printUser(User user);
	User getUserbyName(std::string userName);

	void printMatrix();


	


	int getIndex(int start);

	void showThreeHands();
};



