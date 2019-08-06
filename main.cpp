
#include <iostream>
#include <vector>  // std::vector // o nome ja diz

#include "recursive_multidim_vector.hpp"


int main() {
  recursive_collection::wrapper<int, 2, std::vector>::Type vecvec; // std::vector<std::vector<int>>
  ///std::vector<std::vector<std::vector<std::vector<std::vector<int>>>>>
  recursive_collection::wrapper<int, 5, std::vector>::Type vecvecvecvecvec;
  ///std::vector<std::vector<std::vector<std::vector<std::vector<int>>>>>
  recursive_collection::wrapper<recursive_collection::wrapper<int, 3, std::vector>::Type, 2, std::vector>::Type vecvecvecvecvec2;
  // Note that vecvecvecvec has the same type as vecvecvecvecvec2
  vecvec.resize(3);
}
