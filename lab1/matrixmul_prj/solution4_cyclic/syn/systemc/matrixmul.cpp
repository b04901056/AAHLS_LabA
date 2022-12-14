// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2020.1
// Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "matrixmul.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic matrixmul::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic matrixmul::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> matrixmul::ap_ST_fsm_state1 = "1";
const sc_lv<3> matrixmul::ap_ST_fsm_pp0_stage0 = "10";
const sc_lv<3> matrixmul::ap_ST_fsm_state4 = "100";
const sc_lv<32> matrixmul::ap_const_lv32_0 = "00000000000000000000000000000000";
const bool matrixmul::ap_const_boolean_1 = true;
const sc_lv<32> matrixmul::ap_const_lv32_1 = "1";
const bool matrixmul::ap_const_boolean_0 = false;
const sc_lv<1> matrixmul::ap_const_lv1_0 = "0";
const sc_lv<1> matrixmul::ap_const_lv1_1 = "1";
const sc_lv<4> matrixmul::ap_const_lv4_0 = "0000";
const sc_lv<2> matrixmul::ap_const_lv2_0 = "00";
const sc_lv<4> matrixmul::ap_const_lv4_9 = "1001";
const sc_lv<4> matrixmul::ap_const_lv4_1 = "1";
const sc_lv<2> matrixmul::ap_const_lv2_1 = "1";
const sc_lv<2> matrixmul::ap_const_lv2_3 = "11";
const sc_lv<3> matrixmul::ap_const_lv3_1 = "1";
const sc_lv<61> matrixmul::ap_const_lv61_0 = "0000000000000000000000000000000000000000000000000000000000000";
const sc_lv<3> matrixmul::ap_const_lv3_3 = "11";
const sc_lv<32> matrixmul::ap_const_lv32_8 = "1000";
const sc_lv<32> matrixmul::ap_const_lv32_F = "1111";
const sc_lv<32> matrixmul::ap_const_lv32_2 = "10";

