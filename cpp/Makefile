CXXFLAG=-std=c++11 -Wpedantic -Wall -Wextra -Werror -Weffc++ -Wzeros-as-null-pointer-constant
CFLAGS=-std=c99 -pedantic -Wall -Wextra -Werror -ansi -Wwrite-strings
run:
	clang++ -std=c++11 -stdlib=libc++ -Weverything ./cpp/AddParenth.cpp -o output
	./output
clean:
	/bin/rm ./output
