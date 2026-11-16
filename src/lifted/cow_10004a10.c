/* f_0x10004a10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10004a10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 288u);

    wr32(sp0 - 0x108u, in_esi);
    if (rd32(COW_IMG(0x10455afcu)) != 1u)
    {
        eax = rd32(COW_IMG(0x10455afcu)) - 1u;
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x10cu, COW_IMG(0x1034f7ecu));
        wr32(sp0 - 0x110u, sp0 - 0x104u);
        g->edx = in_edx;
        g->esp = sp0 - 0xfcu;
        t1 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x104u, COW_IMG(0x1034f7ecu), in_esi, rd32(sp0 - 0x104u), rd32(sp0 - 0x100u));
        t2 = g->edx;
        wr32(sp0 - 0x114u, sp0 - 0x104u);
        g->esp = sp0 - 0x110u;
        t3 = cow_call_regs(g, COW_IMG(0x10004dd0u), g->eax, sp0 - 0x104u, t2, 1, 1, sp0 - 0x104u);
        t4 = g->ecx;
        wr32(sp0 - 0x118u, COW_IMG(0x1034f7fcu));
        wr32(sp0 - 0x11cu, sp0 - 0x104u);
        g->ecx = t4;
        g->edx = sp0 - 0x104u;
        g->esp = sp0 - 0x108u;
        t5 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, sp0 - 0x104u, COW_IMG(0x1034f7fcu), sp0 - 0x104u, sp0 - 0x104u, COW_IMG(0x1034f7ecu));
        t6 = g->ecx;
        t7 = g->edx;
        if (t5 == 0u)
        {
            eax = t5;
            edx = t7;
        }
        else
        {
            ecx = t6;
            edx = t7;
            esi = t5;
            wr32(sp0 - 0x10cu, esi);
            wr32(sp0 - 0x110u, 1u);
            wr32(sp0 - 0x114u, 0x40e38u);
            wr32(sp0 - 0x118u, rd32(COW_IMG(0x104dfd98u)));
            g->ecx = ecx;
            t8 = rd32(COW_IMG(0x104dfd98u));
            g->esp = sp0 - 0x100u;
            cow_call_regs(g, COW_IMG(0x103122d6u), g->eax, g->ecx, edx, 1, 6, t8, 0x40e38u, 1u, esi, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u));
            t9 = g->ecx;
            t10 = g->edx;
            wr32(sp0 - 0x11cu, esi);
            g->esp = sp0 - 0x110u;
            t11 = cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t10, 1, 3, esi, rd32(sp0 - 0x118u), 0x40e38u);
            t12 = g->edx;
            eax = t11;
            edx = t12;
        }
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10004a10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10004a10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
