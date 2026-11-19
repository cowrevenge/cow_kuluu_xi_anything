/* f_0x100f6df0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_100f6df0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f6dfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6dfe;
    case 0x100f6e0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6e0c;
    case 0x100f6e21u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6e21;
    case 0x100f6e29u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6e29;
    case 0x100f6e35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6e35;
    case 0x100f6e3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6e3f;
    case 0x100f6e4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6e4a;
    case 0x100f6e4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6e4e;
    case 0x100f6e5du: ecx = g->ecx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6e5d;
    case 0x100f6e61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6e61;
    case 0x100f6e6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6e6a;
    case 0x100f6e6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6e6c;
    case 0x100f6e7au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6e7a;
    case 0x100f6e8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6e8f;
    case 0x100f6e99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6e99;
    case 0x100f6ea4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6ea4;
    case 0x100f6ea8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6ea8;
    case 0x100f6eb7u: ecx = g->ecx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6eb7;
    case 0x100f6ebbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6ebb;
    case 0x100f6ec1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6ec1;
    case 0x100f6ec8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_100f6ec8;
    default: break;
    }
#endif

    COW_AT(100f6df0)
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    ebx = 0u;
L_100f6dfe: ;
    COW_AT(100f6dfe)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x1030ff73u), 2, ebx, arg5);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_100f6e61;
    }
    COW_AT(100f6e0c)
    if (!(rd32(arg5 + 0x98u) & 1u))
    {
        eax = rd32(arg5 + 0x98u) & 1u;
        ecx = rd32(arg5 + 0x9cu);
        edx = 0u;
        goto L_100f6e61;
    }
    eax = rd32(arg5 + 0x98u) & 1u;
    ecx = rd32(arg5 + 0x9cu);
    COW_AT(100f6e21)
    if ((uint8_t)arg4 != 0u) goto L_100f6e35;
    COW_AT(100f6e29)
    if ((rd32(arg5 + 8u) & 0x10000000u) != 0u)
    {
        eax = rd32(arg5 + 8u) & 0x10000000u;
        edx = 0u;
        goto L_100f6e61;
    }
L_100f6e35: ;
    COW_AT(100f6e35)
    if (arg1 != rd32(arg5))
    {
        eax = arg1;
        edx = rd32(arg5);
        goto L_100f6e61;
    }
    COW_AT(100f6e3f)
    if (arg2 != rd32(arg5 + 4u))
    {
        eax = rd32(arg5 + 4u);
        edx = arg2;
        goto L_100f6e61;
    }
    COW_AT(100f6e4a)
    if ((int32_t)arg3 < 0) goto L_100f6ec8;
    COW_AT(100f6e4e)
    if (arg3 != (ecx >> 0xdu & 0x3fu))
    {
        eax = arg3;
        ecx = ecx >> 0xdu & 0x3fu;
        edx = (uint32_t)((int32_t)arg3 >> 0x1fu);
        goto L_100f6e61;
    }
    ecx = ecx >> 0xdu & 0x3fu;
    COW_AT(100f6e5d)
    if ((uint32_t)((int32_t)arg3 >> 0x1fu) == 0u) goto L_100f6ec8;
    eax = arg3;
    edx = (uint32_t)((int32_t)arg3 >> 0x1fu);
L_100f6e61: ;
    COW_AT(100f6e61)
    if ((int32_t)(ebx + 1u) < 200)
    {
        ebx = ebx + 1u;
        goto L_100f6dfe;
    }
    COW_AT(100f6e6a)
    ebx = 0u;
L_100f6e6c: ;
    COW_AT(100f6e6c)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x1030ff89u), 2, ebx, arg5);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_100f6ebb;
    }
    COW_AT(100f6e7a)
    if (!(rd32(arg5 + 0x98u) & 1u))
    {
        eax = rd32(arg5 + 0x98u) & 1u;
        ecx = rd32(arg5 + 0x9cu);
        edx = 0u;
        goto L_100f6ebb;
    }
    ecx = rd32(arg5 + 0x9cu);
    COW_AT(100f6e8f)
    if (arg1 != rd32(arg5))
    {
        eax = arg1;
        edx = rd32(arg5);
        goto L_100f6ebb;
    }
    COW_AT(100f6e99)
    if (arg2 != rd32(arg5 + 4u))
    {
        eax = rd32(arg5 + 4u);
        edx = arg2;
        goto L_100f6ebb;
    }
    COW_AT(100f6ea4)
    if ((int32_t)arg3 < 0) goto L_100f6ec8;
    COW_AT(100f6ea8)
    if (arg3 != (ecx >> 0xdu & 0x3fu))
    {
        eax = arg3;
        ecx = ecx >> 0xdu & 0x3fu;
        edx = (uint32_t)((int32_t)arg3 >> 0x1fu);
        goto L_100f6ebb;
    }
    ecx = ecx >> 0xdu & 0x3fu;
    COW_AT(100f6eb7)
    if ((uint32_t)((int32_t)arg3 >> 0x1fu) == 0u) goto L_100f6ec8;
    eax = arg3;
    edx = (uint32_t)((int32_t)arg3 >> 0x1fu);
L_100f6ebb: ;
    COW_AT(100f6ebb)
    if ((int32_t)(ebx + 1u) < 100)
    {
        ebx = ebx + 1u;
        goto L_100f6e6c;
    }
    COW_AT(100f6ec1)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
L_100f6ec8: ;
    COW_AT(100f6ec8)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return arg5;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f6df0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f6dfeu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6e0cu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6e21u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6e29u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->edx = 0u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6e35u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6e3fu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6e4au:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6e4eu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6e5du:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg3;
        g->edx = (uint32_t)((int32_t)arg3 >> 0x1fu);
        g->ebp = arg3;
        g->esi = arg5;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f6e61u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6e6au:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6e6cu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6e7au:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6e8fu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6e99u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6ea4u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6ea8u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6eb7u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->eax = arg3;
        g->edx = (uint32_t)((int32_t)arg3 >> 0x1fu);
        g->ebp = arg3;
        g->esi = arg5;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100f6ebbu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg3;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    case 0x100f6ec1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x100f6ec8u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = arg5;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f6df0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f6df0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
