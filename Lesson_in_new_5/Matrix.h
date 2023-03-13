#pragma once
#include <iostream>
#include <Windows.h>
#include <vector>

using namespace std;

template <class T, int height, int width>
class Matrix
{
	T m[height][width];
public:
	const auto& operator()(int i, int j) const {
		if (j < 0 || j >= width || i < 0 || i >= height) {
			cout << "Error!!!\n";     // вывод ошибки
			exit(1);
		}
		return m[i][j];
	}

	auto& operator()(int i, int j) {
		if (j < 0 || j >= width || i < 0 || i >= height) {
			cout << "Error!!!\n";     // вывод ошибки
			exit(1);
		}
		return m[i][j];
	}

	auto getMin() {
		auto min = m[0][0];
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				if (m[i][j] < min) min = m[i][j];
			}
		}
		return min;
	}
	auto getMax() {
		auto max = m[0][0];
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				if (m[i][j] > max) max = m[i][j];
			}
		}
		return max;
	}
};

template <int height, int width>
class Matrix <const char*, height,  width>
{
	const char* m[height][width];
public:
	const auto& operator()(int i, int j) const {
		if (j < 0 || j >= width || i < 0 || i >= height) {
			cout << "Error!!!\n";     // вывод ошибки
			exit(1);
		}
		return m[i][j];
	}

	auto& operator()(int i, int j) {
		if (j < 0 || j >= width || i < 0 || i >= height) {
			cout << "Error!!!\n";     // вывод ошибки
			exit(1);
		}
		return m[i][j];
	}

	auto getMin() {
		auto min = m[0][0];
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				if (strcmp(m[i][j], min) < 0) min = m[i][j];
			}
		}
		return min;
	}
	auto getMax() {
		auto max = m[0][0];
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				if (strcmp(m[i][j], max) > 0) max = m[i][j];
			}
		}
		return max;
	}
};

