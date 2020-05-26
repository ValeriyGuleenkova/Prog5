#pragma once
#include "func.hpp"
#include "tetra.hpp"
#include "uslovie.hpp"
#include "CImg.h"
using namespace std;

int main()
{
	uslovie A("input_all.txt");
	vector<tetra*> arr;
	arr = Readtetra("input_tetra.txt");
	for (size_t i = 0;i < arr.size();i++) {
		arr[i]->out();
	}
	RayTrace(arr, A);
	for (size_t j = 0;j < arr.size();j++) {
		delete arr[j];
	}
	string aaa;
	cin >> aaa;

    return 0;
}