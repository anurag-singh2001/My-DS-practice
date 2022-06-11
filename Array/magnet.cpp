void nullPoints(int n, double magnets[], double getAnswer[])
{
    // Your code goes here
    for (int i = 0; i < n - 1; i++)
    {
        getAnswer[i] = mid_point(magnets[i], magnets[i + 1], magnets, n);
    }
}

double mid_point(double l, double h, double magnets[], int n)
{

    while (l <= h)
    {
        double m = (h + l) / 2;
        double t_force = 0;
        for (int i = 0; i < n; i++)
        {
            t_force += 1 / (m - magnets[i]);
        }
        if (abs(t_force) < 0.000001)
        {
            return m;
        }
        else if (t_force < 0)
        {
            h = m;
        }
        else
        {
            l = m;
        }
    }
    return l;
}