/* f_0x101034e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101034e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104e0af4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e0af4u));
        goto L_10103512;
    }
    g->esp = sp0;
    cow_fastcall(g, COW_IMG(0x100f0450u), self, in_edx, 0);
    t1 = g->ecx;
    t2 = g->edx;
    g->ecx = t1;
    t3 = cow_call_regs(g, COW_IMG(0x100dc2d0u), g->eax, g->ecx, t2, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 1u)
    {
        eax = t3;
        goto L_10103512;
    }
    ecx = t4;
    edx = t5;
    g->esp = sp0;
    t6 = cow_fastcall(g, COW_IMG(0x100dbcb0u), ecx, edx, 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 != 1u)
    {
        eax = t6;
        goto L_10103512;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t9 = cow_call_regs(g, COW_IMG(0x100dbfd0u), eax, g->ecx, g->edx, 1, 0);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 != 1u)
    {
        eax = t9;
        goto L_10103512;
    }
    ecx = t10;
    edx = t11;
    g->esp = sp0;
    t12 = cow_fastcall(g, COW_IMG(0x100d93d0u), ecx, edx, 0);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u)
    {
        ecx = t13;
        edx = t14;
        goto L_10103515;
    }
    eax = t12;
L_10103512: ;
    return eax & 0xffffff00u;
L_10103515: ;
    g->esp = sp0;
    t15 = cow_stdcall(g, COW_IMG(0x100ed710u), 0);
    return (t15 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101034e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101034e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
