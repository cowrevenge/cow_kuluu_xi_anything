/* f_0x102aca50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102aca50(Guest* g)
{
    double d5;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102aca64u: ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 0x10u); goto E_102aca64;
    case 0x102aca6du: eax = g->eax; ecx = g->ecx; edx = g->edx; g->edi = rd32(sp0 - 0x10u); goto E_102aca6d;
    case 0x102aca7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x1cu); goto E_102aca7c;
    case 0x102acaa9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x1cu); goto E_102acaa9;
    case 0x102acaabu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x1cu); goto E_102acaab;
    case 0x102acab7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x1cu); goto E_102acab7;
    case 0x102acaf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); x0 = ST(0); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x1cu); goto E_102acaf2;
    case 0x102acb36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x1cu); goto E_102acb36;
    case 0x102acb39u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); goto E_102acb39;
    default: break;
    }
#endif

    COW_AT(102aca50)
    if ((int32_t)arg1 < (int32_t)arg2)
    {
    COW_AT(102aca64)
        if ((int32_t)(arg1 + 1u) < (int32_t)arg2)
        {
    COW_AT(102aca6d)
            t1 = arg1 * 0xcu + 0x14u;
            ebx = t1;
            ebp = t1;
            edi = arg1 + 1u;
L_102aca7c: ;
    COW_AT(102aca7c)
            t2 = rd32(ebx + rd32(COW_IMG(0x109aaab8u)) - 4u);
            t3 = rd32(ebx + rd32(COW_IMG(0x109aaab8u)) - 8u);
            t4 = rd32(ebx + rd32(COW_IMG(0x109aaab8u)));
            if ((int32_t)ebp < 20)
            {
                edx = edi - 1u;
                esi = rd32(COW_IMG(0x109aaac4u));
                loc_8 = t2;
                loc_c = t3;
                loc_4 = t4;
                x0 = (double)rdf32(edi * 4u + rd32(COW_IMG(0x109aaac4u)));
            }
            else
            {
                eax = t4;
                edx = edi - 1u;
                esi = rd32(COW_IMG(0x109aaac4u));
                loc_8 = t2;
                loc_c = t3;
                loc_4 = t4;
                x0 = (double)rdf32(edi * 4u + rd32(COW_IMG(0x109aaac4u)));
    COW_AT(102acaa9)
                ecx = ebp;
L_102acaab: ;
    COW_AT(102acaab)
                d5 = (double)rdf32(edx * 4u + esi);
                if ((cow_fsw(g, x0, d5, 1u) & 0x4100u) != 0u) goto L_102acaf2;
    COW_AT(102acab7)
                t6 = rd32(edx * 4u + esi);
                wr32(edx * 4u + esi + 4u, t6);
                t7 = rd32(ecx + rd32(COW_IMG(0x109aaab8u)) - 0x14u);
                wr32(ecx + rd32(COW_IMG(0x109aaab8u)) - 8u, t7);
                t8 = rd32(ecx + rd32(COW_IMG(0x109aaab8u)) - 0x10u);
                wr32(ecx + rd32(COW_IMG(0x109aaab8u)) - 4u, t8);
                t9 = rd32(ecx + rd32(COW_IMG(0x109aaab8u)) - 0xcu);
                t10 = rd32(COW_IMG(0x109aaab8u));
                wr32(ecx + t10, t9);
                if ((int32_t)(edx - 1u) >= 0)
                {
                    eax = t10;
                    ecx = ecx - 0xcu;
                    edx = edx - 1u;
                    esi = rd32(COW_IMG(0x109aaac4u));
                    goto L_102acaab;
                }
                edx = edx - 1u;
                esi = rd32(COW_IMG(0x109aaac4u));
            }
L_102acaf2: ;
    COW_AT(102acaf2)
            wrf32(edx * 4u + esi + 4u, (float)x0);
            wr32(edx * 0xcu + rd32(COW_IMG(0x109aaab8u)) + 0xcu, loc_c);
            wr32(edx * 0xcu + rd32(COW_IMG(0x109aaab8u)) + 0x10u, loc_8);
            wr32(edx * 0xcu + rd32(COW_IMG(0x109aaab8u)) + 0x14u, loc_4);
            if ((int32_t)(edi + 1u) < (int32_t)arg2)
            {
                ebx = ebx + 0xcu;
                ebp = ebp + 0xcu;
                edi = edi + 1u;
                goto L_102aca7c;
            }
    COW_AT(102acb36)
        }
    }
    COW_AT(102acb39)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102aca50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102aca64u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->eax = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102aca6du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x10u;
        g->edi = arg1 + 1u;
        (void)sp0;
        return 1;
    }
    case 0x102aca7cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102acaa9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102acaabu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102acab7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102acaf2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        x0 = ST(0);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102acb36u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102acb39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
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
void cow_adapter_102aca50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102aca50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
