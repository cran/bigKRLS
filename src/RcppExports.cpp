// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// BigDerivMat
void BigDerivMat(SEXP pX, SEXP pK, SEXP pVCovMatC, SEXP pDerivatives, SEXP pVarAvgDerivatives, const arma::colvec Xsd, const arma::colvec coeffs, const double sigma);
RcppExport SEXP bigKRLS_BigDerivMat(SEXP pXSEXP, SEXP pKSEXP, SEXP pVCovMatCSEXP, SEXP pDerivativesSEXP, SEXP pVarAvgDerivativesSEXP, SEXP XsdSEXP, SEXP coeffsSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pX(pXSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pK(pKSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pVCovMatC(pVCovMatCSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pDerivatives(pDerivativesSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pVarAvgDerivatives(pVarAvgDerivativesSEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type Xsd(XsdSEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type coeffs(coeffsSEXP);
    Rcpp::traits::input_parameter< const double >::type sigma(sigmaSEXP);
    BigDerivMat(pX, pK, pVCovMatC, pDerivatives, pVarAvgDerivatives, Xsd, coeffs, sigma);
    return R_NilValue;
END_RCPP
}
// BigCrossProd
void BigCrossProd(SEXP pA, SEXP pB, SEXP pOut);
RcppExport SEXP bigKRLS_BigCrossProd(SEXP pASEXP, SEXP pBSEXP, SEXP pOutSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pA(pASEXP);
    Rcpp::traits::input_parameter< SEXP >::type pB(pBSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pOut(pOutSEXP);
    BigCrossProd(pA, pB, pOut);
    return R_NilValue;
END_RCPP
}
// BigEigen
void BigEigen(SEXP pA, const double Eigtrunc, SEXP pValBigMat, SEXP pVecBigMat);
RcppExport SEXP bigKRLS_BigEigen(SEXP pASEXP, SEXP EigtruncSEXP, SEXP pValBigMatSEXP, SEXP pVecBigMatSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pA(pASEXP);
    Rcpp::traits::input_parameter< const double >::type Eigtrunc(EigtruncSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pValBigMat(pValBigMatSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pVecBigMat(pVecBigMatSEXP);
    BigEigen(pA, Eigtrunc, pValBigMat, pVecBigMat);
    return R_NilValue;
END_RCPP
}
// BigGaussKernel
void BigGaussKernel(SEXP pA, SEXP pOut, const double sigma);
RcppExport SEXP bigKRLS_BigGaussKernel(SEXP pASEXP, SEXP pOutSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pA(pASEXP);
    Rcpp::traits::input_parameter< SEXP >::type pOut(pOutSEXP);
    Rcpp::traits::input_parameter< const double >::type sigma(sigmaSEXP);
    BigGaussKernel(pA, pOut, sigma);
    return R_NilValue;
END_RCPP
}
// BigMultDiag
void BigMultDiag(SEXP pA, const arma::rowvec diag, SEXP pOut);
RcppExport SEXP bigKRLS_BigMultDiag(SEXP pASEXP, SEXP diagSEXP, SEXP pOutSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pA(pASEXP);
    Rcpp::traits::input_parameter< const arma::rowvec >::type diag(diagSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pOut(pOutSEXP);
    BigMultDiag(pA, diag, pOut);
    return R_NilValue;
END_RCPP
}
// BigSolveForc
List BigSolveForc(SEXP pEigenvectors, const arma::colvec Eigenvalues, const arma::colvec y, const double lambda);
RcppExport SEXP bigKRLS_BigSolveForc(SEXP pEigenvectorsSEXP, SEXP EigenvaluesSEXP, SEXP ySEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pEigenvectors(pEigenvectorsSEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type Eigenvalues(EigenvaluesSEXP);
    Rcpp::traits::input_parameter< const arma::colvec >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(BigSolveForc(pEigenvectors, Eigenvalues, y, lambda));
    return rcpp_result_gen;
END_RCPP
}
// BigTCrossProd
void BigTCrossProd(SEXP pA, SEXP pB, SEXP pOut);
RcppExport SEXP bigKRLS_BigTCrossProd(SEXP pASEXP, SEXP pBSEXP, SEXP pOutSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pA(pASEXP);
    Rcpp::traits::input_parameter< SEXP >::type pB(pBSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pOut(pOutSEXP);
    BigTCrossProd(pA, pB, pOut);
    return R_NilValue;
END_RCPP
}
// BigTempKernel
void BigTempKernel(SEXP pA, SEXP pB, SEXP pOut, const double sigma);
RcppExport SEXP bigKRLS_BigTempKernel(SEXP pASEXP, SEXP pBSEXP, SEXP pOutSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pA(pASEXP);
    Rcpp::traits::input_parameter< SEXP >::type pB(pBSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pOut(pOutSEXP);
    Rcpp::traits::input_parameter< const double >::type sigma(sigmaSEXP);
    BigTempKernel(pA, pB, pOut, sigma);
    return R_NilValue;
END_RCPP
}