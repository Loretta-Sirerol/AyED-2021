#ifndef QUEUE_HXX_
#define QUEUE_HXX_

template <class T>
class QueueNode {
	public:
		T data;
		QueueNode<T> *next;
		explicit QueueNode(T);
};


template <class T>
class Queue {
	QueueNode<T>* front;
	QueueNode<T>* rear;

	public:
	Queue();
	void Enqueue(T);
	void Dequeue();
	T Front();
	bool isEmpty();

};

#include "./Queue.cxx" /* Is it safe to do this ? */
                       /* I should probably read the new ISO standar */

#endif /* QUEUE_HXX_ */
