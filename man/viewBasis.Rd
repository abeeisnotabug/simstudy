% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/viewBasis.R
\name{viewBasis}
\alias{viewBasis}
\title{Plot basis spline functions}
\usage{
viewBasis(knots, degree)
}
\arguments{
\item{knots}{A vector of values between 0 and 1, specifying cut-points for splines}

\item{degree}{Integer specifying degree of curvature.}
}
\value{
A ggplot object that contains a plot of the basis functions. In total, there
will be length(knots) + degree + 1 functions plotted.
}
\description{
Plot basis spline functions
}
\examples{
knots <- c(0.25, 0.50, 0.75 )
viewBasis(knots, degree = 1)

knots <- c(0.25, 0.50, 0.75 )
viewBasis(knots, degree = 2)

knots <- c(0.25, 0.50, 0.75 )
viewBasis(knots, degree = 3)
}
