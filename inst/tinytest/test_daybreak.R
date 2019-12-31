expect_equivalent(
  day_length("2019-12-31", -70.8636, 43.2683),
  9.03144433072786
)

expect_equivalent(
  day_civil_twilight_length("2019-12-31", -70.8636, 43.2683),
  10.1083411766176
)

expect_equivalent(
  day_nautical_twilight_length("2019-12-31", -70.8636, 43.2683),
  11.3056891617088
)

expect_equivalent(
  day_astronomical_twilight_length("2019-12-31", -70.8636, 43.2683),
  12.459975565969
)

expect_equivalent(
  sun_rise_set("2019-12-31", -70.8636, 43.2683),
  list(rise = 12.2576146717076, set = 21.2890590024355)
)

expect_equivalent(
  civil_twilight("2019-12-31", -70.8636, 43.2683),
  list(start = 11.7191662487627, end = 21.8275074253803)
)

expect_equivalent(
  nautical_twilight("2019-12-31", -70.8636, 43.2683),
  list(start = 11.1204922562171, end = 22.4261814179259)
)

expect_equivalent(
  astronomical_twilight("2019-12-31", -70.8636, 43.2683),
  list(start = 10.543349054087, end = 23.003324620056)
)

expect_equivalent(
  day_length("2019-12-31", 18.9553, 69.6492),
  0
)

expect_equivalent(
  day_civil_twilight_length("2019-12-31", 18.9553, 69.6492),
  4.61311561714866
)

expect_equivalent(
  day_nautical_twilight_length("2019-12-31", 18.9553, 69.6492),
  8.00032348106164
)

expect_equivalent(
  day_astronomical_twilight_length("2019-12-31", 18.9553, 69.6492),
  10.5871031550164
)

expect_equivalent(
  sun_rise_set("2019-12-31", 18.9553, 69.6492),
  list(rise = NA_real_, set = NA_real_)
)

expect_equivalent(
  civil_twilight("2019-12-31", 18.9553, 69.6492),
  list(start = 8.47686578254252, end = 13.0899813996912)
)

expect_equivalent(
  nautical_twilight("2019-12-31", 18.9553, 69.6492),
  list(start = 6.78326185058603, end = 14.7835853316477)
)

expect_equivalent(
  astronomical_twilight("2019-12-31", 18.9553, 69.6492),
  list(start = 5.48987201360863, end = 16.0769751686251)
)

expect_equivalent(
  day_length("2019-06-01", 18.9553, 69.6492),
  24
)

expect_equivalent(
  day_civil_twilight_length("2019-06-01", 18.9553, 69.6492),
  24
)

expect_equivalent(
  day_nautical_twilight_length("2019-06-01", 18.9553, 69.6492),
  24
)

expect_equivalent(
  day_astronomical_twilight_length("2019-06-01", 18.9553, 69.6492),
  24
)

expect_equivalent(
  sun_rise_set("2019-06-01", 18.9553, 69.6492),
  list(rise = NA_real_, set = NA_real_)
)

expect_equivalent(
  civil_twilight("2019-06-01", 18.9553, 69.6492),
  list(start = NA_real_, end = NA_real_)
)

expect_equivalent(
  nautical_twilight("2019-06-01", 18.9553, 69.6492),
  list(start = NA_real_, end = NA_real_)
)

expect_equivalent(
  astronomical_twilight("2019-06-01", 18.9553, 69.6492),
  list(start = NA_real_, end = NA_real_)
)
