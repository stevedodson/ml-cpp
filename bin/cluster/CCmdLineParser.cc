/*
 * Copyright Elasticsearch B.V. and/or licensed to Elasticsearch B.V. under one
 * or more contributor license agreements. Licensed under the Elastic License;
 * you may not use this file except in compliance with the Elastic License.
 */
#include "CCmdLineParser.h"

#include <ver/CBuildInfo.h>

#include <boost/program_options.hpp>

#include <iostream>

namespace ml
{
namespace cluster
{

const std::string CCmdLineParser::DESCRIPTION =
"Usage: cluster [options]\n"
"Options:";


bool CCmdLineParser::parse(int argc,
                           const char * const *argv,
                           std::string &clusterField,
                           std::string &featureField,
                           std::string &paramsFile,
                           std::string &logProperties,
                           std::string &logPipe,
                           char &delimiter,
                           bool &lengthEncodedInput,
                           std::string &inputFileName,
                           bool &isInputFileNamedPipe,
                           std::string &outputFileName,
                           bool &isOutputFileNamedPipe)
{
    try
    {
        boost::program_options::options_description desc(DESCRIPTION);
        desc.add_options()
            ("help", "Display this information and exit")
            ("version", "Display version information and exit")
            ("clusterField", boost::program_options::value<std::string>(),
                        "The name of the field to cluster")
            ("featureField", boost::program_options::value<std::string>(),
                        "The name of the field which identifies features")
            ("paramsFile", boost::program_options::value<std::string>(),
                        "Optional clustering parameters file")
            ("logProperties", boost::program_options::value<std::string>(),
                        "Optional logger properties file")
            ("logPipe", boost::program_options::value<std::string>(),
                        "Optional log to named pipe")
            ("delimiter", boost::program_options::value<char>(),
                        "Optional delimiter character for delimited data formats - default is '\t' (tab separated)")
            ("lengthEncodedInput",
                        "Take input in length encoded binary format - default is delimited")
            ("input", boost::program_options::value<std::string>(),
                        "Optional file to read input from - not present means read from STDIN")
            ("inputIsPipe", "Specified input file is a named pipe")
            ("output", boost::program_options::value<std::string>(),
                        "Optional file to write output to - not present means write to STDOUT")
            ("outputIsPipe", "Specified output file is a named pipe")
        ;

        boost::program_options::variables_map vm;
        boost::program_options::store(boost::program_options::parse_command_line(argc, argv, desc), vm);
        boost::program_options::notify(vm);

        if (vm.count("help") > 0)
        {
            std::cerr << desc << std::endl;
            return false;
        }
        if (vm.count("version") > 0)
        {
            std::cerr << ver::CBuildInfo::fullInfo() << std::endl;
            return false;
        }
        if (vm.count("clusterField") > 0)
        {
            clusterField = vm["clusterField"].as<std::string>();
        }
        if (vm.count("featureField") > 0)
        {
            featureField = vm["featureField"].as<std::string>();
        }
        if (vm.count("paramsFile") > 0)
        {
            paramsFile = vm["paramsFile"].as<std::string>();
        }
        if (vm.count("logProperties") > 0)
        {
            logProperties = vm["logProperties"].as<std::string>();
        }
        if (vm.count("logPipe") > 0)
        {
            logPipe = vm["logPipe"].as<std::string>();
        }
        if (vm.count("delimiter") > 0)
        {
            delimiter = vm["delimiter"].as<char>();
        }
        if (vm.count("lengthEncodedInput") > 0)
        {
            lengthEncodedInput = true;
        }
        if (vm.count("input") > 0)
        {
            inputFileName = vm["input"].as<std::string>();
        }
        if (vm.count("inputIsPipe") > 0)
        {
            isInputFileNamedPipe = true;
        }
        if (vm.count("output") > 0)
        {
            outputFileName = vm["output"].as<std::string>();
        }
        if (vm.count("outputIsPipe") > 0)
        {
            isOutputFileNamedPipe = true;
        }
    }
    catch (std::exception &e)
    {
        std::cerr << "Error processing command line: " << e.what() << std::endl;
        return false;
    }

    return true;
}

}
}