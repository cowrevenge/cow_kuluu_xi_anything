/* f_0x1030541c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1030541c(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u)
    {
        esi = rd32(arg1 + 0x188u);
        if (rd8(arg1 + 0x4au) == 0u)
        {
            t12 = rd32(rd32(arg1 + 0x19cu) + 4u);
            wr32(esi + 4u, t12);
            eax = t12;
            edx = in_edx;
        }
        else
        {
            t7 = rd32(esi + 0xcu);
            wr32(esi + 4u, COW_IMG(0x1030529bu));
            if (t7 != 0u)
            {
                eax = arg1;
                edx = in_edx;
            }
            else
            {
                t8 = rd32(esi + 0x10u);
                t9 = rd32(esi + 8u);
                g->eax = arg1;
                g->edx = in_edx;
                g->esp = sp0 - 8u;
                t10 = cow_thiscall_cdecl(g, rd32(rd32(arg1 + 4u) + 0x1cu), rd32(arg1 + 4u), 5, arg1, t9, 0u, t8, 1u);
                t11 = g->edx;
                wr32(esi + 0xcu, t10);
                eax = t10;
                edx = t11;
            }
        }
    }
    else
    {
        esi = rd32(arg1 + 0x188u);
        if (arg2 == 2u)
        {
            if (rd32(esi + 8u) != 0u)
            {
                eax = arg1;
                edx = in_edx;
            }
            else
            {
                wr32(rd32(arg1) + 0x14u, 4u);
                g->eax = arg1;
                g->edx = in_edx;
                g->esp = sp0 - 8u;
                t5 = cow_thiscall_cdecl(g, rd32(rd32(arg1)), rd32(arg1), 1, arg1);
                t6 = g->edx;
                eax = t5;
                edx = t6;
            }
            wr32(esi + 4u, COW_IMG(0x10305390u));
        }
        else
        {
            if (arg2 == 3u)
            {
                if (rd32(esi + 8u) != 0u)
                {
                    eax = arg1;
                    edx = in_edx;
                }
                else
                {
                    wr32(rd32(arg1) + 0x14u, 4u);
                    g->eax = arg1;
                    g->edx = in_edx;
                    g->esp = sp0 - 8u;
                    t3 = cow_thiscall_cdecl(g, rd32(rd32(arg1)), rd32(arg1), 1, arg1);
                    t4 = g->edx;
                    eax = t3;
                    edx = t4;
                }
                wr32(esi + 4u, COW_IMG(0x10305300u));
            }
            else
            {
                wr32(rd32(arg1) + 0x14u, 4u);
                g->eax = arg1;
                g->edx = in_edx;
                g->esp = sp0 - 8u;
                t1 = cow_thiscall_cdecl(g, rd32(rd32(arg1)), rd32(arg1), 1, arg1);
                t2 = g->edx;
                eax = t1;
                edx = t2;
            }
        }
    }
    wr32(esi + 0x18u, 0u);
    wr32(esi + 0x14u, 0u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1030541c(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1030541c(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
