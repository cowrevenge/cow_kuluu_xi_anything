/* f_0x102f492b - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102f492b(Guest* g)
{
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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

    if (rd32(self + 0x60u) == 0u) goto L_102f493b;
    return 0x8876086cu;
L_102f493b: ;
    if (rd32(self + 0x64u) == 0u) goto L_102f494a;
    if (rd32(self + 0x68u) != 0u)
    {
        edx = in_edx;
        goto L_102f4986;
    }
L_102f494a: ;
    edx = in_edx;
    ebx = 0u;
L_102f494d: ;
    t1 = rd32(self + 4u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 0xd0u), rd32(rd32(self + 4u)), 1, t1);
    t2 = g->edx;
    t3 = rd32(self + 4u);
    cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 0xc8u), rd32(rd32(self + 4u)), 3, t3, 7u, 0u);
    if (ebx == 0u)
    {
        ecx = self + 0x64u;
    }
    else
    {
        ecx = self + 0x68u;
    }
    t4 = rd32(self + 4u);
    g->edx = rd32(rd32(self + 4u));
    t5 = rd32(rd32(self + 4u));
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(t5 + 0xd4u), ecx, 2, t4, ecx);
    t6 = g->edx;
    if (ebx + 1u < 2u)
    {
        edx = t6;
        ebx = ebx + 1u;
        goto L_102f494d;
    }
    edx = t6;
L_102f4986: ;
    t7 = rd32(self + 0xcu);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0x10u), rd32(rd32(self + 0xcu)), 1, t7);
    t8 = g->edx;
    t9 = rd32(self + 0x64u);
    t10 = rd32(self + 4u);
    g->edx = t8;
    cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 0xdcu), rd32(rd32(self + 4u)), 2, t10, t9);
    t11 = g->edx;
    t12 = rd32(self + 0x68u);
    t13 = rd32(self + 4u);
    cow_thiscall(g, rd32(rd32(rd32(self + 4u)) + 0xd8u), rd32(rd32(self + 4u)), 2, t13, t12);
    wr32(self + 0x60u, 1u);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f492b(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f492b(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
