# TestSuit.h
Testing suite for C/C++

## Example of use:
```c
#include "TestSuit.h"

TSNewTestSuit(2) // tests counts -> 2

TSTest("Testing TestSuit.h", {
	int a = 100;
	TSCheck(a == 100);
});

TSTest("Testing TestSuit.h 2", {
	int a = 100 > 150;
	TSCheck(a == 0);
});

TSEndTestSuit // End testing

```

