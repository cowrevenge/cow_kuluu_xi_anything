/* f_0x10009120 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10009120(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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

    t1 = rd32(self + 0x1ecu);
    wr32(self, COW_IMG(0x103299d4u));
    if (t1 == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = t1;
        if (eax == 0xffffffffu)
        {
            edx = in_edx;
        }
        else
        {
            t2 = rd32(self + 0xcu);
            g->edx = rd32(t2);
            t3 = rd32(t2);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(t3 + 0xe0u), t2, 2, t2, eax);
            t4 = g->edx;
            edx = t4;
        }
    }
    if (rd32(self + 0x1f0u) == 0u)
    {
        eax = rd32(self + 0x1f0u);
    }
    else
    {
        eax = rd32(self + 0x1f0u);
        if (eax != 0xffffffffu)
        {
            t5 = rd32(self + 0xcu);
            g->eax = eax;
            g->edx = rd32(t5);
            t6 = rd32(t5);
            g->esp = sp0 - 0xcu;
            t7 = cow_thiscall(g, rd32(t6 + 0xe0u), t5, 2, t5, eax);
            t8 = g->edx;
            eax = t7;
            edx = t8;
        }
    }
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t9 = cow_fastcall(g, COW_IMG(0x1000c7c0u), self, edx, 0);
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x10017090u), self + 0x1f4u, 0);
    t12 = g->edx;
    t13 = cow_fastcall(g, COW_IMG(0x1000cff0u), self + 0x1dcu, t12, 0);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    ebx = 3u;
    edi = self + 0x1dcu;
L_1000918b: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t15 = cow_fastcall(g, COW_IMG(0x1000cff0u), edi - 0x10u, edx, 0);
    t16 = g->edx;
    if (ebx != 1u)
    {
        eax = t15;
        edx = t16;
        ebx = ebx - 1u;
        edi = edi - 0x10u;
        goto L_1000918b;
    }
    eax = t15;
    edx = t16;
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x1000d080u), eax, self + 0x190u, edx);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10009120(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10009120(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
