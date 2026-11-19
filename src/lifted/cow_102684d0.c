/* f_0x102684d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102684d0(Guest* g)
{
    double d5;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);

    COW_AT(102684d0)
    t1 = rd32(arg1 + 0x38u);
    g->eax = t1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, t1);   /* kernel32.dll!EnterCriticalSection */
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    d5 = fr(g, rdf64(sp0 + 8u) * rdf64(COW_IMG(0x10340ad0u)));
    fpush(g, d5);
    t6 = cow_call_regs(g, COW_IMG(0x10311c6cu), t2, g->ecx, g->edx, 1, 0);
    t7 = g->edx;
    wr32(arg1 + 0x28u, t6);
    wr32(arg1 + 0x2cu, t7);
    t8 = rd32(arg1 + 0x38u);
    t9 = cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, t8);   /* kernel32.dll!LeaveCriticalSection */
    g->edx = rd32(arg1);
    t10 = rd32(arg1);
    t11 = cow_thiscall(g, rd32(t10 + 0x4cu), arg1, 0);
    t12 = g->edx;
    g->esi = in_esi;
    g->edx = t12;
    return t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102684d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102684d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
