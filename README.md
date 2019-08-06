# Cpp-recursive-multidim-vector
Implement, via C++ templates, an multidimensional vector.

Usage:

Don't forget to include:

```#include "recursive_multidim_vector.hpp"```

```recursive_collection::wrapper<Type, Integer >= 0(std::size_t), Collection>```

Collection is a template that recieves a Type and an allocator.


```recursive_collection::wrapper<T, N, C>::Type is C<C<C<...<T>>>; (There are N-dimensions)```

The last field is the allocator. However you can omit it if you want to use the standard one.