matrixmul::matrixmul(sc_module_name name) : sc_module(name), mVcdFile(0) {
    matrixmul_mac_mulbkb_U1 = new matrixmul_mac_mulbkb<1,1,8,8,16,16>("matrixmul_mac_mulbkb_U1");
    matrixmul_mac_mulbkb_U1->din0(trunc_ln60_1_fu_302_p1);
    matrixmul_mac_mulbkb_U1->din1(trunc_ln60_fu_294_p1);
    matrixmul_mac_mulbkb_U1->din2(grp_fu_360_p2);
    matrixmul_mac_mulbkb_U1->dout(grp_fu_360_p3);
    matrixmul_mac_mulcud_U2 = new matrixmul_mac_mulcud<1,1,8,8,16,16>("matrixmul_mac_mulcud_U2");
    matrixmul_mac_mulcud_U2->din0(tmp_5_fu_324_p4);
    matrixmul_mac_mulcud_U2->din1(tmp_4_fu_310_p4);
    matrixmul_mac_mulcud_U2->din2(grp_fu_360_p3);
    matrixmul_mac_mulcud_U2->dout(grp_fu_368_p3);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_a_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln60_fu_214_p1 );

    SC_METHOD(thread_a_address1);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( tmp_8_fu_225_p3 );

    SC_METHOD(thread_a_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_a_ce1);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_add_ln54_fu_172_p2);
    sensitive << ( indvar_flatten_reg_133 );

    SC_METHOD(thread_add_ln57_fu_283_p2);
    sensitive << ( sub_ln57_fu_274_p2 );
    sensitive << ( zext_ln60_2_fu_280_p1 );

    SC_METHOD(thread_add_ln60_2_fu_243_p2);
    sensitive << ( zext_ln60_3_fu_239_p1 );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_11001);

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);

    SC_METHOD(thread_ap_block_state2_pp0_stage0_iter0);

    SC_METHOD(thread_ap_block_state3_pp0_stage0_iter1);

    SC_METHOD(thread_ap_condition_pp0_exit_iter0_state2);
    sensitive << ( icmp_ln54_fu_166_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_phi_mux_i_0_phi_fu_148_p4);
    sensitive << ( i_0_reg_144 );
    sensitive << ( icmp_ln54_reg_377 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( select_ln57_1_reg_391 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_b_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln57_1_fu_234_p1 );

    SC_METHOD(thread_b_address1);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( zext_ln60_4_fu_249_p1 );

    SC_METHOD(thread_b_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_b_ce1);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_grp_fu_360_p2);
    sensitive << ( icmp_ln54_reg_377 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( mul_ln60_2_fu_354_p0 );
    sensitive << ( mul_ln60_2_fu_354_p1 );

    SC_METHOD(thread_i_fu_178_p2);
    sensitive << ( ap_phi_mux_i_0_phi_fu_148_p4 );

    SC_METHOD(thread_icmp_ln54_fu_166_p2);
    sensitive << ( indvar_flatten_reg_133 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_icmp_ln56_fu_184_p2);
    sensitive << ( j_0_reg_155 );
    sensitive << ( icmp_ln54_fu_166_p2 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_j_fu_254_p2);
    sensitive << ( select_ln57_fu_190_p3 );

    SC_METHOD(thread_mul_ln60_2_fu_354_p0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( trunc_ln60_3_fu_346_p1 );

    SC_METHOD(thread_mul_ln60_2_fu_354_p1);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( trunc_ln60_2_fu_338_p1 );

    SC_METHOD(thread_or_ln60_fu_219_p2);
    sensitive << ( tmp_fu_206_p3 );

    SC_METHOD(thread_res_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( sext_ln57_fu_289_p1 );

    SC_METHOD(thread_res_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_res_d0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( grp_fu_368_p3 );

    SC_METHOD(thread_res_we0);
    sensitive << ( icmp_ln54_reg_377 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_select_ln57_1_fu_198_p3);
    sensitive << ( ap_phi_mux_i_0_phi_fu_148_p4 );
    sensitive << ( icmp_ln56_fu_184_p2 );
    sensitive << ( i_fu_178_p2 );

    SC_METHOD(thread_select_ln57_fu_190_p3);
    sensitive << ( j_0_reg_155 );
    sensitive << ( icmp_ln56_fu_184_p2 );

    SC_METHOD(thread_sext_ln57_fu_289_p1);
    sensitive << ( add_ln57_fu_283_p2 );

    SC_METHOD(thread_sub_ln57_fu_274_p2);
    sensitive << ( zext_ln57_fu_270_p1 );
    sensitive << ( zext_ln60_1_fu_260_p1 );

    SC_METHOD(thread_tmp_4_fu_310_p4);
    sensitive << ( a_q0 );

    SC_METHOD(thread_tmp_5_fu_324_p4);
    sensitive << ( b_q0 );

    SC_METHOD(thread_tmp_8_fu_225_p3);
    sensitive << ( or_ln60_fu_219_p2 );

    SC_METHOD(thread_tmp_9_fu_263_p3);
    sensitive << ( select_ln57_1_reg_391 );

    SC_METHOD(thread_tmp_fu_206_p3);
    sensitive << ( select_ln57_1_fu_198_p3 );

    SC_METHOD(thread_trunc_ln60_1_fu_302_p1);
    sensitive << ( b_q0 );

    SC_METHOD(thread_trunc_ln60_2_fu_338_p1);
    sensitive << ( a_q1 );

    SC_METHOD(thread_trunc_ln60_3_fu_346_p1);
    sensitive << ( b_q1 );

    SC_METHOD(thread_trunc_ln60_fu_294_p1);
    sensitive << ( a_q0 );

    SC_METHOD(thread_zext_ln57_1_fu_234_p1);
    sensitive << ( select_ln57_fu_190_p3 );

    SC_METHOD(thread_zext_ln57_fu_270_p1);
    sensitive << ( tmp_9_fu_263_p3 );

    SC_METHOD(thread_zext_ln60_1_fu_260_p1);
    sensitive << ( select_ln57_1_reg_391 );

    SC_METHOD(thread_zext_ln60_2_fu_280_p1);
    sensitive << ( select_ln57_reg_386 );

    SC_METHOD(thread_zext_ln60_3_fu_239_p1);
    sensitive << ( select_ln57_fu_190_p3 );

    SC_METHOD(thread_zext_ln60_4_fu_249_p1);
    sensitive << ( add_ln60_2_fu_243_p2 );

    SC_METHOD(thread_zext_ln60_fu_214_p1);
    sensitive << ( tmp_fu_206_p3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( icmp_ln54_fu_166_p2 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0_subdone );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "001";
    ap_enable_reg_pp0_iter0 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "matrixmul_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, a_address0, "(port)a_address0");
    sc_trace(mVcdFile, a_ce0, "(port)a_ce0");
    sc_trace(mVcdFile, a_q0, "(port)a_q0");
    sc_trace(mVcdFile, a_address1, "(port)a_address1");
    sc_trace(mVcdFile, a_ce1, "(port)a_ce1");
    sc_trace(mVcdFile, a_q1, "(port)a_q1");
    sc_trace(mVcdFile, b_address0, "(port)b_address0");
    sc_trace(mVcdFile, b_ce0, "(port)b_ce0");
    sc_trace(mVcdFile, b_q0, "(port)b_q0");
    sc_trace(mVcdFile, b_address1, "(port)b_address1");
    sc_trace(mVcdFile, b_ce1, "(port)b_ce1");
    sc_trace(mVcdFile, b_q1, "(port)b_q1");
    sc_trace(mVcdFile, res_address0, "(port)res_address0");
    sc_trace(mVcdFile, res_ce0, "(port)res_ce0");
    sc_trace(mVcdFile, res_we0, "(port)res_we0");
    sc_trace(mVcdFile, res_d0, "(port)res_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, indvar_flatten_reg_133, "indvar_flatten_reg_133");
    sc_trace(mVcdFile, i_0_reg_144, "i_0_reg_144");
    sc_trace(mVcdFile, j_0_reg_155, "j_0_reg_155");
    sc_trace(mVcdFile, icmp_ln54_fu_166_p2, "icmp_ln54_fu_166_p2");
    sc_trace(mVcdFile, icmp_ln54_reg_377, "icmp_ln54_reg_377");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_block_state2_pp0_stage0_iter0, "ap_block_state2_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage0_iter1, "ap_block_state3_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, add_ln54_fu_172_p2, "add_ln54_fu_172_p2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, select_ln57_fu_190_p3, "select_ln57_fu_190_p3");
    sc_trace(mVcdFile, select_ln57_reg_386, "select_ln57_reg_386");
    sc_trace(mVcdFile, select_ln57_1_fu_198_p3, "select_ln57_1_fu_198_p3");
    sc_trace(mVcdFile, select_ln57_1_reg_391, "select_ln57_1_reg_391");
    sc_trace(mVcdFile, j_fu_254_p2, "j_fu_254_p2");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_condition_pp0_exit_iter0_state2, "ap_condition_pp0_exit_iter0_state2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_phi_mux_i_0_phi_fu_148_p4, "ap_phi_mux_i_0_phi_fu_148_p4");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, zext_ln60_fu_214_p1, "zext_ln60_fu_214_p1");
    sc_trace(mVcdFile, tmp_8_fu_225_p3, "tmp_8_fu_225_p3");
    sc_trace(mVcdFile, zext_ln57_1_fu_234_p1, "zext_ln57_1_fu_234_p1");
    sc_trace(mVcdFile, zext_ln60_4_fu_249_p1, "zext_ln60_4_fu_249_p1");
    sc_trace(mVcdFile, sext_ln57_fu_289_p1, "sext_ln57_fu_289_p1");
    sc_trace(mVcdFile, grp_fu_368_p3, "grp_fu_368_p3");
    sc_trace(mVcdFile, icmp_ln56_fu_184_p2, "icmp_ln56_fu_184_p2");
    sc_trace(mVcdFile, i_fu_178_p2, "i_fu_178_p2");
    sc_trace(mVcdFile, tmp_fu_206_p3, "tmp_fu_206_p3");
    sc_trace(mVcdFile, or_ln60_fu_219_p2, "or_ln60_fu_219_p2");
    sc_trace(mVcdFile, zext_ln60_3_fu_239_p1, "zext_ln60_3_fu_239_p1");
    sc_trace(mVcdFile, add_ln60_2_fu_243_p2, "add_ln60_2_fu_243_p2");
    sc_trace(mVcdFile, tmp_9_fu_263_p3, "tmp_9_fu_263_p3");
    sc_trace(mVcdFile, zext_ln57_fu_270_p1, "zext_ln57_fu_270_p1");
    sc_trace(mVcdFile, zext_ln60_1_fu_260_p1, "zext_ln60_1_fu_260_p1");
    sc_trace(mVcdFile, sub_ln57_fu_274_p2, "sub_ln57_fu_274_p2");
    sc_trace(mVcdFile, zext_ln60_2_fu_280_p1, "zext_ln60_2_fu_280_p1");
    sc_trace(mVcdFile, add_ln57_fu_283_p2, "add_ln57_fu_283_p2");
    sc_trace(mVcdFile, trunc_ln60_fu_294_p1, "trunc_ln60_fu_294_p1");
    sc_trace(mVcdFile, trunc_ln60_1_fu_302_p1, "trunc_ln60_1_fu_302_p1");
    sc_trace(mVcdFile, tmp_4_fu_310_p4, "tmp_4_fu_310_p4");
    sc_trace(mVcdFile, tmp_5_fu_324_p4, "tmp_5_fu_324_p4");
    sc_trace(mVcdFile, trunc_ln60_2_fu_338_p1, "trunc_ln60_2_fu_338_p1");
    sc_trace(mVcdFile, trunc_ln60_3_fu_346_p1, "trunc_ln60_3_fu_346_p1");
    sc_trace(mVcdFile, mul_ln60_2_fu_354_p0, "mul_ln60_2_fu_354_p0");
    sc_trace(mVcdFile, mul_ln60_2_fu_354_p1, "mul_ln60_2_fu_354_p1");
    sc_trace(mVcdFile, grp_fu_360_p2, "grp_fu_360_p2");
    sc_trace(mVcdFile, grp_fu_360_p3, "grp_fu_360_p3");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
#endif

    }
    mHdltvinHandle.open("matrixmul.hdltvin.dat");
    mHdltvoutHandle.open("matrixmul.hdltvout.dat");
}

matrixmul::~matrixmul() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete matrixmul_mac_mulbkb_U1;
    delete matrixmul_mac_mulcud_U2;
}

void matrixmul::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
        } else if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln54_reg_377.read(), ap_const_lv1_0))) {
        i_0_reg_144 = select_ln57_1_reg_391.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_144 = ap_const_lv2_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln54_fu_166_p2.read(), ap_const_lv1_0))) {
        indvar_flatten_reg_133 = add_ln54_fu_172_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten_reg_133 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(icmp_ln54_fu_166_p2.read(), ap_const_lv1_0))) {
        j_0_reg_155 = j_fu_254_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        j_0_reg_155 = ap_const_lv2_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln54_reg_377 = icmp_ln54_fu_166_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(icmp_ln54_fu_166_p2.read(), ap_const_lv1_0))) {
        select_ln57_1_reg_391 = select_ln57_1_fu_198_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln54_fu_166_p2.read(), ap_const_lv1_0))) {
        select_ln57_reg_386 = select_ln57_fu_190_p3.read();
    }
}

