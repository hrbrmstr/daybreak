
[![Project Status: Active – The project has reached a stable, usable
state and is being actively
developed.](https://www.repostatus.org/badges/latest/active.svg)](https://www.repostatus.org/#active)
[![Signed
by](https://img.shields.io/badge/Keybase-Verified-brightgreen.svg)](https://keybase.io/hrbrmstr)
![Signed commit
%](https://img.shields.io/badge/Signed_Commits-100%25-lightgrey.svg)
[![Linux build
Status](https://travis-ci.org/hrbrmstr/daybreak.svg?branch=master)](https://travis-ci.org/hrbrmstr/daybreak)  
![Minimal R
Version](https://img.shields.io/badge/R%3E%3D-3.2.0-blue.svg)
![License](https://img.shields.io/badge/License-MIT-blue.svg)

# daybreak

Compute Sun Rise/Set Times, Start/End of Twilight, and the Length of the
Day at Any Date and Latitude

## Description

A wrapper for Paul Schlyter’s C-based library for computing sunrise,
sunset, twilight start and end, plus the length of day for a given data
and coordinates.

## What’s Inside The Tin

The following functions are implemented:

  - `astronomical_twilight`: Astronomical twilight
  - `civil_twilight`: Civil twilight
  - `day_astronomical_twilight_length`: Length of astronomical twilight
  - `day_civil_twilight_length`: Length of civil twilight
  - `day_length`: Length of day
  - `day_nautical_twilight_length`: Length of nautical twilight
  - `nautical_twilight`: Nautical twilight
  - `sun_rise_set`: Sun rise/set times

## Installation

``` r
install.packages("daybreak", repos = "https://cinc.rud.is")
# or
remotes::install_git("https://git.rud.is/hrbrmstr/daybreak.git")
# or
remotes::install_git("https://git.sr.ht/~hrbrmstr/daybreak")
# or
remotes::install_gitlab("hrbrmstr/daybreak")
# or
remotes::install_bitbucket("hrbrmstr/daybreak")
# or
remotes::install_github("hrbrmstr/daybreak")
```

NOTE: To use the ‘remotes’ install options you will need to have the
[{remotes} package](https://github.com/r-lib/remotes) installed.

## Usage

``` r
library(daybreak)

# current version
packageVersion("daybreak")
## [1] '0.1.0'
```

Near me:

``` r
day_length("2019-12-31", -70.8636, 43.2683)
## [1] 9.031444
day_civil_twilight_length("2019-12-31", -70.8636, 43.2683)
## [1] 10.10834
day_nautical_twilight_length("2019-12-31", -70.8636, 43.2683)
## [1] 11.30569
day_astronomical_twilight_length("2019-12-31", -70.8636, 43.2683)
## [1] 12.45998
sun_rise_set("2019-12-31", lon = -70.8636, lat = 43.2683)
## $rise
## [1] 12.25761
## 
## $set
## [1] 21.28906
civil_twilight("2019-12-31", -70.8636, 43.2683)
## $start
## [1] 11.71917
## 
## $end
## [1] 21.82751
nautical_twilight("2019-12-31", -70.8636, 43.2683)
## $start
## [1] 11.12049
## 
## $end
## [1] 22.42618
astronomical_twilight("2019-12-31", -70.8636, 43.2683)
## $start
## [1] 10.54335
## 
## $end
## [1] 23.00332
```

Tromsø, Norway (Winter)

``` r
day_length("2019-12-31", 18.9553, 69.6492)
## [1] 0
day_civil_twilight_length("2019-12-31", 18.9553, 69.6492)
## [1] 4.613116
day_nautical_twilight_length("2019-12-31", 18.9553, 69.6492)
## [1] 8.000323
day_astronomical_twilight_length("2019-12-31", 18.9553, 69.6492)
## [1] 10.5871
sun_rise_set("2019-12-31", 18.9553, 69.6492)
## $rise
## [1] NA
## 
## $set
## [1] NA
civil_twilight("2019-12-31", 18.9553, 69.6492)
## $start
## [1] 8.476866
## 
## $end
## [1] 13.08998
nautical_twilight("2019-12-31", 18.9553, 69.6492)
## $start
## [1] 6.783262
## 
## $end
## [1] 14.78359
astronomical_twilight("2019-12-31", 18.9553, 69.6492)
## $start
## [1] 5.489872
## 
## $end
## [1] 16.07698
```

Tromsø, Norway (Summer)

``` r
day_length("2019-06-01", 18.9553, 69.6492)
## [1] 24
day_civil_twilight_length("2019-06-01", 18.9553, 69.6492)
## [1] 24
day_nautical_twilight_length("2019-06-01", 18.9553, 69.6492)
## [1] 24
day_astronomical_twilight_length("2019-06-01", 18.9553, 69.6492)
## [1] 24
sun_rise_set("2019-06-01", 18.9553, 69.6492)
## $rise
## [1] NA
## 
## $set
## [1] NA
civil_twilight("2019-06-01", 18.9553, 69.6492)
## $start
## [1] NA
## 
## $end
## [1] NA
nautical_twilight("2019-06-01", 18.9553, 69.6492)
## $start
## [1] NA
## 
## $end
## [1] NA
astronomical_twilight("2019-06-01", 18.9553, 69.6492)
## $start
## [1] NA
## 
## $end
## [1] NA
```

## daybreak Metrics

| Lang         | \# Files |  (%) | LoC |  (%) | Blank lines |  (%) | \# Lines |  (%) |
| :----------- | -------: | ---: | --: | ---: | ----------: | ---: | -------: | ---: |
| C            |        3 | 0.33 | 267 | 0.66 |         110 | 0.60 |      245 | 0.60 |
| R            |        4 | 0.44 |  65 | 0.16 |          16 | 0.09 |       84 | 0.20 |
| C/C++ Header |        1 | 0.11 |  39 | 0.10 |          35 | 0.19 |       44 | 0.11 |
| Rmd          |        1 | 0.11 |  32 | 0.08 |          21 | 0.12 |       37 | 0.09 |

## Code of Conduct

Please note that this project is released with a Contributor Code of
Conduct. By participating in this project you agree to abide by its
terms.
