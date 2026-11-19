/* f_0x10015fc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=5 */
uint32_t cow_fn_10015fc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 168u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10015ff1u: eax = g->eax; ecx = g->ecx; in_edi = g->edi; zf = g->zf; goto E_10015ff1;
    case 0x10016000u: eax = g->eax; ecx = g->ecx; in_edi = g->edi; zf = g->zf; goto E_10016000;
    case 0x10016009u: eax = g->eax; ecx = g->ecx; in_edi = g->edi; zf = g->zf; goto E_10016009;
    case 0x1001600fu: eax = g->eax; ecx = g->ecx; in_edi = g->edi; zf = g->zf; goto E_1001600f;
    case 0x1001601eu: ecx = g->ecx; in_edi = g->edi; zf = g->zf; goto E_1001601e;
    case 0x10016027u: eax = g->eax; ecx = g->ecx; in_edi = g->edi; zf = g->zf; goto E_10016027;
    case 0x1001602cu: eax = g->eax; ecx = g->ecx; in_edi = g->edi; zf = g->zf; goto E_1001602c;
    case 0x1001603bu: eax = g->eax; ecx = g->ecx; in_edi = g->edi; zf = g->zf; goto E_1001603b;
    case 0x10016044u: eax = g->eax; ecx = g->ecx; in_edi = g->edi; zf = g->zf; goto E_10016044;
    case 0x10016046u: eax = g->eax; ecx = g->ecx; in_edi = g->edi; zf = g->zf; goto E_10016046;
    case 0x10016055u: eax = g->eax; ecx = g->ecx; in_edi = g->edi; zf = g->zf; goto E_10016055;
    case 0x1001605eu: eax = g->eax; in_edi = g->edi; zf = g->zf; goto E_1001605e;
    case 0x10016060u: eax = g->eax; in_edi = g->edi; zf = g->zf; goto E_10016060;
    case 0x1001609cu: eax = g->eax; ecx = g->ecx; in_edi = g->edi; zf = g->zf; goto E_1001609c;
    default: break;
    }
#endif

    COW_AT(10015fc0)
    wr32(sp0 - 0x9cu, in_edi);
    edi = sp0 - 0x94u;
    eax = 0u;
    ecx = 0x25u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x94u, 0x94u);
    wr32(sp0 - 0xa0u, sp0 - 0x94u);
    g->esp = sp0 - 0x9cu;
    cow_stdcall(g, rd32(COW_IMG(0x103291a8u)), 1, sp0 - 0x94u);   /* kernel32.dll!GetVersionExA */
    if (rd32(sp0 - 0x84u) != 1u)
    {
        eax = rd32(sp0 - 0x84u);
        goto L_10016027;
    }
    COW_AT(10015ff1)
    if (rd32(sp0 - 0x90u) <= arg1)
    {
        eax = rd32(sp0 - 0x90u);
        zf = rd32(sp0 - 0x90u) == arg1;
        goto L_10016009;
    }
    eax = rd32(sp0 - 0x90u);
    COW_AT(10016000)
    g->edi = in_edi;
    return (eax & 0xffffff00u) | 1u;
L_10016009: ;
    COW_AT(10016009)
    if (!zf) goto L_1001609c;
    COW_AT(1001600f)
    if (rd32(sp0 - 0x8cu) < arg2)
    {
        eax = arg2;
        goto L_1001609c;
    }
    COW_AT(1001601e)
    g->edi = in_edi;
    return (arg2 & 0xffffff00u) | 1u;
L_10016027: ;
    COW_AT(10016027)
    if (eax != 2u) goto L_1001609c;
    COW_AT(1001602c)
    if (rd32(sp0 - 0x90u) <= arg3)
    {
        eax = rd32(sp0 - 0x90u);
        zf = rd32(sp0 - 0x90u) == arg3;
        goto L_10016044;
    }
    eax = rd32(sp0 - 0x90u);
    COW_AT(1001603b)
    g->edi = in_edi;
    return (eax & 0xffffff00u) | 1u;
L_10016044: ;
    COW_AT(10016044)
    if (!zf) goto L_1001609c;
    COW_AT(10016046)
    if (rd32(sp0 - 0x8cu) <= arg4)
    {
        eax = rd32(sp0 - 0x8cu);
        zf = rd32(sp0 - 0x8cu) == arg4;
        goto L_1001605e;
    }
    eax = rd32(sp0 - 0x8cu);
    COW_AT(10016055)
    g->edi = in_edi;
    return (eax & 0xffffff00u) | 1u;
L_1001605e: ;
    COW_AT(1001605e)
    if (!zf) goto L_1001609c;
    COW_AT(10016060)
    wr32(sp0 - 0x9cu, sp0 - 0x98u);
    wr32(sp0 - 0xa0u, COW_IMG(0x1035069cu));
    wr32(sp0 - 0xa4u, sp0 - 0x80u);
    wr32(sp0 - 0x98u, 0u);
    g->eax = sp0 - 0x80u;
    g->esp = sp0 - 0x98u;
    t1 = cow_cdecl(g, COW_IMG(0x10313683u), 3, sp0 - 0x80u, COW_IMG(0x1035069cu), sp0 - 0x98u);
    g->edi = in_edi;
    return -(0u < (uint16_t)arg5) + 1u;
L_1001609c: ;
    COW_AT(1001609c)
    g->edi = in_edi;
    return eax & 0xffffff00u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10015fc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10015ff1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xa0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x10016000u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xa0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x10016009u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xa0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x1001600fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xa0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x1001601eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t zf;
        ecx = g->ecx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->eax = arg2;
        wr32(sp0 - 0xa0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x10016027u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xa0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x1001602cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xa0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x1001603bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xa0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x10016044u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xa0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x10016046u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xa0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x10016055u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xa0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x1001605eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ecx = arg4;
        wr32(sp0 - 0xa0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x10016060u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        g->ecx = arg4;
        wr32(sp0 - 0xa0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    case 0x1001609cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xa0u, sp0 - 0x94u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10015fc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10015fc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
