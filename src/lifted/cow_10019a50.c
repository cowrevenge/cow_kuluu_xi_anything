/* f_0x10019a50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10019a50(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10019a74u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_10019a74;
    case 0x10019a7du: ecx = g->ecx; in_edx = g->edx; self = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_10019a7d;
    case 0x10019a83u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x18u); goto E_10019a83;
    case 0x10019a99u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x18u); goto E_10019a99;
    case 0x10019aa3u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x18u); goto E_10019aa3;
    case 0x10019aabu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x18u); goto E_10019aab;
    case 0x10019aaeu: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x18u); goto E_10019aae;
    case 0x10019ac5u: eax = g->eax; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x18u); goto E_10019ac5;
    case 0x10019ad9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x18u); goto E_10019ad9;
    case 0x10019ae2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x18u); goto E_10019ae2;
    case 0x10019af6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x18u); goto E_10019af6;
    case 0x10019af8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_10019af8;
    default: break;
    }
#endif

    COW_AT(10019a50)
    d1 = (double)rdf32(sp0 + 0xcu);
    t2 = (uint32_t)(int16_t)rd16(self + 0x32u);
    if (!(d1 < (double)rdf32(COW_IMG(0x1032a1a8u))))
    {
        ecx = t2;
        loc_4 = t2;
    COW_AT(10019a74)
        if (ecx != 0u)
        {
    COW_AT(10019a7d)
            eax = self + 0x3au;
            edx = in_edx;
            edi = 0u;
            loc_8 = self + 0x3au;
L_10019a83: ;
    COW_AT(10019a83)
            if ((int8_t)rd8(rd32(eax) + rd32(COW_IMG(0x1045f028u))) < 0)
            {
                esi = rd32(eax);
                eax = (rd32(COW_IMG(0x1045f028u)) & 0xffffff00u) | rd8(rd32(eax) + rd32(COW_IMG(0x1045f028u)));
    COW_AT(10019a99)
                if ((eax & 0x40u) == 0x40u)
                {
                    edx = (edx & 0xffffff00u) | (eax & 0x40u);
                }
                else
                {
                    edx = (edx & 0xffffff00u) | (eax & 0x40u);
    COW_AT(10019aa3)
                    if ((eax & 0x3fu) == 0u)
                    {
                        eax = eax & 0x3fu;
    COW_AT(10019ac5)
                        g->edx = arg1;
                        g->esp = sp0 - 0x18u;
                        t4 = cow_call_regs(g, COW_IMG(0x10019b30u), eax, self, g->edx, 0, 5, arg1, edi, esi, arg2, arg4);
                        t5 = g->edx;
                        if ((uint8_t)t4 == 0u)
                        {
                            edx = t5;
                        }
                        else
                        {
                            edx = t5;
    COW_AT(10019ad9)
                            wr8(esi + rd32(COW_IMG(0x1045f028u)), rd8(esi + rd32(COW_IMG(0x1045f028u))) | 1u);
                        }
                    }
                    else
                    {
                        eax = eax & 0x3fu;
    COW_AT(10019aab)
                        if (eax == 1u)
                        {
    COW_AT(10019aae)
                            g->edx = edx;
                            g->esp = sp0 - 0x18u;
                            cow_call_regs(g, COW_IMG(0x10019ee0u), arg3, self, g->edx, 0, 6, arg1, edi, esi, arg2, arg3, arg4);
                            t3 = g->edx;
                            edx = t3;
                        }
                    }
                }
            }
    COW_AT(10019ae2)
            if (edi + 1u < loc_4)
            {
                eax = loc_8 + 0x54u;
                edi = edi + 1u;
                loc_8 = loc_8 + 0x54u;
                goto L_10019a83;
            }
    COW_AT(10019af6)
        }
    }
    COW_AT(10019af8)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10019a50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10019a74u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10019a7du:
    {
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_4;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = self + 0x3au;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10019a83u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10019a99u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg2;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10019aa3u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg2;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10019aabu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg2;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10019aaeu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg2;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10019ac5u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = arg2;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10019ad9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10019ae2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10019af6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x10019af8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10019a50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10019a50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
