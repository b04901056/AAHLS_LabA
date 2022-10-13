-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
-- Version: 2020.1
-- Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity matrixmul is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    a_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    a_ce0 : OUT STD_LOGIC;
    a_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    b_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    b_ce0 : OUT STD_LOGIC;
    b_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    res_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    res_ce0 : OUT STD_LOGIC;
    res_we0 : OUT STD_LOGIC;
    res_d0 : OUT STD_LOGIC_VECTOR (15 downto 0) );
end;


architecture behav of matrixmul is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "matrixmul,hls_ip_2020_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xcvu9p-flgb2104-1-e,HLS_INPUT_CLOCK=13.333000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=3.576000,HLS_SYN_LAT=79,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=1,HLS_SYN_FF=44,HLS_SYN_LUT=185,HLS_VERSION=2020_1}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (4 downto 0) := "00100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (4 downto 0) := "01000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv16_0 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    constant ap_const_lv2_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_fu_130_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal i_reg_257 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal sub_ln60_fu_152_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal sub_ln60_reg_262 : STD_LOGIC_VECTOR (4 downto 0);
    signal icmp_ln54_fu_124_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal j_fu_164_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal j_reg_271 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal zext_ln57_fu_170_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal zext_ln57_reg_276 : STD_LOGIC_VECTOR (4 downto 0);
    signal icmp_ln56_fu_158_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal res_addr_reg_281 : STD_LOGIC_VECTOR (3 downto 0);
    signal k_fu_190_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal k_reg_289 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal icmp_ln59_fu_184_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal grp_fu_246_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal i_0_reg_78 : STD_LOGIC_VECTOR (1 downto 0);
    signal j_0_reg_89 : STD_LOGIC_VECTOR (1 downto 0);
    signal res_load_reg_100 : STD_LOGIC_VECTOR (15 downto 0);
    signal k_0_reg_113 : STD_LOGIC_VECTOR (1 downto 0);
    signal sext_ln57_fu_179_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal sext_ln60_2_fu_205_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal sext_ln60_3_fu_233_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_2_fu_140_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal zext_ln60_1_fu_148_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal zext_ln60_fu_136_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal add_ln57_fu_174_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal zext_ln60_2_fu_196_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal add_ln60_1_fu_200_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_3_fu_210_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal zext_ln60_3_fu_218_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal sub_ln60_1_fu_222_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal add_ln60_2_fu_228_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (4 downto 0);

    component matrixmul_mac_mulbkb IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (7 downto 0);
        din1 : IN STD_LOGIC_VECTOR (7 downto 0);
        din2 : IN STD_LOGIC_VECTOR (15 downto 0);
        dout : OUT STD_LOGIC_VECTOR (15 downto 0) );
    end component;



