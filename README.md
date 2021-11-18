<img src="https://assets.website-files.com/6105315644a26f77912a1ada/610540e8b4cd6969794fe673_Holberton_School_logo-04-04.svg" height="150px" width="800px">

# Proyet our own printf in C

## Authors
1. Bruno Guerra
2. Edgar Condo

### Description
this function allows us print a type of date in a string give us

### Use
```C
int _printf(const char *format, ...);
```
### Format
A format specifier follows this prototype: `%type`
The following format specifiers are supported:

### Supported Types

| Type   | Output |
|--------|--------|
| d or i | Signed decimal integer |
| u      | Unsigned decimal integer	|
| b      | Unsigned binary |
| o      | Unsigned octal |
| x      | Unsigned hexadecimal integer (lowercase) |
| X      | Unsigned hexadecimal integer (uppercase) |
| c      | Single character |
| s      | String of characters |
| p      | Pointer address |
| %      | A % followed by another % character will write a single % |

### Value Returns
* if format is NULL = (-1)
* if format is '\0' = (0)
* else lenght of the string


