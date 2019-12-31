#include <R.h>
#include <Rinternals.h>

#include "sunriset.h"

SEXP r_day_length(SEXP year, SEXP month, SEXP day, SEXP lon, SEXP lat) {

  SEXP out = PROTECT(allocVector(REALSXP, 1));
  REAL(out)[0] = day_length(
    asInteger(year), asInteger(month), asInteger(day), asReal(lon), asReal(lat)
  );
  UNPROTECT(1);

  return(out);

}

SEXP r_day_civil_twilight_length(SEXP year, SEXP month, SEXP day, SEXP lon, SEXP lat) {

  SEXP out = PROTECT(allocVector(REALSXP, 1));
  REAL(out)[0] = day_civil_twilight_length(
    asInteger(year), asInteger(month), asInteger(day), asReal(lon), asReal(lat)
  );
  UNPROTECT(1);

  return(out);

}

SEXP r_day_nautical_twilight_length(SEXP year, SEXP month, SEXP day, SEXP lon, SEXP lat) {

  SEXP out = PROTECT(allocVector(REALSXP, 1));
  REAL(out)[0] = day_nautical_twilight_length(
    asInteger(year), asInteger(month), asInteger(day), asReal(lon), asReal(lat)
  );
  UNPROTECT(1);

  return(out);

}

SEXP r_day_astronomical_twilight_length(SEXP year, SEXP month, SEXP day, SEXP lon, SEXP lat) {

  SEXP out = PROTECT(allocVector(REALSXP, 1));
  REAL(out)[0] = day_astronomical_twilight_length(
    asInteger(year), asInteger(month), asInteger(day), asReal(lon), asReal(lat)
  );
  UNPROTECT(1);

  return(out);

}

SEXP r_sun_rise_set(SEXP year, SEXP month, SEXP day, SEXP lon, SEXP lat) {

  double rise, set;

  int res = sun_rise_set(
    asInteger(year), asInteger(month), asInteger(day), asReal(lon), asReal(lat),
    &rise, &set
  );

  const char *names[] = {
    "rise",
    "set",
    ""
  };

  SEXP out = PROTECT(mkNamed(VECSXP, names));

  if (res == 0) {
    SET_VECTOR_ELT(out, 0, PROTECT(ScalarReal(rise)));
    SET_VECTOR_ELT(out, 1, PROTECT(ScalarReal(set)));
  } else {
    SET_VECTOR_ELT(out, 0, PROTECT(ScalarReal(NA_REAL)));
    SET_VECTOR_ELT(out, 1, PROTECT(ScalarReal(NA_REAL)));
  }

  UNPROTECT(3);

  return(out);

}

SEXP r_civil_twilight(SEXP year, SEXP month, SEXP day, SEXP lon, SEXP lat) {

  double start, end;

  int res = civil_twilight(
    asInteger(year), asInteger(month), asInteger(day), asReal(lon), asReal(lat),
    &start, &end
  );

  const char *names[] = {
    "start",
    "end",
    ""
  };

  SEXP out = PROTECT(mkNamed(VECSXP, names));

  if (res == 0) {
    SET_VECTOR_ELT(out, 0, PROTECT(ScalarReal(start)));
    SET_VECTOR_ELT(out, 1, PROTECT(ScalarReal(end)));
  } else {
    SET_VECTOR_ELT(out, 0, PROTECT(ScalarReal(NA_REAL)));
    SET_VECTOR_ELT(out, 1, PROTECT(ScalarReal(NA_REAL)));
  }

  UNPROTECT(3);

  return(out);

}

SEXP r_nautical_twilight(SEXP year, SEXP month, SEXP day, SEXP lon, SEXP lat) {

  double start, end;

  int res = nautical_twilight(
    asInteger(year), asInteger(month), asInteger(day), asReal(lon), asReal(lat),
    &start, &end
  );

  const char *names[] = {
    "start",
    "end",
    ""
  };

  SEXP out = PROTECT(mkNamed(VECSXP, names));

  if (res == 0) {
    SET_VECTOR_ELT(out, 0, PROTECT(ScalarReal(start)));
    SET_VECTOR_ELT(out, 1, PROTECT(ScalarReal(end)));
  } else {
    SET_VECTOR_ELT(out, 0, PROTECT(ScalarReal(NA_REAL)));
    SET_VECTOR_ELT(out, 1, PROTECT(ScalarReal(NA_REAL)));
  }

  UNPROTECT(3);

  return(out);

}

SEXP r_astronomical_twilight(SEXP year, SEXP month, SEXP day, SEXP lon, SEXP lat) {

  double start, end;

  int res = astronomical_twilight(
    asInteger(year), asInteger(month), asInteger(day), asReal(lon), asReal(lat),
    &start, &end
  );

  const char *names[] = {
    "start",
    "end",
    ""
  };

  SEXP out = PROTECT(mkNamed(VECSXP, names));

  if (res == 0) {
    SET_VECTOR_ELT(out, 0, PROTECT(ScalarReal(start)));
    SET_VECTOR_ELT(out, 1, PROTECT(ScalarReal(end)));
  } else {
    SET_VECTOR_ELT(out, 0, PROTECT(ScalarReal(NA_REAL)));
    SET_VECTOR_ELT(out, 1, PROTECT(ScalarReal(NA_REAL)));
  }

  UNPROTECT(3);

  return(out);

}
