/*
 * Copyright Elasticsearch B.V. and/or licensed to Elasticsearch B.V. under one
 * or more contributor license agreements. Licensed under the Elastic License;
 * you may not use this file except in compliance with the Elastic License.
 */

#ifndef INCLUDED_CGammaRateConjugateTest_h
#define INCLUDED_CGammaRateConjugateTest_h

#include <cppunit/extensions/HelperMacros.h>

class CGammaRateConjugateTest : public CppUnit::TestFixture
{
    public:
        void testMultipleUpdate();
        void testPropagation();
        void testShapeEstimation();
        void testRateEstimation();
        void testMarginalLikelihood();
        void testMarginalLikelihoodMean();
        void testMarginalLikelihoodMode();
        void testMarginalLikelihoodVariance();
        void testSampleMarginalLikelihood();
        void testCdf();
        void testProbabilityOfLessLikelySamples();
        void testAnomalyScore();
        void testOffset();
        void testIntegerData();
        void testLowVariationData();
        void testPersist();
        void testVarianceScale();
        void testNegativeSample();

        static CppUnit::Test *suite();
};

#endif // INCLUDED_CGammaRateConjugateTest_h
