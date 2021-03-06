/*
 * Copyright Elasticsearch B.V. and/or licensed to Elasticsearch B.V. under one
 * or more contributor license agreements. Licensed under the Elastic License;
 * you may not use this file except in compliance with the Elastic License.
 */

#include <test/CTestRunner.h>

#include "CAgglomerativeClustererTest.h"
#include "CAssignmentTest.h"
#include "CBasicStatisticsTest.h"
#include "CBayesianOptimisationTest.h"
#include "CBjkstUniqueValuesTest.h"
#include "CBoostedTreeTest.h"
#include "CBootstrapClustererTest.h"
#include "CBoundingBoxTest.h"
#include "CCalendarComponentAdaptiveBucketingTest.h"
#include "CCalendarCyclicTestTest.h"
#include "CCalendarFeatureTest.h"
#include "CCategoricalToolsTest.h"
#include "CChecksumTest.h"
#include "CClustererTest.h"
#include "CCountMinSketchTest.h"
#include "CDataFrameCategoryEncoderTest.h"
#include "CDataFrameUtilsTest.h"
#include "CDecayRateControllerTest.h"
#include "CEntropySketchTest.h"
#include "CEqualWithToleranceTest.h"
#include "CExpandingWindowTest.h"
#include "CForecastTest.h"
#include "CGammaRateConjugateTest.h"
#include "CInformationCriteriaTest.h"
#include "CIntegerToolsTest.h"
#include "CIntegrationTest.h"
#include "CKMeansOnlineTest.h"
#include "CKMeansTest.h"
#include "CKMostCorrelatedTest.h"
#include "CKdTreeTest.h"
#include "CLassoLogisticRegressionTest.h"
#include "CLbfgsTest.h"
#include "CLeastSquaresOnlineRegressionTest.h"
#include "CLinearAlgebraTest.h"
#include "CLogNormalMeanPrecConjugateTest.h"
#include "CLogTDistributionTest.h"
#include "CMathsFuncsTest.h"
#include "CMathsMemoryTest.h"
#include "CMicTest.h"
#include "CMixtureDistributionTest.h"
#include "CModelTest.h"
#include "CMultimodalPriorTest.h"
#include "CMultinomialConjugateTest.h"
#include "CMultivariateConstantPriorTest.h"
#include "CMultivariateMultimodalPriorTest.h"
#include "CMultivariateNormalConjugateTest.h"
#include "CMultivariateOneOfNPriorTest.h"
#include "CNaiveBayesTest.h"
#include "CNaturalBreaksClassifierTest.h"
#include "CNormalMeanPrecConjugateTest.h"
#include "COneOfNPriorTest.h"
#include "COrderingsTest.h"
#include "COrdinalTest.h"
#include "COrthogonaliserTest.h"
#include "COutliersTest.h"
#include "CPRNGTest.h"
#include "CPeriodicityHypothesisTestsTest.h"
#include "CPoissonMeanConjugateTest.h"
#include "CPriorTest.h"
#include "CProbabilityAggregatorsTest.h"
#include "CProbabilityCalibratorTest.h"
#include "CQDigestTest.h"
#include "CQuantileSketchTest.h"
#include "CRadialBasisFunctionTest.h"
#include "CRandomProjectionClustererTest.h"
#include "CRandomizedPeriodicityTestTest.h"
#include "CSamplingTest.h"
#include "CSeasonalComponentAdaptiveBucketingTest.h"
#include "CSeasonalComponentTest.h"
#include "CSetToolsTest.h"
#include "CSignalTest.h"
#include "CSolversTest.h"
#include "CSplineTest.h"
#include "CStatisticalTestsTest.h"
#include "CTimeSeriesChangeDetectorTest.h"
#include "CTimeSeriesDecompositionTest.h"
#include "CTimeSeriesModelTest.h"
#include "CTimeSeriesMultibucketFeaturesTest.h"
#include "CTimeSeriesSegmentationTest.h"
#include "CToolsTest.h"
#include "CTrendComponentTest.h"
#include "CXMeansOnline1dTest.h"
#include "CXMeansOnlineTest.h"
#include "CXMeansTest.h"

