#define op_shift1          	0x0000
#define op_shift0          	0x0100
#define op_pushc           	0x0002
#define op_pushl           	0x0102
#define op_push            	0x0004
#define op_popc            	0x0006
#define op_popl            	0x0104
#define op_pop             	0x0008
#define op_shrl            	0x0106
#define op_shrul           	0x0108
#define op_shr             	0x000A
#define op_shru            	0x000C
#define op_shll            	0x010A
#define op_shl             	0x000E
#define op_plusf           	0x010C
#define op_plusl           	0x010E
#define op_plus            	0x0010
#define op_minusf          	0x0110
#define op_minusl          	0x0112
#define op_minus           	0x0012
#define op_mulf            	0x0114
#define op_mull            	0x0116
#define op_mul             	0x0014
#define op_divf            	0x0118
#define op_divl            	0x011A
#define op_divul           	0x011C
#define op_div             	0x0016
#define op_divu            	0x0018
#define op_remf            	0x011E
#define op_reml            	0x0120
#define op_remul           	0x0122
#define op_rem             	0x001A
#define op_remu            	0x001C
#define op_negatef         	0x0124
#define op_negatel         	0x0126
#define op_negate          	0x001E
#define op_bandl           	0x0128
#define op_band            	0x0020
#define op_orl             	0x012A
#define op_or              	0x0022
#define op_xorl            	0x012C
#define op_xor             	0x0024
#define op_cpll            	0x012E
#define op_cpl             	0x0026
#define op_assignc         	0x0028
#define op_assignl         	0x0130
#define op_assign          	0x002A
#define op_derefc          	0x002C
#define op_derefl          	0x0132
#define op_deref           	0x002E
#define op_constc          	0x0030
#define op_constl          	0x0134
#define op_const           	0x0032
#define op_notc            	0x0034
#define op_notl            	0x0136
#define op_not             	0x0036
#define op_boolc           	0x0038
#define op_booll           	0x0138
#define op_bool            	0x003A
#define op_extc            	0x003C
#define op_extuc           	0x003E
#define op_ext             	0x0040
#define op_extu            	0x0042
#define op_f2l             	0x0044
#define op_l2f             	0x0046
#define op_f2ul            	0x0048
#define op_ul2f            	0x004A
#define op_xxeq            	0x004C
#define op_xxeqpostc       	0x004E
#define op_xxeqpostl       	0x013A
#define op_xxeqpost        	0x0050
#define op_postincc        	0x0052
#define op_postincf        	0x013C
#define op_postincl        	0x013E
#define op_postinc         	0x0054
#define op_callfname       	0x0056
#define op_callfunc        	0x0058
#define op_jfalse          	0x005A
#define op_jtrue           	0x005C
#define op_jump            	0x005E
#define op_switchc         	0x0060
#define op_switchl         	0x0140
#define op_switch          	0x0062
#define op_cceqf           	0x0142
#define op_cceql           	0x0144
#define op_cceq            	0x0064
#define op_ccltf           	0x0146
#define op_ccltl           	0x0148
#define op_ccltul          	0x014A
#define op_cclt            	0x0066
#define op_ccltu           	0x0068
#define op_cclteqf         	0x014C
#define op_cclteql         	0x014E
#define op_ccltequl        	0x0150
#define op_cclteq          	0x006A
#define op_ccltequ         	0x006C
#define op_nrefc           	0x006E
#define op_nrefl           	0x0152
#define op_nref            	0x0070
#define op_lrefc           	0x0072
#define op_lrefl           	0x0154
#define op_lref            	0x0074
#define op_nstorec         	0x0076
#define op_nstorel         	0x0156
#define op_nstore          	0x0078
#define op_lstorec         	0x007A
#define op_lstorel         	0x0158
#define op_lstore          	0x007C
#define op_local           	0x007E
#define op_plusconst       	0x0080
#define op_plus4           	0x0082
#define op_plus3           	0x0084
#define op_plus2           	0x0086
#define op_plus1           	0x0088
#define op_minus4          	0x008A
#define op_minus3          	0x008C
#define op_minus2          	0x008E
#define op_minus1          	0x0090
#define op_fnenter         	0x0092
#define op_fnexit          	0x0094
#define op_cleanup         	0x0096
#define op_native          	0x0098
#define op_byte            	0x009A
#define op_r0refc          	0x015A
#define op_r0ref           	0x015C
#define op_r0storec        	0x015E
#define op_r0store         	0x0160
#define op_r0derefc        	0x0162
#define op_r0deref         	0x0164
#define op_r0inc1          	0x0166
#define op_r0inc2          	0x0168
#define op_r0dec           	0x016A
#define op_r0dec2          	0x016C
#define op_r0drfpost       	0x016E
#define op_r0drfpre        	0x0170
#define op_r1refc          	0x0172
#define op_r1ref           	0x0174
#define op_r1storec        	0x0176
#define op_r1store         	0x0178
#define op_r1derefc        	0x017A
#define op_r1deref         	0x017C
#define op_r1inc1          	0x017E
#define op_r1inc2          	0x0180
#define op_r1dec           	0x0182
#define op_r1dec2          	0x0184
#define op_r1drfpost       	0x0186
#define op_r1drfpre        	0x0188
#define op_r2refc          	0x018A
#define op_r2ref           	0x018C
#define op_r2storec        	0x018E
#define op_r2store         	0x0190
#define op_r2derefc        	0x0192
#define op_r2deref         	0x0194
#define op_r2inc1          	0x0196
#define op_r2inc2          	0x0198
#define op_r2dec           	0x019A
#define op_r2dec2          	0x019C
#define op_r2drfpost       	0x019E
#define op_r2drfpre        	0x01A0
#define op_r3refc          	0x01A2
#define op_r3ref           	0x01A4
#define op_r3storec        	0x01A6
#define op_r3store         	0x01A8
#define op_r3derefc        	0x01AA
#define op_r3deref         	0x01AC
#define op_r3inc1          	0x01AE
#define op_r3inc2          	0x01B0
#define op_r3dec           	0x01B2
#define op_r3dec2          	0x01B4
#define op_r3drfpost       	0x01B6
#define op_r3drfpre        	0x01B8
