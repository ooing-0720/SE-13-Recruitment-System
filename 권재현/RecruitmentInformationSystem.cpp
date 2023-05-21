#include "RecruitmentInformationSystem.h"
#include "SearchEmploymentUI.h"

void doTask()
{
    // �޴� �Ľ��� ���� level ������ ���� ����
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    SearchEmploymentUI searchEmploymentUI;

    while (!is_program_exit)
    {
        // �Է����Ͽ��� �޴� ���� 2���� �б�
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);


        // �޴� ���� �� �ش� ���� ����
        switch (menu_level_1)
        {
            case 1:
                switch (menu_level_2)
                {
                    case 1:   // "1.1. ȸ�����ԡ� �޴� �κ�
                        // join() �Լ����� �ش� ��� ���� 
                        join();
                        break;
                    case 2:
                        //��¼��
                        break;
                }
            case 4:
                switch (menu_level_2)
                {
                    case 1:
                        char company_name[MAX_STRING];
                        fscanf(in_fp, "%s", company_name);
                        searchEmploymentUI.SearchByCompanyName(company_name);
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    case 4:
                        break;
                }

            case 7:
                switch (menu_level_2)
                {
                    case 1:   // "6.1. ���ᡰ �޴� �κ�
                        program_exit();
                        is_program_exit = 1;
                        break;
                }
        }

    }

    return;
}


void join()
{
    /*            !!!!!!!       �߿�        !!!!!!!!!
        * �ܼ��� ������ ���� ������ϴ� ����� ���̱� ���� �ڵ��̹Ƿ� �� �Լ����� �״�� ����ϸ� �ȵ�.
        * control �� boundary class�� �̿��ؼ� �ش� ����� �����ǵ��� �ؾ� ��.
        */

    char user_type[MAX_STRING], name[MAX_STRING], SSN [MAX_STRING], address[MAX_STRING], ID[MAX_STRING], password[MAX_STRING];

    // �Է� ���� : �̸�, �ֹι�ȣ, ID, Password�� ���Ϸκ��� ����
    fscanf(in_fp, "%s %s %s %s", name, SSN, ID, password);


    // �ش� ��� ����  
    //''''''

        // ��� ����
    fprintf(out_fp, "1.1. ȸ������\n");
    fprintf(out_fp, "%s %s %s %s\n", name, SSN, ID, password);
}


void program_exit()
{
    //'''''
}