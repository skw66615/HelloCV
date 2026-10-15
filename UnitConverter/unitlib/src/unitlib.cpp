#include"unitlib.h"

//温度
double C_TO_F(double x)
{
    return x * 9.0 / 5.0 + 32;
}
double F_TO_C(double x)
{
    return (x - 32) * 5.0 / 9.0;
}

//长度
double M_TO_FT(double x)
{
    return x * 3.28084;
}
double FT_TO_M(double x)
{
    return x / 3.28084;
}

//重量
double LB_TO_KG(double x)
{
    return x * 0.45359237;
}
double KG_TO_LB(double x)
{
    return x / 0.45359237;
}