# Hex-Decimal Converter
Simple hex-decimal converter console application written with c++. <br />
You can convert any hex or decimal value with these simple lines of codes: <br />
Hex to decimal converter: <br />
```
long n = strtol(str, NULL, 16);
sprintf_s(str, "%1d", n);
``` 
<br />
Wich `n` is the entered hex code and `str` is the converted hex value as `char[]`.
Decimal to hex converter: <br />
`sprintf_s(str, "%x", d);` <br />
Wich `d` id the decimal value and `str` is the converted decimal value as a `char[]`.
## Adjustement
To start using this code you need to import these `include` statements: <br />
```
#include "stdafx.h"
#include <iostream>
#include <conio.h> 
```
## Software
This project was created using Microsoft Visual Studio 2017 - .NET Framework 4.6.1 .
## Extras
If you have any idea that can improve project or is there any bugs that you've solved,
submit it in Pull Requests or email me. 
