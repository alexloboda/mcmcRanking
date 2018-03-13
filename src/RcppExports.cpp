// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mcmc_subgraph_internal
IntegerVector mcmc_subgraph_internal(DataFrame df_edges, IntegerVector args);
RcppExport SEXP _mcmcRanking_mcmc_subgraph_internal(SEXP df_edgesSEXP, SEXP argsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df_edges(df_edgesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type args(argsSEXP);
    rcpp_result_gen = Rcpp::wrap(mcmc_subgraph_internal(df_edges, args));
    return rcpp_result_gen;
END_RCPP
}
// mcmc_sample_internal
IntegerVector mcmc_sample_internal(DataFrame df_edges, DataFrame df_nodes, IntegerVector args);
RcppExport SEXP _mcmcRanking_mcmc_sample_internal(SEXP df_edgesSEXP, SEXP df_nodesSEXP, SEXP argsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df_edges(df_edgesSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type df_nodes(df_nodesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type args(argsSEXP);
    rcpp_result_gen = Rcpp::wrap(mcmc_sample_internal(df_edges, df_nodes, args));
    return rcpp_result_gen;
END_RCPP
}
// mcmc_onelong_internal
IntegerVector mcmc_onelong_internal(DataFrame df_edges, DataFrame df_nodes, IntegerVector args);
RcppExport SEXP _mcmcRanking_mcmc_onelong_internal(SEXP df_edgesSEXP, SEXP df_nodesSEXP, SEXP argsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df_edges(df_edgesSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type df_nodes(df_nodesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type args(argsSEXP);
    rcpp_result_gen = Rcpp::wrap(mcmc_onelong_internal(df_edges, df_nodes, args));
    return rcpp_result_gen;
END_RCPP
}
// mcmc_onelong_frequency_internal
IntegerVector mcmc_onelong_frequency_internal(DataFrame df_edges, DataFrame df_nodes, IntegerVector args);
RcppExport SEXP _mcmcRanking_mcmc_onelong_frequency_internal(SEXP df_edgesSEXP, SEXP df_nodesSEXP, SEXP argsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df_edges(df_edgesSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type df_nodes(df_nodesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type args(argsSEXP);
    rcpp_result_gen = Rcpp::wrap(mcmc_onelong_frequency_internal(df_edges, df_nodes, args));
    return rcpp_result_gen;
END_RCPP
}
// real_prob_internal
NumericVector real_prob_internal(DataFrame df_edges, DataFrame df_nodes);
RcppExport SEXP _mcmcRanking_real_prob_internal(SEXP df_edgesSEXP, SEXP df_nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type df_edges(df_edgesSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type df_nodes(df_nodesSEXP);
    rcpp_result_gen = Rcpp::wrap(real_prob_internal(df_edges, df_nodes));
    return rcpp_result_gen;
END_RCPP
}
// accurate_sum
NumericVector accurate_sum(NumericVector v);
RcppExport SEXP _mcmcRanking_accurate_sum(SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(accurate_sum(v));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mcmcRanking_mcmc_subgraph_internal", (DL_FUNC) &_mcmcRanking_mcmc_subgraph_internal, 2},
    {"_mcmcRanking_mcmc_sample_internal", (DL_FUNC) &_mcmcRanking_mcmc_sample_internal, 3},
    {"_mcmcRanking_mcmc_onelong_internal", (DL_FUNC) &_mcmcRanking_mcmc_onelong_internal, 3},
    {"_mcmcRanking_mcmc_onelong_frequency_internal", (DL_FUNC) &_mcmcRanking_mcmc_onelong_frequency_internal, 3},
    {"_mcmcRanking_real_prob_internal", (DL_FUNC) &_mcmcRanking_real_prob_internal, 2},
    {"_mcmcRanking_accurate_sum", (DL_FUNC) &_mcmcRanking_accurate_sum, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_mcmcRanking(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
