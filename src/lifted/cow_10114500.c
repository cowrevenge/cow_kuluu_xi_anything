/* f_0x10114500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10114500(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    int64_t q11;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10114520u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_10114520;
    case 0x10114529u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x34u); in_ebp = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); goto E_10114529;
    case 0x1011452cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0x34u); in_esi = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x34u); g->esi = rd32(sp0 - 0x30u); goto E_1011452c;
    case 0x1011454bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011454b;
    case 0x10114563u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10114563;
    case 0x1011457fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011457f;
    case 0x10114587u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10114587;
    case 0x1011458cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011458c;
    case 0x1011459bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1011459b;
    case 0x101145a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_101145a2;
    case 0x101145aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101145ae;
    case 0x101145b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101145b2;
    case 0x101145beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101145be;
    case 0x101145c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); goto E_101145c3;
    case 0x101145dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101145da;
    case 0x101145e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101145e0;
    case 0x101145e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101145e2;
    case 0x101145e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101145e7;
    case 0x101145f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101145f3;
    case 0x10114609u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10114609;
    case 0x10114610u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10114610;
    default: break;
    }
#endif

    COW_AT(10114500)
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, in_ebp);
    wr32(sp0 - 0x30u, in_esi);
    wr32(sp0 - 0x34u, in_edi);
    if (rd16(self + 0x230u) == (((self & 0xffff0000u) | rd16(self + 0x232u)) + 1u & 7u))
    {
        ecx = ((self & 0xffff0000u) | rd16(self + 0x232u)) + 1u & 7u;
    COW_AT(10114529)
        esi = 0xffffffffu;
    }
    else
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x230u);
        ecx = ((self & 0xffff0000u) | rd16(self + 0x232u)) + 1u & 7u;
    COW_AT(10114520)
        t1 = (uint8_t)eax - 1u & 7u;
        esi = t1;
    }
    COW_AT(1011452c)
    wr32(sp0 - 0x38u, (uint32_t)(int16_t)esi);
    wr32(sp0 - 0x3cu, COW_IMG(0x1036c084u));
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->edx = (uint32_t)(int16_t)esi;
    g->esp = sp0 - 0x2cu;
    t2 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, COW_IMG(0x1036c084u), (uint32_t)(int16_t)esi, in_edi, in_esi);
    t3 = g->edx;
    if ((int16_t)esi >= 0)
    {
        eax = t2;
        edx = t3;
    COW_AT(1011454b)
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        g->eax = eax;
        g->esp = sp0 - 0x34u;
        t4 = cow_thiscall(g, COW_IMG(0x101c4c70u), rd32(COW_IMG(0x10662dccu)), 1, sp0 - 0x20u);
        if ((uint8_t)t4 != 0u)
        {
            eax = t4;
    COW_AT(10114563)
            wr32(sp0 - 0x38u, sp0 - 0x20u);
            g->eax = eax;
            g->edx = sp0 - 0x20u;
            g->esp = sp0 - 0x34u;
            t5 = cow_thiscall(g, COW_IMG(0x101c4b40u), rd32(COW_IMG(0x10662dccu)), 1, sp0 - 0x20u);
            t6 = g->edx;
            if ((int32_t)t5 > 0)
            {
                edx = t6;
                ebp = t5;
    COW_AT(1011457f)
                if ((int32_t)ebp <= 576)
                {
                    ebx = 0u;
                }
                else
                {
    COW_AT(10114587)
                    eax = 0x240u;
                    ebx = 0u;
L_1011458c: ;
    COW_AT(1011458c)
                    if ((int32_t)(eax + 0x120u) < (int32_t)ebp)
                    {
                        eax = eax + 0x120u;
                        ebx = ebx + 0x120u;
                        goto L_1011458c;
                    }
                    ebx = ebx + 0x120u;
                }
    COW_AT(1011459b)
                if ((int32_t)(ebx + 0x48u) <= (int32_t)ebp)
                {
                    eax = ebx + 0x48u;
    COW_AT(101145a2)
                    wr32(sp0 - 0x24u, self + 0x110u);
                    edi = self + 0x110u;
                    loc_24 = self + 0x110u;
L_101145b2: ;
    COW_AT(101145b2)
                    if (ebp - ebx < 0x120u)
                    {
                        esi = ebp - ebx;
                    }
                    else
                    {
    COW_AT(101145be)
                        esi = 0x120u;
                    }
    COW_AT(101145c3)
                    wr32(sp0 - 0x38u, ebx);
                    wr32(sp0 - 0x3cu, esi);
                    wr32(sp0 - 0x40u, edi);
                    wr32(sp0 - 0x44u, sp0 - 0x20u);
                    g->eax = eax;
                    g->edx = edx;
                    t7 = rd32(COW_IMG(0x10662dccu));
                    g->esp = sp0 - 0x34u;
                    t8 = cow_thiscall(g, COW_IMG(0x101c47b0u), t7, 4, sp0 - 0x20u, edi, esi, ebx);
                    t9 = g->ecx;
                    t10 = g->edx;
                    if ((int32_t)t8 <= 0) goto L_10114610;
                    eax = t8;
                    ecx = t9;
                    edx = t10;
    COW_AT(101145da)
                    if ((int32_t)esi >= (int32_t)eax)
                    {
                        ebx = eax + ebx;
                    }
                    else
                    {
                        ebx = eax + ebx;
    COW_AT(101145e0)
                        esi = eax;
                    }
    COW_AT(101145e2)
                    if (esi >= 0x48u)
                    {
    COW_AT(101145e7)
                        q11 = (uint64_t)cow_mulu(0x38e38e39u, esi);
                        esi = cow_qhi(q11) >> 4u;
L_101145f3: ;
    COW_AT(101145f3)
                        wr32(sp0 - 0x38u, rd32(edi));
                        t12 = (uint32_t)(int16_t)rd16(edi + 4u);
                        wr32(sp0 - 0x3cu, t12);
                        g->esi = esi;
                        g->eax = t12;
                        g->ecx = ecx;
                        g->edx = rd32(edi);
                        t13 = rd32(edi);
                        g->esp = sp0 - 0x34u;
                        t14 = cow_cdecl(g, COW_IMG(0x1010feb0u), 2, t12, t13);
                        t15 = g->ecx;
                        t16 = g->edx;
                        if (esi != 1u)
                        {
                            ecx = t15;
                            esi = esi - 1u;
                            edi = edi + 0x48u;
                            goto L_101145f3;
                        }
                        eax = t14;
                        edx = t16;
                    }
    COW_AT(10114609)
                    if ((int32_t)(ebx + 0x48u) <= (int32_t)ebp) goto L_101145ae;
                }
            }
        }
    }
L_10114610: ;
    COW_AT(10114610)
    g->ebx = rd32(sp0 - 0x28u);
    g->esi = rd32(sp0 - 0x30u);
    g->edi = rd32(sp0 - 0x34u);
    g->ebp = rd32(sp0 - 0x2cu);
    return;
L_101145ae: ;
    COW_AT(101145ae)
    edi = rd32(sp0 - 0x24u);
    loc_24 = rd32(sp0 - 0x24u);
    goto L_101145b2;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10114500(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10114520u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
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
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x28u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10114529u:
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
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_ebp = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x30u, in_esi);
        wr32(sp0 - 0x28u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1011452cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
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
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0x34u);
        in_esi = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x28u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1011454bu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10114563u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011457fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10114587u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x34u;
        g->ebx = 0u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011458cu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1011459bu:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101145a2u:
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
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x40u, sp0 - 0x20u);
        wr32(sp0 - 0x38u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101145aeu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101145b2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x101145beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x101145c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x101145dau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101145e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101145e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101145e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x101145f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10114609u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10114610u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10114500(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10114500(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
