/* f_0x101e5c50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101e5c50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101e5c6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e5c6c;
    case 0x101e5c77u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101e5c77;
    case 0x101e5c8au: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101e5c8a;
    case 0x101e5c8du: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101e5c8d;
    case 0x101e5c9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101e5c9c;
    case 0x101e5ca9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101e5ca9;
    case 0x101e5cacu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101e5cac;
    case 0x101e5cc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101e5cc1;
    default: break;
    }
#endif

    COW_AT(101e5c50)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, arg1);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), self, 4, sp0 + 4u, 0u, 0u, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        loc_4 = in_esi;
        loc_8 = in_edi;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    COW_AT(101e5c6c)
        g->edi = arg1;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_stdcall(g, COW_IMG(0x100e1af0u), 0);
        t5 = g->ecx;
        t6 = g->edx;
        if (t4 == 0u)
        {
            loc_4 = in_esi;
            loc_8 = in_edi;
        }
        else
        {
            eax = t4;
            ecx = t5;
            edx = t6;
            esi = t4;
    COW_AT(101e5c77)
            wr32(sp0 - 0xcu, esi);
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x10103f60u), 1, esi);
            t7 = g->edx;
            if ((uint8_t)arg1 == 1u)
            {
                edx = t7;
                goto L_101e5c9c;
            }
            edx = t7;
    COW_AT(101e5c8a)
            if ((uint8_t)arg1 != 2u)
            {
                eax = (uint8_t)arg1 - 2u;
                goto L_101e5cac;
            }
    COW_AT(101e5c8d)
            wr32(sp0 - 0xcu, rd32(arg1));
            wr32(sp0 - 0x10u, esi);
            g->eax = (uint8_t)arg1 - 2u;
            g->edx = rd32(arg1);
            t8 = rd32(arg1);
            g->esp = sp0 - 8u;
            t9 = cow_cdecl(g, COW_IMG(0x10107670u), 2, esi, t8);
            t10 = g->edx;
            eax = t9;
            edx = t10;
L_101e5ca9: ;
    COW_AT(101e5ca9)
L_101e5cac: ;
    COW_AT(101e5cac)
            wr32(sp0 - 0xcu, arg1);
            wr32(sp0 - 0x10u, 0u);
            wr32(sp0 - 0x14u, 0u);
            wr32(sp0 - 0x18u, 0u);
            wr32(sp0 - 0x1cu, esi);
            wr32(sp0 - 0x20u, 3u);
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x1020a9d0u), eax, rd32(COW_IMG(0x10663524u)), g->edx, 0, 6, 3u, esi, 0u, 0u, 0u, arg1);
            loc_4 = rd32(sp0 - 4u);
            loc_8 = rd32(sp0 - 8u);
        }
    }
    COW_AT(101e5cc1)
    g->esi = loc_4;
    g->edi = loc_8;
    return;
L_101e5c9c: ;
    COW_AT(101e5c9c)
    wr32(sp0 - 0xcu, rd32(arg1));
    wr32(sp0 - 0x10u, esi);
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_cdecl(g, COW_IMG(0x10107660u), 2, esi, rd32(arg1));
    t12 = g->edx;
    eax = t11;
    edx = t12;
    goto L_101e5ca9;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101e5c50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101e5c6cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101e5c77u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101e5c8au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->eax = (uint8_t)arg1 - 1u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101e5c8du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->eax = (uint8_t)arg1 - 2u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101e5c9cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101e5ca9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101e5cacu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = arg1;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101e5cc1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101e5c50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101e5c50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
