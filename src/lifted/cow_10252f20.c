/* f_0x10252f20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10252f20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(arg1 + 0xcu, arg3);
    wr32(arg1 + 0x10u, arg2);
    g->eax = arg3;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101c4820u), rd32(COW_IMG(0x10662dccu)), 6, arg3, 0u, 0u, arg1, COW_IMG(0x10253040u), COW_IMG(0x10252f90u));
    t2 = g->edx;
    g->edx = t2;
    t3 = rd32(COW_IMG(0x10662dccu));
    t4 = cow_thiscall(g, COW_IMG(0x101c4820u), t3, 6, arg2, 0u, 0u, arg1, COW_IMG(0x102530e0u), COW_IMG(0x10252f90u));
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)t4 >= 0) goto L_10252f82;
    eax = t4;
    ecx = t5;
    edx = t6;
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t7 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0xffffffffu;
L_10252f82: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10252f20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10252f20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
