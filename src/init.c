#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* .Call calls */
extern SEXP r_astronomical_twilight(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP r_civil_twilight(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP r_day_astronomical_twilight_length(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP r_day_civil_twilight_length(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP r_day_length(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP r_day_nautical_twilight_length(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP r_nautical_twilight(SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP r_sun_rise_set(SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"r_astronomical_twilight",            (DL_FUNC) &r_astronomical_twilight,            5},
    {"r_civil_twilight",                   (DL_FUNC) &r_civil_twilight,                   5},
    {"r_day_astronomical_twilight_length", (DL_FUNC) &r_day_astronomical_twilight_length, 5},
    {"r_day_civil_twilight_length",        (DL_FUNC) &r_day_civil_twilight_length,        5},
    {"r_day_length",                       (DL_FUNC) &r_day_length,                       5},
    {"r_day_nautical_twilight_length",     (DL_FUNC) &r_day_nautical_twilight_length,     5},
    {"r_nautical_twilight",                (DL_FUNC) &r_nautical_twilight,                5},
    {"r_sun_rise_set",                     (DL_FUNC) &r_sun_rise_set,                     5},
    {NULL, NULL, 0}
};

void R_init_daybreak(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