begin
    matrixmul_mac_mulbkb_U1 : component matrixmul_mac_mulbkb
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 8,
        din1_WIDTH => 8,
        din2_WIDTH => 16,
        dout_WIDTH => 16)
    port map (
        din0 => b_q0,
        din1 => a_q0,
        din2 => res_load_reg_100,
        dout => grp_fu_246_p3);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    i_0_reg_78_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln56_fu_158_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                i_0_reg_78 <= i_reg_257;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_0_reg_78 <= ap_const_lv2_0;
            end if; 
        end if;
    end process;

    j_0_reg_89_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln59_fu_184_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
                j_0_reg_89 <= j_reg_271;
            elsif (((icmp_ln54_fu_124_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                j_0_reg_89 <= ap_const_lv2_0;
            end if; 
        end if;
    end process;

    k_0_reg_113_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                k_0_reg_113 <= k_reg_289;
            elsif (((icmp_ln56_fu_158_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                k_0_reg_113 <= ap_const_lv2_0;
            end if; 
        end if;
    end process;

    res_load_reg_100_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                res_load_reg_100 <= grp_fu_246_p3;
            elsif (((icmp_ln56_fu_158_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                res_load_reg_100 <= ap_const_lv16_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_reg_257 <= i_fu_130_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                j_reg_271 <= j_fu_164_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                k_reg_289 <= k_fu_190_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln56_fu_158_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                res_addr_reg_281 <= sext_ln57_fu_179_p1(4 - 1 downto 0);
                    zext_ln57_reg_276(1 downto 0) <= zext_ln57_fu_170_p1(1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((icmp_ln54_fu_124_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                sub_ln60_reg_262 <= sub_ln60_fu_152_p2;
            end if;
        end if;
    end process;
    zext_ln57_reg_276(4 downto 2) <= "000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, icmp_ln54_fu_124_p2, ap_CS_fsm_state3, icmp_ln56_fu_158_p2, ap_CS_fsm_state4, icmp_ln59_fu_184_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((icmp_ln54_fu_124_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((icmp_ln56_fu_158_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                if (((icmp_ln59_fu_184_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when others =>  
                ap_NS_fsm <= "XXXXX";
        end case;
    end process;
    a_address0 <= sext_ln60_2_fu_205_p1(4 - 1 downto 0);

    a_ce0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            a_ce0 <= ap_const_logic_1;
        else 
            a_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    add_ln57_fu_174_p2 <= std_logic_vector(unsigned(sub_ln60_reg_262) + unsigned(zext_ln57_fu_170_p1));
    add_ln60_1_fu_200_p2 <= std_logic_vector(unsigned(sub_ln60_reg_262) + unsigned(zext_ln60_2_fu_196_p1));
    add_ln60_2_fu_228_p2 <= std_logic_vector(unsigned(sub_ln60_1_fu_222_p2) + unsigned(zext_ln57_reg_276));
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);

    ap_done_assign_proc : process(ap_CS_fsm_state2, icmp_ln54_fu_124_p2)
    begin
        if (((icmp_ln54_fu_124_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state2, icmp_ln54_fu_124_p2)
    begin
        if (((icmp_ln54_fu_124_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    b_address0 <= sext_ln60_3_fu_233_p1(4 - 1 downto 0);

    b_ce0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            b_ce0 <= ap_const_logic_1;
        else 
            b_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    i_fu_130_p2 <= std_logic_vector(unsigned(i_0_reg_78) + unsigned(ap_const_lv2_1));
    icmp_ln54_fu_124_p2 <= "1" when (i_0_reg_78 = ap_const_lv2_3) else "0";
    icmp_ln56_fu_158_p2 <= "1" when (j_0_reg_89 = ap_const_lv2_3) else "0";
    icmp_ln59_fu_184_p2 <= "1" when (k_0_reg_113 = ap_const_lv2_3) else "0";
    j_fu_164_p2 <= std_logic_vector(unsigned(j_0_reg_89) + unsigned(ap_const_lv2_1));
    k_fu_190_p2 <= std_logic_vector(unsigned(k_0_reg_113) + unsigned(ap_const_lv2_1));
    res_address0 <= res_addr_reg_281;

    res_ce0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            res_ce0 <= ap_const_logic_1;
        else 
            res_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    res_d0 <= res_load_reg_100;

    res_we0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            res_we0 <= ap_const_logic_1;
        else 
            res_we0 <= ap_const_logic_0;
        end if; 
    end process;

        sext_ln57_fu_179_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(add_ln57_fu_174_p2),64));

        sext_ln60_2_fu_205_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(add_ln60_1_fu_200_p2),64));

        sext_ln60_3_fu_233_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(add_ln60_2_fu_228_p2),64));

    sub_ln60_1_fu_222_p2 <= std_logic_vector(unsigned(zext_ln60_3_fu_218_p1) - unsigned(zext_ln60_2_fu_196_p1));
    sub_ln60_fu_152_p2 <= std_logic_vector(unsigned(zext_ln60_1_fu_148_p1) - unsigned(zext_ln60_fu_136_p1));
    tmp_2_fu_140_p3 <= (i_0_reg_78 & ap_const_lv2_0);
    tmp_3_fu_210_p3 <= (k_0_reg_113 & ap_const_lv2_0);
    zext_ln57_fu_170_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_0_reg_89),5));
    zext_ln60_1_fu_148_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_2_fu_140_p3),5));
    zext_ln60_2_fu_196_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(k_0_reg_113),5));
    zext_ln60_3_fu_218_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_3_fu_210_p3),5));
    zext_ln60_fu_136_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_0_reg_78),5));
end behav;
