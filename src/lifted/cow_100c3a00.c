/* f_0x100c3a00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100c3a00(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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

    t1 = rd32(self + 0x5c8u);
    wr32(self, COW_IMG(0x10330288u));
    if (t1 == 0u)
    {
        eax = t1;
        edx = in_edx;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, COW_IMG(0x100c3be0u), self, 0);
        t3 = g->edx;
        if ((int32_t)t2 <= 0)
        {
            eax = t2;
            edx = t3;
        }
        else
        {
            edx = t3;
            ebx = 0u;
            edi = 0u;
L_100c3a22: ;
            t4 = ebx + rd32(self + 0x5c8u);
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, COW_IMG(0x100c3c80u), self, 2, edi, t4);
            t5 = g->edx;
            g->edx = t5;
            t6 = cow_thiscall(g, COW_IMG(0x100c3be0u), self, 0);
            t7 = g->edx;
            if ((int32_t)(edi + 1u) < (int32_t)t6)
            {
                edx = t7;
                ebx = ebx + 0x40u;
                edi = edi + 1u;
                goto L_100c3a22;
            }
            eax = t6;
            edx = t7;
        }
        t8 = rd32(self + 0x5c8u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t9 = cow_cdecl(g, COW_IMG(0x10028700u), 1, t8);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x100a8ca0u), eax, self, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c3a00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100c3a00(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
