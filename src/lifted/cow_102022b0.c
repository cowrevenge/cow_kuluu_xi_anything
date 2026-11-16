/* f_0x102022b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102022b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x103852acu));
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t3 = g->edx;
    g->edx = t3;
    t4 = cow_stdcall(g, COW_IMG(0x102034c0u), 2, 0u, 0u);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x101505a0u), rd32(COW_IMG(0x10578478u)), 5, t2, t4, t1, 0xe0d04040u, 0xe0d0d040u);
    t7 = g->edx;
    g->eax = arg2;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10202350u), self, 3, arg1, arg2, t6);
    t9 = g->ecx;
    t10 = g->edx;
    t11 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 7u);
    if ((uint8_t)t11 == 0u)
    {
        eax = t11;
        ebx = t6;
        edi = t4;
        if (rd8(rd32(COW_IMG(0x1057876cu)) + 0x59u) != 0u)
        {
            if (ebx != 0xe0d04040u)
            {
                if (edi != 0u)
                {
                    t12 = ((rd32(edi + 0x88u) & 0xffff00ffu) | (rd32(edi + 0x88u) >> 8u & 0xf9u) << 8u) ^ 0x600u;
                    wr32(edi + 0x88u, t12);
                }
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102022b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102022b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
