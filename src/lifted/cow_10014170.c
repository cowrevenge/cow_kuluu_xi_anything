/* f_0x10014170 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10014170(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((uint32_t)(int16_t)rd16(self + 4u) > 4u)
    {
        eax = (uint32_t)(int16_t)rd16(self + 4u);
        goto L_10014185;
    }
    eax = (uint32_t)(int16_t)rd16(self + 4u);
    t1 = rd32(COW_IMG(0x100141acu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10014180u: goto L_10014180;
    case 0x10014188u: goto L_10014188;
    case 0x10014190u: goto L_10014190;
    case 0x10014198u: goto L_10014198;
    case 0x100141a0u: goto L_100141a0;
    default: rt_fatal(g, COW_IMG(0x10014179u), "switch");
    }
    return 0;
L_10014180: ;
    g->eax = eax;
    g->esp = sp0;
    t6 = cow_thiscall(g, COW_IMG(0x100141c0u), self, 0);
    eax = t6;
L_10014185: ;
    return eax & 0xffffff00u;
L_10014188: ;
    g->esp = sp0;
    t5 = cow_call_regs(g, COW_IMG(0x10014200u), eax, self, g->edx, 1, 0);
    return t5 & 0xffffff00u;
L_10014190: ;
    g->eax = eax;
    g->esp = sp0;
    t4 = cow_thiscall(g, COW_IMG(0x100142a0u), self, 0);
    return t4 & 0xffffff00u;
L_10014198: ;
    g->eax = eax;
    g->esp = sp0;
    t3 = cow_stdcall(g, COW_IMG(0x100142b0u), 0);
    return t3 & 0xffffff00u;
L_100141a0: ;
    g->eax = eax;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x10014350u), self, 0);
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        goto L_10014185;
    }
    eax = t2;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10014170(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10014170(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
