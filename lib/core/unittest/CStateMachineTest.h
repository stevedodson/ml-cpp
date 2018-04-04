/*
 * Copyright Elasticsearch B.V. and/or licensed to Elasticsearch B.V. under one
 * or more contributor license agreements. Licensed under the Elastic License;
 * you may not use this file except in compliance with the Elastic License.
 */

#ifndef INCLUDED_CStateMachineTest_h
#define INCLUDED_CStateMachineTest_h

#include <cppunit/extensions/HelperMacros.h>

class CStateMachineTest : public CppUnit::TestFixture
{
    public:
        void testBasics();
        void testPersist();
        void testMultithreaded();

        static CppUnit::Test *suite();
};

#endif // INCLUDED_CStateMachineTest_h
