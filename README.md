# vbench

testing https://vlang.io speed vs cpp.

run on

- i5 8250u (4 cores, 8 threads)
- 8 gb memory
- WSL ubuntu on Win 10

compile cpp command:
make [prog] && ./prog

compile v command:
v -prod [prog] && ./prog

## RESULTS:

- sortandprint:

cpp:
real 0m0.747s
user 0m0.641s
sys 0m0.109s

vlang:
real 0m0.276s
user 0m0.109s
sys 0m0.125s

Vlang is six times faster.
