#ifndef RECURSIVE_MULTIDIM_VECTOR_INCLUDED
#define RECURSIVE_MULTIDIM_VECTOR_INCLUDED

#include <cstddef> // std::size_t
#include <vector>  // std::vector // o nome ja diz
class multidim_vector {
private:
	template <class T, std::size_t N, template <class> class R> class multidim_vector_wrapper;
	template <class T, std::size_t N, template <class> class R> class multidim_vector_wrapper {
	public:
		using Type = R<typename multidim_vector_wrapper<T, N - 1, R>::Type>;
	};
	template <class T, template<class> class _> class multidim_vector_wrapper<T, 0, _> {
	public:
		using Type = T;
	};
	template <class T> using md_vec_internal = std::vector<T, std::allocator<T>>;
public:
	template <class T, std::size_t N> using Type = typename multidim_vector_wrapper<T, N, md_vec_internal>::Type;
};
#endif
