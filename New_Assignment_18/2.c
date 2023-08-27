int main()
{
    int a[10], i,sum=0;
    float avg;
    printf("Enter array element:=\n");
    for(i=0;i<10;i++)
    {
       scanf("%d",&a[i]);
       sum+=a[i];
    }
    avg=sum/10.0;
    printf("sum of array element is %f",avg);
    return 0;
}