/*
 * Copyright Elasticsearch B.V. and/or licensed to Elasticsearch B.V. under one
 * or more contributor license agreements. Licensed under the Elastic License;
 * you may not use this file except in compliance with the Elastic License.
 */

#ifndef INCLUDED_ml_config_CDetectorEnumerator_h
#define INCLUDED_ml_config_CDetectorEnumerator_h

#include <config/ConfigTypes.h>
#include <config/ImportExport.h>

#include <boost/optional.hpp>

#include <functional>
#include <string>
#include <vector>

namespace ml {
namespace config {
class CAutoconfigurerParams;
class CDetectorSpecification;

//! \brief Generates  detector configurations.
//!
//! DESCRIPTION:\n
//! This generates all candidate detectors using sets of candidate function
//! argument and partitioning fields.
//!
//! IMPLEMENTATION:\n
//! This is essentially the builder pattern. The intention is that suitable
//! fields are added one at a time based on their statistical properties
//! and once all fields have been added the configurations are generated.
class CONFIG_EXPORT CDetectorEnumerator {
public:
    using TDetectorSpecificationVec = std::vector<CDetectorSpecification>;

public:
    CDetectorEnumerator(const CAutoconfigurerParams& params);

    //! \name Builder Interface
    //@{
    //! Add a function.
    void addFunction(config_t::EFunctionCategory category);

    //! Add a candidate for a categorical function argument.
    void addCategoricalFunctionArgument(const std::string& argument);

    //! Add a candidate for a metric function argument.
    void addMetricFunctionArgument(const std::string& argument);

    //! Add a candidate by field.
    void addByField(const std::string& by);

    //! Add a candidate by field for a rare detector.
    void addRareByField(const std::string& by);

    //! Add a candidate over field.
    void addOverField(const std::string& over);

    //! Add a candidate partition field.
    void addPartitionField(const std::string& partition);
    //@}

    //! Generate all the  detectors.
    //!
    //! All detectors which can be built out of the functions and argument,
    //! by, over and partition fields added so far are appended to \p result.
    void generate(TDetectorSpecificationVec& result);

private:
    using TStrVec = std::vector<std::string>;
    using TOptionalStr = boost::optional<std::string>;
    using TFunctionCategoryVec = std::vector<config_t::EFunctionCategory>;
    using TAutoconfigurerParamsCRef = std::reference_wrapper<const CAutoconfigurerParams>;

private:
    //! Add the detectors with no partitioning fields.
    void generateNoPartitioning(TDetectorSpecificationVec& result) const;

    //! Add the detectors with one partitioning field.
    //!
    //! The indices \p a and \p b define the start and end of the seed
    //! detectors in \p result used to generate detectors with one
    //! partitioning field.
    void addOnePartitioning(std::size_t a, std::size_t b, TDetectorSpecificationVec& result) const;

    //! Add the detectors with two partitioning fields.
    //!
    //! The indices \p a and \p b define the start and end of the seed
    //! detectors in \p result used to generate detectors with two
    //! partitioning fields.
    void addTwoPartitioning(std::size_t a, std::size_t b, TDetectorSpecificationVec& result) const;

    //! Add the detectors with three partitioning fields.
    //!
    //! The indices \p a and \p b define the start and end of the seed
    //! detectors in \p result used to generate detectors with three
    //! partitioning fields.
    void addThreePartitioning(std::size_t a, std::size_t b, TDetectorSpecificationVec& result) const;

private:
    //! The parameters.
    TAutoconfigurerParamsCRef m_Params;

    //! The list of functions to be considered.
    TFunctionCategoryVec m_Functions;

    //! Candidate field names for arguments categorical functions.
    TStrVec m_CandidateCategoricalFunctionArguments;

    //! Candidate arguments for metric functions.
    TStrVec m_CandidateMetricFunctionArguments;

    //! Candidate by fields.
    TStrVec m_CandidateByFields;

    //! Candidate by fields for rare commands.
    TStrVec m_CandidateRareByFields;

    //! Candidate over fields.
    TStrVec m_CandidateOverFields;

    //! Candidate partition fields.
    TStrVec m_CandidatePartitionFields;
};
}
}

#endif // INCLUDED_ml_config_CDetectorEnumerator_h
