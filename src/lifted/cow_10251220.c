/* f_0x10251220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10251220(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025122du: esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1025122d;
    case 0x10251236u: eax = g->eax; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10251236;
    case 0x10251242u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10251242;
    case 0x1025125au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1025125a;
    case 0x10251269u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10251269;
    case 0x10251274u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10251274;
    case 0x1025127eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1025127e;
    case 0x10251284u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10251284;
    case 0x1025128bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1025128b;
    case 0x10251299u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10251299;
    case 0x102512a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102512a5;
    case 0x102512b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102512b3;
    case 0x102512b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102512b6;
    case 0x102512bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_102512bc;
    case 0x102512c0u: ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102512c0;
    default: break;
    }
#endif

    COW_AT(10251220)
    wr32(sp0 - 4u, in_esi);
    if (rd32(sp0 + 4u) == 0u) goto L_102512c0;
    esi = rd32(sp0 + 4u);
    COW_AT(1025122d)
    if ((rd8(esi) & 0x10u) == 0u) goto L_102512c0;
    COW_AT(10251236)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, sp0 + 4u);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1026f510u), 2, sp0 + 4u, 0u);
    COW_AT(10251242)
    if ((rd32(rd32(esi + 0xcu) * 0xc0u + rd32(sp0 + 4u)) & 2u) == 0u)
    {
        eax = rd32(rd32(esi + 0xcu) * 0xc0u + rd32(sp0 + 4u));
        edx = rd32(sp0 + 4u);
        esi = rd32(esi + 0xcu) * 0xc0u + rd32(sp0 + 4u);
    COW_AT(1025125a)
        t1 = rd32(sp0 + 8u);
        wr32(sp0 - 8u, t1);
        wr32(sp0 - 0xcu, esi);
        t2 = (eax & 0xffffff00u) | (uint8_t)(eax | 2u);
        wr32(esi, t2);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x1027dd90u), g->eax, t1, edx, 1, 1, esi);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
    COW_AT(10251269)
        if (rd32(sp0 + 0xcu) == 0u)
        {
    COW_AT(10251274)
            if (rd32(esi + 0xbcu) != 0u)
            {
                eax = rd32(esi + 0xbcu);
    COW_AT(1025127e)
                wr32(sp0 - 8u, eax);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 4u;
                t5 = cow_cdecl(g, COW_IMG(0x102857f0u), 1, eax);
                t6 = g->ecx;
                eax = t5;
                ecx = t6;
    COW_AT(10251284)
                if ((uint8_t)eax == 0u)
                {
    COW_AT(1025128b)
                    wr32(sp0 - 8u, 1u);
                    t7 = rd32(esi + 0xbcu);
                    wr32(sp0 - 0xcu, t7);
                    g->ecx = ecx;
                    g->edx = t7;
                    g->esp = sp0 - 4u;
                    cow_call_regs(g, COW_IMG(0x10285800u), eax, g->ecx, g->edx, 1, 2, t7, 1u);
                    t8 = g->ecx;
                    t9 = g->edx;
                    ecx = t8;
                    edx = t9;
    COW_AT(10251299)
                    t10 = rd32(esi + 0xbcu);
                    wr32(sp0 - 0x10u, t10);
                    g->eax = t10;
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    t11 = cow_cdecl(g, COW_IMG(0x10285810u), 1, t10);
                    t12 = g->edx;
                    eax = t11;
                    edx = t12;
    COW_AT(102512a5)
                    wr32(sp0 - 0x14u, 0u);
                    t13 = rd32(esi + 0xbcu);
                    wr32(sp0 - 0x18u, t13);
                    g->esp = sp0 - 0x10u;
                    cow_call_regs(g, COW_IMG(0x10285800u), eax, g->ecx, g->edx, 1, 2, t13, 0u);
    COW_AT(102512b3)
                }
            }
        }
    COW_AT(102512b6)
        t14 = (rd32(esi) & 0xffffff00u) | (rd32(esi) & 0xfdu);
        wr32(esi, t14);
    }
    COW_AT(102512bc)
    g->esi = rd32(sp0 - 4u);
    return 0u;
L_102512c0: ;
    COW_AT(102512c0)
    g->esi = in_esi;
    return 0xffffffffu;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10251220(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025122du:
    {
        uint32_t esi;
        uint32_t in_esi;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10251236u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10251242u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1025125au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10251269u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10251274u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1025127eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10251284u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1025128bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10251299u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102512a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x102512b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x102512b6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102512bcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102512c0u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
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
void cow_adapter_10251220(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10251220(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
