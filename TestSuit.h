// ====================== TestSuit.h | ¡Testing cool! =======================
// All rights reserved. Use of this source code is governed by an MIT license
// that can be found in the LICENSE file. Copyright (c) 2020 Stunx.
// ==========================================================================

#ifndef TS_H
#define TS_H

#ifndef __cplusplus
#include <stdio.h>
#else
#include <iostream>
using namespace std;
#endif

#ifndef __cplusplus
typedef
#endif
struct TestSuite {
	int ok_cnt;
	int fail_cnt;
	int tests_cnt;
	int actual_cnt;
	
#ifdef __cplusplus
	TestSuite(int total_tests) : tests_cnt(total_tests), actual_cnt(1) {}
#endif
}
#ifndef __cplusplus
TestSuite
#endif
;

TestSuite new_ts(int total) {
#ifndef __cplusplus
	return (TestSuite) { .tests_cnt = total, .actual_cnt = 1 };
#else
	return TestSuite(total);
#endif
}

#ifndef __cplusplus
	#define TSInternalTestHeader(name) \
		printf("[%d/%d] test '%s' - ", TSUI_OBJ10293.actual_cnt, \
									TSUI_OBJ10293.tests_cnt, name);
#else
	#define TSInternalTestHeader(name) \
		cout << "[" << TSUI_OBJ10293.actual_cnt << "/" \
		<< TSUI_OBJ10293.tests_cnt << "]" << " test " << "'" \
		<< name << "' - ";
#endif

#define TSNewTestSuit(test_count) \
	int main(int argc, char** argv) { \
		TestSuite TSUI_OBJ10293 = new_ts(test_count);

#define TSCheck(expr) res = expr

// For 'OK' and 'FAILED'
#ifndef __cplusplus
	#define TSInternalPrint(state) printf("%s\n", state)
#else
	#define TSInternalPrint(state) cout << state << endl
#endif

#define TSTest(name, stmtsToTest) \
	{ \
		TSInternalTestHeader(name) \
		TSUI_OBJ10293.actual_cnt++; \
		int res = 0; \
		stmtsToTest \
		if (res) { \
			TSUI_OBJ10293.ok_cnt++; \
			TSInternalPrint("OK"); \
		} else { \
			TSUI_OBJ10293.fail_cnt++; \
			TSInternalPrint("FAILED"); \
		} \
	}

#ifndef __cplusplus
	#define TSEndTestSuit \
			printf( \
				"All tests have been tested, results: %d OK and %d FAILED.\n", \
				TSUI_OBJ10293.ok_cnt, \
				TSUI_OBJ10293.fail_cnt \
			); \
		} 
#else
	#define TSEndTestSuit \
			cout << "All tests have been tested, results: " \
				 << TSUI_OBJ10293.ok_cnt \
				 << " OK and " \
				 << TSUI_OBJ10293.fail_cnt \
				 << " FAILED." \
				 << endl; \
		}
#endif

#endif // TS_H
