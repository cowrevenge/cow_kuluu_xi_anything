/* f_0x10191f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10191f60(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
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
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10191f89u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10191f89;
    case 0x10191f96u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10191f96;
    case 0x10191f9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10191f9c;
    case 0x10191fa0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); g->ebp = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10191fa0;
    case 0x10191fc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->edi; goto E_10191fc5;
    case 0x10191fd0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10191fd0;
    case 0x10191fd2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10191fd2;
    case 0x10191fe1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10191fe1;
    case 0x10191fe6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10191fe6;
    case 0x10191fe9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_10191fe9;
    case 0x10192017u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10192017;
    case 0x1019201du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1019201d;
    case 0x10192029u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10192029;
    case 0x1019203au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1019203a;
    case 0x1019206cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1019206c;
    case 0x10192098u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10192098;
    case 0x101920b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101920b4;
    case 0x101920b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); goto E_101920b5;
    default: break;
    }
#endif

    COW_AT(10191f60)
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    if (t1 == 0u)
    {
        eax = t1;
        edx = in_edx;
        ebx = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
    }
    else
    {
        eax = t1;
    COW_AT(10191f89)
        if (rd32(rd32(self + 0x18u) + 8u) == 1u)
        {
    COW_AT(10191f9c)
            wr8(eax + 0x62u, 1u);
        }
        else
        {
    COW_AT(10191f96)
            wr8(eax + 0x62u, 0u);
        }
    COW_AT(10191fa0)
        wr32(sp0 - 0x24u, sp0 - 8u);
        t2 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
        wr32(sp0 - 0xcu, t2);
        g->eax = sp0 - 8u;
        g->edx = t2;
        g->esp = sp0 - 0x20u;
        t3 = cow_thiscall(g, COW_IMG(0x1011a710u), rd32(self + 8u), 1, sp0 - 8u);
        t4 = g->edx;
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x10191960u), rd32(self + 0x18u), 0);
        t6 = g->edx;
        if (t5 == 0u)
        {
            eax = t5;
            edx = t6;
            ebx = in_ebx;
            loc_18 = in_ebp;
            loc_1c = in_esi;
            loc_20 = in_edi;
        }
        else
        {
            eax = t5;
    COW_AT(10191fc5)
            wr32(sp0 - 0x24u, in_ebx);
            wr32(sp0 - 0x10u, 1u);
            wr32(sp0 - 0x14u, eax);
            ebx = in_ebx;
            ebp = 1u;
            loc_24 = in_ebx;
            loc_10 = 1u;
            loc_14 = eax;
L_10191fd2: ;
    COW_AT(10191fd2)
            if (rd32(loc_14) == 0u)
            {
                eax = rd32(loc_14);
                ecx = rd32(rd32(self + 0x14u));
                edx = rd32(self + 0x14u);
    COW_AT(10191fe6)
                esi = rd32(ecx + 0x4cu);
            }
            else
            {
                eax = rd32(loc_14);
                ecx = rd32(rd32(self + 0x14u));
                edx = rd32(self + 0x14u);
    COW_AT(10191fe1)
                esi = rd32(eax * 4u + ecx);
            }
    COW_AT(10191fe9)
            wr32(sp0 - 0x28u, eax);
            g->eax = eax;
            g->esp = sp0 - 0x24u;
            t7 = cow_stdcall(g, COW_IMG(0x101921f0u), 1, eax);
            wr32(sp0 - 0x28u, 1u);
            wr32(sp0 - 0x2cu, 1u);
            wr32(sp0 - 0x30u, ebp);
            wr32(sp0 - 0x34u, sp0 - 8u);
            g->ebx = (ebx & 0xffffff00u) | (uint8_t)t7;
            g->edi = self;
            cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, ebp, 1u, 1u);
            if (esi == 0u)
            {
                edx = (uint32_t)(int16_t)rd16(sp0 - 6u);
                ebx = (ebx & 0xffffff00u) | (uint8_t)t7;
            }
            else
            {
                eax = (uint32_t)(int16_t)rd16(sp0 - 8u);
                edx = (uint32_t)(int16_t)rd16(sp0 - 6u);
                ebx = (ebx & 0xffffff00u) | (uint8_t)t7;
    COW_AT(10192017)
                if (rd32(sp0 - 0xcu) != ebp)
                {
    COW_AT(1019206c)
                    wr32(sp0 - 0x28u, 0u);
                    wr32(sp0 - 0x2cu, 0u);
                    wr32(sp0 - 0x30u, 0u);
                    t11 = (-((uint8_t)((uint8_t)ebx - 1u) != 0u) & 0x40405870u) + 0x40402810u;
                    wr32(sp0 - 0x34u, t11);
                    wr32(sp0 - 0x38u, 0x3f800000u);
                    wr32(sp0 - 0x3cu, 0x3f800000u);
                    wr32(sp0 - 0x40u, edx);
                    wr32(sp0 - 0x44u, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0x24u;
                    cow_thiscall(g, COW_IMG(0x1011fc80u), esi, 8, eax, edx, 0x3f800000u, 0x3f800000u, t11, 0u, 0u, 0u);
                    t12 = g->edx;
                    edx = t12;
                    ebx = t11;
                }
                else
                {
    COW_AT(1019201d)
                    if ((int16_t)rd16(rd32(self + 8u) + 0x5eu) <= 0)
                    {
    COW_AT(1019203a)
                        wr32(sp0 - 0x28u, 0u);
                        wr32(sp0 - 0x2cu, 0u);
                        wr32(sp0 - 0x30u, 0u);
                        t9 = (-((uint8_t)((uint8_t)ebx - 1u) != 0u) & 0x40402810u) + 0x40402810u;
                        wr32(sp0 - 0x34u, t9);
                        wr32(sp0 - 0x38u, 0x3f800000u);
                        wr32(sp0 - 0x3cu, 0x3f800000u);
                        wr32(sp0 - 0x40u, edx);
                        wr32(sp0 - 0x44u, eax);
                        g->edx = edx;
                        g->esp = sp0 - 0x24u;
                        cow_thiscall(g, COW_IMG(0x1011fc80u), esi, 8, eax, edx, 0x3f800000u, 0x3f800000u, t9, 0u, 0u, 0u);
                        t10 = g->edx;
                        edx = t10;
                        ebx = t9;
                        ebp = rd32(sp0 - 0x10u);
                    }
                    else
                    {
                        ecx = rd32(self + 8u);
                        ebp = (ebp & 0xffff0000u) | rd16(rd32(self + 8u) + 0x5eu);
    COW_AT(10192029)
                        wr32(sp0 - 0x28u, ebp);
                        wr32(sp0 - 0x2cu, 0x1eu);
                        wr32(sp0 - 0x30u, edx);
                        wr32(sp0 - 0x34u, eax);
                        wr32(sp0 - 0x38u, esi);
                        g->edx = edx;
                        g->esp = sp0 - 0x24u;
                        cow_thiscall(g, COW_IMG(0x10119f80u), ecx, 5, esi, eax, edx, 0x1eu, ebp);
                        t8 = g->edx;
                        edx = t8;
                        ebp = rd32(sp0 - 0x10u);
                    }
                }
            }
    COW_AT(10192098)
            t13 = rd32(sp0 - 0x14u) + 4u;
            wr32(sp0 - 0x14u, t13);
            wr32(sp0 - 0x10u, ebp + 1u);
            if ((int32_t)ebp < 10)
            {
                loc_14 = t13;
                loc_10 = ebp + 1u;
                ebp = ebp + 1u;
                goto L_10191fd0;
            }
            eax = ebp;
    COW_AT(101920b4)
            ebx = rd32(sp0 - 0x24u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
        }
    }
    COW_AT(101920b5)
    g->ebx = ebx;
    g->esi = loc_1c;
    g->edi = loc_20;
    g->ebp = loc_18;
    g->edx = edx;
    return eax;
L_10191fd0: ;
    COW_AT(10191fd0)
    loc_24 = rd32(sp0 - 0x24u);
    goto L_10191fd2;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10191f60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10191f89u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191f96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->ebp = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191f9cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->ebp = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191fa0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x20u;
        g->ebp = 1u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191fc5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebp = 1u;
        g->esi = 0u;
        wr32(sp0 - 0x24u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10191fd0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10191fd2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191fe1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10191fe6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10191fe9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x10192017u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1019201du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10192029u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1019203au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1019206cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x34u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10192098u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101920b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        (void)sp0;
        return 1;
    }
    case 0x101920b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10191f60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10191f60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