int main(int argc, const char** argv) {
    ml::test::CTestRunner runner(argc, argv);

    runner.addTest(CAgglomerativeClustererTest::suite());
    runner.addTest(CAssignmentTest::suite());
    runner.addTest(CBasicStatisticsTest::suite());
    runner.addTest(CBayesianOptimisationTest::suite());
    runner.addTest(CBjkstUniqueValuesTest::suite());
    runner.addTest(CBoostedTreeTest::suite());
    runner.addTest(CBootstrapClustererTest::suite());
    runner.addTest(CBoundingBoxTest::suite());
    runner.addTest(CCategoricalToolsTest::suite());
    runner.addTest(CCalendarComponentAdaptiveBucketingTest::suite());
    runner.addTest(CCalendarCyclicTestTest::suite());
    runner.addTest(CCalendarFeatureTest::suite());
    runner.addTest(CChecksumTest::suite());
    runner.addTest(CClustererTest::suite());
    runner.addTest(CCountMinSketchTest::suite());
    runner.addTest(CDataFrameCategoryEncoderTest::suite());
    runner.addTest(CDataFrameUtilsTest::suite());
    runner.addTest(CDecayRateControllerTest::suite());
    runner.addTest(CEqualWithToleranceTest::suite());
    runner.addTest(CEntropySketchTest::suite());
    runner.addTest(CExpandingWindowTest::suite());
    runner.addTest(CForecastTest::suite());
    runner.addTest(CGammaRateConjugateTest::suite());
    runner.addTest(CInformationCriteriaTest::suite());
    runner.addTest(CIntegerToolsTest::suite());
    runner.addTest(CIntegrationTest::suite());
    runner.addTest(CKdTreeTest::suite());
    runner.addTest(CKMeansTest::suite());
    runner.addTest(CKMeansOnlineTest::suite());
    runner.addTest(CKMostCorrelatedTest::suite());
    runner.addTest(CLassoLogisticRegressionTest::suite());
    runner.addTest(CLbfgsTest::suite());
    runner.addTest(CLeastSquaresOnlineRegressionTest::suite());
    runner.addTest(CLinearAlgebraTest::suite());
    runner.addTest(COutliersTest::suite());
    runner.addTest(CLogNormalMeanPrecConjugateTest::suite());
    runner.addTest(CLogTDistributionTest::suite());
    runner.addTest(CMathsFuncsTest::suite());
    runner.addTest(CMathsMemoryTest::suite());
    runner.addTest(CMicTest::suite());
    runner.addTest(CMixtureDistributionTest::suite());
    runner.addTest(CModelTest::suite());
    runner.addTest(CMultimodalPriorTest::suite());
    runner.addTest(CMultinomialConjugateTest::suite());
    runner.addTest(CMultivariateConstantPriorTest::suite());
    runner.addTest(CMultivariateMultimodalPriorTest::suite());
    runner.addTest(CMultivariateNormalConjugateTest::suite());
    runner.addTest(CMultivariateOneOfNPriorTest::suite());
    runner.addTest(CNaiveBayesTest::suite());
    runner.addTest(CNaturalBreaksClassifierTest::suite());
    runner.addTest(CNormalMeanPrecConjugateTest::suite());
    runner.addTest(COneOfNPriorTest::suite());
    runner.addTest(COrderingsTest::suite());
    runner.addTest(COrdinalTest::suite());
    runner.addTest(COrthogonaliserTest::suite());
    runner.addTest(CPeriodicityHypothesisTestsTest::suite());
    runner.addTest(CPoissonMeanConjugateTest::suite());
    runner.addTest(CPriorTest::suite());
    runner.addTest(CPRNGTest::suite());
    runner.addTest(CProbabilityAggregatorsTest::suite());
    runner.addTest(CProbabilityCalibratorTest::suite());
    runner.addTest(CQDigestTest::suite());
    runner.addTest(CQuantileSketchTest::suite());
    runner.addTest(CRadialBasisFunctionTest::suite());
    runner.addTest(CRandomProjectionClustererTest::suite());
    runner.addTest(CRandomizedPeriodicityTestTest::suite());
    runner.addTest(CSamplingTest::suite());
    runner.addTest(CSeasonalComponentTest::suite());
    runner.addTest(CSeasonalComponentAdaptiveBucketingTest::suite());
    runner.addTest(CSetToolsTest::suite());
    runner.addTest(CSignalTest::suite());
    runner.addTest(CSolversTest::suite());
    runner.addTest(CSplineTest::suite());
    runner.addTest(CStatisticalTestsTest::suite());
    runner.addTest(CTimeSeriesChangeDetectorTest::suite());
    runner.addTest(CTimeSeriesDecompositionTest::suite());
    runner.addTest(CTimeSeriesModelTest::suite());
    runner.addTest(CTimeSeriesMultibucketFeaturesTest::suite());
    runner.addTest(CTimeSeriesSegmentationTest::suite());
    runner.addTest(CToolsTest::suite());
    runner.addTest(CTrendComponentTest::suite());
    runner.addTest(CXMeansTest::suite());
    runner.addTest(CXMeansOnlineTest::suite());
    runner.addTest(CXMeansOnline1dTest::suite());

    return !runner.runTests();
}
