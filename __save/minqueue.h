/*minqueue.h*/

//
// Min queue that stores (key, value) pairs using a min-heap 
// implementation.  When pop is called, the key from the 
// (key, value) pair with the smallest value is returned; if 
// two pairs have the same value, the smaller key is returned.
// Push and pop have O(lgN) time complexity.
//
// << YOUR NAME >>
//
// Original author: Prof. Joe Hummel
// U. of Illinois, Chicago
// CS 251: Fall 2019
// Project #07
//

#pragma once

#include <iostream>
#include <vector>
#include <exception>
#include <stdexcept>

using namespace std;


template<typename TKey, typename TValue>
class minqueue
{
private:


public:
  //
  // default constructor:
  //
  // Queue has a max capacity for efficient implementation.
  // This max capacity must be specified at queue creation.
  //
  minqueue(int capacity)
  {
    //
    // TODO:
    //
  }
  
  //
  // fill constructor:
  //
  // This allows for the efficient O(N) construction of
  // a queue with an initial set of keys, all with the same
  // initial value.  The max capacity of the queue is 
  // set to the # of keys provided for initialization;
  // it is assumed the keys are in ascending order.
  //
  minqueue(vector<TKey> keys, TValue initialValue)
  {
    //
    // TODO:
    //
  }
  
  
  //
  // destructor:
  //
  virtual ~minqueue()
  {
    //
    // TODO:
    //
  }
  

  //
  // empty:
  //
  // Returns true if empty, false if not.
  //
  bool empty()
  {
  
  }


  //
  // push:
  //
  // Inserts the given (key, value) pair into the queue such that 
  // pop always returns the pair with the minimum value.  If the 
  // key is *already* in the queue, it's value is updated to the
  // given value and the queue reordered.  If the key is not in
  // the queue, the (key, value) pairs is added and the queue
  // reordered.
  //
  // NOTE: if two keys have the same value, i.e. (key1, value) and
  // (key2, value), then those pairs are ordered into ascending value
  // by their key.
  //
  void pushinorder(TKey key, TValue value)
  {
    //
    // TODO:
    //
    
    //
    // we need to insert a new (key, value) pair but the queue is full:
    //
    //if (...)
    //{
    //  throw runtime_error("minqueue::pushinorder: queue full");
    //}
    //
  }


  //
  // front:
  //
  // Returns the key at the front of the queue; does *not* pop the 
  // (key, value) pair.  Throws a logic_error exception if the queue
  // is empty.
  //
  TKey minfront()
  {
    if (empty())
    {
      throw logic_error("minqueue::minfront: queue empty");
    }
    
    //
    // TODO:
    //
  }


  //
  // pop:
  //
  // Pops and discards the (key, value) pair at the front of the queue.
  // Throws a logic_error exception if the queue is empty.
  //
  void minpop()
  {
    if (empty())
    {
      throw logic_error("minqueue::minpop: queue empty");
    }
    
    //
    // TODO:
    //
  }

};