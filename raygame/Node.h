#pragma once
template<typename T>
class Node 
{
	T info;
	Node<T>* next;
	Node<T>* prevoius;
	Node<T>();
};

template<typename T>
inline Node<T>::Node() 
{

}