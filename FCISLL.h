// Program: FCISLL is a generic single linked list 
//          Developed for CS214 Data Structures
//          at FCI, Cairo University
// Author:  Mohammad El-Ramly, 8 Mar. 2013 

#ifndef FCISLL_H_
#define FCISLL_H_

#include <iostream>
#include <conio.h>


using namespace std;

template <class T>
class Node {
protected:
    T     data;        // to hold generic data of type T
	Node<T>* next;     // to hold pointer to next item
	    // to hold pointer for previous item

  public:
		Node () {next =NULL;  data = NULL;}
		Node (T dataItem, Node<T>* nextPtr = NULL) {
            data = dataItem; next = nextPtr;
        }
		Node<T>* getNext ()        {return next;}
		void setNext(Node<T>* ptr) {next = ptr;}


		T  &getData ()              {return data;}
		void setData (T dataItem)  {data = dataItem;}
};

/////////////////////////////
template <class T>
class FCISLL {
    private:
        std::size_t counter;
        Node<T> *head, *tail;
    public:
        FCISLL() :head{nullptr},tail{nullptr},counter{0}
        {}
        ~FCISLL ();
        void addToHead(T item);
        void addToTail(T item);
        T removeFromHead();
        T removeFromTail(Node<T> *ptr = nullptr);
        T front();
        T back();
        size_t  size();
        void addToIndex(T item, int index);
        bool search (T item);
        T removeFromIndex(std::size_t index);
        T removeItem (T item);
        void removeWithPredicate(bool (pBoolean)(T & item));
        bool isEmpty();
    template <class TT>
        friend ostream& operator<<(ostream&, FCISLL<TT>);
};

//////////////////////////////

#endif 
