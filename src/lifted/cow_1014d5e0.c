/* f_0x1014d5e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1014d5e0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u) & 0x4000000u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7d0u);
        ecx = rd32(COW_IMG(0x104dfd98u));
        if (rd32(ecx + 0x2c7c8u) != 0xau)
        {
            edx = in_edx;
        }
        else
        {
            wr32(ecx + 0x2c7d0u, eax & 0xfbffffffu);
            if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu) == 2u)
            {
                eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu);
                edx = in_edx;
            }
            else
            {
                eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu);
                if (eax != 1u)
                {
                    g->esp = sp0 - 4u;
                    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
                    t1 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x2c7ccu);
                    g->eax = t1;
                    g->edx = rd32(COW_IMG(0x104dfd98u));
                    t2 = rd32(COW_IMG(0x104dfd98u));
                    t3 = cow_stdcall(g, COW_IMG(0x1014d930u), 1, t1);
                    t4 = g->edx;
                    wr32(self + 0x1cu, 0xffffffffu);
                    g->edx = t4;
                    t5 = cow_thiscall(g, COW_IMG(0x1014d8e0u), self, 0);
                    t6 = g->edx;
                    eax = t5;
                    edx = t6;
                }
                else
                {
                    wr32(self + 0x1cu, 0xffffffffu);
                    wr32(self + 0x18u, 0xffffffffu);
                    eax = 0xffffffffu;
                    edx = in_edx;
                }
                wr8(rd32(self + 8u) + 0x5du, 0u);
                wr32(self + 0x14u, 5u);
            }
        }
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1014d910u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014d5e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1014d5e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
