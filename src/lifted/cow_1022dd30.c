/* f_0x1022dd30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1022dd30(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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

    if ((int32_t)rd32(sp0 + 4u) < 0)
    {
        loc_4 = self;
    }
    else
    {
        edi = rd32(sp0 + 4u);
        if ((int32_t)edi >= 15)
        {
            loc_4 = self;
        }
        else
        {
            g->edx = in_edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10221a30u), self, 0);
            t1 = g->edx;
            wr32(self + 0x6cu, edi);
            t2 = cow_thiscall(g, COW_IMG(0x1022ee80u), COW_IMG(0x10667a90u) + edi * 0x94u, 0);
            g->edx = t2 + 3u;
            cow_stdcall(g, COW_IMG(0x10221900u), 4, 0u, t2 + 3u, 0u, 8u);
            t3 = g->edx;
            t4 = rd32(self + 0x44u);
            wr32(self + 0x1cu, COW_IMG(0x1022eab0u));
            if ((int32_t)t4 <= 0)
            {
                edx = t3;
                ebx = t2;
                loc_4 = t2;
                eax = 0u;
            }
            else
            {
                edx = t3;
                ebx = t2;
                loc_4 = t2;
                eax = rd32(self + 0x20u);
            }
            wr32(eax, 0xffffffffu);
            if ((int32_t)rd32(self + 0x44u) <= 1)
            {
                edi = 0u;
            }
            else
            {
                edi = rd32(self + 0x20u) + 8u;
            }
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t5 = cow_thiscall(g, COW_IMG(0x1022dfa0u), self, 0);
            t6 = g->edx;
            wr32(edi, t5);
            if ((int32_t)rd32(self + 0x44u) <= 2)
            {
                edx = t6;
                eax = 0u;
            }
            else
            {
                edx = t6;
                eax = rd32(self + 0x20u) + 0x10u;
            }
            wr32(eax, 0xfffffffeu);
            wr32(sp0 + 4u, 0u);
            if ((int32_t)ebx <= 0) goto L_1022de23;
            ebx = 0x18u;
            ebp = 3u;
            edi = 0u;
L_1022dde3: ;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t7 = cow_thiscall(g, COW_IMG(0x1022e3a0u), self, 1, edi);
            t8 = g->edx;
            if (t7 != 1u)
            {
                edx = t8;
            }
            else
            {
                edx = t8;
                if ((int32_t)ebp >= 0)
                {
                    if ((int32_t)ebp < (int32_t)rd32(self + 0x44u))
                    {
                        if (ebx + rd32(self + 0x20u) != 0u)
                        {
                            eax = ebx + rd32(self + 0x20u);
                            t9 = rd32(sp0 + 4u);
                            wr32(eax, edi);
                            wr32(sp0 + 4u, t9 + 1u);
                            edx = t9 + 1u;
                            ebx = ebx + 8u;
                            ebp = ebp + 1u;
                        }
                    }
                }
            }
            if ((int32_t)(edi + 1u) < (int32_t)loc_4)
            {
                edi = edi + 1u;
                goto L_1022dde3;
            }
            if (rd32(sp0 + 4u) != 0u) goto L_1022de41;
L_1022de23: ;
            if ((int32_t)rd32(self + 0x44u) <= 3)
            {
                eax = 0u;
            }
            else
            {
                eax = rd32(self + 0x20u) + 0x18u;
            }
            wr32(eax, 0xfffffffbu);
            wr32(sp0 + 4u, 1u);
L_1022de41: ;
            t10 = rd32(sp0 + 4u) + 3u;
            g->eax = t10;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t11 = cow_thiscall(g, COW_IMG(0x10221a80u), self, 2, t10, 0u);
            t12 = g->edx;
            cow_thiscall(g, COW_IMG(0x10221b90u), self, 1, 1u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022dd30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022dd30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
