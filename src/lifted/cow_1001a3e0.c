/* f_0x1001a3e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1001a3e0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = in_eax;
    edx = in_edx;
    esi = 6u;
    edi = self + 0x78u;
L_1001a3ef: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x1001b2e0u), eax, edi, g->edx, 0, 2, arg1, esi);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1001ac40u), edi, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1001b1f0u), edi, 2, arg1, esi);
    t6 = g->edx;
    if ((int32_t)(esi - 1u) >= 0)
    {
        eax = t5;
        edx = t6;
        esi = esi - 1u;
        edi = edi - 0x14u;
        goto L_1001a3ef;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001a3e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001a3e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
