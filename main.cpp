
#include <algorithm>
#include <iostream>

#include "recursive_multidim_vector.hpp"

template<std::size_t dim> void inc_test(multidim_vector::Type<int, dim> &mdvec, const int N) {
	mdvec.reserve(N);
	while (mdvec.size() < N) {
		mdvec.push_back(multidim_vector::Type<int, dim - 1>());
	}
	for(std::size_t i = 0; i < N; i++) {
		inc_test<dim - 1>(mdvec[0], i + 1);
  }
}
template<> void inc_test<1>(multidim_vector::Type<int, 1> &mdvec, const int N) {
	mdvec.resize(N);
	std::iota(mdvec.begin(), mdvec.end(), 1);
}

template<std::size_t dim> void test(const int N) {
	multidim_vector::Type<int, dim> mdvec;
  for(std::size_t i = 0; i < N; i++) {
    inc_test<dim>(mdvec, N);
  }
}

int main() {
	test<2>(4);
}
