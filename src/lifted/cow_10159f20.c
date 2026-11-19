/* f_0x10159f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10159f20(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10159f28u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; cf = g->cf; zf = g->zf; goto E_10159f28;
    case 0x10159f3au: eax = g->eax; edx = g->edx; in_ebx = g->ebx; cf = g->cf; zf = g->zf; goto E_10159f3a;
    case 0x10159f3fu: eax = g->eax; edx = g->edx; in_ebx = g->ebx; cf = g->cf; zf = g->zf; goto E_10159f3f;
    case 0x10159f44u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; cf = g->cf; zf = g->zf; goto E_10159f44;
    case 0x10159f4bu: eax = g->eax; edx = g->edx; in_ebx = g->ebx; cf = g->cf; zf = g->zf; goto E_10159f4b;
    case 0x10159f4eu: eax = g->eax; edx = g->edx; in_ebx = g->ebx; cf = g->cf; zf = g->zf; goto E_10159f4e;
    case 0x10159f50u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; cf = g->cf; zf = g->zf; goto E_10159f50;
    case 0x10159f57u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; cf = g->cf; zf = g->zf; goto E_10159f57;
    case 0x10159f67u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; cf = g->cf; zf = g->zf; goto E_10159f67;
    case 0x10159f77u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; cf = g->cf; zf = g->zf; goto E_10159f77;
    case 0x10159f86u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; cf = g->cf; zf = g->zf; goto E_10159f86;
    case 0x10159f95u: eax = g->eax; edx = g->edx; in_ebx = g->ebx; cf = g->cf; zf = g->zf; goto E_10159f95;
    default: break;
    }
#endif

    COW_AT(10159f20)
    if (arg2 == 0u) goto L_10159f95;
    COW_AT(10159f28)
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = rd32(COW_IMG(0x10456a28u));
        goto L_10159f4b;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = rd32(COW_IMG(0x10456a28u));
    COW_AT(10159f3a)
    if (eax == 2u) goto L_10159f44;
    COW_AT(10159f3f)
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_10159f4e;
    }
L_10159f44: ;
    COW_AT(10159f44)
    eax = 1u;
L_10159f50: ;
    COW_AT(10159f50)
    t1 = rd32(COW_IMG(0x10159f98u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10159f57u: goto L_10159f57;
    case 0x10159f67u: goto L_10159f67;
    case 0x10159f77u: goto L_10159f77;
    case 0x10159f86u: goto L_10159f86;
    default: rt_fatal(g, COW_IMG(0x10159f50u), "switch");
    }
    return;
L_10159f4b: ;
    COW_AT(10159f4b)
    cf = eax < 3u;
    zf = eax == 3u;
L_10159f4e: ;
    COW_AT(10159f4e)
    if (!cf && !zf) goto L_10159f95;
    goto L_10159f50;
L_10159f57: ;
    COW_AT(10159f57)
    g->eax = rd32(arg2);
    g->edx = edx;
    t8 = rd32(arg2);
    g->esp = sp0;
    t9 = cow_thiscall(g, rd32(t8 + 4u), arg2, 0);
    t10 = g->edx;
    cow_thiscall(g, COW_IMG(0x1018d430u), arg1, 1, t9);
    g->ebx = in_ebx;
    return;
L_10159f67: ;
    COW_AT(10159f67)
    g->eax = eax;
    g->edx = rd32(arg2);
    t5 = rd32(arg2);
    g->esp = sp0;
    t6 = cow_thiscall(g, rd32(t5 + 0x18u), arg2, 0);
    t7 = g->edx;
    cow_thiscall(g, COW_IMG(0x1018d430u), arg1, 1, t6);
    g->ebx = in_ebx;
    return;
L_10159f77: ;
    COW_AT(10159f77)
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(arg2) + 0x20u), arg2, 3, arg1, 0xffffffffu, 0u);
    g->ebx = in_ebx;
    return;
L_10159f86: ;
    COW_AT(10159f86)
    g->eax = rd32(arg2);
    g->edx = edx;
    t2 = rd32(arg2);
    g->esp = sp0;
    t3 = cow_thiscall(g, rd32(t2 + 0x1cu), arg2, 0);
    t4 = g->edx;
    cow_thiscall(g, COW_IMG(0x1018d430u), arg1, 1, t3);
L_10159f95: ;
    COW_AT(10159f95)
    g->ebx = in_ebx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10159f20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10159f28u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10159f3au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10159f3fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10159f44u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10159f4bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10159f4eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10159f50u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10159f57u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10159f67u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10159f77u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10159f86u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0;
        g->ecx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10159f95u:
    {
        uint32_t cf;
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t zf;
        eax = g->eax;
        edx = g->edx;
        in_ebx = g->ebx;
        cf = g->cf;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10159f20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10159f20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