void matrixmul::thread_a_address0() {
    a_address0 =  (sc_lv<3>) (zext_ln60_fu_214_p1.read());
}

void matrixmul::thread_a_address1() {
    a_address1 =  (sc_lv<3>) (tmp_8_fu_225_p3.read());
}

void matrixmul::thread_a_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        a_ce0 = ap_const_logic_1;
    } else {
        a_ce0 = ap_const_logic_0;
    }
}

void matrixmul::thread_a_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        a_ce1 = ap_const_logic_1;
    } else {
        a_ce1 = ap_const_logic_0;
    }
}

void matrixmul::thread_add_ln54_fu_172_p2() {
    add_ln54_fu_172_p2 = (!indvar_flatten_reg_133.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(indvar_flatten_reg_133.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void matrixmul::thread_add_ln57_fu_283_p2() {
    add_ln57_fu_283_p2 = (!sub_ln57_fu_274_p2.read().is_01() || !zext_ln60_2_fu_280_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(sub_ln57_fu_274_p2.read()) + sc_biguint<5>(zext_ln60_2_fu_280_p1.read()));
}

void matrixmul::thread_add_ln60_2_fu_243_p2() {
    add_ln60_2_fu_243_p2 = (!ap_const_lv3_3.is_01() || !zext_ln60_3_fu_239_p1.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_3) + sc_biguint<3>(zext_ln60_3_fu_239_p1.read()));
}

void matrixmul::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void matrixmul::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void matrixmul::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[2];
}

void matrixmul::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrixmul::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrixmul::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrixmul::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrixmul::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void matrixmul::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(icmp_ln54_fu_166_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void matrixmul::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void matrixmul::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void matrixmul::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void matrixmul::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void matrixmul::thread_ap_phi_mux_i_0_phi_fu_148_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln54_reg_377.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_phi_fu_148_p4 = select_ln57_1_reg_391.read();
    } else {
        ap_phi_mux_i_0_phi_fu_148_p4 = i_0_reg_144.read();
    }
}

