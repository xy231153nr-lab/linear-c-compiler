# linear-c-compiler
this is a variant of c predicated on the idea of jump reduction in order to work better for the cpu
# planed features
- optimisation
- loop unrolling
# current features
- [N/A]
# instructions for usage
1. clone this repository into a folder on your target device
2. run gcc on the lcc
  - it is recommended to use gcc -o lcc -O2 lcc.c to compile the c source code
3. input a .lc file into the compiler ./lcc "source file name"
