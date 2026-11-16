/* f_0x10200080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10200080(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 180u);

    wr32(sp0 - 0x84u, in_esi);
    if (rd8(COW_IMG(0x10663ac8u)) == 0u) goto L_102000a9;
    wr32(sp0 - 0x88u, 0x7au);
    g->esp = sp0 - 0x84u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x7au);
    return;
L_102000a9: ;
    wr32(self + 0x1e4u, arg2);
    wr32(self + 0x1e0u, arg1);
    wr32(sp0 - 0x88u, 0x7fu);
    wr32(sp0 - 0x8cu, sp0 - 0x80u);
    wr32(sp0 - 0x90u, 0xau);
    wr16(self + 0x14u, 8u);
    wr32(self + 0x1d0u, arg3);
    wr32(self + 0x1d4u, arg4);
    g->esp = sp0 - 0x84u;
    cow_cdecl(g, COW_IMG(0x1031120eu), 3, 0xau, sp0 - 0x80u, 0x7fu);
    wr32(sp0 - 0x94u, 0x16u);
    wr32(sp0 - 0x98u, COW_IMG(0x101ff920u));
    wr32(sp0 - 0x9cu, self + 0x53u);
    wr32(sp0 - 0xa0u, sp0 - 0x80u);
    t1 = rd32(self + 0x1d4u);
    wr32(sp0 - 0xa4u, t1);
    t2 = rd32(self + 0x1d0u);
    wr32(sp0 - 0xa8u, t2);
    t3 = rd32(self + 0x1e4u);
    wr32(sp0 - 0xacu, t3);
    t4 = rd32(self + 0x1e0u);
    wr32(sp0 - 0xb0u, t4);
    g->edx = t2;
    g->esp = sp0 - 0xacu;
    t5 = cow_cdecl(g, COW_IMG(0x100f72b0u), 1, t4);
    t6 = g->edx;
    if (t5 == 0u)
    {
        edx = t6;
        if (rd32(COW_IMG(0x105781f8u)) != 0u)
        {
            eax = rd32(COW_IMG(0x105781f8u));
            wr32(sp0 - 0x88u, 0x10u);
            g->esp = sp0 - 0x84u;
            cow_thiscall(g, COW_IMG(0x10221270u), eax + 0x20u, 1, 0x10u);
        }
        wr8(COW_IMG(0x10663ac8u), 1u);
    }
    g->esi = rd32(sp0 - 0x84u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10200080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10200080(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
