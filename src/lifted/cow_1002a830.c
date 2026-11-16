/* f_0x1002a830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1002a830(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 80u);

    wr32(sp0 - 0x44u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x44u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t1 = g->edx;
    wr32(sp0 - 0x48u, arg1);
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x100351f0u), self + 8u, 1, arg1);
    t3 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        edx = t3;
        goto L_1002a862;
    }
    eax = t2;
    edx = t3;
    g->eax = eax;
    g->esp = sp0 - 0x44u;
    t4 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return t4 & 0xffffff00u;
L_1002a862: ;
    wr32(sp0 - 0x48u, arg2);
    wr32(sp0 - 0x4cu, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x44u;
    t5 = cow_stdcall(g, COW_IMG(0x1002a890u), 2, eax, arg2);
    t6 = g->edx;
    t7 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    return (t7 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002a830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002a830(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
