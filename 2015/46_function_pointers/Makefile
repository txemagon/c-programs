
number_sort: number_sort.o sorting_methods.o
	g++ number_sort.o sorting_methods.o -o number_sort


number_sort.o: number_sort.cpp sorting_methods.h
	g++ -c number_sort.cpp

sorting_methods.o: sorting_methods.cpp sorting_methods.h
	g++ -c sorting_methods.cpp

