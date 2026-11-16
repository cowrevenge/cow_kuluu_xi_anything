/* f_0x10001c80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10001c80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(self + 0x38u);
    wr8(self + 0x3du, 1u);
    if (t1 != 0u)
    {
        eax = t1;
        if (rd8(self + 0x3cu) != 1u)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            ecx = self;
            edx = in_edx;
            edi = rd32(COW_IMG(0x103290f8u));
L_10001c9f: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t2 = cow_thiscall(g, edi, ecx, 1, 1u);
            t3 = g->ecx;
            t4 = g->edx;
            if (rd8(self + 0x3cu) == 1u)
            {
                eax = t2;
                ecx = t3;
                edx = t4;
                goto L_10001c9f;
            }
            ecx = t3;
            edx = t4;
        }
        t5 = rd32(self + 0x38u);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(COW_IMG(0x10329104u)), ecx, 1, t5);
        wr32(self + 0x38u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10001c80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10001c80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
