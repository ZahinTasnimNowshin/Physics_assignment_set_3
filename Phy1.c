#include<stdio.h>
int main()
{
    double wl,m,a;
    printf("Enter the value of wavelength(in nm):");
    scanf("%lf",&wl);

    if(wl<380 || wl>780)
    {
        printf("Out of the range for wavelength.Please enter a valid number.");
        return 0;
    }
    printf("Enter the value of order of diffraction:");
    scanf("%lf",&m);
    printf("Enter three value of width of slit(in micrometre):");
    int i,slit_num=0;
    double count =-1.00;
    for(i=1; i<=3; i++)
    {
        scanf("%lf", &a);
        double angle = (fabs(m) * wl)/a * 0.001;

        if (angle > count)
        {
            count = angle;
            slit_num = i;
        }
    }
    printf("slit %d bends the light most",slit_num);


    return 0;
}

