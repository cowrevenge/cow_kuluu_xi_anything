/* f_0x10001bb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10001bb0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0xdc4u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_10001be6;
    }
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x10005660u), eax, 0);
    t4 = g->edx;
    wr32(COW_IMG(0x10455c20u), t3);
    if (t3 == 0u)
    {
        eax = t3;
        goto L_10001bf0;
    }
    eax = t3;
    edx = t4;
    g->eax = eax;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x100058f0u), eax, 1, arg1);
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        goto L_10001bf0;
    }
    eax = t5;
    return (eax & 0xffffff00u) | 1u;
L_10001be6: ;
    wr32(COW_IMG(0x10455c20u), 0u);
L_10001bf0: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10001bb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10001bb0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
