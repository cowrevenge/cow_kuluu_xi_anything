/* f_0x102307f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102307f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int32_t)arg1 >= 0)
    {
        if ((int32_t)arg1 < 11)
        {
            g->edx = in_edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10221a30u), self, 0);
            t1 = g->edx;
            wr32(self + 0x6cu, arg1);
            g->eax = arg1 * 9u;
            g->edx = t1;
            t2 = cow_thiscall(g, COW_IMG(0x1022ee80u), COW_IMG(0x10668380u) + arg1 * 0x94u, 0);
            t3 = g->edx;
            g->edx = t3;
            t4 = cow_thiscall(g, COW_IMG(0x10221900u), self, 4, 0u, t2, 0u, 8u);
            t5 = g->edx;
            wr32(self + 0x1cu, COW_IMG(0x10233b00u));
            if ((int32_t)t2 <= 0)
            {
                eax = t4;
                edx = t5;
                ebx = 0u;
                goto L_10230881;
            }
            edx = t5;
            ebx = 0u;
            ebp = t2;
            edi = 0u;
L_10230844: ;
            if (rd32(self + 0x68u) == 0u)
            {
                eax = rd32(self + 0x68u);
                goto L_10230859;
            }
            eax = rd32(self + 0x68u);
            if (eax != 1u)
            {
                eax = eax - 1u;
                goto L_1023087c;
            }
            eax = eax - 1u;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t6 = cow_thiscall(g, COW_IMG(0x10231f50u), self, 1, edi);
            t7 = g->edx;
            eax = t6;
            edx = t7;
L_10230861: ;
            if (eax == 1u)
            {
                if ((int32_t)ebx >= 0)
                {
                    if ((int32_t)ebx < (int32_t)rd32(self + 0x44u))
                    {
                        if (ebx * 8u + rd32(self + 0x20u) == 0u)
                        {
                            eax = ebx * 8u + rd32(self + 0x20u);
                            edx = rd32(self + 0x20u);
                        }
                        else
                        {
                            eax = ebx * 8u + rd32(self + 0x20u);
                            edx = rd32(self + 0x20u);
                            wr32(eax, edi);
                            ebx = ebx + 1u;
                        }
                    }
                }
            }
L_1023087c: ;
            if ((int32_t)(edi + 1u) < (int32_t)ebp)
            {
                edi = edi + 1u;
                goto L_10230844;
            }
L_10230881: ;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x10221a80u), self, 2, ebx, 0u);
        }
    }
    return;
L_10230859: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall(g, COW_IMG(0x10231ec0u), self, 1, edi);
    t9 = g->edx;
    eax = t8;
    edx = t9;
    goto L_10230861;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102307f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102307f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
