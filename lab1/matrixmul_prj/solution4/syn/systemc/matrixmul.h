// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _matrixmul_HH_
#define _matrixmul_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "matrixmul_mac_mulbkb.h"

namespace ap_rtl {

struct matrixmul : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > a_address0;
    sc_out< sc_logic > a_ce0;
    sc_in< sc_lv<128> > a_q0;
    sc_out< sc_lv<4> > b_address0;
    sc_out< sc_logic > b_ce0;
    sc_in< sc_lv<128> > b_q0;
    sc_out< sc_lv<8> > res_address0;
    sc_out< sc_logic > res_ce0;
    sc_out< sc_logic > res_we0;
    sc_out< sc_lv<16> > res_d0;


    // Module declarations
    matrixmul(sc_module_name name);
    SC_HAS_PROCESS(matrixmul);

    ~matrixmul();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    matrixmul_mac_mulbkb<1,1,8,8,16,16>* matrixmul_mac_mulbkb_U1;
    matrixmul_mac_mulbkb<1,1,8,8,16,16>* matrixmul_mac_mulbkb_U2;
    matrixmul_mac_mulbkb<1,1,8,8,16,16>* matrixmul_mac_mulbkb_U3;
    matrixmul_mac_mulbkb<1,1,8,8,16,16>* matrixmul_mac_mulbkb_U4;
    matrixmul_mac_mulbkb<1,1,8,8,16,16>* matrixmul_mac_mulbkb_U5;
    matrixmul_mac_mulbkb<1,1,8,8,16,16>* matrixmul_mac_mulbkb_U6;
    matrixmul_mac_mulbkb<1,1,8,8,16,16>* matrixmul_mac_mulbkb_U7;
    matrixmul_mac_mulbkb<1,1,8,8,16,16>* matrixmul_mac_mulbkb_U8;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<9> > indvar_flatten_reg_155;
    sc_signal< sc_lv<5> > i_0_reg_166;
    sc_signal< sc_lv<5> > j_0_reg_177;
    sc_signal< sc_lv<1> > icmp_ln54_fu_188_p2;
    sc_signal< sc_lv<1> > icmp_ln54_reg_860;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<9> > add_ln54_fu_194_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<5> > select_ln57_fu_212_p3;
    sc_signal< sc_lv<5> > select_ln57_reg_869;
    sc_signal< sc_lv<5> > select_ln57_1_fu_220_p3;
    sc_signal< sc_lv<5> > select_ln57_1_reg_874;
    sc_signal< sc_lv<5> > j_fu_238_p2;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<5> > ap_phi_mux_i_0_phi_fu_170_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > zext_ln57_fu_228_p1;
    sc_signal< sc_lv<64> > zext_ln57_1_fu_233_p1;
    sc_signal< sc_lv<64> > zext_ln57_3_fu_264_p1;
    sc_signal< sc_lv<1> > icmp_ln56_fu_206_p2;
    sc_signal< sc_lv<5> > i_fu_200_p2;
    sc_signal< sc_lv<9> > tmp_fu_244_p3;
    sc_signal< sc_lv<10> > zext_ln56_fu_251_p1;
    sc_signal< sc_lv<10> > zext_ln57_2_fu_255_p1;
    sc_signal< sc_lv<10> > add_ln57_fu_258_p2;
    sc_signal< sc_lv<8> > trunc_ln60_fu_269_p1;
    sc_signal< sc_lv<8> > trunc_ln60_1_fu_277_p1;
    sc_signal< sc_lv<8> > mul_ln60_fu_285_p0;
    sc_signal< sc_lv<8> > mul_ln60_fu_285_p1;
    sc_signal< sc_lv<8> > tmp_4_fu_291_p4;
    sc_signal< sc_lv<8> > tmp_5_fu_305_p4;
    sc_signal< sc_lv<8> > tmp_6_fu_319_p4;
    sc_signal< sc_lv<8> > tmp_7_fu_333_p4;
    sc_signal< sc_lv<8> > tmp_8_fu_347_p4;
    sc_signal< sc_lv<8> > tmp_9_fu_361_p4;
    sc_signal< sc_lv<8> > mul_ln60_3_fu_375_p0;
    sc_signal< sc_lv<8> > mul_ln60_3_fu_375_p1;
    sc_signal< sc_lv<8> > tmp_s_fu_381_p4;
    sc_signal< sc_lv<8> > tmp_2_fu_395_p4;
    sc_signal< sc_lv<8> > tmp_3_fu_409_p4;
    sc_signal< sc_lv<8> > tmp_10_fu_423_p4;
    sc_signal< sc_lv<8> > mul_ln60_5_fu_437_p0;
    sc_signal< sc_lv<8> > mul_ln60_5_fu_437_p1;
    sc_signal< sc_lv<8> > tmp_11_fu_443_p4;
    sc_signal< sc_lv<8> > tmp_12_fu_457_p4;
    sc_signal< sc_lv<8> > tmp_13_fu_471_p4;
    sc_signal< sc_lv<8> > tmp_14_fu_485_p4;
    sc_signal< sc_lv<8> > mul_ln60_7_fu_499_p0;
    sc_signal< sc_lv<8> > mul_ln60_7_fu_499_p1;
    sc_signal< sc_lv<8> > tmp_15_fu_505_p4;
    sc_signal< sc_lv<8> > tmp_16_fu_519_p4;
    sc_signal< sc_lv<8> > tmp_17_fu_533_p4;
    sc_signal< sc_lv<8> > tmp_18_fu_547_p4;
    sc_signal< sc_lv<8> > mul_ln60_9_fu_561_p0;
    sc_signal< sc_lv<8> > mul_ln60_9_fu_561_p1;
    sc_signal< sc_lv<8> > tmp_19_fu_567_p4;
    sc_signal< sc_lv<8> > tmp_20_fu_581_p4;
    sc_signal< sc_lv<8> > tmp_21_fu_595_p4;
    sc_signal< sc_lv<8> > tmp_22_fu_609_p4;
    sc_signal< sc_lv<8> > mul_ln60_11_fu_623_p0;
    sc_signal< sc_lv<8> > mul_ln60_11_fu_623_p1;
    sc_signal< sc_lv<8> > tmp_23_fu_629_p4;
    sc_signal< sc_lv<8> > tmp_24_fu_643_p4;
    sc_signal< sc_lv<8> > tmp_25_fu_657_p4;
    sc_signal< sc_lv<8> > tmp_26_fu_671_p4;
    sc_signal< sc_lv<8> > mul_ln60_13_fu_685_p0;
    sc_signal< sc_lv<8> > mul_ln60_13_fu_685_p1;
    sc_signal< sc_lv<8> > tmp_27_fu_691_p4;
    sc_signal< sc_lv<8> > tmp_28_fu_705_p4;
    sc_signal< sc_lv<8> > tmp_29_fu_719_p4;
    sc_signal< sc_lv<8> > tmp_30_fu_733_p4;
    sc_signal< sc_lv<8> > mul_ln60_15_fu_747_p0;
    sc_signal< sc_lv<8> > mul_ln60_15_fu_747_p1;
    sc_signal< sc_lv<16> > grp_fu_788_p3;
    sc_signal< sc_lv<16> > grp_fu_797_p3;
    sc_signal< sc_lv<16> > grp_fu_806_p3;
    sc_signal< sc_lv<16> > grp_fu_815_p3;
    sc_signal< sc_lv<16> > add_ln60_2_fu_753_p2;
    sc_signal< sc_lv<16> > add_ln60_5_fu_757_p2;
    sc_signal< sc_lv<16> > grp_fu_824_p3;
    sc_signal< sc_lv<16> > grp_fu_833_p3;
    sc_signal< sc_lv<16> > grp_fu_842_p3;
    sc_signal< sc_lv<16> > grp_fu_851_p3;
    sc_signal< sc_lv<16> > add_ln60_9_fu_767_p2;
    sc_signal< sc_lv<16> > add_ln60_12_fu_771_p2;
    sc_signal< sc_lv<16> > add_ln60_6_fu_761_p2;
    sc_signal< sc_lv<16> > add_ln60_13_fu_775_p2;
    sc_signal< sc_lv<16> > grp_fu_788_p2;
    sc_signal< sc_lv<16> > grp_fu_797_p2;
    sc_signal< sc_lv<16> > grp_fu_806_p2;
    sc_signal< sc_lv<16> > grp_fu_815_p2;
    sc_signal< sc_lv<16> > grp_fu_824_p2;
    sc_signal< sc_lv<16> > grp_fu_833_p2;
    sc_signal< sc_lv<16> > grp_fu_842_p2;
    sc_signal< sc_lv<16> > grp_fu_851_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state4;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<9> ap_const_lv9_100;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_38;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<32> ap_const_lv32_47;
    static const sc_lv<32> ap_const_lv32_48;
    static const sc_lv<32> ap_const_lv32_4F;
    static const sc_lv<32> ap_const_lv32_50;
    static const sc_lv<32> ap_const_lv32_57;
    static const sc_lv<32> ap_const_lv32_58;
    static const sc_lv<32> ap_const_lv32_5F;
    static const sc_lv<32> ap_const_lv32_60;
    static const sc_lv<32> ap_const_lv32_67;
    static const sc_lv<32> ap_const_lv32_68;
    static const sc_lv<32> ap_const_lv32_6F;
    static const sc_lv<32> ap_const_lv32_70;
    static const sc_lv<32> ap_const_lv32_77;
    static const sc_lv<32> ap_const_lv32_78;
    static const sc_lv<32> ap_const_lv32_7F;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_address0();
    void thread_a_ce0();
    void thread_add_ln54_fu_194_p2();
    void thread_add_ln57_fu_258_p2();
    void thread_add_ln60_12_fu_771_p2();
    void thread_add_ln60_13_fu_775_p2();
    void thread_add_ln60_2_fu_753_p2();
    void thread_add_ln60_5_fu_757_p2();
    void thread_add_ln60_6_fu_761_p2();
    void thread_add_ln60_9_fu_767_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state4();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_i_0_phi_fu_170_p4();
    void thread_ap_ready();
    void thread_b_address0();
    void thread_b_ce0();
    void thread_grp_fu_788_p2();
    void thread_grp_fu_797_p2();
    void thread_grp_fu_806_p2();
    void thread_grp_fu_815_p2();
    void thread_grp_fu_824_p2();
    void thread_grp_fu_833_p2();
    void thread_grp_fu_842_p2();
    void thread_grp_fu_851_p2();
    void thread_i_fu_200_p2();
    void thread_icmp_ln54_fu_188_p2();
    void thread_icmp_ln56_fu_206_p2();
    void thread_j_fu_238_p2();
    void thread_mul_ln60_11_fu_623_p0();
    void thread_mul_ln60_11_fu_623_p1();
    void thread_mul_ln60_13_fu_685_p0();
    void thread_mul_ln60_13_fu_685_p1();
    void thread_mul_ln60_15_fu_747_p0();
    void thread_mul_ln60_15_fu_747_p1();
    void thread_mul_ln60_3_fu_375_p0();
    void thread_mul_ln60_3_fu_375_p1();
    void thread_mul_ln60_5_fu_437_p0();
    void thread_mul_ln60_5_fu_437_p1();
    void thread_mul_ln60_7_fu_499_p0();
    void thread_mul_ln60_7_fu_499_p1();
    void thread_mul_ln60_9_fu_561_p0();
    void thread_mul_ln60_9_fu_561_p1();
    void thread_mul_ln60_fu_285_p0();
    void thread_mul_ln60_fu_285_p1();
    void thread_res_address0();
    void thread_res_ce0();
    void thread_res_d0();
    void thread_res_we0();
    void thread_select_ln57_1_fu_220_p3();
    void thread_select_ln57_fu_212_p3();
    void thread_tmp_10_fu_423_p4();
    void thread_tmp_11_fu_443_p4();
    void thread_tmp_12_fu_457_p4();
    void thread_tmp_13_fu_471_p4();
    void thread_tmp_14_fu_485_p4();
    void thread_tmp_15_fu_505_p4();
    void thread_tmp_16_fu_519_p4();
    void thread_tmp_17_fu_533_p4();
    void thread_tmp_18_fu_547_p4();
    void thread_tmp_19_fu_567_p4();
    void thread_tmp_20_fu_581_p4();
    void thread_tmp_21_fu_595_p4();
    void thread_tmp_22_fu_609_p4();
    void thread_tmp_23_fu_629_p4();
    void thread_tmp_24_fu_643_p4();
    void thread_tmp_25_fu_657_p4();
    void thread_tmp_26_fu_671_p4();
    void thread_tmp_27_fu_691_p4();
    void thread_tmp_28_fu_705_p4();
    void thread_tmp_29_fu_719_p4();
    void thread_tmp_2_fu_395_p4();
    void thread_tmp_30_fu_733_p4();
    void thread_tmp_3_fu_409_p4();
    void thread_tmp_4_fu_291_p4();
    void thread_tmp_5_fu_305_p4();
    void thread_tmp_6_fu_319_p4();
    void thread_tmp_7_fu_333_p4();
    void thread_tmp_8_fu_347_p4();
    void thread_tmp_9_fu_361_p4();
    void thread_tmp_fu_244_p3();
    void thread_tmp_s_fu_381_p4();
    void thread_trunc_ln60_1_fu_277_p1();
    void thread_trunc_ln60_fu_269_p1();
    void thread_zext_ln56_fu_251_p1();
    void thread_zext_ln57_1_fu_233_p1();
    void thread_zext_ln57_2_fu_255_p1();
    void thread_zext_ln57_3_fu_264_p1();
    void thread_zext_ln57_fu_228_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
