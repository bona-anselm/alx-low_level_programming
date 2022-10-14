This project exposed us to variadic functions.
`Variadic functions` are functions that takes variable number of arguments and types. `C` itself doesn't support variadic fnction but provides a standard library for that known as `<stdarg.h>`. This library provides __argument access macros__ used to retrieve variable arguments.
They're 

`va_list` - used for argument pointer variables

`va_start(va_list ap, last-required) ` 
This macro initializes the argument pointer variable ap to point to the first of the optional arguments of the current function; __last-required__ must be the last required argument to the function.

`va_arg(va_list ap, type)` - This macro returns the value of the next optional argument, and modifies the value of ap to point to the subsequent argument. Thus, successive uses of `va_arg` return successive optional arguments.

`va_end(va_list ap)` - This ends the use of ap. After a `va_end` call, further `va_arg` calls with the same `ap` may not work. 

`void va_copy (va_list dest, va_list src)` - This  macro allows copying of objects of type `va_list` even if this is not an integral type. The argument pointer in `dest` is initialized to point to the same argument as the pointer in `src`.
