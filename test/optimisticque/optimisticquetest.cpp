/*
 *  optimisticquetest.cpp
 *  Created on: 2013-8-17
 *	    Author: qianqians
 *  optimisticque��׼����
 */
#include <optimisticque.h>
#include <base_test.h>

int main(){
	base_test<lock_free::optimisticque<test> > test;
	test(10);

	return 1;
}