void matrixmul::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void matrixmul::thread_b_address0() {
    b_address0 =  (sc_lv<3>) (zext_ln57_1_fu_234_p1.read());
}

void matrixmul::thread_b_address1() {
    b_address1 =  (sc_lv<3>) (zext_ln60_4_fu_249_p1.read());
}

void matrixmul::thread_b_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_ce0 = ap_const_logic_1;
    } else {
        b_ce0 = ap_const_logic_0;
    }
}

void matrixmul::thread_b_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        b_ce1 = ap_const_logic_1;
    } else {
        b_ce1 = ap_const_logic_0;
    }
}

void matrixmul::thread_grp_fu_360_p2() {
    grp_fu_360_p2 = (!mul_ln60_2_fu_354_p0.read().is_01() || !mul_ln60_2_fu_354_p1.read().is_01())? sc_lv<16>(): sc_bigint<8>(mul_ln60_2_fu_354_p0.read()) * sc_bigint<8>(mul_ln60_2_fu_354_p1.read());
}

void matrixmul::thread_i_fu_178_p2() {
    i_fu_178_p2 = (!ap_const_lv2_1.is_01() || !ap_phi_mux_i_0_phi_fu_148_p4.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(ap_phi_mux_i_0_phi_fu_148_p4.read()));
}

