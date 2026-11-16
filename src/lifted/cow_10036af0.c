/* f_0x10036af0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10036af0(Guest* g)
{
    double d3;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x1032a930u));
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x100369a0u), self, 0);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(self + 0x104u) == 0u)
    {
        eax = rd32(self + 0x104u);
        edx = t2;
    }
    else
    {
        eax = rd32(self + 0x104u);
        ecx = t1;
        edx = t2;
        if (rd32(eax) != 0u)
        {
            edi = rd32(eax);
            if (rd32(self + 0xfcu) == 0u)
            {
                eax = rd32(self + 0xfcu);
            }
            else
            {
                eax = rd32(self + 0xfcu);
                if (rd32(eax) != 0u)
                {
                    if (rd32(self + 0x1e0u) != 0u)
                    {
                        ebx = rd32(self + 0x1e0u);
                        g->edx = edx;
                        d3 = (double)rdf32(self + 0x114u);
                        fpush(g, d3);
                        g->esp = sp0 - 0xcu;
                        t4 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
                        t5 = g->edx;
                        g->edx = t5;
                        cow_call_regs(g, COW_IMG(0x10036be0u), t4, g->ecx, g->edx, 0, 2, ebx, t4);
                        t6 = g->edx;
                        if (rd32(edi + 0x38u) == 0x8bfu)
                        {
                            eax = rd32(edi + 0x38u);
                            edx = t6;
                            goto L_10036b4e;
                        }
                        eax = rd32(edi + 0x38u);
                        edx = t6;
                        if (eax != 0x80fu) goto L_10036b55;
L_10036b4e: ;
                        wr8(COW_IMG(0x104638f4u), 0u);
                    }
                }
            }
L_10036b55: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t7 = cow_thiscall(g, COW_IMG(0x10071ec0u), edi, 0);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x10044970u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10036af0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10036af0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
