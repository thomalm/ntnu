#ifndef HELPER_H_
#define HELPER_H_

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class helper{
	public:
		int readInt(string str, int min, int max);
		float readFloat(string str, float min, float max);
		int bin2dec(vector<int> binary);
		vector<int> dec2bin(int dec, int bits);
};

#endif
