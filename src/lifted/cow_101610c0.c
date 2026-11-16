/* f_0x101610c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101610c0(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x61cu) == 0u) goto L_101610fe;
    if ((int32_t)arg1 >= 32)
    {
        g->eax = arg1;
        g->esp = sp0 - 4u;
        t3 = cow_fastcall(g, COW_IMG(0x10160ef0u), self, in_edx, 1, arg1);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x10160f00u), self, 1, arg1);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if (eax == 0u) goto L_101610fe;
    t5 = (uint32_t)(int16_t)rd16(eax) * 2u + 1u;
    t6 = rd16(eax);
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x101c8450u), rd32(self + 0x61cu), 1, t5);
    return t7;
L_101610fe: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101610c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101610c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
