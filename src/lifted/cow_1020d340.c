/* f_0x1020d340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020d340(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020d34fu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020d34f;
    case 0x1020d35bu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020d35b;
    case 0x1020d360u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d360;
    case 0x1020d364u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d364;
    case 0x1020d369u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d369;
    case 0x1020d36du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d36d;
    case 0x1020d37cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d37c;
    case 0x1020d383u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d383;
    case 0x1020d396u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1020d396;
    case 0x1020d39au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d39a;
    case 0x1020d3adu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1020d3ad;
    case 0x1020d3b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d3b1;
    case 0x1020d3c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1020d3c4;
    case 0x1020d3c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d3c8;
    case 0x1020d3dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1020d3db;
    case 0x1020d3dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d3df;
    case 0x1020d3f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1020d3f2;
    case 0x1020d3f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d3f6;
    case 0x1020d409u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1020d409;
    case 0x1020d40du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d40d;
    case 0x1020d420u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1020d420;
    case 0x1020d424u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d424;
    case 0x1020d432u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d432;
    case 0x1020d437u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d437;
    case 0x1020d43bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d43b;
    case 0x1020d444u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d444;
    case 0x1020d44au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d44a;
    case 0x1020d452u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d452;
    case 0x1020d462u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1020d462;
    case 0x1020d46du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1020d46d;
    case 0x1020d47cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d47c;
    case 0x1020d489u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d489;
    case 0x1020d493u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d493;
    case 0x1020d4a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1020d4a3;
    case 0x1020d4aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1020d4ae;
    case 0x1020d4bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d4bd;
    case 0x1020d4cau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d4ca;
    case 0x1020d4d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d4d4;
    case 0x1020d4ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d4dd;
    case 0x1020d4e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d4e4;
    case 0x1020d4f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_1020d4f1;
    case 0x1020d4f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d4f5;
    case 0x1020d502u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_1020d502;
    case 0x1020d506u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d506;
    case 0x1020d510u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d510;
    case 0x1020d515u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d515;
    case 0x1020d524u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_1020d524;
    case 0x1020d528u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d528;
    case 0x1020d532u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d532;
    case 0x1020d53bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1020d53b;
    case 0x1020d54au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_1020d54a;
    case 0x1020d54eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d54e;
    case 0x1020d557u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d557;
    case 0x1020d55cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_1020d55c;
    case 0x1020d562u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d562;
    case 0x1020d565u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d565;
    case 0x1020d567u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_1020d567;
    case 0x1020d57bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_1020d57b;
    case 0x1020d58au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1020d58a;
    default: break;
    }
#endif

    COW_AT(1020d340)
    wr32(sp0 - 4u, in_esi);
    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        loc_4 = in_esi;
        goto L_1020d58a;
    }
    ecx = rd32(COW_IMG(0x10664494u));
    COW_AT(1020d34f)
    t1 = rd16(sp0 + 4u);
    if ((uint16_t)t1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        loc_4 = in_esi;
        goto L_1020d58a;
    }
    COW_AT(1020d35b)
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x1020a410u), in_eax, g->ecx, g->edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(1020d360)
    if ((uint8_t)eax == 0u) goto L_1020d36d;
    COW_AT(1020d364)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t6 = g->edx;
    eax = t5;
    edx = t6;
    COW_AT(1020d369)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d36d: ;
    COW_AT(1020d36d)
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) - 1u > 0x10u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        loc_4 = rd32(sp0 - 4u);
        goto L_1020d58a;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    COW_AT(1020d37c)
    t7 = rd32(COW_IMG(0x1020d590u) + eax * 4u);
    switch (t7 - RD)
    {
    case 0x1020d383u: goto L_1020d383;
    case 0x1020d39au: goto L_1020d39a;
    case 0x1020d3b1u: goto L_1020d3b1;
    case 0x1020d3c8u: goto L_1020d3c8;
    case 0x1020d3dfu: goto L_1020d3df;
    case 0x1020d3f6u: goto L_1020d3f6;
    case 0x1020d40du: goto L_1020d40d;
    case 0x1020d424u: goto L_1020d424;
    case 0x1020d43bu: goto L_1020d43b;
    case 0x1020d452u: goto L_1020d452;
    case 0x1020d493u: goto L_1020d493;
    case 0x1020d4d4u: goto L_1020d4d4;
    case 0x1020d4e4u: goto L_1020d4e4;
    case 0x1020d4f5u: goto L_1020d4f5;
    case 0x1020d506u: goto L_1020d506;
    case 0x1020d528u: goto L_1020d528;
    case 0x1020d54eu: goto L_1020d54e;
    default: rt_fatal(g, COW_IMG(0x1020d37cu), "switch");
    }
    return 0;
L_1020d383: ;
    COW_AT(1020d383)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385af0u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t70 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385af0u), 1u, 0u);
    t71 = g->edx;
    eax = t70;
    edx = t71;
    COW_AT(1020d396)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d39a: ;
    COW_AT(1020d39a)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385adcu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t68 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385adcu), 1u, 0u);
    t69 = g->edx;
    eax = t68;
    edx = t69;
    COW_AT(1020d3ad)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d3b1: ;
    COW_AT(1020d3b1)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385ac8u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t66 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385ac8u), 1u, 0u);
    t67 = g->edx;
    eax = t66;
    edx = t67;
    COW_AT(1020d3c4)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d3c8: ;
    COW_AT(1020d3c8)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385ab4u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t64 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385ab4u), 1u, 0u);
    t65 = g->edx;
    eax = t64;
    edx = t65;
    COW_AT(1020d3db)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d3df: ;
    COW_AT(1020d3df)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385aa0u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t62 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385aa0u), 1u, 0u);
    t63 = g->edx;
    eax = t62;
    edx = t63;
    COW_AT(1020d3f2)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d3f6: ;
    COW_AT(1020d3f6)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385a8cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t60 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385a8cu), 1u, 0u);
    t61 = g->edx;
    eax = t60;
    edx = t61;
    COW_AT(1020d409)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d40d: ;
    COW_AT(1020d40d)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385a78u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t58 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385a78u), 1u, 0u);
    t59 = g->edx;
    eax = t58;
    edx = t59;
    COW_AT(1020d420)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d424: ;
    COW_AT(1020d424)
    if (rd32(COW_IMG(0x106644c0u)) == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        goto L_1020d58a;
    }
    ecx = rd32(COW_IMG(0x106644c0u));
    COW_AT(1020d432)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t56 = cow_fastcall(g, COW_IMG(0x1020ee70u), ecx, edx, 0);
    t57 = g->edx;
    eax = t56;
    edx = t57;
    COW_AT(1020d437)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d43b: ;
    COW_AT(1020d43b)
    wr32(sp0 - 8u, ecx + 0x5cu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t47 = cow_cdecl(g, COW_IMG(0x10107ff0u), 1, ecx + 0x5cu);
    t48 = g->ecx;
    t49 = g->edx;
    eax = t47;
    edx = t49;
    esi = ecx + 0x5cu;
    ecx = t48;
    COW_AT(1020d444)
    wr32(sp0 - 0xcu, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t50 = cow_cdecl(g, COW_IMG(0x10107fd0u), 1, esi);
    t51 = g->edx;
    eax = t50;
    edx = t51;
    COW_AT(1020d44a)
L_1020d565: ;
    COW_AT(1020d565)
    wr32(sp0 - 8u, 0u);
    loc_8 = 0u;
L_1020d567: ;
    COW_AT(1020d567)
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, esi);
    wr32(sp0 - 0x1cu, 1u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t52 = cow_call_regs(g, COW_IMG(0x1020a9d0u), eax, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, esi, 1u, 0u, 0u, loc_8);
    t53 = g->edx;
    eax = t52;
    edx = t53;
L_1020d57b: ;
    COW_AT(1020d57b)
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t54 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t55 = g->edx;
    eax = t54;
    edx = t55;
    loc_4 = rd32(sp0 - 4u);
L_1020d58a: ;
    COW_AT(1020d58a)
    g->esi = loc_4;
    g->edx = edx;
    return eax;
L_1020d452: ;
    COW_AT(1020d452)
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t38 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, sp0 + 4u, 0u, 0u, 1u);
    t39 = g->edx;
    eax = t38;
    edx = t39;
    COW_AT(1020d462)
    if ((uint8_t)eax == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        goto L_1020d58a;
    }
    COW_AT(1020d46d)
    t40 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
    wr32(sp0 - 8u, t40);
    g->ecx = rd32(COW_IMG(0x10664494u));
    t41 = rd32(COW_IMG(0x10664494u));
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10107ef0u), 1, t40);
    t42 = g->ecx;
    ecx = t42;
    esi = t40;
    COW_AT(1020d47c)
    t43 = rd32(rd32(sp0 + 4u));
    wr32(sp0 - 0xcu, t43);
    wr32(sp0 - 0x10u, esi);
    g->eax = t43;
    g->edx = rd32(sp0 + 4u);
    t44 = rd32(sp0 + 4u);
    g->esp = sp0 - 8u;
    t45 = cow_cdecl(g, COW_IMG(0x10107ed0u), 2, esi, t43);
    t46 = g->edx;
    eax = t45;
    edx = t46;
    COW_AT(1020d489)
    wr32(sp0 - 8u, 1u);
    loc_8 = 1u;
    goto L_1020d567;
L_1020d493: ;
    COW_AT(1020d493)
    wr32(sp0 - 8u, 2u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t28 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 + 4u, 4, sp0 + 4u, 0u, 0u, 2u);
    t29 = g->ecx;
    t30 = g->edx;
    eax = t28;
    ecx = t29;
    edx = t30;
    COW_AT(1020d4a3)
    if ((uint8_t)eax == 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        goto L_1020d58a;
    }
    COW_AT(1020d4ae)
    t31 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
    wr32(sp0 - 8u, t31);
    g->edx = rd32(COW_IMG(0x10664494u));
    t32 = rd32(COW_IMG(0x10664494u));
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10107f40u), 1, t31);
    t33 = g->edx;
    edx = t33;
    esi = t31;
    COW_AT(1020d4bd)
    t34 = rd32(rd32(sp0 + 4u));
    wr32(sp0 - 0xcu, t34);
    wr32(sp0 - 0x10u, esi);
    g->eax = rd32(sp0 + 4u);
    g->edx = edx;
    t35 = rd32(sp0 + 4u);
    g->esp = sp0 - 8u;
    t36 = cow_cdecl(g, COW_IMG(0x10107f10u), 2, esi, t34);
    t37 = g->edx;
    eax = t36;
    edx = t37;
    COW_AT(1020d4ca)
    wr32(sp0 - 8u, 2u);
    loc_8 = 2u;
    goto L_1020d567;
L_1020d4d4: ;
    COW_AT(1020d4d4)
    wr32(sp0 - 8u, ecx + 0x5cu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t23 = cow_cdecl(g, COW_IMG(0x10107ea0u), 1, ecx + 0x5cu);
    t24 = g->ecx;
    t25 = g->edx;
    eax = t23;
    edx = t25;
    esi = ecx + 0x5cu;
    ecx = t24;
    COW_AT(1020d4dd)
    wr32(sp0 - 0xcu, 0xf0000u);
    loc_c = 0xf0000u;
L_1020d55c: ;
    COW_AT(1020d55c)
    wr32(sp0 - 0x10u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t26 = cow_cdecl(g, COW_IMG(0x10107e70u), 2, esi, loc_c);
    t27 = g->edx;
    eax = t26;
    edx = t27;
    COW_AT(1020d562)
    goto L_1020d565;
L_1020d4e4: ;
    COW_AT(1020d4e4)
    wr32(sp0 - 8u, 1u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t21 = cow_call_regs(g, COW_IMG(0x1020d7c0u), eax, rd32(COW_IMG(0x106644c4u)), g->edx, 0, 1, 1u);
    t22 = g->edx;
    eax = t21;
    edx = t22;
    COW_AT(1020d4f1)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d4f5: ;
    COW_AT(1020d4f5)
    wr32(sp0 - 8u, 0u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t19 = cow_call_regs(g, COW_IMG(0x1020d7c0u), eax, rd32(COW_IMG(0x106644c4u)), g->edx, 0, 1, 0u);
    t20 = g->edx;
    eax = t19;
    edx = t20;
    COW_AT(1020d502)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d506: ;
    COW_AT(1020d506)
    if (rd32(COW_IMG(0x106644c0u)) == 0u) goto L_1020d57b;
    ecx = rd32(COW_IMG(0x106644c0u));
    COW_AT(1020d510)
    g->esp = sp0 - 4u;
    t15 = cow_call_regs(g, COW_IMG(0x1020f210u), eax, ecx, edx, 0, 0);
    t16 = g->edx;
    eax = t15;
    edx = t16;
    COW_AT(1020d515)
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t17 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t18 = g->edx;
    eax = t17;
    edx = t18;
    COW_AT(1020d524)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d528: ;
    COW_AT(1020d528)
    if (rd32(COW_IMG(0x106644c0u)) == 0u) goto L_1020d57b;
    ecx = rd32(COW_IMG(0x106644c0u));
    COW_AT(1020d532)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x1020f3a0u), eax, ecx, edx, 0, 2, 0u, 0u);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(1020d53b)
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t14 = g->edx;
    eax = t13;
    edx = t14;
    COW_AT(1020d54a)
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
L_1020d54e: ;
    COW_AT(1020d54e)
    wr32(sp0 - 8u, ecx + 0x5cu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_cdecl(g, COW_IMG(0x10107ea0u), 1, ecx + 0x5cu);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    edx = t10;
    esi = ecx + 0x5cu;
    ecx = t9;
    COW_AT(1020d557)
    wr32(sp0 - 0xcu, 0x10000000u);
    loc_c = 0x10000000u;
    goto L_1020d55c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1020d340(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1020d34fu:
    {
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d35bu:
    {
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d360u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d364u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d369u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d36du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d37cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d383u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d396u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d39au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d3adu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d3b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d3c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d3c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d3dbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d3dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d3f2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d3f6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d409u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d40du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d420u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d424u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d432u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d437u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d43bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d444u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1020d44au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1020d452u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d462u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d46du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d47cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d489u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d493u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d4a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d4aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d4bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d4cau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1020d4d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d4ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1020d4e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d4f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d4f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d502u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d506u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d510u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d515u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d524u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d528u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d532u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d53bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d54au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d54eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d557u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1020d55cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1020d562u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1020d565u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d567u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1020d57bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1020d58au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1020d340(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1020d340(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
