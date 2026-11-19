/* f_0x101aa980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101aa980(Guest* g)
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
    cow_frame(g, sp0, 8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101aa989u: eax = g->eax; in_edx = g->edx; goto E_101aa989;
    case 0x101aa993u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101aa993;
    case 0x101aa99eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101aa99e;
    case 0x101aa9a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101aa9a6;
    case 0x101aa9afu: eax = g->eax; in_edx = g->edx; goto E_101aa9af;
    case 0x101aa9b4u: eax = g->eax; edx = g->edx; goto E_101aa9b4;
    case 0x101aa9beu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101aa9be;
    case 0x101aa9c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101aa9c5;
    case 0x101aa9cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101aa9cd;
    case 0x101aa9d6u: eax = g->eax; in_edx = g->edx; goto E_101aa9d6;
    case 0x101aa9dbu: eax = g->eax; edx = g->edx; goto E_101aa9db;
    case 0x101aa9e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101aa9e5;
    case 0x101aa9ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101aa9ec;
    case 0x101aa9f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101aa9f4;
    case 0x101aaa08u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101aaa08;
    case 0x101aaa0du: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101aaa0d;
    case 0x101aaa11u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101aaa11;
    case 0x101aaa1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101aaa1b;
    case 0x101aaa1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101aaa1e;
    default: break;
    }
#endif

    COW_AT(101aa980)
    if (rd32(sp0 + 4u) != 0x32u)
    {
        eax = rd32(sp0 + 4u);
        goto L_101aa9af;
    }
    COW_AT(101aa989)
    wr32(sp0 - 4u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x100e47a0u), 1, sp0 + 4u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(101aa993)
    if ((uint8_t)eax == 0u) goto L_101aaa1e;
    COW_AT(101aa99e)
    if (rd32(sp0 + 4u) == 0u) goto L_101aaa1e;
    eax = rd32(sp0 + 4u);
    COW_AT(101aa9a6)
    t3 = rd32(sp0 + 8u);
    wr32(eax + 4u, t3);
    ecx = t3;
L_101aaa08: ;
    COW_AT(101aaa08)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t11 = cow_stdcall(g, COW_IMG(0x100e4610u), 0);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(101aaa0d)
    if ((uint8_t)eax == 0u)
    {
    COW_AT(101aaa11)
        wr32(sp0 - 4u, COW_IMG(0x1037ab38u));
        g->edx = edx;
        g->esp = sp0 - 4u;
        cow_stdcall(g, COW_IMG(0x10017d30u), 0);
        t14 = g->edx;
        edx = t14;
    COW_AT(101aaa1b)
    }
L_101aaa1e: ;
    COW_AT(101aaa1e)
    g->edx = edx;
    return 1u;
L_101aa9af: ;
    COW_AT(101aa9af)
    if (eax != 0x33u) goto L_101aa9d6;
    COW_AT(101aa9b4)
    wr32(sp0 - 4u, sp0 + 4u);
    g->eax = eax;
    g->edx = sp0 + 4u;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x100e47a0u), 1, sp0 + 4u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(101aa9be)
    if ((uint8_t)eax == 0u) goto L_101aaa1e;
    COW_AT(101aa9c5)
    if (rd32(sp0 + 4u) == 0u) goto L_101aaa1e;
    eax = rd32(sp0 + 4u);
    COW_AT(101aa9cd)
    t6 = rd32(sp0 + 8u);
    wr32(eax + 8u, t6);
    ecx = t6;
    goto L_101aaa08;
L_101aa9d6: ;
    COW_AT(101aa9d6)
    if (eax != 0x35u)
    {
        edx = in_edx;
        goto L_101aaa1e;
    }
    COW_AT(101aa9db)
    wr32(sp0 - 4u, sp0 + 4u);
    g->eax = eax;
    g->edx = sp0 + 4u;
    g->esp = sp0;
    t7 = cow_cdecl(g, COW_IMG(0x100e47a0u), 1, sp0 + 4u);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(101aa9e5)
    if ((uint8_t)eax == 0u) goto L_101aaa1e;
    COW_AT(101aa9ec)
    if (rd32(sp0 + 4u) == 0u) goto L_101aaa1e;
    ecx = rd32(sp0 + 4u);
    COW_AT(101aa9f4)
    t9 = rd8(ecx + 1u);
    t10 = rd8(sp0 + 8u);
    wr8(ecx + 1u, (uint8_t)(((t10 << 3u ^ t9) & 0x18u) ^ t9));
    eax = (eax & 0xffffff00u) | t9;
    edx = (edx & 0xffffff00u) | (((t10 << 3u ^ t9) & 0x18u) ^ t9);
    goto L_101aaa08;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101aa980(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101aa989u:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101aa993u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101aa99eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101aa9a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101aa9afu:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101aa9b4u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101aa9beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101aa9c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101aa9cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101aa9d6u:
    {
        uint32_t eax;
        uint32_t in_edx;
        eax = g->eax;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101aa9dbu:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101aa9e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101aa9ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101aa9f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101aaa08u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101aaa0du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101aaa11u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        wr32(sp0 - 4u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x101aaa1bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101aaa1eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101aa980(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101aa980(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
