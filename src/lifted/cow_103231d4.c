/* f_0x103231d4 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_103231d4(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_80;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    uint32_t in_esi = g->esi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 148u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1032320au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x80u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x80u); goto E_1032320a;
    case 0x10323215u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x80u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x80u); goto E_10323215;
    case 0x1032322au: eax = g->eax; edx = g->edx; esi = g->esi; goto E_1032322a;
    case 0x10323235u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10323235;
    case 0x10323248u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10323248;
    case 0x10323255u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_80 = rd32(sp0 - 0x80u); loc_4 = rd32(sp0 - 4u); goto E_10323255;
    default: break;
    }
#endif

    COW_AT(103231d4)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x80u, in_esi);
    wr32(sp0 - 0x84u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x80u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10323477u), self, 1, arg1);
    t2 = g->edx;
    wr32(sp0 - 0x84u, 0x78u);
    wr32(sp0 - 0x88u, sp0 - 0x7cu);
    t3 = ((-(rd32(COW_IMG(0x109b2a20u)) != 0u) & 0xffff0000u) | (-(rd32(COW_IMG(0x109b2a20u)) != 0u) & 0xf005u)) + 0x1002u;
    wr32(sp0 - 0x8cu, t3);
    wr32(sp0 - 0x90u, t1);
    g->eax = t3;
    g->edx = t2;
    t4 = cow_thiscall(g, rd32(COW_IMG(0x109b2a3cu)), arg1, 4, t1, t3, sp0 - 0x7cu, 0x78u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        ecx = t5;
        edx = t6;
        esi = t1;
    COW_AT(10323215)
        wr32(sp0 - 0x84u, sp0 - 0x7cu);
        wr32(sp0 - 0x88u, rd32(COW_IMG(0x109b2a30u)));
        g->eax = sp0 - 0x7cu;
        t7 = rd32(COW_IMG(0x109b2a30u));
        g->esp = sp0 - 0x78u;
        t8 = cow_call_regs(g, COW_IMG(0x10314060u), g->eax, ecx, edx, 1, 4, t7, sp0 - 0x7cu, in_esi, rd32(sp0 - 0x7cu));
        t9 = g->edx;
        if (t8 != 0u)
        {
            edx = t9;
        }
        else
        {
            eax = t8;
            edx = t9;
    COW_AT(1032322a)
            wr32(sp0 - 0x84u, esi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x80u;
            t10 = cow_thiscall_cdecl(g, COW_IMG(0x103232dau), sp0 - 0x7cu, 1, esi);
            t11 = g->edx;
            if (t10 == 0u)
            {
                edx = t11;
            }
            else
            {
                edx = t11;
    COW_AT(10323235)
                wr32(COW_IMG(0x109b2a34u), rd32(COW_IMG(0x109b2a34u)) | 4u);
                wr32(COW_IMG(0x109b2a38u), esi);
                wr32(COW_IMG(0x109b2a1cu), esi);
            }
        }
    COW_AT(10323248)
        eax = ~rd32(COW_IMG(0x109b2a34u)) >> 2u & 1u;
        loc_4 = rd32(sp0 - 4u);
        loc_80 = rd32(sp0 - 0x80u);
    }
    else
    {
        eax = t4;
        edx = t6;
    COW_AT(1032320a)
        wr32(COW_IMG(0x109b2a34u), rd32(COW_IMG(0x109b2a34u)) & eax);
        wr32(sp0 - 0x84u, 1u);
        eax = 1u;
        loc_4 = in_ebp;
        loc_80 = in_esi;
    }
    COW_AT(10323255)
    g->esi = loc_80;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_103231d4(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1032320au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x80u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x80u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x88u, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10323215u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x80u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x80u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x88u, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x1032322au:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x80u;
        g->ecx = sp0 - 0x7cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x84u, sp0 - 0x7cu);
        (void)sp0;
        return 1;
    }
    case 0x10323235u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x80u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10323248u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x80u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10323255u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_80;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_80 = rd32(sp0 - 0x80u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x80u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_103231d4(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_103231d4(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
