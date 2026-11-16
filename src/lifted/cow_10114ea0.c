/* f_0x10114ea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10114ea0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x14u, in_esi);
    if (arg1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if (rd32(COW_IMG(0x104e1708u)) == 0u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            g->edx = in_edx;
            g->esp = sp0 - 0x14u;
            t1 = cow_thiscall(g, COW_IMG(0x100dbe10u), self, 0);
            t2 = g->ecx;
            t3 = g->edx;
            wr32(sp0 - 0x18u, t1);
            wr32(sp0 - 0x1cu, arg1);
            g->ecx = t2;
            g->edx = t3;
            cow_cdecl(g, COW_IMG(0x1010feb0u), 2, arg1, t1);
            t4 = g->ecx;
            t5 = g->edx;
            ecx = t4;
            edx = t5;
        }
        if (rd32(COW_IMG(0x104e1b6cu)) == 0u)
        {
            eax = rd32(COW_IMG(0x104e1b6cu));
        }
        else
        {
            wr32(sp0 - 0xcu, 0u);
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 0x10u, 0u);
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t6 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
            t7 = g->edx;
            wr32(sp0 - 0x10u, t6);
            wr32(sp0 - 0x18u, sp0 - 0x10u);
            g->eax = sp0 - 0x10u;
            t8 = cow_fastcall(g, COW_IMG(0x10114250u), rd32(COW_IMG(0x104e1b6cu)), t7, 1, sp0 - 0x10u);
            t9 = g->edx;
            eax = t8;
            edx = t9;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10114ea0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10114ea0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
