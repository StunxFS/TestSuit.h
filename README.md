# TestSuit.h
Testing suit for C/C++

## Example of use:
```c
#include "TestSuit.h"

TSNewTestSuit(2) // tests counts -> 2

TSTest("Testing TestSuit.h", {
	int a = 100;
	TSCheck(a == 100);
});

TSEndTestSuit // End testing

```

