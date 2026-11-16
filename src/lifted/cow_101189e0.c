/* f_0x101189e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101189e0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    if ((int16_t)rd16(self + 0x58u) <= 0) goto L_10118a19;
    edx = in_edx;
    edi = 0u;
L_101189ec: ;
    g->edi = edi;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x101181d0u), self, 1, edi);
    t2 = g->ecx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        t3 = (ecx & 0xffffff00u) | rd8(self + 0x99u);
        t4 = (uint32_t)(int16_t)rd16(self + 0x54u);
        t5 = (uint32_t)(int16_t)rd16(self + 0x52u);
        g->esp = sp0 - 8u;
        cow_fastcall(g, COW_IMG(0x10119ad0u), eax, t4, 3, t5, t4, t3);
    }
    if ((int32_t)(edi + 1u) < (int16_t)rd16(self + 0x58u))
    {
        edx = (uint32_t)(int16_t)rd16(self + 0x58u);
        edi = edi + 1u;
        goto L_101189ec;
    }
L_10118a19: ;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101189e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101189e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
