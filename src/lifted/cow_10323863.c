/* f_0x10323863 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10323863(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x20u, 0x40u);
    t1 = (self & 0xffff0000u) | rd16(arg1 + 0xau);
    t2 = rd32(arg1 + 6u);
    wr32(sp0 - 0x14u, t2);
    t3 = rd16(arg1) << 0x10u;
    wr32(sp0 - 0xcu, t3);
    wr32(sp0 - 0x24u, sp0 - 0x14u);
    t4 = rd32(arg1 + 2u);
    wr32(sp0 - 0x10u, t4);
    g->esp = sp0 - 0x14u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10323570u), t4, 4, sp0 - 0x14u, 0x40u, in_edi, in_esi);
    if (t5 == 0u)
    {
        esi = t1 & 0x7fffu;
        edi = t1 & 0x8000u;
        ecx = rd32(sp0 - 0x14u);
    }
    else
    {
        esi = t1 & 0x7fffu;
        edi = t1 & 0x8000u;
        ecx = 0x80000000u;
        esi = esi + 1u;
    }
    if ((uint16_t)esi != 0x7fffu)
    {
        loc_8 = 0u;
    }
    else
    {
        wr32(sp0 - 8u, 1u);
        loc_8 = 1u;
    }
    wr32(arg2 + 4u, ecx);
    t6 = rd32(sp0 - 0x10u);
    wr16(arg2 + 8u, (uint16_t)(edi | esi));
    wr32(arg2, t6);
    return loc_8;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10323863(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10323863(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
