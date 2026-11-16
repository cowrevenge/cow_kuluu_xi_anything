/* f_0x101cc3a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_101cc3a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u) goto L_101cc3ad;
    return in_eax & 0xffffff00u;
L_101cc3ad: ;
    t1 = (self & 0xffffff00u) | rd8(arg1 + 2u);
    t2 = rd32(COW_IMG(0x105781a8u));
    g->esp = sp0 - 4u;
    t3 = cow_fastcall(g, COW_IMG(0x10131f10u), t2, in_edx, 2, t1, arg2);
    t4 = g->ecx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        ecx = t4;
        goto L_101cc3c7;
    }
    eax = t3;
    return eax;
L_101cc3c7: ;
    t5 = (eax & 0xffff0000u) | rd16(arg1);
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x100febe0u), 2, t5, arg1 + 0x10u);
    return (t6 & 0xffffff00u) | (uint8_t)t6 != 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cc3a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101cc3a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
