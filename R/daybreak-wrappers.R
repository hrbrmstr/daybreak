#' Length of day
#'
#' @param date The date to compute the length for. An R [DateTimeClasses] object
#'     or something that can be coerced into one by [as.POSIXlt()].
#' @param lon,lat longitude & latitude
#' @return (dbl) length of day
#' @export
#' @examples
#' day_length("2019-12-31", -70.8636, 43.2683)
day_length <- function(date = Sys.Date(), lon, lat) {

  date <- valid_date(date)
  lon <- valid_lon(lon)
  lat <- valid_lat(lat)

  .Call("r_day_length", date$year+1900L, date$mon+1L, date$mday, lon, lat)

}


#' Length of civil twilight
#'
#' @param date The date to compute the length for. An R [DateTimeClasses] object
#'     or something that can be coerced into one by [as.POSIXlt()].
#' @param lon,lat longitude & latitude
#' @return (dbl) day civil twilight length
#' @export
#' @examples
#' day_length("2019-12-31", -70.8636, 43.2683)
day_civil_twilight_length <- function(date, lon, lat) {
  date <- valid_date(date)
  lon <- valid_lon(lon)
  lat <- valid_lat(lat)
  .Call("r_day_civil_twilight_length", date$year+1900L, date$mon+1L, date$mday, lon, lat)
}

#' Length of nautical twilight
#'
#' @param date The date to compute the length for. An R [DateTimeClasses] object
#'     or something that can be coerced into one by [as.POSIXlt()].
#' @param lon,lat longitude & latitude
#' @return (dbl) day nautical twilight length
#' @export
#' @examples
#' day_nautical_twilight_length("2019-12-31", -70.8636, 43.2683)
day_nautical_twilight_length <- function(date, lon, lat) {
  date <- valid_date(date)
  lon <- valid_lon(lon)
  lat <- valid_lat(lat)
  .Call("r_day_nautical_twilight_length", date$year+1900L, date$mon+1L, date$mday, lon, lat)
}

#' Length of astronomical twilight
#'
#' @param date The date to compute the length for. An R [DateTimeClasses] object
#'     or something that can be coerced into one by [as.POSIXlt()].
#' @param lon,lat longitude & latitude
#' @return (dbl) astronomical twilight length
#' @export
#' @examples
#' day_astronomical_twilight_length("2019-12-31", -70.8636, 43.2683)
day_astronomical_twilight_length <- function(date, lon, lat) {
  date <- valid_date(date)
  lon <- valid_lon(lon)
  lat <- valid_lat(lat)
  .Call("r_day_astronomical_twilight_length", date$year+1900L, date$mon+1L, date$mday, lon, lat)
}

#' Sun rise/set times
#'
#' @param date The date to compute the length for. An R [DateTimeClasses] object
#'     or something that can be coerced into one by [as.POSIXlt()].
#' @param lon,lat longitude & latitude
#' @return (dbl) sunrise/sunset
#' @export
#' @examples
#' sun_rise_set("2019-12-31", -70.8636, 43.2683)
sun_rise_set <- function(date, lon, lat) {
  date <- valid_date(date)
  lon <- valid_lon(lon)
  lat <- valid_lat(lat)
  .Call("r_sun_rise_set", date$year+1900L, date$mon+1L, date$mday, lon, lat)
}

#' Civil twilight
#'
#' @param date The date to compute the length for. An R [DateTimeClasses] object
#'     or something that can be coerced into one by [as.POSIXlt()].
#' @param lon,lat longitude & latitude
#' @return (dbl) civil twilight
#' @export
#' @examples
#' civil_twilight("2019-12-31", -70.8636, 43.2683)
civil_twilight <- function(date, lon, lat) {
  date <- valid_date(date)
  lon <- valid_lon(lon)
  lat <- valid_lat(lat)
  .Call("r_civil_twilight", date$year+1900L, date$mon+1L, date$mday, lon, lat)
}

#' Nautical twilight
#'
#' @param date The date to compute the length for. An R [DateTimeClasses] object
#'     or something that can be coerced into one by [as.POSIXlt()].
#' @param lon,lat longitude & latitude
#' @return (dbl) nautical twilight
#' @export
#' @examples
#' nautical_twilight("2019-12-31", -70.8636, 43.2683)
nautical_twilight <- function(date, lon, lat) {
  date <- valid_date(date)
  lon <- valid_lon(lon)
  lat <- valid_lat(lat)
  .Call("r_nautical_twilight", date$year+1900L, date$mon+1L, date$mday, lon, lat)
}

#' Astronomical twilight
#'
#' @param date The date to compute the length for. An R [DateTimeClasses] object
#'     or something that can be coerced into one by [as.POSIXlt()].
#' @param lon,lat longitude & latitude
#' @return (dbl) astronomical twilight
#' @export
#' @examples
#' astronomical_twilight("2019-12-31", -70.8636, 43.2683)
astronomical_twilight <- function(date, lon, lat) {
  date <- valid_date(date)
  lon <- valid_lon(lon)
  lat <- valid_lat(lat)
  .Call("r_astronomical_twilight", date$year+1900L, date$mon+1L, date$mday, lon, lat)
}

