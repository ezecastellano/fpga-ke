/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2007 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003685596543_2030911003_init();
    work_m_00000000004230048603_1881008650_init();
    work_m_00000000000751492074_2073120511_init();


    xsi_register_tops("work_m_00000000004230048603_1881008650");
    xsi_register_tops("work_m_00000000000751492074_2073120511");


    return xsi_run_simulation(argc, argv);

}
