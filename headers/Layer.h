#ifndef LAYER_H
#define LAYER_H

#include <iostream>
#include <vector>
#include "Neuron.h"


using namespace std;


class Layer
{

public:
  Layer(int size);

  int getSize();
  ~Layer();
private:
  int size;
  vector<Neuron *> layer;


};






#endif
