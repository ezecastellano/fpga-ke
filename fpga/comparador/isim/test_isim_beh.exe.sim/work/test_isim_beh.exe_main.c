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
    work_m_00000000002543462118_3219561858_init();
    work_m_00000000002738568766_3644784444_init();
    work_m_00000000002546843100_1985558087_init();
    work_m_00000000000751492074_2073120511_init();


    xsi_register_tops("work_m_00000000002546843100_1985558087");
    xsi_register_tops("work_m_00000000000751492074_2073120511");


    return xsi_run_simulation(argc, argv);

}
