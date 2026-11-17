/* f_0x10298dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10298dc0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x102984d0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    t4 = cow_stdcall(g, COW_IMG(0x10298b50u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    g->eax = arg2;
    g->edx = t6;
    t7 = cow_cdecl(g, COW_IMG(0x1029c710u), 2, arg1, arg2);
    t8 = g->edx;
    wr32(t1 + 0x28u, t7);
    wr32(t1 + 0x1cu, arg1);
    wr32(t1 + 0x20u, arg1);
    wr32(t1 + 0x24u, 1u);
    wr32(t4 + 0x1cu, t1);
    if (rd8(COW_IMG(0x103bbde0u)) == 0u)
    {
        ebx = t4;
    }
    else
    {
        eax = (t7 & 0xffffff00u) | rd8(COW_IMG(0x103bbde0u));
        edx = t8;
        ebx = t4;
        esi = t1;
        t9 = rd32(esi + 0x28u);
        g->esi = esi;
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t10 = cow_thiscall_cdecl(g, COW_IMG(0x10281850u), t9, 5, arg1, arg1, 1u, t9, 0u);
        wr32(ebx + 0x14u, t10);
    }
    t11 = (rd32(ebx + 0x20u) & 0xffffff00u) | (uint8_t)(rd32(ebx + 0x20u) | 2u);
    wr32(ebx + 0x20u, t11);
    g->esi = in_esi;
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10298dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10298dc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
