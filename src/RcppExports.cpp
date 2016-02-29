// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// vecMultinom
int vecMultinom(NumericVector probs);
RcppExport SEXP simstudy_vecMultinom(SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type probs(probsSEXP);
    __result = Rcpp::wrap(vecMultinom(probs));
    return __result;
END_RCPP
}
// matMultinom
Rcpp::IntegerVector matMultinom(Rcpp::NumericMatrix probmatrix);
RcppExport SEXP simstudy_matMultinom(SEXP probmatrixSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type probmatrix(probmatrixSEXP);
    __result = Rcpp::wrap(matMultinom(probmatrix));
    return __result;
END_RCPP
}