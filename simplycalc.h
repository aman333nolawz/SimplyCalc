#ifndef SIMPLYCALC_H
#define SIMPLYCALC_H

typedef double (*func)(double);
double conv_std(func f, double upper_limit, double lower_limit);
double conv(func f, double upper_limit, double lower_limit, double sum_lim);
double drvt(func f, int order, double value);

#endif
