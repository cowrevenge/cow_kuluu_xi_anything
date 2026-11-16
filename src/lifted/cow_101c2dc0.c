/* f_0x101c2dc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101c2dc0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 288u);

    wr32(sp0 - 0x104u, in_esi);
    wr32(sp0 - 0x108u, in_edi);
    wr32(sp0 - 0x10cu, arg1);
    wr32(sp0 - 0x110u, self + 0x1f4u);
    if (rd8(self + 0xd0u) == 0u)
    {
        wr32(sp0 - 0x114u, COW_IMG(0x1037cbc8u));
        wr32(sp0 - 0x118u, sp0 - 0x100u);
        g->edx = self + 0x1f4u;
        g->esp = sp0 - 0x104u;
        t3 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cbc8u), self + 0x1f4u, arg1, in_edi);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    else
    {
        wr32(sp0 - 0x114u, self + 0xd0u);
        wr32(sp0 - 0x118u, COW_IMG(0x1037cbd0u));
        wr32(sp0 - 0x11cu, sp0 - 0x100u);
        g->edx = self + 0x1f4u;
        g->esp = sp0 - 0x108u;
        t1 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cbd0u), self + 0xd0u, self + 0x1f4u, arg1);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    g->esp = sp0 - 0x108u;
    cow_fastcall(g, COW_IMG(0x101c33e0u), self, edx, 0);
    t5 = g->edx;
    wr32(sp0 - 0x10cu, sp0 - 0x100u);
    g->edx = t5;
    t6 = cow_stdcall(g, COW_IMG(0x101c4080u), 1, sp0 - 0x100u);
    t7 = g->edx;
    cow_fastcall(g, COW_IMG(0x101c33f0u), self, t7, 0);
    t8 = g->edx;
    if ((int32_t)t6 >= 0)
    {
        edx = t8;
        goto L_101c2e3d;
    }
    edi = t6;
    g->esi = rd32(sp0 - 0x104u);
    g->edi = rd32(sp0 - 0x108u);
    return edi;
L_101c2e3d: ;
    wr32(sp0 - 0x10cu, self + 0x2f4u);
    g->edx = edx;
    g->esp = sp0 - 0x108u;
    cow_stdcall(g, COW_IMG(0x101c4080u), 1, self + 0x2f4u);
    t9 = g->edx;
    wr32(sp0 - 0x10cu, self + 0x2f4u);
    cow_fastcall(g, COW_IMG(0x101c3fe0u), self, t9, 1, self + 0x2f4u);
    g->esi = rd32(sp0 - 0x104u);
    g->edi = rd32(sp0 - 0x108u);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c2dc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c2dc0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
