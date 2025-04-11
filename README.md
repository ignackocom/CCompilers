# CCompilers
C Compiler constants and macros for determining compiler

Example of use

```
#if COMPILER == 0
#error "Unknown compiler"
#endif

#if COMPILER == COMPILER_MICROSOFT_VISUAL_CPP
...
Visual studio c code
...
#elif  COMPILER == COMPILER_BORLAND_CPP
...
Borland cpp code
...
#else
...
other code
...
#endif
```

NOTE: 
it is not fully tested, 
because it is quite impossible to test all combinations, 
you can make a copy of the source codes and change the code as needed


# History of changes ...
2025 04 11 CompilerKEILCARM.h bug fixed<br/>
