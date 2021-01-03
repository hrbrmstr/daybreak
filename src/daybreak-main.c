#include <R.h>
#include <Rinternals.h>

#include "sunriset.h"
#include "daybreak.h"
SEXP r_day_length(SEXP year, SEXP month, SEXP day, SEXP lon, SEXP lat) {

  return(ScalarReal(day_length(
    asInteger(year), asInteger(month), asInteger(day), asReal(lon), asReal(lat)
  )));

}

SEXP r_day_civil_twilight_length(SEXP year, SEXP month, SEXP day, SEXP lon, SEXP lat) {

  return(ScalarReal(day_civil_twilight_length(
    asInteger(year), asInteger(month), asInteger(day), asReal(lon), asReal(lat)
  )));

}

SEXP r_day_nautical_twilight_length(SEXP year, SEXP month, SEXP day, SEXP lon, SEXP lat) {

  return(ScalarReal(day_nautical_twilight_length(
    asInteger(year), asInteger(month), asInteger(day), asReal(lon), asReal(lat)
  )));

}

SEXP r_day_astronomical_twilight_length(SEXP year, SEXP month, SEXP day, SEXP lon, SEXP lat) {

  return(ScalarReal(day_astronomical_twilight_length(
    asInteger(year), asInteger(month), asInteger(day), asReal(lon), asReal(lat)
  )));

}

// makes and returns two named real SEXPs

SEXP two_named_doubles(int res, double var1, double var2, char *name1, char *name2) {

  const char *names[] = { name1, name2, "" };

  SEXP out = PROTECT(mkNamed(VECSXP, names));

  if (res == 0) {
    SET_VECTOR_ELT(out, 0, ScalarReal(var1));
    SET_VECTOR_ELT(out, 1, ScalarReal(var2));
  } else {
    SET_VECTOR_ELT(out, 0, ScalarReal(NA_REAL));
    SET_VECTOR_ELT(out, 1, ScalarReal(NA_REAL));
  }

  UNPROTECT(1);

  return(out);

}

SEXP r_sun_rise_set(SEXP year, SEXP month, SEXP day, SEXP lon, SEXP lat) {

  double rise, set;

  int res = sun_rise_set(
    asInteger(year), asInteger(month), asInteger(day), asReal(lon), asReal(lat),
    &rise, &set
  );

  return(two_named_doubles(res, rise, set, "rise", "set"));

}

SEXP r_civil_twilight(SEXP year, SEXP month, SEXP day, SEXP lon, SEXP lat) {

  double start, end;

  int res = civil_twilight(
    asInteger(year), asInteger(month), asInteger(day), asReal(lon), asReal(lat),
    &start, &end
  );

  return(two_named_doubles(res, start, end, "start", "end"));

}

SEXP r_nautical_twilight(SEXP year, SEXP month, SEXP day, SEXP lon, SEXP lat) {

  double start, end;

  int res = nautical_twilight(
    asInteger(year), asInteger(month), asInteger(day), asReal(lon), asReal(lat),
    &start, &end
  );

  return(two_named_doubles(res, start, end, "start", "end"));

}

SEXP r_astronomical_twilight(SEXP year, SEXP month, SEXP day, SEXP lon, SEXP lat) {

  double start, end;

  int res = astronomical_twilight(
    asInteger(year), asInteger(month), asInteger(day), asReal(lon), asReal(lat),
    &start, &end
  );

  return(two_named_doubles(res, start, end, "start", "end"));

}
