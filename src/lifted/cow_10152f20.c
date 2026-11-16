/* f_0x10152f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10152f20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    esi = 0u;
    edi = rd32(sp0 + 4u);
L_10152f28: ;
    if (rd32(COW_IMG(0x10371da8u) + esi * 8u) == edi) goto L_10152f45;
    if (esi + 1u < 0x1cu)
    {
        esi = esi + 1u;
        goto L_10152f28;
    }
    ecx = self;
    edx = in_edx;
L_10152f37: ;
    if (rd32(COW_IMG(0x10578548u) + edi * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10578548u) + edi * 4u);
        goto L_10152f6d;
    }
    eax = rd32(COW_IMG(0x10578548u) + edi * 4u);
    g->edx = edx;
    return eax;
L_10152f45: ;
    if (rd32(COW_IMG(0x10371dacu) + esi * 8u) == 0u)
    {
        ecx = rd32(COW_IMG(0x10371dacu) + esi * 8u);
        edx = in_edx;
        goto L_10152f37;
    }
    ecx = rd32(COW_IMG(0x10371dacu) + esi * 8u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10257b30u), ecx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_10152f37;
    }
    edx = t3;
    g->eax = arg2;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_stdcall(g, COW_IMG(0x10257970u), 1, arg2);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10152f6d: ;
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x101530c0u), eax, ecx, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10152f20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10152f20(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
