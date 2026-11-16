/* f_0x1008e260 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1008e260(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), self, 1, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_1008e287;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
L_1008e271: ;
    if (rd16(eax + 0x18u) == rd16(self + 0x2a4u))
    {
        eax = (eax & 0xffff0000u) | rd16(eax + 0x18u);
        goto L_1008e28b;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_1008e271;
    }
    eax = t4;
    edx = t6;
L_1008e287: ;
    g->edx = edx;
    return eax & 0xffffff00u;
L_1008e28b: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008e260(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008e260(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
