valid_date <- function(date) {
  as.POSIXlt(date[1])
}

valid_lon <- function(lon) {
  lon <- lon[1]
  stopifnot(lon >= -180 & lon <= 180)
  lon
}

valid_lat <- function(lat) {
  lat <- lat[1]
  stopifnot(lat >= -90 & lat <= 90)
  lat
}
