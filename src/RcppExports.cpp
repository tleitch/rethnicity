// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// char_split
std::vector<std::string> char_split(std::string s);
RcppExport SEXP _rethnicity_char_split(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(char_split(s));
    return rcpp_result_gen;
END_RCPP
}
// test_cpp
int test_cpp(std::string model_path);
RcppExport SEXP _rethnicity_test_cpp(SEXP model_pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type model_path(model_pathSEXP);
    rcpp_result_gen = Rcpp::wrap(test_cpp(model_path));
    return rcpp_result_gen;
END_RCPP
}
// test_lastname
int test_lastname(std::string model_path);
RcppExport SEXP _rethnicity_test_lastname(SEXP model_pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type model_path(model_pathSEXP);
    rcpp_result_gen = Rcpp::wrap(test_lastname(model_path));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rethnicity_char_split", (DL_FUNC) &_rethnicity_char_split, 1},
    {"_rethnicity_test_cpp", (DL_FUNC) &_rethnicity_test_cpp, 1},
    {"_rethnicity_test_lastname", (DL_FUNC) &_rethnicity_test_lastname, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_rethnicity(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}