void matrixmul::thread_icmp_ln54_fu_166_p2() {
    icmp_ln54_fu_166_p2 = (!indvar_flatten_reg_133.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_133.read() == ap_const_lv4_9);
}

void matrixmul::thread_icmp_ln56_fu_184_p2() {
    icmp_ln56_fu_184_p2 = (!j_0_reg_155.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_155.read() == ap_const_lv2_3);
}

void matrixmul::thread_j_fu_254_p2() {
    j_fu_254_p2 = (!ap_const_lv2_1.is_01() || !select_ln57_fu_190_p3.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(select_ln57_fu_190_p3.read()));
}

void matrixmul::thread_mul_ln60_2_fu_354_p0() {
    mul_ln60_2_fu_354_p0 = trunc_ln60_3_fu_346_p1.read();
}

void matrixmul::thread_mul_ln60_2_fu_354_p1() {
    mul_ln60_2_fu_354_p1 = trunc_ln60_2_fu_338_p1.read();
}

void matrixmul::thread_or_ln60_fu_219_p2() {
    or_ln60_fu_219_p2 = (tmp_fu_206_p3.read() | ap_const_lv3_1);
}

void matrixmul::thread_res_address0() {
    res_address0 =  (sc_lv<4>) (sext_ln57_fu_289_p1.read());
}

void matrixmul::thread_res_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        res_ce0 = ap_const_logic_1;
    } else {
        res_ce0 = ap_const_logic_0;
    }
}

void matrixmul::thread_res_d0() {
    res_d0 = grp_fu_368_p3.read();
}

void matrixmul::thread_res_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln54_reg_377.read(), ap_const_lv1_0))) {
        res_we0 = ap_const_logic_1;
    } else {
        res_we0 = ap_const_logic_0;
    }
}

void matrixmul::thread_select_ln57_1_fu_198_p3() {
    select_ln57_1_fu_198_p3 = (!icmp_ln56_fu_184_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln56_fu_184_p2.read()[0].to_bool())? i_fu_178_p2.read(): ap_phi_mux_i_0_phi_fu_148_p4.read());
}

void matrixmul::thread_select_ln57_fu_190_p3() {
    select_ln57_fu_190_p3 = (!icmp_ln56_fu_184_p2.read()[0].is_01())? sc_lv<2>(): ((icmp_ln56_fu_184_p2.read()[0].to_bool())? ap_const_lv2_0: j_0_reg_155.read());
}

