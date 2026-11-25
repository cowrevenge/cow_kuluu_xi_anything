/* f_0x102e1026 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102e1026(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_5c;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 140u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e1037u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x70u); in_esi = rd32(sp0 - 0x6cu); in_ebx = rd32(sp0 - 0x68u); self = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x68u); g->edi = rd32(sp0 - 0x70u); g->esi = rd32(sp0 - 0x6cu); goto E_102e1037;
    case 0x102e1044u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1044;
    case 0x102e104du: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e104d;
    case 0x102e1059u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1059;
    case 0x102e1061u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1061;
    case 0x102e1066u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1066;
    case 0x102e106bu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e106b;
    case 0x102e1073u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1073;
    case 0x102e1078u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1078;
    case 0x102e107du: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e107d;
    case 0x102e1082u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1082;
    case 0x102e1087u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1087;
    case 0x102e108fu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e108f;
    case 0x102e1096u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1096;
    case 0x102e109cu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e109c;
    case 0x102e10a1u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e10a1;
    case 0x102e10aau: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e10aa;
    case 0x102e10afu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e10af;
    case 0x102e10b9u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e10b9;
    case 0x102e10d9u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); goto E_102e10d9;
    case 0x102e10e6u: ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); goto E_102e10e6;
    case 0x102e10efu: ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); goto E_102e10ef;
    case 0x102e10f9u: ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e10f9;
    case 0x102e1102u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; goto E_102e1102;
    case 0x102e1112u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; goto E_102e1112;
    case 0x102e1116u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; goto E_102e1116;
    case 0x102e1120u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1120;
    case 0x102e1126u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1126;
    case 0x102e112cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; goto E_102e112c;
    case 0x102e113cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; loc_5c = rd32(sp0 - 0x5cu); loc_8 = rd32(sp0 - 8u); goto E_102e113c;
    case 0x102e1143u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1143;
    case 0x102e114eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e114e;
    case 0x102e1158u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1158;
    case 0x102e115fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e115f;
    case 0x102e1166u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1166;
    case 0x102e116du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e116d;
    case 0x102e1174u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1174;
    case 0x102e117cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e117c;
    case 0x102e118eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e118e;
    case 0x102e11a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e11a1;
    case 0x102e11b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e11b4;
    case 0x102e11beu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e11be;
    case 0x102e11c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e11c3;
    case 0x102e11d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e11d3;
    case 0x102e11dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e11db;
    case 0x102e11e4u: eax = g->eax; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e11e4;
    case 0x102e11e6u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e11e6;
    case 0x102e11e9u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e11e9;
    case 0x102e11feu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e11fe;
    case 0x102e1203u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1203;
    case 0x102e1209u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1209;
    case 0x102e120fu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e120f;
    case 0x102e121au: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e121a;
    case 0x102e1221u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1221;
    case 0x102e1234u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1234;
    case 0x102e1238u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1238;
    case 0x102e1241u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1241;
    case 0x102e1246u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1246;
    case 0x102e1250u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1250;
    case 0x102e1257u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1257;
    case 0x102e125du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e125d;
    case 0x102e1261u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1261;
    case 0x102e1268u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1268;
    case 0x102e126bu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e126b;
    case 0x102e1274u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1274;
    case 0x102e127eu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e127e;
    case 0x102e1285u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1285;
    case 0x102e128cu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e128c;
    case 0x102e1293u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1293;
    case 0x102e129au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e129a;
    case 0x102e12a1u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e12a1;
    case 0x102e12a8u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e12a8;
    case 0x102e12b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e12b7;
    case 0x102e12dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e12db;
    case 0x102e12e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e12e1;
    case 0x102e12e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e12e5;
    case 0x102e12eau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e12ea;
    case 0x102e12eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e12ee;
    case 0x102e12f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e12f3;
    case 0x102e1326u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1326;
    case 0x102e132bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e132b;
    case 0x102e1331u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1331;
    case 0x102e1336u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1336;
    case 0x102e133cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e133c;
    case 0x102e1340u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1340;
    case 0x102e1345u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1345;
    case 0x102e1349u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1349;
    case 0x102e134cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e134c;
    case 0x102e1352u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1352;
    case 0x102e1364u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1364;
    case 0x102e1368u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1368;
    case 0x102e137cu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); goto E_102e137c;
    case 0x102e13e1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e13e1;
    case 0x102e13e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e13e8;
    case 0x102e13ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e13ec;
    case 0x102e13f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e13f8;
    case 0x102e13fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e13fc;
    case 0x102e1408u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1408;
    case 0x102e1411u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e1411;
    case 0x102e141au: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e141a;
    case 0x102e141cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e141c;
    case 0x102e141eu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102e141e;
    case 0x102e142du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e142d;
    case 0x102e1437u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; zf = g->zf; goto E_102e1437;
    default: break;
    }
#endif

    COW_AT(102e1026)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x68u, in_ebx);
    wr32(sp0 - 0x6cu, in_esi);
    wr32(sp0 - 0x70u, in_edi);
    wr32(sp0 - 0x1cu, self);
    g->esp = sp0 - 0x70u;
    COW_RET(0x102e1037u);
    cow_fastcall(g, COW_IMG(0x102e0f9cu), self, in_edx, 0);
    t1 = g->edx;
    edx = t1;
    COW_AT(102e1037)
    wr32(sp0 - 0x74u, sp0 - 0x64u);
    wr32(sp0 - 0x78u, arg2);
    g->esp = sp0 - 0x70u;
    COW_RET(0x102e1044u);
    cow_thiscall(g, rd32(rd32(arg2) + 0x20u), sp0 - 0x64u, 2, arg2, sp0 - 0x64u);
    t2 = g->ecx;
    ecx = t2;
    COW_AT(102e1044)
    if (rd32(sp0 + 0x10u) == 0u) goto L_102e10b9;
    esi = rd32(sp0 + 0x10u);
    COW_AT(102e104d)
    edi = sp0 - 0x34u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    t3 = rd32(sp0 - 0x34u);
    if ((int32_t)t3 < 0) goto L_102e10af;
    COW_AT(102e1059)
    if (rd32(sp0 - 0x2cu) > rd32(sp0 - 0x4cu)) goto L_102e10af;
    eax = rd32(sp0 - 0x2cu);
    COW_AT(102e1061)
    t4 = rd32(sp0 - 0x34u);
    if ((int32_t)t4 > (int32_t)eax) goto L_102e10af;
    COW_AT(102e1066)
    t5 = rd32(sp0 - 0x30u);
    if ((int32_t)t5 < 0) goto L_102e10af;
    COW_AT(102e106b)
    if (rd32(sp0 - 0x28u) > rd32(sp0 - 0x48u)) goto L_102e10af;
    ecx = rd32(sp0 - 0x28u);
    COW_AT(102e1073)
    t6 = rd32(sp0 - 0x30u);
    if ((int32_t)t6 > (int32_t)ecx) goto L_102e10af;
    COW_AT(102e1078)
    t7 = rd32(sp0 - 0x34u);
    if (t7 != 0u) goto L_102e108f;
    COW_AT(102e107d)
    if (eax != rd32(sp0 - 0x4cu)) goto L_102e108f;
    COW_AT(102e1082)
    t8 = rd32(sp0 - 0x30u);
    if (t8 != 0u) goto L_102e108f;
    COW_AT(102e1087)
    t9 = rd32(sp0 - 0x48u);
    wr32(sp0 + 0x10u, 0u);
    if (ecx == t9) goto L_102e1096;
L_102e108f: ;
    COW_AT(102e108f)
    wr32(sp0 + 0x10u, 1u);
L_102e1096: ;
    COW_AT(102e1096)
    if (arg6 & 1u) goto L_102e10aa;
    COW_AT(102e109c)
    t10 = rd32(sp0 + 0x10u);
    if (t10 != 0u) goto L_102e10aa;
    COW_AT(102e10a1)
    wr32(sp0 - 0xcu, 1u);
    loc_c = 1u;
    loc_2c = rd32(sp0 - 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_30 = rd32(sp0 - 0x30u);
L_102e10d9: ;
    COW_AT(102e10d9)
    wr32(sp0 - 8u, arg6 & 0x10000u);
    if ((arg6 & 0x10000u) != 0u)
    {
        edx = 0u;
        loc_8 = arg6 & 0x10000u;
        goto L_102e114e;
    }
    COW_AT(102e10e6)
    t14 = rd32(sp0 - 0x58u);
    if (t14 != 0u)
    {
        eax = arg6 & 0x10000u;
        loc_8 = arg6 & 0x10000u;
        goto L_102e11e6;
    }
    COW_AT(102e10ef)
    t15 = rd8(sp0 - 0x5bu);
    if ((t15 & 2u) != 0u)
    {
        eax = arg6 & 0x10000u;
        loc_8 = arg6 & 0x10000u;
        goto L_102e11e6;
    }
    COW_AT(102e10f9)
    wr32(sp0 - 0x74u, 1u);
    g->esp = sp0 - 0x70u;
    COW_RET(0x102e1102u);
    cow_call_regs(g, COW_IMG(0x102daf63u), g->eax, ecx, 0u, 1, 1, 1u);
    t16 = g->edx;
    edx = t16;
    COW_AT(102e1102)
    wr32(sp0 - 0x74u, sp0 - 0x18u);
    wr32(sp0 - 0x78u, COW_IMG(0x1034291cu));
    wr32(sp0 - 0x7cu, arg2);
    g->eax = rd32(arg2);
    g->edx = edx;
    t17 = rd32(arg2);
    g->esp = sp0 - 0x70u;
    COW_RET(0x102e1112u);
    t18 = cow_thiscall(g, rd32(t17 + 0x1cu), sp0 - 0x18u, 3, arg2, COW_IMG(0x1034291cu), sp0 - 0x18u);
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
    COW_AT(102e1112)
    if ((int32_t)eax < 0)
    {
    COW_AT(102e112c)
        t26 = rd32(arg2 + 0x10u);
        wr32(sp0 - 0x5cu, t26);
        t27 = ~(t26 >> 0x1au) & 1u;
        wr32(sp0 - 8u, t27);
        eax = t27;
        loc_8 = t27;
        loc_5c = t26;
    }
    else
    {
    COW_AT(102e1116)
        wr32(sp0 - 8u, 1u);
        if (rd32(sp0 - 0x18u) == 0u)
        {
            eax = rd32(sp0 - 0x18u);
            loc_8 = 1u;
            loc_5c = rd32(sp0 - 0x5cu);
        }
        else
        {
            eax = rd32(sp0 - 0x18u);
    COW_AT(102e1120)
            wr32(sp0 - 0x74u, eax);
            g->eax = eax;
            g->edx = edx;
            t21 = rd32(eax);
            g->esp = sp0 - 0x70u;
            COW_RET(0x102e1126u);
            t22 = cow_thiscall(g, rd32(t21 + 8u), t21, 1, eax);
            t23 = g->ecx;
            t24 = g->edx;
            eax = t22;
            ecx = t23;
            edx = t24;
    COW_AT(102e1126)
            t25 = rd32(sp0 - 0x18u);
            wr32(sp0 - 0x18u, 0u);
            loc_8 = rd32(sp0 - 8u);
            loc_5c = rd32(sp0 - 0x5cu);
        }
    }
    COW_AT(102e113c)
    wr32(sp0 - 0x74u, 0u);
    g->eax = eax;
    g->esp = sp0 - 0x70u;
    COW_RET(0x102e1143u);
    t28 = cow_call_regs(g, COW_IMG(0x102daf63u), g->eax, ecx, edx, 1, 1, 0u);
    t29 = g->edx;
    eax = t28;
    edx = t29;
    COW_AT(102e1143)
    t30 = rd32(sp0 - 8u);
    if (t30 == 0u) goto L_102e11e4;
    loc_c = rd32(sp0 - 0xcu);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_8 = rd32(sp0 - 8u);
L_102e114e: ;
    COW_AT(102e114e)
    if (rd32(sp0 - 0x64u) == 0x31545844u) goto L_102e117c;
    eax = rd32(sp0 - 0x64u);
    COW_AT(102e1158)
    if (eax == 0x32545844u) goto L_102e117c;
    COW_AT(102e115f)
    if (eax == 0x33545844u) goto L_102e117c;
    COW_AT(102e1166)
    if (eax == 0x34545844u) goto L_102e117c;
    COW_AT(102e116d)
    if (eax == 0x35545844u) goto L_102e117c;
    COW_AT(102e1174)
    eax = rd32(sp0 - 0x48u);
    ebx = rd32(sp0 - 0x4cu);
L_102e118e: ;
    COW_AT(102e118e)
    wr32(sp0 - 0x14u, eax);
    t31 = rd32(sp0 - 0x1cu) + 0xcu;
    wr32(sp0 - 0x74u, t31);
    wr32(sp0 - 0x78u, arg2);
    g->edx = edx;
    t32 = rd32(sp0 - 0x1cu);
    g->esp = sp0 - 0x70u;
    COW_RET(0x102e11a1u);
    cow_thiscall(g, rd32(rd32(arg2) + 0xcu), rd32(arg2), 2, arg2, t31);
    t33 = g->edx;
    edx = t33;
    esi = t31;
    edi = t32;
    COW_AT(102e11a1)
    wr32(sp0 - 0x74u, edi + 8u);
    t34 = rd32(sp0 - 0x64u);
    wr32(sp0 - 0x78u, t34);
    t35 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x7cu, t35);
    wr32(sp0 - 0x80u, ebx);
    wr32(sp0 - 0x84u, rd32(esi));
    g->eax = rd32(esi);
    g->edx = edx;
    t36 = rd32(esi);
    t37 = rd32(rd32(esi));
    g->esp = sp0 - 0x70u;
    COW_RET(0x102e11b4u);
    t38 = cow_thiscall(g, rd32(t37 + 0x6cu), t37, 5, t36, ebx, t35, t34, edi + 8u);
    t39 = g->ecx;
    t40 = g->edx;
    eax = t38;
    ecx = t39;
    edx = t40;
    edi = edi + 8u;
    COW_AT(102e11b4)
    if ((int32_t)eax < 0) goto L_102e13e1;
    COW_AT(102e11be)
    t41 = rd32(sp0 - 0xcu);
    if (t41 != 0u) goto L_102e11db;
    COW_AT(102e11c3)
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x78u, rd32(edi));
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x80u, 0u);
    wr32(sp0 - 0x84u, arg2);
    wr32(sp0 - 0x88u, rd32(esi));
    g->eax = rd32(rd32(esi));
    g->edx = edx;
    t42 = rd32(rd32(esi));
    g->esp = sp0 - 0x70u;
    COW_RET(0x102e11d3u);
    t43 = cow_thiscall(g, rd32(t42 + 0x70u), ecx, 6, rd32(esi), arg2, 0u, 0u, rd32(edi), 0u);
    t44 = g->ecx;
    t45 = g->edx;
    eax = t43;
    ecx = t44;
    edx = t45;
    COW_AT(102e11d3)
    if ((int32_t)eax < 0) goto L_102e13e1;
L_102e11db: ;
    COW_AT(102e11db)
    wr32(sp0 - 0x14u, rd32(edi));
    eax = rd32(edi);
    loc_c = rd32(sp0 - 0xcu);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_8 = rd32(sp0 - 8u);
    loc_14 = rd32(edi);
L_102e11e9: ;
    COW_AT(102e11e9)
    if (loc_c == 0u)
    {
        ebx = ((arg6 & 1u) | 0x80u) << 4u;
        goto L_102e126b;
    }
    COW_AT(102e11fe)
    if (loc_8 != 0u)
    {
        ebx = ((arg6 & 1u) | 0x80u) << 4u;
        goto L_102e126b;
    }
    COW_AT(102e1203)
    t46 = rd8(sp0 - 0x5bu);
    if ((t46 & 2u) == 0u)
    {
        ebx = ((arg6 & 1u) | 0x80u) << 4u;
        goto L_102e126b;
    }
    COW_AT(102e1209)
    if ((arg6 >> 0x10u & 2u) == 0u) goto L_102e121a;
    COW_AT(102e120f)
    ebx = ((arg6 & 1u) | 0x80u) << 4u | 0x2000u;
L_102e141e: ;
    COW_AT(102e141e)
    wr32(sp0 - 0x74u, ebx);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x7cu, sp0 - 0x24u);
    wr32(sp0 - 0x80u, loc_14);
    g->eax = loc_14;
    g->edx = sp0 - 0x24u;
    g->esp = sp0 - 0x70u;
    COW_RET(0x102e142du);
    t80 = cow_thiscall(g, rd32(rd32(loc_14) + 0x24u), rd32(loc_14), 4, loc_14, sp0 - 0x24u, 0u, ebx);
    t81 = g->edx;
    eax = t80;
    edx = t81;
    COW_AT(102e142d)
    if ((int32_t)eax >= 0) goto L_102e137c;
    COW_AT(102e1437)
L_102e13e1: ;
    COW_AT(102e13e1)
    g->ebx = rd32(sp0 - 0x68u);
    g->esi = rd32(sp0 - 0x6cu);
    g->edi = rd32(sp0 - 0x70u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_102e10aa: ;
    COW_AT(102e10aa)
    wr32(sp0 - 0xcu, 0u);
    loc_c = 0u;
    loc_2c = rd32(sp0 - 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_30 = rd32(sp0 - 0x30u);
    goto L_102e10d9;
L_102e10af: ;
    COW_AT(102e10af)
    eax = 0x8876086cu;
    edx = 0u;
    goto L_102e13e1;
L_102e10b9: ;
    COW_AT(102e10b9)
    t11 = rd32(sp0 - 0x4cu);
    wr32(sp0 - 0x2cu, t11);
    t12 = rd32(sp0 - 0x48u);
    wr32(sp0 - 0x28u, t12);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 + 0x10u, 0u);
    t13 = ~arg6 & 1u;
    wr32(sp0 - 0xcu, t13);
    loc_c = t13;
    loc_2c = t11;
    loc_28 = t12;
    loc_34 = 0u;
    loc_30 = 0u;
    goto L_102e10d9;
L_102e117c: ;
    COW_AT(102e117c)
    eax = rd32(sp0 - 0x48u) + 3u & 0xfffffffcu;
    ebx = rd32(sp0 - 0x4cu) + 3u & 0xfffffffcu;
    goto L_102e118e;
L_102e11e4: ;
    COW_AT(102e11e4)
    ecx = 0u;
    loc_c = rd32(sp0 - 0xcu);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_8 = rd32(sp0 - 8u);
L_102e11e6: ;
    COW_AT(102e11e6)
    wr32(sp0 - 0x14u, arg2);
    loc_14 = arg2;
    goto L_102e11e9;
L_102e121a: ;
    COW_AT(102e121a)
    wr32(sp0 - 0x74u, 1u);
    g->esp = sp0 - 0x70u;
    COW_RET(0x102e1221u);
    cow_call_regs(g, COW_IMG(0x102daf63u), g->eax, ecx, 0u, 1, 1, 1u);
    COW_AT(102e1221)
    wr32(sp0 - 0x74u, sp0 - 0x10u);
    wr32(sp0 - 0x78u, COW_IMG(0x1034290cu));
    wr32(sp0 - 0x7cu, arg2);
    g->eax = arg2;
    g->edx = sp0 - 0x10u;
    t47 = rd32(arg2);
    g->esp = sp0 - 0x70u;
    COW_RET(0x102e1234u);
    t48 = cow_thiscall(g, rd32(t47 + 0x1cu), t47, 3, arg2, COW_IMG(0x1034290cu), sp0 - 0x10u);
    t49 = g->ecx;
    t50 = g->edx;
    eax = t48;
    ecx = t49;
    edx = t50;
    COW_AT(102e1234)
    if ((int32_t)eax < 0)
    {
        ebx = ((arg6 & 1u) | 0x80u) << 4u;
    }
    else
    {
    COW_AT(102e1238)
        t51 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x74u, t51);
        g->eax = t51;
        g->edx = edx;
        t52 = rd32(rd32(sp0 - 0x10u));
        g->esp = sp0 - 0x70u;
        COW_RET(0x102e1241u);
        t53 = cow_thiscall(g, rd32(t52 + 0x34u), t52, 1, t51);
        t54 = g->ecx;
        t55 = g->edx;
        eax = t53;
        ecx = t54;
        edx = t55;
    COW_AT(102e1241)
        if (eax != 1u)
        {
            ebx = ((arg6 & 1u) | 0x80u) << 4u;
        }
        else
        {
    COW_AT(102e1246)
            t56 = rd32(sp0 + 0x10u);
            wr32(sp0 + 0x10u, 0u);
            ebx = ((arg6 & 1u) | 0x80u) << 4u | 0x2000u;
        }
    COW_AT(102e1250)
        if (rd32(sp0 - 0x10u) == 0u)
        {
            eax = rd32(sp0 - 0x10u);
        }
        else
        {
            eax = rd32(sp0 - 0x10u);
    COW_AT(102e1257)
            wr32(sp0 - 0x74u, eax);
            g->eax = eax;
            g->edx = edx;
            t57 = rd32(eax);
            g->esp = sp0 - 0x70u;
            COW_RET(0x102e125du);
            t58 = cow_thiscall(g, rd32(t57 + 8u), t57, 1, eax);
            t59 = g->ecx;
            t60 = g->edx;
            eax = t58;
            ecx = t59;
            edx = t60;
    COW_AT(102e125d)
            t61 = rd32(sp0 - 0x10u);
            wr32(sp0 - 0x10u, 0u);
        }
    }
    COW_AT(102e1261)
    wr32(sp0 - 0x74u, 0u);
    g->esp = sp0 - 0x70u;
    COW_RET(0x102e1268u);
    cow_call_regs(g, COW_IMG(0x102daf63u), g->eax, ecx, edx, 1, 1, 0u);
    COW_AT(102e1268)
    loc_2c = rd32(sp0 - 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_8 = rd32(sp0 - 8u);
    loc_14 = rd32(sp0 - 0x14u);
L_102e126b: ;
    COW_AT(102e126b)
    t62 = rd32(sp0 + 0x10u);
    if (t62 == 0u) goto L_102e141e;
    COW_AT(102e1274)
    if (rd32(sp0 - 0x64u) == 0x31545844u) goto L_102e12f3;
    eax = rd32(sp0 - 0x64u);
    COW_AT(102e127e)
    if (eax == 0x32545844u) goto L_102e12f3;
    COW_AT(102e1285)
    if (eax == 0x32595559u) goto L_102e12b7;
    COW_AT(102e128c)
    if (eax == 0x33545844u) goto L_102e12f3;
    COW_AT(102e1293)
    if (eax == 0x34545844u) goto L_102e12f3;
    COW_AT(102e129a)
    if (eax == 0x35545844u) goto L_102e12f3;
    COW_AT(102e12a1)
    if (eax == 0x59565955u) goto L_102e12b7;
    COW_AT(102e12a8)
    esi = sp0 - 0x34u;
    edi = sp0 - 0x44u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    loc_2c = rd32(sp0 - 0x2cu);
    loc_28 = rd32(sp0 - 0x28u);
    loc_34 = rd32(sp0 - 0x34u);
    loc_30 = rd32(sp0 - 0x30u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_44 = rd32(sp0 - 0x44u);
    loc_40 = rd32(sp0 - 0x40u);
L_102e1411: ;
    COW_AT(102e1411)
    t69 = rd32(sp0 + 0x10u);
    if (t69 != 0u) goto L_102e1352;
    COW_AT(102e141a)
    goto L_102e141e;
L_102e12b7: ;
    COW_AT(102e12b7)
    wr32(sp0 - 0x44u, loc_34 & 0xfffffffeu);
    t63 = loc_2c + 1u & 0xfffffffeu;
    wr32(sp0 - 0x3cu, t63);
    wr32(sp0 - 0x40u, loc_30);
    wr32(sp0 - 0x38u, loc_28);
    if ((loc_2c + 1u & 0xfffffffeu) <= rd32(sp0 - 0x4cu))
    {
        eax = t63;
        ecx = loc_34 & 0xfffffffeu;
        edx = loc_30;
        esi = loc_28;
        loc_44 = loc_34 & 0xfffffffeu;
        loc_40 = loc_30;
    }
    else
    {
        ecx = loc_34 & 0xfffffffeu;
        edx = loc_30;
        esi = loc_28;
        loc_44 = loc_34 & 0xfffffffeu;
        loc_40 = loc_30;
    COW_AT(102e12db)
        t64 = rd32(sp0 - 0x4cu);
        wr32(sp0 - 0x3cu, t64);
        eax = t64;
    }
    COW_AT(102e12e1)
    if (ecx != 0u) goto L_102e1352;
    COW_AT(102e12e5)
    if (eax != rd32(sp0 - 0x4cu)) goto L_102e1352;
    COW_AT(102e12ea)
    if (edx != 0u) goto L_102e1352;
    COW_AT(102e12ee)
    zf = esi == rd32(sp0 - 0x48u);
L_102e134c: ;
    COW_AT(102e134c)
    if (zf) goto L_102e141c;
L_102e1352: ;
    COW_AT(102e1352)
    wr32(sp0 - 0x74u, ebx);
    wr32(sp0 - 0x78u, sp0 - 0x44u);
    wr32(sp0 - 0x7cu, sp0 - 0x24u);
    wr32(sp0 - 0x80u, loc_14);
    g->eax = loc_14;
    g->edx = sp0 - 0x24u;
    g->esp = sp0 - 0x70u;
    COW_RET(0x102e1364u);
    t70 = cow_thiscall(g, rd32(rd32(loc_14) + 0x24u), rd32(loc_14), 4, loc_14, sp0 - 0x24u, sp0 - 0x44u, ebx);
    t71 = g->edx;
    eax = t70;
    edx = t71;
    COW_AT(102e1364)
    if ((int32_t)eax < 0) goto L_102e13e1;
    COW_AT(102e1368)
    t72 = rd32(sp0 - 0x34u);
    t73 = t72 - rd32(sp0 - 0x44u);
    wr32(sp0 - 0x34u, t73);
    t74 = rd32(sp0 - 0x2cu);
    t75 = t74 - rd32(sp0 - 0x44u);
    wr32(sp0 - 0x2cu, t75);
    t76 = rd32(sp0 - 0x30u);
    t77 = t76 - rd32(sp0 - 0x40u);
    wr32(sp0 - 0x30u, t77);
    t78 = rd32(sp0 - 0x28u);
    t79 = t78 - rd32(sp0 - 0x40u);
    wr32(sp0 - 0x28u, t79);
L_102e137c: ;
    COW_AT(102e137c)
    t82 = rd32(sp0 - 0x20u);
    wr32(arg1 + 0xcu, 0u);
    wr32(arg1 + 0x10u, 0u);
    wr32(arg1 + 0x14u, 0u);
    wr32(arg1 + 0x20u, 0u);
    wr32(arg1 + 0x38u, 0u);
    wr32(arg1, t82);
    t83 = rd32(sp0 - 0x64u);
    wr32(arg1 + 4u, t83);
    t84 = rd32(sp0 - 0x24u);
    esi = sp0 - 0x34u;
    edi = arg1 + 0x28u;
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(arg1 + 0x3cu, 1u);
    wr32(arg1 + 0x40u, 1u);
    wr32(arg1 + 8u, t84);
    t85 = rd32(sp0 - 0x4cu);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(arg1 + 0x44u, arg5);
    wr32(arg1 + 0x18u, t85);
    t86 = rd32(sp0 - 0x48u);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(arg1 + 0x48u, arg3);
    wr32(arg1 + 0x1cu, t86);
    wr32(arg1 + 0x24u, 1u);
    t87 = rd32(sp0 - 0x1cu);
    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
    wr32(t87 + 4u, arg2);
    wr32(t87, arg6);
    eax = 0u;
    edx = t86;
    goto L_102e13e1;
L_102e12f3: ;
    COW_AT(102e12f3)
    wr32(sp0 - 0x74u, 0xfffffffcu);
    wr32(sp0 - 0x44u, loc_34 & 0xfffffffcu);
    t65 = loc_2c + 3u & 0xfffffffcu;
    wr32(sp0 - 0x3cu, t65);
    wr32(sp0 - 0x40u, loc_30 & 0xfffffffcu);
    t66 = loc_28 + 3u & 0xfffffffcu;
    wr32(sp0 - 0x38u, t66);
    if (loc_8 != 0u)
    {
        eax = t65;
        ecx = t66;
        edx = loc_34 & 0xfffffffcu;
        esi = loc_30 & 0xfffffffcu;
        loc_44 = loc_34 & 0xfffffffcu;
        loc_40 = loc_30 & 0xfffffffcu;
        goto L_102e13e8;
    }
    eax = t65;
    ecx = t66;
    edx = loc_34 & 0xfffffffcu;
    esi = loc_30 & 0xfffffffcu;
    loc_44 = loc_34 & 0xfffffffcu;
    loc_40 = loc_30 & 0xfffffffcu;
    COW_AT(102e1326)
    if (eax > rd32(sp0 - 0x4cu))
    {
    COW_AT(102e132b)
        t67 = rd32(sp0 - 0x4cu);
        wr32(sp0 - 0x3cu, t67);
        eax = t67;
    }
    COW_AT(102e1331)
    if (ecx > rd32(sp0 - 0x48u))
    {
    COW_AT(102e1336)
        t68 = rd32(sp0 - 0x48u);
        wr32(sp0 - 0x38u, t68);
        ecx = t68;
    }
    COW_AT(102e133c)
    if (edx != 0u) goto L_102e1352;
    COW_AT(102e1340)
    if (eax != rd32(sp0 - 0x4cu)) goto L_102e1352;
    COW_AT(102e1345)
    if (esi != 0u) goto L_102e1352;
    COW_AT(102e1349)
    zf = ecx == rd32(sp0 - 0x48u);
    goto L_102e134c;
L_102e13e8: ;
    COW_AT(102e13e8)
    if (edx != 0u) goto L_102e1408;
    COW_AT(102e13ec)
    if (eax != (rd32(sp0 - 0x4cu) + 3u & 0xfffffffcu)) goto L_102e1408;
    COW_AT(102e13f8)
    if (esi != 0u) goto L_102e1408;
    COW_AT(102e13fc)
    if (ecx == (rd32(sp0 - 0x48u) + 3u & 0xfffffffcu)) goto L_102e141c;
L_102e1408: ;
    COW_AT(102e1408)
    wr32(sp0 + 0x10u, 1u);
    goto L_102e1411;
L_102e141c: ;
    COW_AT(102e141c)
    goto L_102e141e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102e1026(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e1037u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x70u);
        in_esi = rd32(sp0 - 0x6cu);
        in_ebx = rd32(sp0 - 0x68u);
        self = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1044u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x74u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102e104du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x74u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102e1059u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1061u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1066u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e106bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1073u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1078u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e107du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1082u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1087u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e108fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1096u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e109cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e10a1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e10aau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e10afu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e10b9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x74u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x102e10d9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e10e6u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        uint32_t zf;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x70u;
        g->eax = arg6 & 0x10000u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, arg6 & 0x10000u);
        (void)sp0;
        return 1;
    }
    case 0x102e10efu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_c;
        uint32_t zf;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x70u;
        g->eax = arg6 & 0x10000u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, arg6 & 0x10000u);
        (void)sp0;
        return 1;
    }
    case 0x102e10f9u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->eax = arg6 & 0x10000u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1102u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x74u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        wr32(sp0 - 0x74u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102e1112u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102e1116u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102e1120u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102e1126u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e112cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = 1u;
        wr32(sp0 - 0x74u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x102e113cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_5c;
        uint32_t loc_8;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_5c = rd32(sp0 - 0x5cu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1143u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x74u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x74u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e114eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1158u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e115fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1166u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e116du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1174u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e117cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e118eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e11a1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e11b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e11beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e11c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e11d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e11dbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e11e4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ecx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e11e6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e11e9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e11feu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = ((arg6 & 1u) | 0x80u) << 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1203u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = ((arg6 & 1u) | 0x80u) << 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1209u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = ((arg6 & 1u) | 0x80u) << 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e120fu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = ((arg6 & 1u) | 0x80u) << 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e121au:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebx = ((arg6 & 1u) | 0x80u) << 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1221u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x74u;
        g->ebx = ((arg6 & 1u) | 0x80u) << 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x74u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102e1234u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebx = ((arg6 & 1u) | 0x80u) << 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x74u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102e1238u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebx = ((arg6 & 1u) | 0x80u) << 4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x74u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x102e1241u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebx = ((arg6 & 1u) | 0x80u) << 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1246u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebx = ((arg6 & 1u) | 0x80u) << 4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1250u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1257u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e125du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1261u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1268u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x74u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x74u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e126bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1274u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e127eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1285u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e128cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1293u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e129au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e12a1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e12a8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e12b7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e12dbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e12e1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e12e5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e12eau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e12eeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e12f3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1326u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e132bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1331u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1336u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e133cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1340u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1345u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1349u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e134cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1352u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1364u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x102e1368u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        wr32(sp0 - 0x78u, sp0 - 0x44u);
        (void)sp0;
        return 1;
    }
    case 0x102e137cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x70u;
        g->ecx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102e13e1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e13e8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        g->edi = 0xfffffffcu;
        (void)sp0;
        return 1;
    }
    case 0x102e13ecu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        g->edi = 0xfffffffcu;
        (void)sp0;
        return 1;
    }
    case 0x102e13f8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        g->edi = 0xfffffffcu;
        (void)sp0;
        return 1;
    }
    case 0x102e13fcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        g->edi = 0xfffffffcu;
        (void)sp0;
        return 1;
    }
    case 0x102e1408u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e1411u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e141au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e141cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e141eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_8;
        uint32_t loc_c;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x70u;
        g->edx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e142du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x102e1437u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x70u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x7cu, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102e1026(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e1026(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
