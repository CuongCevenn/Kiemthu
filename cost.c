#include <stdio.h>
#include <string.h>

const int pro_cost = 2000;
const int noo_cost = 70000;

int cal(int select, int num_page, int admit)
{
    int total = 0;

    if (select == 1)
    {
        if (num_page < 50)
        {
            if (admit == 1)
            {
                total = pro_cost * 50;
            }
            else
            {
                total = 0;
            }
        }
        else if (num_page == 50)
        {
            total = pro_cost * 50;
        }
        else
        {
            total = pro_cost * 50 + pro_cost * 1.5 * (num_page - 50);
        }
        return total;
    }
    else
    {
        if (num_page >= 50)
        {
            total = noo_cost;
        }
        else
        {
            if (admit == 1)
            {
                total = noo_cost;
            }
            else
            {
                total = 0;
            }
        }
        return total;
    }

    return 0;
}

int main()
{

    int num_page = 0;
    int select = 0;
    char classT[20];
    int cost = 0;
    int admit = 0;

    while (select != 1 && select != 2)
    {
        printf("Ban la chuyen nghiep hay nghiep du:\n 1. Chuyen nghiep\n 2. Nghiep du\n");
        scanf("%d", &select);
    }
    if (select == 1)
    {
        strcpy(classT, "chuyen nghiep");
        select = 1;
    }
    else
    {
        strcpy(classT, "nghiep du");
        select = 2;
    }
    printf("Ban la %s\n", classT);

    printf("Hay nhap so trang: ");
    scanf("%d", &num_page);
    if (num_page < 50)
    {
        printf("\nBan co cong nhan cua chuyen gia khong?\n 1. Co\n Other. Khong\n");
        scanf("%d", &admit);
        if (admit != 1)
            admit = 0;
    }
    cost = cal(select, num_page, admit);
    printf("\nSo tien ban nhan duoc la: %d", cost);

    return 0;
}
