/* f_0x101de0c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101de0c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    int64_t q4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x100e0350u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    q4 = (int64_t)cow_muls(0x51eb851fu, (uint16_t)t1);
    t5 = (uint32_t)((int32_t)cow_qhi(q4) >> 5u);
    if ((uint16_t)(t5 + (t5 >> 0x1fu)) == 0u)
    {
        eax = t5 >> 0x1fu;
        ecx = (uint16_t)t1;
        edx = t5 + (t5 >> 0x1fu);
        goto L_101de10b;
    }
    eax = t5 >> 0x1fu;
    ecx = (uint16_t)t1;
    edx = t5 + (t5 >> 0x1fu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = (uint16_t)edx;
    g->esp = sp0 - 8u;
    t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x13u);
    t7 = g->ecx;
    t8 = g->edx;
    g->edx = t8;
    cow_cdecl(g, COW_IMG(0x10312031u), 2, self + 0x16u, t6);
    t9 = g->edx;
    g->edx = t9;
    return self + 0x16u;
L_101de10b: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2fu);
    t11 = g->edx;
    g->edx = t11;
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101de0c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101de0c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