void matrixmul::thread_sext_ln57_fu_289_p1() {
    sext_ln57_fu_289_p1 = esl_sext<64,5>(add_ln57_fu_283_p2.read());
}

void matrixmul::thread_sub_ln57_fu_274_p2() {
    sub_ln57_fu_274_p2 = (!zext_ln57_fu_270_p1.read().is_01() || !zext_ln60_1_fu_260_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(zext_ln57_fu_270_p1.read()) - sc_biguint<5>(zext_ln60_1_fu_260_p1.read()));
}

void matrixmul::thread_tmp_4_fu_310_p4() {
    tmp_4_fu_310_p4 = a_q0.read().range(15, 8);
}

void matrixmul::thread_tmp_5_fu_324_p4() {
    tmp_5_fu_324_p4 = b_q0.read().range(15, 8);
}

void matrixmul::thread_tmp_8_fu_225_p3() {
    tmp_8_fu_225_p3 = esl_concat<61,3>(ap_const_lv61_0, or_ln60_fu_219_p2.read());
}

void matrixmul::thread_tmp_9_fu_263_p3() {
    tmp_9_fu_263_p3 = esl_concat<2,2>(select_ln57_1_reg_391.read(), ap_const_lv2_0);
}

void matrixmul::thread_tmp_fu_206_p3() {
    tmp_fu_206_p3 = esl_concat<2,1>(select_ln57_1_fu_198_p3.read(), ap_const_lv1_0);
}

void matrixmul::thread_trunc_ln60_1_fu_302_p1() {
    trunc_ln60_1_fu_302_p1 = b_q0.read().range(8-1, 0);
}

void matrixmul::thread_trunc_ln60_2_fu_338_p1() {
    trunc_ln60_2_fu_338_p1 = a_q1.read().range(8-1, 0);
}

void matrixmul::thread_trunc_ln60_3_fu_346_p1() {
    trunc_ln60_3_fu_346_p1 = b_q1.read().range(8-1, 0);
}

void matrixmul::thread_trunc_ln60_fu_294_p1() {
    trunc_ln60_fu_294_p1 = a_q0.read().range(8-1, 0);
}

void matrixmul::thread_zext_ln57_1_fu_234_p1() {
    zext_ln57_1_fu_234_p1 = esl_zext<64,2>(select_ln57_fu_190_p3.read());
}

void matrixmul::thread_zext_ln57_fu_270_p1() {
    zext_ln57_fu_270_p1 = esl_zext<5,4>(tmp_9_fu_263_p3.read());
}

void matrixmul::thread_zext_ln60_1_fu_260_p1() {
    zext_ln60_1_fu_260_p1 = esl_zext<5,2>(select_ln57_1_reg_391.read());
}

void matrixmul::thread_zext_ln60_2_fu_280_p1() {
    zext_ln60_2_fu_280_p1 = esl_zext<5,2>(select_ln57_reg_386.read());
}

void matrixmul::thread_zext_ln60_3_fu_239_p1() {
    zext_ln60_3_fu_239_p1 = esl_zext<3,2>(select_ln57_fu_190_p3.read());
}

void matrixmul::thread_zext_ln60_4_fu_249_p1() {
    zext_ln60_4_fu_249_p1 = esl_zext<64,3>(add_ln60_2_fu_243_p2.read());
}

void matrixmul::thread_zext_ln60_fu_214_p1() {
    zext_ln60_fu_214_p1 = esl_zext<64,3>(tmp_fu_206_p3.read());
}

void matrixmul::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln54_fu_166_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln54_fu_166_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

void matrixmul::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_address0\" :  \"" << a_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_ce0\" :  \"" << a_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_q0\" :  \"" << a_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_address1\" :  \"" << a_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_ce1\" :  \"" << a_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_q1\" :  \"" << a_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_address0\" :  \"" << b_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_ce0\" :  \"" << b_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_q0\" :  \"" << b_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_address1\" :  \"" << b_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_ce1\" :  \"" << b_ce1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"b_q1\" :  \"" << b_q1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_address0\" :  \"" << res_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_ce0\" :  \"" << res_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_we0\" :  \"" << res_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_d0\" :  \"" << res_d0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

