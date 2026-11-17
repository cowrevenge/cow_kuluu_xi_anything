/* f_0x10075280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10075280(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    t1 = rd32(COW_IMG(0x1047bfa8u));
    wr32(COW_IMG(0x1047d158u), 0u);
    wr32(sp0 - 0x38u, in_edi);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0x1bu);
    t2 = rd32(t1 + 0xebcu);
    wr32(sp0 - 0x44u, t2);
    t3 = rd32(rd32(t1 + 0xebcu));
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, rd32(t3 + 0xc8u), t3, 3, t2, 0x1bu, 0u);
    t4 = g->ecx;
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0xeu);
    t5 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x44u, t5);
    g->edx = rd32(t5);
    t6 = rd32(t5);
    cow_thiscall(g, rd32(t6 + 0xc8u), t4, 3, t5, 0xeu, 0u);
    t7 = g->edx;
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 7u);
    t8 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x44u, t8);
    t9 = rd32(t8);
    cow_thiscall(g, rd32(t9 + 0xc8u), t9, 3, t8, 7u, 0u);
    t10 = g->ecx;
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0xfu);
    t11 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x44u, t11);
    g->edx = rd32(t11);
    t12 = rd32(t11);
    cow_thiscall(g, rd32(t12 + 0xc8u), t10, 3, t11, 0xfu, 0u);
    t13 = g->edx;
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, 0x16u);
    t14 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x44u, t14);
    cow_thiscall(g, rd32(rd32(t14) + 0xc8u), rd32(t14), 3, t14, 0x16u, 1u);
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    t15 = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xdc8u) + 0x90u);
    wr32(sp0 - 0x40u, t15);
    g->edx = sp0 - 0x20u;
    cow_thiscall(g, rd32(rd32(t15) + 0x20u), rd32(t15), 2, t15, sp0 - 0x20u);
    t16 = g->edx;
    wr32(COW_IMG(0x1047d14cu), 3u);
    edx = t16;
    ebp = 0u;
    cf = 0u;
    pf = PARITY(0u);
    zf = 1u;
    sf = 0u;
    of = 0u;
    loc_2c = in_ebx;
    loc_30 = in_ebp;
    loc_34 = in_esi;
    loc_38 = in_edi;
L_1007532c: ;
    t17 = rd32(COW_IMG(0x1045666cu));
    wr32(COW_IMG(0x1047d168u) + ebp * 4u, 0u);
    wr32(COW_IMG(0x1047d15cu) + ebp * 4u, 0u);
    t18 = 0x20u << (ebp & 0x1fu);
    wr32(sp0 - 0x3cu, t18);
    wr32(sp0 - 0x40u, t18);
    g->eax = t18;
    g->esp = sp0 - 0x38u;
    t19 = cow_thiscall(g, COW_IMG(0x1000ad70u), t17, 2, t18, t18);
    wr32(COW_IMG(0x1047d168u) + ebp * 4u, t19);
    if (t19 == 0u)
    {
        eax = t19;
        goto L_10075486;
    }
    edi = COW_IMG(0x1047d15cu) + ebp * 4u;
    pf = PARITY((uint8_t)t19);
    zf = t19 == 0u;
    sf = (int32_t)t19 < 0;
    wr32(sp0 - 0x3cu, edi);
    wr32(sp0 - 0x40u, 0u);
    t20 = rd32(sp0 - 0x20u);
    wr32(sp0 - 0x44u, t20);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 1u);
    t21 = 0x20u << (ebp & 0x1fu);
    wr32(sp0 - 0x50u, t21);
    t22 = rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu);
    wr32(sp0 - 0x54u, t22);
    wr32(sp0 - 0x24u, t21);
    g->edx = t21;
    t23 = rd32(rd32(rd32(COW_IMG(0x1047bfa8u)) + 0xebcu));
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, rd32(t23 + 0x58u), t23, 7, t22, t21, 1u, 1u, t20, 0u, edi);
    t24 = g->ecx;
    t25 = g->edx;
    if (rd32(edi) == 0u)
    {
        ecx = t24;
        goto L_1007546e;
    }
    edx = t25;
    ebx = 0u;
L_10075395: ;
    if (rd32(COW_IMG(0x103546a0u) + ebx * 4u) != 5u)
    {
        ecx = rd32(COW_IMG(0x103546a0u) + ebx * 4u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x3cu, sp0 - 0x28u);
        wr32(sp0 - 0x40u, 0u);
        wr32(sp0 - 0x44u, ecx);
        wr32(sp0 - 0x48u, rd32(edi));
        g->edx = rd32(rd32(edi));
        t26 = rd32(rd32(edi));
        g->esp = sp0 - 0x38u;
        cow_thiscall(g, rd32(t26 + 0x3cu), ecx, 4, rd32(edi), ecx, 0u, sp0 - 0x28u);
        t27 = g->edx;
        t28 = rd32(COW_IMG(0x1047d168u) + ebp * 4u);
        wr32(sp0 - 0x3cu, t28);
        wr32(sp0 - 0x40u, 0u);
        wr32(sp0 - 0x44u, 0u);
        g->ebx = ebx;
        t29 = rd32(COW_IMG(0x1047bfa8u));
        cow_fastcall(g, COW_IMG(0x1006a070u), t29, t27, 3, 0u, 0u, t28);
        t30 = g->ecx;
        wr32(sp0 - 0x3cu, 0x44u);
        t31 = rd32(COW_IMG(0x1047bfa8u));
        t32 = rd32(sp0 - 0x24u);
        wrf32(COW_IMG(0x103546f8u), (float)(double)(int32_t)t32);
        wrf32(COW_IMG(0x103546f4u), (float)(double)(int32_t)t32);
        wrf32(COW_IMG(0x103546e4u), (float)(double)(int32_t)t32);
        wrf32(COW_IMG(0x103546ccu), (float)(double)(int32_t)t32);
        t33 = rd32(t31 + 0xebcu);
        wr32(sp0 - 0x40u, t33);
        g->eax = t33;
        g->edx = rd32(t33);
        t34 = rd32(t33);
        t35 = cow_thiscall(g, rd32(t34 + 0x130u), t30, 2, t33, 0x44u);
        t36 = g->ecx;
        t37 = g->edx;
        wr32(sp0 - 0x3cu, 0x44u);
        g->edx = t37;
        t38 = rd32(t31 + 0xdc8u);
        t39 = cow_cdecl(g, COW_IMG(0x1006a560u), 1, 0x44u);
        t40 = g->edx;
        wr32(sp0 - 0x3cu, t39);
        wr32(sp0 - 0x40u, COW_IMG(0x103546b8u));
        wr32(sp0 - 0x44u, 2u);
        wr32(sp0 - 0x48u, 5u);
        g->ebx = ebx;
        g->edx = t40;
        cow_thiscall(g, COW_IMG(0x1000cd00u), t38, 4, 5u, 2u, COW_IMG(0x103546b8u), t39);
        t41 = g->edx;
        wr32(sp0 - 0x3cu, ebx);
        wr32(sp0 - 0x40u, rd32(edi));
        cow_fastcall(g, COW_IMG(0x1006a0e0u), rd32(COW_IMG(0x1047bfa8u)), t41, 2, rd32(edi), ebx);
        t42 = g->edx;
        wr32(sp0 - 0x3cu, 0u);
        g->edx = t42;
        cow_thiscall(g, rd32(rd32(0u) + 8u), rd32(0u), 1, 0u);
        t43 = g->edx;
        edx = t43;
    }
    if ((int32_t)(ebx + 1u) < 6)
    {
        ebx = ebx + 1u;
        goto L_10075395;
    }
    t44 = rd32(COW_IMG(0x1047d14cu));
    wr32(COW_IMG(0x1047d200u), 0u);
    wr32(COW_IMG(0x1047d150u), 0u);
    if ((int32_t)(ebp + 1u) < (int32_t)t44)
    {
        cf = ebp + 1u < t44;
        pf = PARITY((uint8_t)(ebp + 1u - t44));
        zf = ebp + 1u == t44;
        sf = (int32_t)(ebp + 1u - t44) < 0;
        of = ((ebp + 1u ^ t44) & (ebp + 1u ^ ebp + 1u - t44)) >> 0x1fu;
        ebp = ebp + 1u;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
        goto L_1007532c;
    }
    eax = t44;
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 0x30u);
    return eax;
L_1007546e: ;
    if (rd32(COW_IMG(0x1047d168u) + ebp * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x1047d168u) + ebp * 4u);
    }
    else
    {
        eax = rd32(COW_IMG(0x1047d168u) + ebp * 4u);
        wr32(sp0 - 0x3cu, eax);
        g->eax = eax;
        g->esp = sp0 - 0x38u;
        t45 = cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
        wr32(COW_IMG(0x1047d168u) + ebp * 4u, 0u);
        eax = t45;
    }
L_10075486: ;
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 0x30u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10075280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10075280(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
