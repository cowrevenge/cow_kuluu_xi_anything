/* f_0x10298e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10298e30(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x102984d0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = cow_stdcall(g, COW_IMG(0x10298b50u), 0);
    g->eax = arg2;
    g->edx = arg3;
    t5 = cow_cdecl(g, COW_IMG(0x1029c280u), 5, arg1, arg2, arg3, arg4, arg5);
    t6 = g->edx;
    wr32(t1 + 0x28u, t5);
    wr32(t1 + 0x1cu, arg1);
    wr32(t1 + 0x20u, arg1);
    wr32(t1 + 0x24u, 4u);
    wr32(t4 + 0x1cu, t1);
    if (rd8(COW_IMG(0x103bbde0u)) == 0u)
    {
        ebx = t4;
    }
    else
    {
        eax = (t5 & 0xffffff00u) | rd8(COW_IMG(0x103bbde0u));
        edx = t6;
        ebx = t4;
        esi = t1;
        t7 = rd32(esi + 0x28u);
        g->esi = esi;
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t8 = cow_thiscall_cdecl(g, COW_IMG(0x10281850u), t7, 5, arg1, arg1, 4u, t7, 0u);
        wr32(ebx + 0x14u, t8);
    }
    t9 = (rd32(ebx + 0x20u) & 0xffffff00u) | (uint8_t)(rd32(ebx + 0x20u) | 4u);
    wr32(ebx + 0x20u, t9);
    g->esi = in_esi;
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10298e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10298e30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
