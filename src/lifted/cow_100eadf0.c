/* f_0x100eadf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_100eadf0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;

    t1 = rd32(COW_IMG(0x104dfd98u));
    edi = rd32(COW_IMG(0x104dfd98u)) + 0x19de4u;
    eax = 0u;
    ecx = 0x204u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->ecx = ecx;
    g->edx = t1;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x83u, COW_IMG(0x100eaee0u));
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        goto L_100eae1e;
    }
    eax = t2;
    return eax;
L_100eae1e: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x82u, COW_IMG(0x100eafc0u));
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        ecx = t6;
        edx = t7;
        goto L_100eae35;
    }
    eax = t5;
    return eax;
L_100eae35: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x85u, COW_IMG(0x100eb040u));
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        ecx = t9;
        edx = t10;
        goto L_100eae4c;
    }
    eax = t8;
    return eax;
L_100eae4c: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t11 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x84u, COW_IMG(0x100eb060u));
    t12 = g->ecx;
    t13 = g->edx;
    if ((uint8_t)t11 != 0u)
    {
        ecx = t12;
        edx = t13;
        goto L_100eae63;
    }
    eax = t11;
    return eax;
L_100eae63: ;
    g->esp = sp0;
    t14 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x86u, COW_IMG(0x100eae80u));
    return (t14 & 0xffffff00u) | (uint8_t)t14 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100eadf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100eadf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
