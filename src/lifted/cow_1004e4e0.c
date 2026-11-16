/* f_0x1004e4e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_1004e4e0(Guest* g)
{
    double d2;
    double d4;
    uint32_t eax;
    uint32_t t1;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self) == 0u) goto L_1004e525;
    eax = rd32(self);
    if ((rd8(self + 4u) & 0xfu) == 0u)
    {
        eax = rd32(eax);
        goto L_1004e50b;
    }
    eax = rd32(eax);
    t1 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x100546f0u), eax, 2, arg1, t1);
    d2 = cow_take_float(g);
    fpush(g, d2);
    return;
L_1004e50b: ;
    t3 = rd32(self + 8u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x100544d0u), eax, 2, arg1, t3);
    d4 = cow_take_float(g);
    fpush(g, d4);
    return;
L_1004e525: ;
    fpush(g, (double)rdf32(COW_IMG(0x103295d8u)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1004e4e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1004e4e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
