/* f_0x100e8330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e8330(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 1316u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100e8341u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e8341;
    case 0x100e8383u: ecx = g->ecx; in_edx = g->edx; goto E_100e8383;
    case 0x100e8387u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e8387;
    case 0x100e83ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e83ce;
    case 0x100e83ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e83ec;
    case 0x100e83fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e83fb;
    case 0x100e8402u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e8402;
    case 0x100e840cu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e840c;
    case 0x100e841bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e841b;
    case 0x100e8429u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100e8429;
    default: break;
    }
#endif

    COW_AT(100e8330)
    if (arg1 != 0xffffeb34u)
    {
    COW_AT(100e8383)
        if ((int32_t)arg1 < 0)
        {
            edx = in_edx;
        }
        else
        {
    COW_AT(100e8387)
            wr32(sp0 - 0x504u, 0x200u);
            wr32(sp0 - 0x508u, sp0 - 0x200u);
            wr32(sp0 - 0x50cu, 0x200u);
            wr32(sp0 - 0x510u, sp0 - 0x400u);
            t5 = rd32(rd32(COW_IMG(0x104df770u)) + 0x82cu);
            wr32(sp0 - 0x514u, t5);
            t6 = rd32(rd32(COW_IMG(0x104df770u)) + 0x80cu);
            wr32(sp0 - 0x518u, t6);
            t7 = rd32(rd32(COW_IMG(0x104df770u)) + 0x804u);
            wr32(sp0 - 0x51cu, t7);
            t8 = rd32(rd32(COW_IMG(0x104df770u)) + 0x5e8u);
            wr32(sp0 - 0x520u, t8);
            g->eax = t8;
            g->edx = t7;
            g->esp = sp0 - 0x4ecu;
            t9 = cow_cdecl(g, COW_IMG(0x100f1a00u), 13, t8, t7, t6, t5, sp0 - 0x400u, 0x200u, sp0 - 0x200u, 0x200u, rd32(sp0 - 0x500u), rd32(sp0 - 0x4fcu), rd32(sp0 - 0x4f8u), rd32(sp0 - 0x4f4u), rd32(sp0 - 0x4f0u));
            t10 = g->edx;
            if ((int32_t)t9 < 0)
            {
                edx = t10;
            }
            else
            {
    COW_AT(100e83ce)
                wr32(sp0 - 0x504u, sp0 - 0x400u);
                wr32(sp0 - 0x508u, sp0 - 0x200u);
                g->edx = sp0 - 0x200u;
                g->esp = sp0 - 0x500u;
                cow_thiscall_cdecl(g, rd32(rd32(COW_IMG(0x104df770u)) + 0x828u), sp0 - 0x400u, 2, sp0 - 0x200u, sp0 - 0x400u);
                t11 = g->edx;
                edx = t11;
            }
        }
    }
    else
    {
    COW_AT(100e8341)
        t1 = rd32(COW_IMG(0x104df770u)) + rd32(rd32(COW_IMG(0x104df770u)) + 0x82cu) * 0x100u + 0xa90u;
        wr32(sp0 - 0x504u, t1);
        wr32(sp0 - 0x508u, 0xffu);
        wr32(sp0 - 0x50cu, sp0 - 0x500u);
        wr32(sp0 - 0x510u, 3u);
        g->eax = sp0 - 0x500u;
        g->esp = sp0 - 0x500u;
        t2 = cow_cdecl(g, COW_IMG(0x103118b7u), 4, 3u, sp0 - 0x500u, 0xffu, t1);
        wr32(sp0 - 0x514u, sp0 - 0x500u);
        wr32(sp0 - 0x518u, COW_IMG(0x103d3c84u));
        g->edx = rd32(COW_IMG(0x104df770u));
        t3 = rd32(COW_IMG(0x104df770u));
        g->esp = sp0 - 0x510u;
        cow_thiscall_cdecl(g, rd32(t3 + 0x828u), sp0 - 0x500u, 2, COW_IMG(0x103d3c84u), sp0 - 0x500u);
        t4 = g->edx;
        edx = t4;
    }
    COW_AT(100e83ec)
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x5ecu) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
    COW_AT(100e8402)
        wr32(eax + 0x3d4u, 2u);
    }
    else
    {
        eax = rd32(COW_IMG(0x104df770u));
        ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x5ecu);
    COW_AT(100e83fb)
        g->esp = sp0 - 0x500u;
        cow_call_regs(g, COW_IMG(0x100e7ea0u), g->eax, g->ecx, edx, 1, 0);
        t12 = g->edx;
        edx = t12;
    }
    COW_AT(100e840c)
    if (rd32(rd32(COW_IMG(0x104df770u)) + 0x808u) == 0u)
    {
        eax = rd32(COW_IMG(0x104df770u));
        goto L_100e8429;
    }
    eax = rd32(COW_IMG(0x104df770u));
    ecx = rd32(rd32(COW_IMG(0x104df770u)) + 0x808u);
    COW_AT(100e841b)
    g->eax = eax;
    g->esp = sp0 - 0x500u;
    t13 = cow_call_regs(g, COW_IMG(0x100e8160u), g->eax, g->ecx, edx, 1, 0);
    t14 = g->edx;
    g->edx = t14;
    return t13 & 0xffffff00u;
L_100e8429: ;
    COW_AT(100e8429)
    wr32(eax + 0x5f0u, 2u);
    g->edx = edx;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100e8330(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100e8341u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x500u;
        (void)sp0;
        return 1;
    }
    case 0x100e8383u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edx;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0 - 0x500u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x100e8387u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x500u;
        (void)sp0;
        return 1;
    }
    case 0x100e83ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x500u;
        wr32(sp0 - 0x510u, sp0 - 0x400u);
        wr32(sp0 - 0x508u, sp0 - 0x200u);
        (void)sp0;
        return 1;
    }
    case 0x100e83ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x500u;
        (void)sp0;
        return 1;
    }
    case 0x100e83fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x500u;
        (void)sp0;
        return 1;
    }
    case 0x100e8402u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x500u;
        (void)sp0;
        return 1;
    }
    case 0x100e840cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x500u;
        (void)sp0;
        return 1;
    }
    case 0x100e841bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x500u;
        (void)sp0;
        return 1;
    }
    case 0x100e8429u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x500u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100e8330(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100e8330(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
