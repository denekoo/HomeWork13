#pragma once
#include"Graph.h"
#include<string>
#include<iostream>

void Graph::addUser(std::string userName)
{
	vertexCount++;
	User* user = new User(userName, vertexCount);
	vertexes[vertexCount] = *user;

}

Graph::User Graph::getUserbyName(std::string userName)
{
	for (int i = 0; i < SIZE; ++i)
		if (vertexes[i].m_name == userName)
			return vertexes[i];
}


void  Graph::addFriend(User fr1, User fr2)
{
	matrix[fr1.m_frID][fr2.m_frID] = true;
	matrix[fr2.m_frID][fr1.m_frID] = true;
}



void Graph::printUser(User user)
{
	std::cout << "User " << user.m_name << " ID: " << user.m_frID << std::endl;
}


void Graph::printMatrix()
{
	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
			std::cout << matrix[i][j] << " ";
		std::cout << std::endl;
	}

}

int Graph::getIndex(int start)
{
	for (int i = 0; i < SIZE; ++i)
	{
		if (matrix[start][i])
			return i;

	}
	return -1;
}


void Graph::showThreeHands()
{
	for (int i = 1; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
			if (matrix[i][j] && i != j)
				for (int k = 0; k < SIZE; ++k)
					if (matrix[j][k] && i != k)
						std::cout << "User   " << vertexes[i].m_name << "   is familiar with the user   " << vertexes[k].m_name
						<< "    through  " << vertexes[j].m_name << std::endl;
	}

}