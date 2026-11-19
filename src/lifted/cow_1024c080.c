/* f_0x1024c080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_1024c080(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg7 = rd32(sp0 + 0x1cu);
    const uint32_t arg8 = rd32(sp0 + 0x20u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1024c08fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1024c08f;
    case 0x1024c095u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1024c095;
    case 0x1024c09fu: eax = g->eax; ecx = g->ecx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1024c09f;
    case 0x1024c0aau: eax = g->eax; ecx = g->ecx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1024c0aa;
    case 0x1024c0f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1024c0f0;
    case 0x1024c100u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1024c100;
    case 0x1024c10au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1024c10a;
    case 0x1024c12cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_1024c12c;
    case 0x1024c13cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_1024c13c;
    case 0x1024c13eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_1024c13e;
    case 0x1024c152u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 4u); goto E_1024c152;
    case 0x1024c164u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1024c164;
    case 0x1024c166u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1024c166;
    case 0x1024c174u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; g->esi = rd32(sp0 - 4u); goto E_1024c174;
    default: break;
    }
#endif

    COW_AT(1024c080)
    if (rd32(COW_IMG(0x106690c4u)) < rd32(COW_IMG(0x106690f0u)))
    {
        eax = rd32(COW_IMG(0x106690c4u));
        ecx = rd32(COW_IMG(0x106690f0u));
    }
    else
    {
        eax = rd32(COW_IMG(0x106690c4u));
        ecx = rd32(COW_IMG(0x106690f0u));
    COW_AT(1024c08f)
        ecx = ecx + 0x2000u;
    }
    COW_AT(1024c095)
    if (arg1 == 7u) goto L_1024c100;
    COW_AT(1024c09f)
    if (ecx <= eax + 0x20u)
    {
        edx = arg1;
        goto L_1024c174;
    }
    COW_AT(1024c0aa)
    wr32(eax, arg1);
    wr32(eax + 4u, arg2);
    wr32(eax + 8u, arg3);
    wr32(eax + 0xcu, arg4);
    wr32(eax + 0x10u, arg5);
    wr32(eax + 0x14u, arg6);
    wr32(eax + 0x18u, arg7);
    wr32(eax + 0x1cu, arg8);
    if (eax + 0x20u < rd32(COW_IMG(0x106690e8u)) + 0x2000u)
    {
        eax = eax + 0x20u;
        ecx = rd32(COW_IMG(0x106690e8u));
        edx = rd32(COW_IMG(0x106690e8u)) + 0x2000u;
        goto L_1024c166;
    }
    ecx = rd32(COW_IMG(0x106690e8u));
    edx = rd32(COW_IMG(0x106690e8u)) + 0x2000u;
    COW_AT(1024c0f0)
    wr32(COW_IMG(0x106690c4u), ecx);
    g->edx = edx;
    return 0u;
L_1024c100: ;
    COW_AT(1024c100)
    if (ecx <= eax + 0x120u)
    {
        edx = eax + 0x120u;
        goto L_1024c174;
    }
    COW_AT(1024c10a)
    wr32(eax, 7u);
    wr32(eax + 4u, arg3);
    wr32(eax + 8u, arg4);
    eax = eax + 0x20u;
    edx = arg2;
    ebx = 8u;
L_1024c12c: ;
    COW_AT(1024c12c)
    if (eax >= rd32(COW_IMG(0x106690e8u)) + 0x2000u)
    {
        ecx = rd32(COW_IMG(0x106690e8u));
    COW_AT(1024c13c)
        eax = ecx;
    }
    COW_AT(1024c13e)
    esi = edx;
    edi = eax;
    ecx = 8u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (ebx != 1u)
    {
        eax = eax + 0x20u;
        edx = edx + 0x20u;
        ebx = ebx - 1u;
        goto L_1024c12c;
    }
    eax = eax + 0x20u;
    COW_AT(1024c152)
    if (eax < rd32(COW_IMG(0x106690e8u)) + 0x2000u)
    {
        ecx = rd32(COW_IMG(0x106690e8u));
        edx = rd32(COW_IMG(0x106690e8u)) + 0x2000u;
    }
    else
    {
        ecx = rd32(COW_IMG(0x106690e8u));
        edx = rd32(COW_IMG(0x106690e8u)) + 0x2000u;
    COW_AT(1024c164)
        eax = ecx;
    }
L_1024c166: ;
    COW_AT(1024c166)
    wr32(COW_IMG(0x106690c4u), eax);
    g->edx = edx;
    return (uint32_t)((int32_t)(eax - ecx) >> 5u);
L_1024c174: ;
    COW_AT(1024c174)
    g->edx = edx;
    return (uint32_t)((int32_t)(eax - rd32(COW_IMG(0x106690e8u))) >> 5u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1024c080(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1024c08fu:
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
    case 0x1024c095u:
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
    case 0x1024c09fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024c0aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        g->esp = sp0 - 4u;
        g->edx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024c0f0u:
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
    case 0x1024c100u:
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
    case 0x1024c10au:
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
    case 0x1024c12cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1024c13cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1024c13eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1024c152u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1024c164u:
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
    case 0x1024c166u:
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
    case 0x1024c174u:
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
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1024c080(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1024c080(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
