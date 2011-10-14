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
    work_m_00000000002405423257_2030911003_init();
    work_m_00000000002254232482_2250382437_init();
    work_m_00000000000741174908_0855183448_init();
    work_m_00000000003570817931_3874489784_init();
    work_m_00000000002631183572_4263748839_init();
    work_m_00000000000751492074_2073120511_init();


    xsi_register_tops("work_m_00000000002631183572_4263748839");
    xsi_register_tops("work_m_00000000000751492074_2073120511");


    return xsi_run_simulation(argc, argv);

}
