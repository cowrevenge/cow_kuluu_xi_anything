/* f_0x102f5d6e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102f5d6e(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->esi = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x102f5b66u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->ebx = arg1;
    cow_fastcall(g, COW_IMG(0x102f5cdcu), t2, t3, 0);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    cow_thiscall_cdecl(g, rd32(rd32(arg1 + 0x194u)), t4, 1, arg1);
    t6 = g->ecx;
    t7 = g->edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, rd32(rd32(arg1 + 0x184u)), t6, 1, arg1);
    t8 = rd32(rd32(arg1 + 0x184u) + 4u);
    wr32(rd32(arg1 + 0x18cu), t8);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f5d6e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f5d6e(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
