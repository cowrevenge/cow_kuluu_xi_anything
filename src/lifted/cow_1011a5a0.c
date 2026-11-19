/* f_0x1011a5a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
uint32_t cow_fn_1011a5a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1011a5c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1011a5c2;
    case 0x1011a5d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1011a5d1;
    case 0x1011a5e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1011a5e8;
    case 0x1011a5f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1011a5f0;
    case 0x1011a5f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1011a5f3;
    case 0x1011a5fau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1011a5fa;
    case 0x1011a608u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1011a608;
    case 0x1011a627u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_1011a627;
    case 0x1011a66du: ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); goto E_1011a66d;
    case 0x1011a699u: ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); goto E_1011a699;
    case 0x1011a6b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); goto E_1011a6b8;
    case 0x1011a6c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1011a6c4;
    case 0x1011a6c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1011a6c7;
    case 0x1011a6d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1011a6d1;
    case 0x1011a6f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1011a6f2;
    default: break;
    }
#endif

    COW_AT(1011a5a0)
    wr32(sp0 - 0xcu, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 4u, t1);
    wr32(sp0 - 8u, 0u);
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
        loc_c = in_esi;
    }
    else
    {
        edx = t3;
        loc_4 = t1;
    COW_AT(1011a5c2)
        wr32(sp0 - 0x10u, in_ebx);
        wr32(sp0 - 0x14u, in_ebp);
        wr32(sp0 - 0x18u, in_edi);
        loc_c = in_esi;
        loc_8 = 0u;
        loc_10 = in_ebx;
        loc_14 = in_ebp;
        loc_18 = in_edi;
L_1011a5d1: ;
    COW_AT(1011a5d1)
        wr32(sp0 - 0x1cu, sp0 - 4u);
        g->eax = sp0 - 4u;
        g->esp = sp0 - 0x18u;
        t4 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
        t5 = g->edx;
        if (t4 == 0u)
        {
            ecx = t4;
            edx = t5;
            goto L_1011a6c4;
        }
        ecx = t4;
        edx = t5;
    COW_AT(1011a5e8)
        if ((uint32_t)(int16_t)rd16(ecx) == 0u)
        {
    COW_AT(1011a627)
            t14 = rd16(self + 0x3au);
            wr16(self + 0x8cu, (uint16_t)arg1);
            wr16(self + 0x8eu, (uint16_t)arg2);
            wr16(self + 0x90u, (uint16_t)arg3);
            wr16(self + 0x92u, (uint16_t)arg4);
            wr16(ecx + 0x1eu, (uint16_t)(rd16(ecx + 0x1eu) + (uint16_t)((uint16_t)arg1 - t14)));
            wr32(sp0 - 8u, ecx);
            t15 = rd16(self + 0x8eu);
            t16 = rd16(self + 0x3cu);
            wr16(ecx + 0x20u, (uint16_t)(rd16(ecx + 0x20u) + (uint16_t)(t15 - t16)));
            if ((uint8_t)arg6 != 0u)
            {
                edx = (((edx & 0xffff0000u) | (uint16_t)(t15 - t16)) & 0xffffff00u) | (uint8_t)arg6;
                loc_8 = ecx;
            }
            else
            {
                edx = (((edx & 0xffff0000u) | (uint16_t)(t15 - t16)) & 0xffffff00u) | (uint8_t)arg6;
                loc_8 = ecx;
    COW_AT(1011a66d)
                t17 = rd16(self + 0x8cu);
                wr16(ecx + 0x1au, (uint16_t)t17);
                t18 = rd16(self + 0x8eu);
                wr16(ecx + 0x1cu, (uint16_t)t18);
                t19 = rd16(self + 0x90u);
                wr16(ecx + 0x22u, (uint16_t)t19);
                t20 = rd16(self + 0x92u);
                wr16(ecx + 0x24u, (uint16_t)t20);
                edx = ((edx | t17 | t18 | t19) & 0xffff0000u) | t20;
            }
    COW_AT(1011a699)
            wr16(self + 0x3au, (uint16_t)arg1);
            wr16(self + 0x3eu, (uint16_t)(arg1 + arg3));
            wr16(self + 0x3cu, (uint16_t)arg2);
            wr16(self + 0x40u, (uint16_t)(arg4 + arg2));
            wr32(self + 0x94u, 0u);
            ecx = arg4 + arg2;
        }
        else
        {
            eax = (uint32_t)(int16_t)rd16(ecx);
    COW_AT(1011a5f0)
            if (eax == 1u)
            {
                eax = eax - 1u;
    COW_AT(1011a608)
                t9 = (eax & 0xffffff00u) | rd8(self + 0x99u);
                wr32(sp0 - 0x1cu, t9);
                t10 = (uint32_t)(int16_t)rd16(rd32(sp0 - 8u) + 0x1cu);
                wr32(sp0 - 0x20u, t10);
                t11 = (uint32_t)(int16_t)rd16(rd32(sp0 - 8u) + 0x1au);
                wr32(sp0 - 0x24u, t11);
                g->esp = sp0 - 0x18u;
                cow_fastcall(g, COW_IMG(0x10119ad0u), ecx, t10, 3, t11, t10, t9);
                t12 = g->ecx;
                t13 = g->edx;
                ecx = t12;
                edx = t13;
                loc_8 = rd32(sp0 - 8u);
            }
            else
            {
                eax = eax - 1u;
    COW_AT(1011a5f3)
                if (eax != 1u)
                {
                    loc_8 = rd32(sp0 - 8u);
                }
                else
                {
                    eax = eax - 1u;
    COW_AT(1011a5fa)
                    t6 = rd32(self + 8u);
                    wr32(sp0 - 0x1cu, t6);
                    g->edx = t6;
                    g->esp = sp0 - 0x18u;
                    cow_thiscall(g, COW_IMG(0x10119e30u), ecx, 1, t6);
                    t7 = g->ecx;
                    t8 = g->edx;
                    ecx = t7;
                    edx = t8;
                    loc_8 = rd32(sp0 - 8u);
                }
            }
        }
    COW_AT(1011a6b8)
        if (rd32(sp0 - 4u) != 0u)
        {
            loc_c = rd32(sp0 - 0xcu);
            loc_4 = rd32(sp0 - 4u);
            loc_10 = rd32(sp0 - 0x10u);
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            goto L_1011a5d1;
        }
L_1011a6c4: ;
    COW_AT(1011a6c4)
        ebx = rd32(sp0 - 0x10u);
        ebp = rd32(sp0 - 0x14u);
        edi = rd32(sp0 - 0x18u);
        loc_c = rd32(sp0 - 0xcu);
    }
    COW_AT(1011a6c7)
    if (rd32(self + 0x88u) == 0u)
    {
        eax = rd32(self + 0x88u);
        goto L_1011a6f2;
    }
    eax = rd32(self + 0x88u);
    COW_AT(1011a6d1)
    t21 = (uint32_t)(int16_t)rd16(self + 0x3cu);
    t22 = rd16(self + 0x3eu);
    wr32(eax + 4u, t21);
    t23 = (uint32_t)(int16_t)t22 - 6u;
    wr32(eax, t23);
    wr8(self + 0x9au, (uint8_t)arg7);
    g->ebx = ebx;
    g->esi = loc_c;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = t23;
    return (eax & 0xffffff00u) | (uint8_t)arg7;
L_1011a6f2: ;
    COW_AT(1011a6f2)
    wr8(self + 0x9au, (uint8_t)arg7);
    g->ebx = ebx;
    g->esi = loc_c;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1011a5a0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1011a5c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1011a5d1u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg4;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1011a5e8u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg4;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011a5f0u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg4;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011a5f3u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg4;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011a5fau:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg4;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011a608u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg4;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011a627u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->ebx = arg4;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011a66du:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->eax = arg3;
        g->ebx = arg4;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011a699u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->eax = arg3;
        g->ebx = arg4;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x1cu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x1011a6b8u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg4;
        g->ebp = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1011a6c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1011a6c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1011a6d1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1011a6f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1011a5a0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1011a5a0(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
