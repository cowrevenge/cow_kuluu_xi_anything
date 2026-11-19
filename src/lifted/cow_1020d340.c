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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1020d34fu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020d34f;
    case 0x1020d35bu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1020d35b;
    case 0x1020d364u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d364;
    case 0x1020d36du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d36d;
    case 0x1020d37cu: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d37c;
    case 0x1020d383u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d383;
    case 0x1020d39au: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d39a;
    case 0x1020d3b1u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d3b1;
    case 0x1020d3c8u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d3c8;
    case 0x1020d3dfu: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d3df;
    case 0x1020d3f6u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d3f6;
    case 0x1020d40du: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d40d;
    case 0x1020d424u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d424;
    case 0x1020d432u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d432;
    case 0x1020d43bu: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d43b;
    case 0x1020d452u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d452;
    case 0x1020d46du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1020d46d;
    case 0x1020d493u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d493;
    case 0x1020d4aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_1020d4ae;
    case 0x1020d4d4u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d4d4;
    case 0x1020d4e4u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d4e4;
    case 0x1020d4f5u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d4f5;
    case 0x1020d506u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d506;
    case 0x1020d510u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d510;
    case 0x1020d528u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d528;
    case 0x1020d532u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d532;
    case 0x1020d54eu: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1020d54e;
    case 0x1020d55cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_1020d55c;
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
    if ((uint16_t)arg1 != 5u)
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
    t1 = cow_call_regs(g, COW_IMG(0x1020a410u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_1020d36d;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1020d364)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t5 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t5;
    return t4;
L_1020d36d: ;
    COW_AT(1020d36d)
    if ((uint32_t)(int16_t)arg2 - 1u > 0x10u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        loc_4 = rd32(sp0 - 4u);
        goto L_1020d58a;
    }
    COW_AT(1020d37c)
    t6 = rd32(COW_IMG(0x1020d590u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t6 - RD)
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
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t66 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385af0u), 1u, 0u);
    t67 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t67;
    return t66;
L_1020d39a: ;
    COW_AT(1020d39a)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385adcu));
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t64 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385adcu), 1u, 0u);
    t65 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t65;
    return t64;
L_1020d3b1: ;
    COW_AT(1020d3b1)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385ac8u));
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t62 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385ac8u), 1u, 0u);
    t63 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t63;
    return t62;
L_1020d3c8: ;
    COW_AT(1020d3c8)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385ab4u));
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t60 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385ab4u), 1u, 0u);
    t61 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t61;
    return t60;
L_1020d3df: ;
    COW_AT(1020d3df)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385aa0u));
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t58 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385aa0u), 1u, 0u);
    t59 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t59;
    return t58;
L_1020d3f6: ;
    COW_AT(1020d3f6)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385a8cu));
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t56 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385a8cu), 1u, 0u);
    t57 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t57;
    return t56;
L_1020d40d: ;
    COW_AT(1020d40d)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, COW_IMG(0x10385a78u));
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t54 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385a78u), 1u, 0u);
    t55 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t55;
    return t54;
L_1020d424: ;
    COW_AT(1020d424)
    if (rd32(COW_IMG(0x106644c0u)) == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        loc_4 = rd32(sp0 - 4u);
        goto L_1020d58a;
    }
    ecx = rd32(COW_IMG(0x106644c0u));
    COW_AT(1020d432)
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->esp = sp0 - 4u;
    t52 = cow_fastcall(g, COW_IMG(0x1020ee70u), ecx, edx, 0);
    t53 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t53;
    return t52;
L_1020d43b: ;
    COW_AT(1020d43b)
    wr32(sp0 - 8u, ecx + 0x5cu);
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t43 = cow_cdecl(g, COW_IMG(0x10107ff0u), 1, ecx + 0x5cu);
    t44 = g->ecx;
    t45 = g->edx;
    wr32(sp0 - 0xcu, ecx + 0x5cu);
    g->edx = t45;
    g->esp = sp0 - 8u;
    t46 = cow_cdecl(g, COW_IMG(0x10107fd0u), 1, ecx + 0x5cu);
    t47 = g->edx;
    eax = t46;
    edx = t47;
    esi = ecx + 0x5cu;
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
    t48 = cow_call_regs(g, COW_IMG(0x1020a9d0u), eax, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, esi, 1u, 0u, 0u, loc_8);
    t49 = g->edx;
    eax = t48;
    edx = t49;
L_1020d57b: ;
    COW_AT(1020d57b)
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t50 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t51 = g->edx;
    eax = t50;
    edx = t51;
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
    t35 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, sp0 + 4u, 0u, 0u, 1u);
    t36 = g->edx;
    if ((uint8_t)t35 == 0u)
    {
        eax = t35;
        edx = t36;
        loc_4 = rd32(sp0 - 4u);
        goto L_1020d58a;
    }
    eax = t35;
    edx = t36;
    COW_AT(1020d46d)
    t37 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
    wr32(sp0 - 8u, t37);
    g->ecx = rd32(COW_IMG(0x10664494u));
    t38 = rd32(COW_IMG(0x10664494u));
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10107ef0u), 1, t37);
    t39 = g->ecx;
    wr32(sp0 - 0xcu, rd32(arg1));
    wr32(sp0 - 0x10u, t37);
    g->eax = rd32(arg1);
    g->edx = arg1;
    t40 = rd32(arg1);
    g->esp = sp0 - 8u;
    t41 = cow_cdecl(g, COW_IMG(0x10107ed0u), 2, t37, t40);
    t42 = g->edx;
    wr32(sp0 - 8u, 1u);
    eax = t41;
    edx = t42;
    esi = t37;
    loc_8 = 1u;
    goto L_1020d567;
