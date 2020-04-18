# vbench

testing https://vlang.io speed vs cpp.

run on

- i5 8250u (4 cores, 8 threads)
- 8 gb memory
- WSL ubuntu on Win 10

compile cpp command:
g++ -O3 -o {prog} {prog}.cpp

compile v command:
v -prod {prog}

## RESULTS:

- sortandprint:

cpp:
real 0m0.282s
user 0m0.094s
sys 0m0.172s

vlang:
real 0m0.276s
user 0m0.109s
sys 0m0.125s

C++ is not significantly faster.
