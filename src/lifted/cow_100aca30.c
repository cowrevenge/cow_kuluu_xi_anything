/* f_0x100aca30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100aca30(Guest* g)
{
    uint32_t eax;
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

    wr32(self, COW_IMG(0x1032fd58u));
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10082b10u), self, 0);
    t1 = g->edx;
    if (rd32(self + 0x668u) == 0u)
    {
        eax = rd32(self + 0x668u);
        edx = t1;
    }
    else
    {
        edx = t1;
        if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x70u)
        {
            eax = rd32(COW_IMG(0x10456a28u));
        }
        else
        {
            g->edx = edx;
            g->esp = sp0 - 8u;
            t2 = cow_thiscall(g, COW_IMG(0x100ad2e0u), self, 0);
            t3 = g->edx;
            if ((int32_t)t2 <= 0)
            {
                eax = t2;
                edx = t3;
            }
            else
            {
                eax = t2;
                edx = t3;
                ebx = 0u;
                edi = 0u;
L_100aca63: ;
                t4 = ebx + rd32(self + 0x668u);
                g->esp = sp0 - 0xcu;
                cow_fastcall(g, COW_IMG(0x100acff0u), self, edx, 3, edi, t4, 1u);
                t5 = g->edx;
                g->edx = t5;
                t6 = cow_thiscall(g, COW_IMG(0x100ad2e0u), self, 0);
                t7 = g->edx;
                if ((int32_t)(edi + 1u) < (int32_t)t6)
                {
                    eax = t6;
                    edx = t7;
                    ebx = ebx + 0x40u;
                    edi = edi + 1u;
                    goto L_100aca63;
                }
                eax = t6;
                edx = t7;
            }
        }
        wr32(self + 0x668u, 0u);
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t8 = cow_fastcall(g, COW_IMG(0x1006c270u), self + 0x88cu, edx, 0);
    t9 = g->edx;
    g->esp = sp0;
    g->edx = t9;
    cow_tailcall(g, COW_IMG(0x100a8ca0u), t8, self, t9);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100aca30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100aca30(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
