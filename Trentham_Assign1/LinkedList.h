//
//  LinkedList.h
//  Trentham_Assign1
//  Shane Trentham
//  CSCI 3250
//  9/17/2019
//  Assignment 3
#include <iostream>
#ifndef LinkedList_h
#define LinkedList_h
template <class T>
struct Node
{
    T data;
    Node<T>* next;
    Node<T>* prev;
};

template <class T>
class LinkedList
{
private:
    Node<T>* mHead;
    Node<T>* mTail;
    int mSize;
public:
    LinkedList();
    LinkedList(const LinkedList&);
    ~LinkedList();
    void clear();
    LinkedList& operator=(const LinkedList&);
    int size() const;
    void push_back(const T);
    void push_front(const T);
    T pop_back();
    T pop_front();
};

#endif /* LinkedList_h */

template <class T>
LinkedList<T>::LinkedList()
{
    mHead = nullptr;
    mTail = nullptr;
    mSize = 0;
}

template <class T>
LinkedList<T>::LinkedList(const LinkedList& list)
{
    Node<T>* p = list.mHead;
    while(p != nullptr)
    {
        mHead = p;
        p = p->next;
        mHead = mHead->next;
        mSize++;
    }
    delete p;
    delete list;
    
}

template <class T>
LinkedList<T>::~LinkedList()
{
    while(mSize != 0)
    {
        T holder = pop_front();
    }
}
template <class T>
void LinkedList<T>::clear()
{
    T holder;
    while(mSize > 0)
    {
        holder = pop_front();
    }
        
}
template <class T>
int LinkedList<T>::size() const
{
    return mSize;
}
template <class T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList& list)
{
    
    Node<T>* p = list.mHead;
    while(p->next != nullptr)
    {
        mHead = p;
        p = p->next;
        mHead = mHead->next;
        
    }
}
template <class T>
void LinkedList<T>::push_back(const T data)
{
    if(mHead == nullptr)
    {
        mHead = new Node<T> { data, nullptr };
        mTail = mHead;
        mSize++;
    }
    else
    {
        mTail->next = new Node<T> { data, nullptr };
        mTail = mTail->next;
        mSize++;
    }
}
template <class T>
void LinkedList<T>::push_front(const T data)
{
    mHead = new Node<T> { data, mHead };
    mSize++;
    if(mTail == nullptr)
        mTail = mHead;
}
template <class T>
T LinkedList<T>::pop_back()
{
    
    
    T value = mTail->data;
    Node<T>* oldTail = mTail;
    
    if (mHead == mTail)
    {
        mHead = nullptr;
        mTail = nullptr;
    }
    else
    {
        Node<T>* cursor = mHead;
        while (cursor->next != mTail)
            cursor = cursor->next;
        mTail = cursor;
        mTail->next = nullptr;
    }
    delete oldTail;
    mSize--;
    return value;
    
}
template <class T>
T LinkedList<T>::pop_front()
{
    T value = mHead->data;
    Node<T>* oldHead = mHead;
    if (mHead == mTail)
    {
        mHead = nullptr;
        mTail = nullptr;
    }
    else
    {
        mHead = mHead->next;
    }
    delete oldHead;
    mSize--;
    return value;
}

