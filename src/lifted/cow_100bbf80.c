/* f_0x100bbf80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100bbf80(Guest* g)
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;

    t1 = (self & 0xffff0000u) | rd16(self + 0x256u);
    t2 = rd8((uint16_t)t1 + rd32(self + 0x20u) + 1u);
    if (t2 == 1u)
    {
        eax = t2 - 1u;
        ecx = t1;
        edx = rd32(self + 0x20u);
        goto L_100bbfd9;
    }
    eax = t2 - 1u;
    ecx = t1;
    edx = rd32(self + 0x20u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_100bbfb0;
    }
    wr16(self + 0x256u, (uint16_t)(ecx + 2u));
    return;
L_100bbfb0: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 2u);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    g->esp = sp0 - 4u;
    t6 = cow_cdecl(g, COW_IMG(0x100e98b0u), 3, 0u, t3, in_esi);
    t7 = g->edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 4u, t6);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    return;
L_100bbfd9: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_cdecl(g, COW_IMG(0x100e9850u), 3, 0u, in_esi, in_ebx);
    t9 = g->edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x100af310u), self, 2, 2u, t8);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 4u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bbf80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100bbf80(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