L_1020d493: ;
    COW_AT(1020d493)
    wr32(sp0 - 8u, 2u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, sp0 + 4u);
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t27 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 + 4u, 4, sp0 + 4u, 0u, 0u, 2u);
    t28 = g->ecx;
    t29 = g->edx;
    if ((uint8_t)t27 == 0u)
    {
        eax = t27;
        edx = t29;
        loc_4 = rd32(sp0 - 4u);
        goto L_1020d58a;
    }
    eax = t27;
    ecx = t28;
    COW_AT(1020d4ae)
    t30 = rd32(COW_IMG(0x10664494u)) + 0x5cu;
    wr32(sp0 - 8u, t30);
    g->edx = rd32(COW_IMG(0x10664494u));
    t31 = rd32(COW_IMG(0x10664494u));
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10107f40u), 1, t30);
    t32 = g->edx;
    wr32(sp0 - 0xcu, rd32(arg1));
    wr32(sp0 - 0x10u, t30);
    g->eax = arg1;
    g->edx = t32;
    g->esp = sp0 - 8u;
    t33 = cow_cdecl(g, COW_IMG(0x10107f10u), 2, t30, rd32(arg1));
    t34 = g->edx;
    wr32(sp0 - 8u, 2u);
    eax = t33;
    edx = t34;
    esi = t30;
    loc_8 = 2u;
    goto L_1020d567;
L_1020d4d4: ;
    COW_AT(1020d4d4)
    wr32(sp0 - 8u, ecx + 0x5cu);
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t22 = cow_cdecl(g, COW_IMG(0x10107ea0u), 1, ecx + 0x5cu);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0xcu, 0xf0000u);
    eax = t22;
    edx = t24;
    esi = ecx + 0x5cu;
    ecx = t23;
    loc_c = 0xf0000u;
L_1020d55c: ;
    COW_AT(1020d55c)
    wr32(sp0 - 0x10u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t25 = cow_cdecl(g, COW_IMG(0x10107e70u), 2, esi, loc_c);
    t26 = g->edx;
    eax = t25;
    edx = t26;
    goto L_1020d565;
L_1020d4e4: ;
    COW_AT(1020d4e4)
    wr32(sp0 - 8u, 1u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t20 = cow_call_regs(g, COW_IMG(0x1020d7c0u), (uint32_t)(int16_t)arg2 - 1u, rd32(COW_IMG(0x106644c4u)), g->edx, 0, 1, 1u);
    t21 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t21;
    return t20;
L_1020d4f5: ;
    COW_AT(1020d4f5)
    wr32(sp0 - 8u, 0u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t18 = cow_call_regs(g, COW_IMG(0x1020d7c0u), (uint32_t)(int16_t)arg2 - 1u, rd32(COW_IMG(0x106644c4u)), g->edx, 0, 1, 0u);
    t19 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t19;
    return t18;
L_1020d506: ;
    COW_AT(1020d506)
    if (rd32(COW_IMG(0x106644c0u)) == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        goto L_1020d57b;
    }
    ecx = rd32(COW_IMG(0x106644c0u));
    COW_AT(1020d510)
    g->esp = sp0 - 4u;
    t14 = cow_call_regs(g, COW_IMG(0x1020f210u), (uint32_t)(int16_t)arg2 - 1u, ecx, edx, 0, 0);
    t15 = g->edx;
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->edx = t15;
    t16 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t17 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t17;
    return t16;
L_1020d528: ;
    COW_AT(1020d528)
    if (rd32(COW_IMG(0x106644c0u)) == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        goto L_1020d57b;
    }
    ecx = rd32(COW_IMG(0x106644c0u));
    COW_AT(1020d532)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    g->esp = sp0 - 4u;
    t10 = cow_call_regs(g, COW_IMG(0x1020f3a0u), (uint32_t)(int16_t)arg2 - 1u, ecx, edx, 0, 2, 0u, 0u);
    t11 = g->edx;
    wr32(sp0 - 8u, COW_IMG(0x10385a64u));
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10385a64u));
    t13 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t13;
    return t12;
L_1020d54e: ;
    COW_AT(1020d54e)
    wr32(sp0 - 8u, ecx + 0x5cu);
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_cdecl(g, COW_IMG(0x10107ea0u), 1, ecx + 0x5cu);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0xcu, 0x10000000u);
    eax = t7;
    edx = t9;
    esi = ecx + 0x5cu;
    ecx = t8;
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
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d383u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d39au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d3b1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d3c8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d3dfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d3f6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d40du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d424u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d432u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d43bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
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
    case 0x1020d493u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
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
    case 0x1020d4d4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d4e4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d4f5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d506u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d510u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d528u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d532u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1020d54eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2 - 1u;
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
