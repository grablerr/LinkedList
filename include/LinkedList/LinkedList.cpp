#ifndef INCLUDE_LinkedList_LinkedList_H_
#define INCLUDE_LinkedList_LinkedList_H_

#include <iostream>
#include <cstdlib> 

namespace Linkedlist {

	template<typename T>
	class Node {
	public:
		T value;
		Node* next;
		Node(T* value) :value(value), next(nullptr) {}
	};

	template<typename T>
	class LinkedList {
		Node<T>* head;
	public:
		LinkedList();

		LinkedList(LinkedList& other);
		LinkedList(int size);
		~LinkedList();
		LinkedList& operator=(LinkedList& other);

		void push_tail(T& elem);
		void push_tail(LinkedList& other);
		void push_head(T* elem);
		void push_head(LinkedList& other);

		void pop_head();
		void pop_tail();
		void delete_node(Node<T>& node);
		T& operator[](int index);
		const T& operator[](int index) const;
		void reverse();

	};

	template<typename T>
	LinkedList<T>::LinkedList() : head(nullptr) {}

	template<typename T>
	LinkedList<T>::LinkedList(LinkedList& other) : head(nullptr) {
		//TODO
	}

	template<typename T>
	LinkedList<T>::LinkedList(int size){
		//TODO
	}

	template<typename T>
	LinkedList<T>::~LinkedList(){
		//TODO
	}

	template<typename T>
	LinkedList<T>& LinkedList<T>::operator=(LinkedList& other){
		// TODO
	}

	template<typename T>
	void LinkedList<T>::push_tail(T& elem){
		//TODO
	}

	template<typename T>
	void LinkedList<T>::push_tail(LinkedList& other){
		// TODO
	}

	template<typename T>
	void LinkedList<T>::push_head(T* elem){
		// TODO
	}

	template<typename T>
	void LinkedList<T>::push_head(LinkedList& other){
		// TODO
	}

	template<typename T>
	void LinkedList<T>::pop_head(){
		// TODO
	}

	template<typename T>
	void LinkedList<T>::pop_tail(){
		// TODO
	}

	template<typename T>
	void LinkedList<T>::delete_node(Node<T>& node){
		// TODO
	}

	template<typename T>
	T& LinkedList<T>::operator[](int index){
		// TODO
	}

	template<typename T>
	const T& LinkedList<T>::operator[](int index) const{
		// TODO
	}

	template<typename T>
	void LinkedList<T>::reverse(){
		// TODO
	}
}
#endif