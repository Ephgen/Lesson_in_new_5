#pragma once
#include <iostream>
#include <Windows.h>
#include <vector>

using namespace std;
template <class T>

class List
{
	vector<T> list;

public:
	void add(T item) {
		list.push_back(item);
	}

	void remove(int index) {
		list.erase(list.begin()+ index);
	}

	auto getMin() {
		auto pMin = list.begin();
		for (auto it = list.begin(); it < list.end(); it++) {       // list.end() - Возвращает пустоту после последнего итератора в векторе
			if (*it < *pMin)
				pMin = it;
		}
		return *pMin;
	}

	auto getMax() {
		auto pMax = list.begin();
		for (auto it = list.begin(); it < list.end(); it++) {       // list.end() - Возвращает пустоту после последнего итератора в векторе
			if (*it > *pMax)
				pMax = it;
		}
		return *pMax;
	}
};

template<>
class List<const char*> {
	vector<const char*> list;

public:
	void add(const char* item) {
		list.push_back(item);
	}

	void remove(int index) {
		list.erase(list.begin() + index);
	}

	auto getMin() {
		auto pMin = list.begin();
		for (auto it = list.begin(); it < list.end(); it++) {       // list.end() - Возвращает пустоту после последнего итератора в векторе
			if (strcmp(*it, *pMin) < 0)
				pMin = it;
		}
		return *pMin;
	}

	auto getMax() {
		auto pMax = list.begin();
		for (auto it = list.begin(); it < list.end(); it++) {       // list.end() - Возвращает пустоту после последнего итератора в векторе
			if (strcmp(*it, *pMax) > 0)
				pMax = it;
		}
		return *pMax;
	}
};