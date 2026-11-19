/* f_0x1022e6d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1022e6d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_40;
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
    cow_frame(g, sp0, 88u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022dec0u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_1022dec0;
    case 0x1022dedcu: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1022dedc;
    case 0x1022def8u: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_1022def8;
    case 0x1022df01u: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x38u); goto E_1022df01;
    case 0x1022df0au: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x38u); g->edi = rd32(sp0 - 0x38u); goto E_1022df0a;
    case 0x1022df4au: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_1022df4a;
    case 0x1022df51u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_1022df51;
    case 0x1022df52u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_1022df52;
    case 0x1022df62u: eax = g->eax; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1022df62;
    case 0x1022e6dbu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1022e6db;
    case 0x1022e6deu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1022e6de;
    case 0x1022e6e1u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1022e6e1;
    case 0x1022e6e7u: eax = g->eax; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1022e6e7;
    case 0x1022e6f6u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1022e6f6;
    case 0x1022e707u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1022e707;
    default: break;
    }
#endif

    COW_AT(1022e6d0)
    wr32(sp0 - 4u, in_esi);
    if (rd32(self + 0x64u) == 0u) goto L_1022e6f6;
    eax = rd32(self + 0x64u);
    COW_AT(1022e6db)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1022e6e7;
    }
    eax = eax - 1u;
    COW_AT(1022e6de)
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_1022e707;
    }
    COW_AT(1022e6e1)
    COW_AT(1022dec0)
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    t1 = rd32(self + 0x30u);
    wr32(sp0 - 0x38u, t1);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x34u;
    t2 = cow_thiscall(g, COW_IMG(0x1022df70u), self, 1, t1);
    t3 = g->edx;
    if (t2 == 0xfffffffau)
    {
        eax = t2;
        edx = t3;
        edi = in_edi;
    }
    else
    {
        ebp = t2;
    COW_AT(1022dedc)
        wr32(sp0 - 0x38u, ebp);
        g->eax = rd32(self + 0x6cu);
        g->edx = rd32(self + 0x6cu) * 0x25u;
        t4 = rd32(self + 0x6cu);
        g->esp = sp0 - 0x34u;
        t5 = cow_thiscall(g, COW_IMG(0x1022f140u), COW_IMG(0x10667a90u) + t4 * 0x94u, 1, ebp);
        t6 = g->edx;
        if (t5 == 0u)
        {
            eax = t5;
            edx = t6;
            edi = in_edi;
        }
        else
        {
            eax = t5;
            edx = t6;
            esi = t5;
    COW_AT(1022def8)
            wr32(sp0 - 0x38u, in_edi);
            if (rd8(esi) != 0x5fu)
            {
                edi = 0u;
                goto L_1022df0a;
            }
            eax = (eax & 0xffffff00u) | rd8(esi);
            edi = 0u;
L_1022df01: ;
    COW_AT(1022df01)
            if (rd8(edi + esi + 1u) == 0x5fu)
            {
                eax = (eax & 0xffffff00u) | rd8(edi + esi + 1u);
                edi = edi + 1u;
                goto L_1022df01;
            }
            edi = edi + 1u;
L_1022df0a: ;
    COW_AT(1022df0a)
            wr32(sp0 - 0x3cu, 0u);
            wr32(sp0 - 0x40u, 0x10u);
            wr32(sp0 - 0x44u, 0x32u);
            wr32(sp0 - 0x48u, 0x28u);
            wr32(sp0 - 0x4cu, 0x14u);
            wr32(sp0 - 0x50u, 0x20u);
            t7 = rd32(self + 8u) + 0xc4u;
            wr32(sp0 - 0x54u, t7);
            g->esp = sp0 - 0x38u;
            cow_thiscall(g, COW_IMG(0x10233130u), sp0 - 0x28u, 7, t7, 0x20u, 0x14u, 0x28u, 0x32u, 0x10u, 0u);
            wr32(sp0 - 0x3cu, ebp);
            g->eax = rd32(self + 0x6cu);
            g->edx = rd32(self + 0x6cu) * 0x25u;
            t8 = rd32(self + 0x6cu);
            t9 = cow_thiscall(g, COW_IMG(0x1022f150u), COW_IMG(0x10667a90u) + t8 * 0x94u, 1, ebp);
            t10 = g->edx;
            wr32(sp0 - 0x3cu, 0u);
            if (t9 != 0u)
            {
                eax = t9;
                edx = t10;
                edi = edi + esi;
    COW_AT(1022df51)
                wr32(sp0 - 0x40u, eax);
                loc_40 = eax;
            }
            else
            {
                eax = t9;
                edx = t10;
                edi = edi + esi;
    COW_AT(1022df4a)
                wr32(sp0 - 0x40u, COW_IMG(0x103d3c84u));
                loc_40 = COW_IMG(0x103d3c84u);
            }
    COW_AT(1022df52)
            wr32(sp0 - 0x44u, edi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t11 = cow_thiscall(g, COW_IMG(0x10233190u), sp0 - 0x28u, 3, edi, loc_40, 0u);
            t12 = g->edx;
            g->edx = t12;
            t13 = cow_thiscall(g, COW_IMG(0x10233120u), sp0 - 0x28u, 0);
            t14 = g->edx;
            eax = t13;
            edx = t14;
            edi = rd32(sp0 - 0x38u);
        }
    }
    COW_AT(1022df62)
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x30u);
    g->edx = edx;
    return eax;
L_1022e6e7: ;
    COW_AT(1022e6e7)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t15 = cow_thiscall(g, COW_IMG(0x1022de70u), self, 0);
    t16 = g->edx;
    g->esp = sp0;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t16;
    return cow_tailcall(g, COW_IMG(0x10221f50u), t15, self, t16);
L_1022e6f6: ;
    COW_AT(1022e6f6)
    t17 = rd32(self + 8u) + 0xc4u;
    wr32(sp0 - 8u, t17);
    g->eax = t17;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t18 = cow_cdecl(g, COW_IMG(0x1022f5c0u), 1, t17);
    t19 = g->edx;
    eax = t18;
    edx = t19;
L_1022e707: ;
    COW_AT(1022e707)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022e6d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022dec0u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1022dedcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1022def8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1022df01u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022df0au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x1022df4au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x3cu;
        g->ecx = sp0 - 0x28u;
        wr32(sp0 - 0x3cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1022df51u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x3cu;
        g->ecx = sp0 - 0x28u;
        wr32(sp0 - 0x3cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1022df52u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_40;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x40u;
        g->ecx = sp0 - 0x28u;
        wr32(sp0 - 0x3cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1022df62u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x1022e6dbu:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1022e6deu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1022e6e1u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1022e6e7u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1022e6f6u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x1022e707u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1022e6d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1022e6d0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
