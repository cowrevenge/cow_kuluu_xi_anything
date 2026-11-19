/* f_0x1026a660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1026a660(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1026a66fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1026a66f;
    case 0x1026a673u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1026a673;
    case 0x1026a682u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1026a682;
    case 0x1026a68fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1026a68f;
    default: break;
    }
#endif

    COW_AT(1026a660)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103294acu)), 1, 0x48u);   /* ole32.dll!CoTaskMemAlloc */
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        pf = PARITY((uint8_t)t1);
        zf = t1 == 0u;
        sf = (int32_t)t1 < 0;
        goto L_1026a673;
    }
    eax = t1;
    COW_AT(1026a66f)
    g->esi = in_esi;
    return eax;
L_1026a673: ;
    COW_AT(1026a673)
    g->cf = 0u;
    g->pf = pf;
    g->af = 0u;
    g->zf = zf;
    g->sf = sf;
    g->of = 0u;
    g->eax = arg1;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x1026a6a0u), g->eax, g->ecx, edx, 0, 2, esi, arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)t4 >= 0) goto L_1026a68f;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(1026a682)
    g->esp = sp0 - 4u;
    cow_stdcall(g, rd32(COW_IMG(0x103294a8u)), 1, esi);   /* ole32.dll!CoTaskMemFree */
    g->esi = in_esi;
    return 0u;
L_1026a68f: ;
    COW_AT(1026a68f)
    g->esi = in_esi;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1026a660(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1026a66fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026a673u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        g->af = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        (void)sp0;
        return 1;
    }
    case 0x1026a682u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1026a68fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        uint32_t pf;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
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
void cow_adapter_1026a660(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1026a660(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
