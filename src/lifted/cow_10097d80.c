/* f_0x10097d80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10097d80(Guest* g)
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
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(COW_IMG(0x10487ef4u)) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10487ef4u));
        edx = in_edx;
        goto L_10097dc5;
    }
    wr32(COW_IMG(0x10487ef0u), arg1);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), arg1, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_10097dc5;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xecu, 0u, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 == 0u)
    {
        eax = t4;
        edx = t6;
        goto L_10097dc5;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 4u, 0u);
    t8 = g->edx;
    wr8(COW_IMG(0x10487ef4u), 1u);
    g->edx = t8;
    return (t7 & 0xffffff00u) | 1u;
L_10097dc5: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10097d80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10097d80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
