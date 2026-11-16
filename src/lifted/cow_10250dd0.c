/* f_0x10250dd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10250dd0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg1 + 0x18u) == 0u) goto L_10250dee;
    ecx = rd32(arg1 + 0x18u);
    g->eax = arg1;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0xffffffffu;
L_10250dee: ;
    wr32(arg1 + 4u, arg2);
    g->eax = arg1;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x101c4820u), t2, 6, arg2, 0u, 0u, arg1, COW_IMG(0x10250ee0u), COW_IMG(0x10250e30u));
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)t3 >= 0) goto L_10250e27;
    eax = t3;
    ecx = t4;
    edx = t5;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t6 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return 0xffffffffu;
L_10250e27: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10250dd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10250dd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
