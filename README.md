# Cpp-recursive-multidim-vector
Implement, via C++ templates, an multidimensional vector.

Usage:

Don't forget to include:

```#include "recursive_multidim_vector.hpp"```

```recursive_collection::wrapper<Type, Integer >= 0(std::size_t), Collection<Type, allocator>>

```recursive_collection::wrapper<T, N, C>::Type is C<C<C<...<T>>>; (There are N-dimensions)```

You can omit the allocator field if you want to use the standard one.
