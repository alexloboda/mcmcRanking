context("mcmc")

test_that("bad call", {
  expect_error(mcmc(mat = c(T, T, F, T), name = letters[1:4]))
  expect_error(mcmc(mat = matrix(c(1, 1, 0, 1), nrow = 1), name = letters[1:4]))
  expect_error(mcmc(mat = matrix(c(T, T, F, T), nrow = 1), name = c(1, 2, 3, 4)))
  expect_error(mcmc(mat = matrix(c(T, T, F, T, F), nrow = 1), name = letters[1:4]))
})

test_that("mcmc constructor works", {
  mat <- matrix(c(T, T, F, T), nrow = 1)
  name <- letters[1:4]
  x <- mcmc(mat = mat, name = name)
  expect_identical(x$mat, mat)
  expect_identical(x$name, name)
})
