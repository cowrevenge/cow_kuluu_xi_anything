/* f_0x100e8440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e8440(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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

    wr32(COW_IMG(0x104ca3f0u), COW_IMG(0x104b1788u));
    edi = COW_IMG(0x104b1788u);
    eax = 0u;
    ecx = 0x631au;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x12u, COW_IMG(0x100e8760u));
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        goto L_100e848f;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x13u, COW_IMG(0x100e87c0u));
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 1u)
    {
        eax = t4;
        goto L_100e848f;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->eax = eax;
    g->esp = sp0;
    t7 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 6u, COW_IMG(0x100e8900u));
    if ((uint8_t)t7 == 1u)
    {
        eax = t7;
        goto L_100e8492;
    }
    eax = t7;
L_100e848f: ;
    return eax & 0xffffff00u;
L_100e8492: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e8440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e8440(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
