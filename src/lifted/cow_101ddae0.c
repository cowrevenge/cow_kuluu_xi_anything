/* f_0x101ddae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101ddae0(Guest* g)
{
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u) goto L_101ddafb;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101ddac0u), arg2, self, g->edx, 0, 1, arg2);
    return;
L_101ddafb: ;
    if ((uint8_t)arg2 == 0u) goto L_101ddb1e;
    g->eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101dd710u), self, 2, arg1, 0u);
    t2 = g->edx;
    cow_thiscall(g, COW_IMG(0x101dd710u), self, 2, arg1, 4u);
    wr8(self + 0x19u, 1u);
    return;
L_101ddb1e: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101dd710u), self, 2, arg1, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ddae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ddae0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
