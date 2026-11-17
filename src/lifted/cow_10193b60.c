/* f_0x10193b60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10193b60(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 8u) != arg1) goto L_10193b77;
    if (rd32(self + 0xcu) == arg2) goto L_10193bb7;
L_10193b77: ;
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        esi = self;
        goto L_10193b92;
    }
    esi = self;
L_10193b7e: ;
    if (rd32(rd32(esi + 4u) + 8u) != arg1)
    {
        esi = rd32(esi + 4u);
        goto L_10193b8b;
    }
    esi = rd32(esi + 4u);
    if (rd32(esi + 0xcu) == arg2) goto L_10193bb7;
L_10193b8b: ;
    if (rd32(esi + 4u) != 0u) goto L_10193b7e;
    eax = rd32(esi + 4u);
L_10193b92: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x10u, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u) goto L_10193bb2;
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x10193b00u), eax, 2, arg1, arg2);
    wr32(esi + 4u, t3);
    return;
L_10193bb2: ;
    wr32(esi + 4u, 0u);
L_10193bb7: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10193b60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10193b60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
