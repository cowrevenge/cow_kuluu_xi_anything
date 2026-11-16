/* f_0x1002a0c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1002a0c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x100352a0u), self + 8u, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u) goto L_1002a124;
    edx = t2;
    g->edx = edx;
    t3 = rd32(self + 0x1cu);
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x10029e70u), self, 0);
    t5 = g->edx;
    if (rd32(t4) == 0u)
    {
        edx = t5;
        edi = t3;
        goto L_1002a0f7;
    }
    ecx = rd32(t4);
    edx = t5;
    esi = t4;
    edi = t3;
L_1002a0e6: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(ecx) + 0x28u), ecx, 1, edi);
    t6 = g->edx;
    if (rd32(rd32(esi) + 4u) != 0u)
    {
        ecx = rd32(rd32(esi) + 4u);
        edx = t6;
        esi = rd32(esi) + 4u;
        goto L_1002a0e6;
    }
    edx = t6;
L_1002a0f7: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x1002a9b0u), self, 1, 0x7fu);
    t8 = g->edx;
    if (t7 == 0u)
    {
        edx = t8;
    }
    else
    {
        eax = t7;
        edx = t8;
        wr8(eax + edi, 0x80u);
    }
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall(g, COW_IMG(0x1002a9b0u), self, 1, 0x7eu);
    t10 = g->edx;
    if (t9 == 0u)
    {
        eax = t9;
        edx = t10;
    }
    else
    {
        eax = t9;
        edx = t10;
        wr8(eax + edi, 0x80u);
    }
    g->esp = sp0;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x100352f0u), eax, self + 8u, edx);
    return;
L_1002a124: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002a0c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1002a0c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
