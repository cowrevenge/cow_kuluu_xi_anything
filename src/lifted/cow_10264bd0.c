/* f_0x10264bd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10264bd0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10264c27u: ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10264c27;
    case 0x10264c3eu: self = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10264c3e;
    case 0x10264c4du: ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10264c4d;
    case 0x10264c4fu: self = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10264c4f;
    default: break;
    }
#endif

    COW_AT(10264bd0)
    g->eax = arg2;
    g->esp = sp0 - 8u;
    t1 = cow_fastcall(g, COW_IMG(0x102659d0u), self, in_edx, 2, arg1, arg2);
    t2 = g->ecx;
    g->ecx = t2;
    g->edx = self + 0x10u;
    cow_stdcall(g, rd32(COW_IMG(0x10329184u)), 1, self + 0x10u);   /* kernel32.dll!InitializeCriticalSection */
    t3 = g->ecx;
    t4 = g->edx;
    wr32(self + 0x28u, 0u);
    wr32(self + 0x2cu, 0u);
    wr32(self + 0x5cu, arg5);
    wr32(self + 0x30u, 0u);
    wr32(self + 0x34u, 0u);
    wr32(self + 0x38u, 0u);
    wr32(self + 0x3cu, 0u);
    wr32(self + 0x40u, 0u);
    wr32(self + 0x44u, 0u);
    wr32(self + 0x48u, 0u);
    wr32(self + 0x4cu, 0u);
    wr32(self + 0x50u, 0u);
    wr32(self + 0x54u, 0u);
    wr32(self + 0x58u, 0u);
    if (arg4 == 0u) goto L_10264c4d;
    ecx = t3;
    edx = t4;
    COW_AT(10264c27)
    g->eax = arg4;
    g->esp = sp0 - 8u;
    t5 = cow_stdcall(g, rd32(COW_IMG(0x103291d0u)), 4, 0u, 0u, 0x7fffffffu, 0u);   /* kernel32.dll!CreateSemaphoreA */
    wr32(self + 0x30u, t5);
    if (t5 != 0u) goto L_10264c4f;
    COW_AT(10264c3e)
    wr32(arg3, 0x8007000eu);
    g->esi = in_esi;
    g->edi = in_edi;
    return self;
L_10264c4d: ;
    COW_AT(10264c4d)
L_10264c4f: ;
    COW_AT(10264c4f)
    g->esi = in_esi;
    g->edi = in_edi;
    return self;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10264bd0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10264c27u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg4;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10264c3eu:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        self = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10264c4du:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10264c4fu:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        self = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10264bd0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10264bd0(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
