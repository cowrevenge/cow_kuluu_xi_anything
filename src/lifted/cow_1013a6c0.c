/* f_0x1013a6c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1013a6c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1013a6d0u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_1013a6d0;
    case 0x1013a6dfu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a6df;
    case 0x1013a6e6u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a6e6;
    case 0x1013a6f0u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a6f0;
    case 0x1013a6f4u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a6f4;
    case 0x1013a6ffu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a6ff;
    case 0x1013a711u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_1013a711;
    case 0x1013a71bu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a71b;
    case 0x1013a727u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a727;
    case 0x1013a72au: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a72a;
    case 0x1013a735u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a735;
    case 0x1013a747u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a747;
    case 0x1013a74fu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a74f;
    case 0x1013a759u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a759;
    case 0x1013a763u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a763;
    case 0x1013a76au: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a76a;
    case 0x1013a780u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a780;
    case 0x1013a796u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a796;
    case 0x1013a7a1u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a7a1;
    case 0x1013a7a8u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a7a8;
    case 0x1013a7b6u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a7b6;
    case 0x1013a7ccu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a7cc;
    case 0x1013a7e2u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a7e2;
    case 0x1013a7f8u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a7f8;
    case 0x1013a80eu: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a80e;
    case 0x1013a815u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); goto E_1013a815;
    default: break;
    }
#endif

    COW_AT(1013a6c0)
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 0x1cu)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = in_edx;
        goto L_1013a815;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    COW_AT(1013a6d0)
    t1 = rd32(COW_IMG(0x1013a81cu) + rd8(COW_IMG(0x1013a83cu) + eax) * 4u);
    edx = rd8(COW_IMG(0x1013a83cu) + eax);
    switch (t1 - RD)
    {
    case 0x1013a6dfu: goto L_1013a6df;
    case 0x1013a711u: goto L_1013a711;
    case 0x1013a747u: goto L_1013a747;
    case 0x1013a74fu: goto L_1013a74f;
    case 0x1013a759u: goto L_1013a759;
    case 0x1013a796u: goto L_1013a796;
    case 0x1013a80eu: goto L_1013a80e;
    case 0x1013a815u: goto L_1013a815;
    default: rt_fatal(g, COW_IMG(0x1013a6d8u), "switch");
    }
    return 0;
L_1013a6df: ;
    COW_AT(1013a6df)
    if ((int8_t)rd8(self + 0x23u) > 1)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x23u);
    COW_AT(1013a6e6)
        t20 = rd8(self + 0x20u);
        wr8(self + 0x23u, (uint8_t)((uint8_t)eax - t20));
        if ((int8_t)((uint8_t)eax - t20) < 1)
        {
    COW_AT(1013a6f0)
            wr8(self + 0x23u, 1u);
        }
    }
    COW_AT(1013a6f4)
    if (rd32(self + 0x28u) == 0u)
    {
        eax = rd32(self + 0x28u);
        goto L_1013a815;
    }
    eax = rd32(self + 0x28u);
    COW_AT(1013a6ff)
    t21 = rd32(self + 0x2cu);
    t22 = (uint32_t)(int8_t)rd8(self + 0x23u);
    g->eax = eax;
    g->edx = t21;
    g->esp = sp0 - 4u;
    t23 = cow_thiscall_cdecl(g, eax, t22, 2, t22, t21);
    t24 = g->edx;
    g->ebx = in_ebx;
    g->edx = t24;
    return t23;
L_1013a711: ;
    COW_AT(1013a711)
    if ((int8_t)rd8(self + 0x23u) >= (int8_t)rd8(self + 0x22u))
    {
        edx = (edx & 0xffffff00u) | rd8(self + 0x22u);
    }
    else
    {
        edx = (edx & 0xffffff00u) | rd8(self + 0x22u);
        ebx = (in_ebx & 0xffffff00u) | rd8(self + 0x23u);
    COW_AT(1013a71b)
        t15 = rd8(self + 0x20u);
        wr8(self + 0x23u, (uint8_t)((uint8_t)ebx + t15));
        if ((int8_t)((uint8_t)ebx + t15) > (int8_t)edx)
        {
    COW_AT(1013a727)
            wr8(self + 0x23u, (uint8_t)edx);
        }
    }
    COW_AT(1013a72a)
    if (rd32(self + 0x28u) == 0u)
    {
        eax = rd32(self + 0x28u);
        goto L_1013a815;
    }
    eax = rd32(self + 0x28u);
    COW_AT(1013a735)
    t16 = rd32(self + 0x2cu);
    t17 = (uint32_t)(int8_t)rd8(self + 0x23u);
    g->eax = eax;
    g->edx = t16;
    g->esp = sp0 - 4u;
    t18 = cow_thiscall_cdecl(g, eax, t17, 2, t17, t16);
    t19 = g->edx;
    g->ebx = in_ebx;
    g->edx = t19;
    return t18;
L_1013a747: ;
    COW_AT(1013a747)
    wr8(self + 0x23u, 1u);
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_1013a74f: ;
    COW_AT(1013a74f)
    t14 = rd8(self + 0x22u);
    wr8(self + 0x23u, (uint8_t)t14);
    g->ebx = in_ebx;
    g->edx = (edx & 0xffffff00u) | t14;
    return eax;
L_1013a759: ;
    COW_AT(1013a759)
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) == 4u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 4u;
        goto L_1013a780;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 4u;
    COW_AT(1013a763)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1013a815;
    }
    COW_AT(1013a76a)
    t12 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 2u);
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = edx;
    return cow_tailcall(g, rd32(t12 + 0x18u), t12, self, edx);
L_1013a780: ;
    COW_AT(1013a780)
    t13 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 1u);
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = t13;
    return cow_tailcall(g, rd32(t13 + 0x18u), eax, self, t13);
L_1013a796: ;
    COW_AT(1013a796)
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        goto L_1013a815;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    COW_AT(1013a7a1)
    t4 = rd32(COW_IMG(0x1013a85cu) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x1013a7a8u: goto L_1013a7a8;
    case 0x1013a7b6u: goto L_1013a7b6;
    case 0x1013a7ccu: goto L_1013a7cc;
    case 0x1013a7e2u: goto L_1013a7e2;
    case 0x1013a7f8u: goto L_1013a7f8;
    default: rt_fatal(g, COW_IMG(0x1013a7a1u), "switch");
    }
    return 0;
L_1013a7a8: ;
    COW_AT(1013a7a8)
    t9 = (uint32_t)(int8_t)rd8(self + 0x23u);
    g->eax = t9;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x1013a8d0u), self, 1, t9);
    t11 = g->edx;
    g->ebx = in_ebx;
    g->edx = t11;
    return t10;
L_1013a7b6: ;
    COW_AT(1013a7b6)
    t8 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 2u);
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = t8;
    return cow_tailcall(g, rd32(t8 + 0x18u), eax, self, t8);
L_1013a7cc: ;
    COW_AT(1013a7cc)
    t7 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 1u);
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = edx;
    return cow_tailcall(g, rd32(t7 + 0x18u), t7, self, edx);
L_1013a7e2: ;
    COW_AT(1013a7e2)
    t6 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 4u);
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = t6;
    return cow_tailcall(g, rd32(t6 + 0x18u), eax, self, t6);
L_1013a7f8: ;
    COW_AT(1013a7f8)
    t5 = rd32(self);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 3u);
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = edx;
    return cow_tailcall(g, rd32(t5 + 0x18u), t5, self, edx);
L_1013a80e: ;
    COW_AT(1013a80e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1013a8d0u), self, 1, 0xffffffffu);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_1013a815: ;
    COW_AT(1013a815)
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1013a6c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013a6d0u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1013a6dfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a6e6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a6f0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a6f4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a6ffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a711u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1013a71bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a727u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a72au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a735u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a747u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a74fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a759u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a763u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a76au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a780u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a796u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a7a1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a7a8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a7b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a7ccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a7e2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a7f8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a80eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1013a815u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1013a6c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1013a6c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
