/* f_0x1000b3f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
uint32_t cow_fn_1000b3f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x100397a0u), sp0 - 0x10u, 1, arg1);
    t1 = g->edx;
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x1003ac80u), rd32(COW_IMG(0x1047b970u)), 1, sp0 - 0x10u);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
    }
    else
    {
        eax = t2;
        if (rd32(eax + 0x40u) == 0u)
        {
            eax = rd32(eax + 0x44u);
        }
        else
        {
            ecx = rd32(eax + 0x40u);
            eax = ecx;
        }
        wr32(sp0 - 0x18u, arg7);
        wr32(sp0 - 0x1cu, arg6);
        wr32(sp0 - 0x20u, arg5);
        wr32(sp0 - 0x24u, arg4);
        wr32(sp0 - 0x28u, arg3);
        wr32(sp0 - 0x2cu, arg2);
        wr32(sp0 - 0x30u, eax);
        g->edx = arg3;
        g->esp = sp0 - 0x14u;
        t4 = cow_call_regs(g, COW_IMG(0x1000b460u), eax, self, g->edx, 0, 7, eax, arg2, arg3, arg4, arg5, arg6, arg7);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000b3f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000b3f0(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
