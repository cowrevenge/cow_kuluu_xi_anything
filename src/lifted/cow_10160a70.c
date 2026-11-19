/* f_0x10160a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10160a70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10160a8du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10160a8d;
    case 0x10160a96u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_10160a96;
    case 0x10160abbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160abb;
    case 0x10160ac0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160ac0;
    case 0x10160acau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160aca;
    case 0x10160acfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160acf;
    case 0x10160ad9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160ad9;
    case 0x10160adeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160ade;
    case 0x10160ae8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160ae8;
    case 0x10160aedu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160aed;
    case 0x10160af7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160af7;
    case 0x10160afcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160afc;
    case 0x10160b06u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b06;
    case 0x10160b0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b0b;
    case 0x10160b15u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b15;
    case 0x10160b1au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b1a;
    case 0x10160b24u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b24;
    case 0x10160b29u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b29;
    case 0x10160b33u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b33;
    case 0x10160b38u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b38;
    case 0x10160b42u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b42;
    case 0x10160b47u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b47;
    case 0x10160b51u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b51;
    case 0x10160b56u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b56;
    case 0x10160b60u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b60;
    case 0x10160b65u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b65;
    case 0x10160b6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b6f;
    case 0x10160b74u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b74;
    case 0x10160b7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b7e;
    case 0x10160b83u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b83;
    case 0x10160b8du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b8d;
    case 0x10160b92u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b92;
    case 0x10160b9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160b9c;
    case 0x10160ba1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160ba1;
    case 0x10160babu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_c = rd32(sp0 - 0xcu); goto E_10160bab;
    case 0x10160bb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160bb4;
    case 0x10160bbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160bbf;
    case 0x10160bcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160bcd;
    case 0x10160be1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_10160be1;
    case 0x10160c17u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10160c17;
    case 0x10160c21u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10160c21;
    case 0x10160c2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10160c2c;
    case 0x10160c3au: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10160c3a;
    case 0x10160c4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10160c4e;
    case 0x10160c57u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10160c57;
    default: break;
    }
#endif

    COW_AT(10160a70)
    wr32(sp0 - 0xcu, in_esi);
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x104e1d4cu));
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10125360u), in_eax, t1, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)));
        ecx = t2;
        edx = t3;
        goto L_10160a96;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)));
    ecx = t2;
    edx = t3;
    COW_AT(10160a8d)
    if (eax != 0x70u)
    {
        loc_c = in_esi;
        goto L_10160bab;
    }
L_10160a96: ;
    COW_AT(10160a96)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x1021ed90u), g->eax, g->ecx, edx, 1, 0);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x1021c4c0u), rd32(COW_IMG(0x10666e2cu)), 0);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1021c4c0u), rd32(COW_IMG(0x10666e30u)), 0);
    t9 = g->edx;
    if (rd32(COW_IMG(0x10666e34u)) == 0u)
    {
        eax = t8;
        edx = t9;
    }
    else
    {
        eax = t8;
        ecx = rd32(COW_IMG(0x10666e34u));
        edx = t9;
    COW_AT(10160abb)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t10 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t11 = g->edx;
        eax = t10;
        edx = t11;
    }
    COW_AT(10160ac0)
    if (rd32(COW_IMG(0x10666e38u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e38u));
    COW_AT(10160aca)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t12 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    COW_AT(10160acf)
    if (rd32(COW_IMG(0x10666e3cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e3cu));
    COW_AT(10160ad9)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t14 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    COW_AT(10160ade)
    if (rd32(COW_IMG(0x10666e40u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e40u));
    COW_AT(10160ae8)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t16 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    }
    COW_AT(10160aed)
    if (rd32(COW_IMG(0x10666e44u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e44u));
    COW_AT(10160af7)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t18 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t19 = g->edx;
        eax = t18;
        edx = t19;
    }
    COW_AT(10160afc)
    if (rd32(COW_IMG(0x10666e48u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e48u));
    COW_AT(10160b06)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t20 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    COW_AT(10160b0b)
    if (rd32(COW_IMG(0x10666e4cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e4cu));
    COW_AT(10160b15)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t22 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t23 = g->edx;
        eax = t22;
        edx = t23;
    }
    COW_AT(10160b1a)
    if (rd32(COW_IMG(0x10666e50u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e50u));
    COW_AT(10160b24)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t24 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t25 = g->edx;
        eax = t24;
        edx = t25;
    }
    COW_AT(10160b29)
    if (rd32(COW_IMG(0x10666e54u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e54u));
    COW_AT(10160b33)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t26 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t27 = g->edx;
        eax = t26;
        edx = t27;
    }
    COW_AT(10160b38)
    if (rd32(COW_IMG(0x10666e58u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e58u));
    COW_AT(10160b42)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t28 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t29 = g->edx;
        eax = t28;
        edx = t29;
    }
    COW_AT(10160b47)
    if (rd32(COW_IMG(0x10666e5cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e5cu));
    COW_AT(10160b51)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t30 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    }
    COW_AT(10160b56)
    if (rd32(COW_IMG(0x10666e60u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e60u));
    COW_AT(10160b60)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t32 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t33 = g->edx;
        eax = t32;
        edx = t33;
    }
    COW_AT(10160b65)
    if (rd32(COW_IMG(0x10666e64u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e64u));
    COW_AT(10160b6f)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t34 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t35 = g->edx;
        eax = t34;
        edx = t35;
    }
    COW_AT(10160b74)
    if (rd32(COW_IMG(0x10666e68u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e68u));
    COW_AT(10160b7e)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t36 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t37 = g->edx;
        eax = t36;
        edx = t37;
    }
    COW_AT(10160b83)
    if (rd32(COW_IMG(0x10666e6cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10666e6cu));
    COW_AT(10160b8d)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t38 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t39 = g->edx;
        eax = t38;
        edx = t39;
    }
    COW_AT(10160b92)
    if (rd32(COW_IMG(0x10666e70u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10666e70u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10666e70u));
    COW_AT(10160b9c)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t40 = cow_thiscall(g, COW_IMG(0x1021c4c0u), ecx, 0);
        t41 = g->ecx;
        t42 = g->edx;
        eax = t40;
        ecx = t41;
        edx = t42;
    }
    COW_AT(10160ba1)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t43 = cow_fastcall(g, COW_IMG(0x1022b290u), ecx, edx, 0);
    t44 = g->ecx;
    t45 = g->edx;
    g->ecx = t44;
    g->edx = t45;
    t46 = cow_stdcall(g, COW_IMG(0x10222df0u), 0);
    t47 = g->ecx;
    t48 = g->edx;
    eax = t46;
    ecx = t47;
    edx = t48;
    loc_c = rd32(sp0 - 0xcu);
L_10160bab: ;
    COW_AT(10160bab)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t49 = cow_stdcall(g, COW_IMG(0x1021ede0u), 0);
    t50 = g->ecx;
    t51 = g->edx;
    if (t49 != 0u)
    {
        eax = t49;
        ecx = t50;
        edx = t51;
        goto L_10160c17;
    }
    eax = t49;
    edx = t51;
    COW_AT(10160bb4)
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        ecx = rd32(COW_IMG(0x10456a28u));
        goto L_10160c17;
    }
    ecx = rd32(COW_IMG(0x10456a28u));
    COW_AT(10160bbf)
    wr32(sp0 - 0x10u, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t52 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t53 = g->ecx;
    t54 = g->edx;
    if ((uint8_t)t52 != 0u)
    {
        eax = t52;
        ecx = t53;
        edx = t54;
        goto L_10160c17;
    }
    eax = t52;
    edx = t54;
    COW_AT(10160bcd)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t55 = cow_thiscall(g, COW_IMG(0x1015ed10u), COW_IMG(0x10621838u), 3, 4u, 0u, 0u);
    t56 = g->ecx;
    t57 = g->edx;
    if ((uint8_t)t55 != 0u)
    {
        eax = t55;
        ecx = t56;
        edx = t57;
        goto L_10160c17;
    }
    eax = t55;
    COW_AT(10160be1)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 8u, 0x58u);
    wr32(sp0 - 4u, 0x2au);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x101602f0u), self, 3, sp0 - 8u, 0u, 0u);
    t58 = g->ecx;
    t59 = g->edx;
    wr32(sp0 - 0x10u, 0x58u);
    g->eax = 0x58u;
    g->edx = t59;
    t60 = cow_thiscall_cdecl(g, COW_IMG(0x1021ee00u), t58, 1, 0x58u);
    t61 = g->ecx;
    t62 = g->edx;
    g->esp = sp0;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = t62;
    return cow_tailcall(g, COW_IMG(0x1021edc0u), t60, t61, t62);
L_10160c17: ;
    COW_AT(10160c17)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t63 = cow_stdcall(g, COW_IMG(0x1021ede0u), 0);
    t64 = g->edx;
    if (t63 != 3u)
    {
        eax = t63;
        edx = t64;
        goto L_10160c57;
    }
    eax = t63;
    edx = t64;
    COW_AT(10160c21)
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        ecx = rd32(COW_IMG(0x10456a28u));
        goto L_10160c4e;
    }
    ecx = rd32(COW_IMG(0x10456a28u));
    COW_AT(10160c2c)
    wr32(sp0 - 0x10u, 0u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t65 = cow_call_regs(g, COW_IMG(0x10087070u), eax, g->ecx, g->edx, 1, 1, 0u);
    t66 = g->ecx;
    t67 = g->edx;
    if ((uint8_t)t65 != 0u)
    {
        eax = t65;
        ecx = t66;
        edx = t67;
        goto L_10160c4e;
    }
    eax = t65;
    edx = t67;
    COW_AT(10160c3a)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t68 = cow_thiscall(g, COW_IMG(0x1015ed10u), COW_IMG(0x10621838u), 3, 4u, 0u, 0u);
    t69 = g->ecx;
    t70 = g->edx;
    if ((uint8_t)t68 == 0u)
    {
        eax = t68;
        edx = t70;
        goto L_10160c57;
    }
    eax = t68;
    ecx = t69;
    edx = t70;
L_10160c4e: ;
    COW_AT(10160c4e)
    g->esp = sp0;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1021edd0u), eax, ecx, edx);
L_10160c57: ;
    COW_AT(10160c57)
    g->esi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10160a70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10160a8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160a96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160abbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160ac0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160acau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160acfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160ad9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160adeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160ae8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160aedu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160af7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160afcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b06u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b0bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b15u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b24u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b33u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b38u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b51u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b60u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b65u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b7eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b83u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160b9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160ba1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160babu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160bb4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160bbfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160bcdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160be1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160c17u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160c21u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160c2cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160c3au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160c4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10160c57u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10160a70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10160a70(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
