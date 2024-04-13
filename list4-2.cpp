double getBMI(double height, double weight)
{
    double bmi;

    // cm単位をm単位に変換する
    height /= 100;

    bmi = weight /height /height;

    return bmi;
}