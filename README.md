# lcc
lcc is short for the linear c compiler and is built off c and the gcc<br>
lcc by defualt will support the following file types:<br>
file.c<br>
file.cpp<br>
file.lc
---
example usage<br>
`lcc example.c` or `lcc example.cpp` or `lcc example.lc`
# lcc comand structure
the compiler comand `lcc` has a static structure which is as follows<br>
`lcc` [file flag] [compilation flags] [output flag]<br>
**note:**<br>
the file flag is optional in the case of single file compilation<br>
the compilation flags and output flags are optional in most cases
# lcc flags
**file flags:**<br>
`[file]` is used to compile a singlefile<br>
`-mf [n][files]` is used when compiling multiple files n must be the number of files 
you are compiling<br>
---
**compilation flags:**<br>
`-ASCII` enable ascii usage for preprocesser<br>
`-allow-dangling-statements` enables c like curly bracket implementation<br>
`-InfiniteLoops` allows for limitless recursion<br>
`-LoopLimit` set recursion limit 128 by default<br>
`-noWarning` disable warnings<br>
`-noBuiltin` disables builtin functions<br>
`no-spec-ptrs`disables seprae pointer usage in compiled code<br>
`-O[n]`signals optimisation level 1 by default there are 4 levels 0 for no 
optimisation 1 for basic optimisation 2 for mid-level optimisation 3 for 
extreme optimistation<br>
`-static` disables dynamic linking<br>
`-verbose` enable verbose error/warning output<br>
`-Werrors` treat warnings as errors
---
**output flags:**<br>
`-arch=[architecture]` to specify the target architecture for asembly genration 
defaults to the hardwares architecture<br>
`-o` to specify the output file<br>
`-S` to stop compilation after the programs asembly is genrated<br>
---
**other flags:**<br>
`-help` print out this file<br>
`-h` refer to `-help`<br>
`-version` print version info<br>
`-v` refer to`-version`<br>
