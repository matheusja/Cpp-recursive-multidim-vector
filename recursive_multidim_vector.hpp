#ifndef RECURSIVE_MULTIDIM_VECTOR_INCLUDED
#define RECURSIVE_MULTIDIM_VECTOR_INCLUDED

#include <cstddef> // std::size_t
#include <memory>  // std::alocator
class recursive_collection {
public:
  template <class T, std::size_t N, template <class Tc, class TcAllocator = std::allocator<Tc>> class C, class TAllocator = std::allocator<T>> class wrapper {
	public:
		typedef C<typename wrapper<T, N - 1, C, TAllocator>::Type> Type;
  };
  //"default template arguments may not be used in partial specializations" error, not using default template arguments anymore
  template <class T, template <class Tc, class TcAllocator = std::allocator<Tc>> class C, class TAllocator> class wrapper<T, 0, C, TAllocator> {
  public:
		typedef T Type;
  };
  template <class T, template <class Tc, class TcAllocator = std::allocator<Tc>> class C> class wrapper<T, 0, C, std::allocator<T>> {
  public:
  		typedef T Type;
  };
};
#endif
