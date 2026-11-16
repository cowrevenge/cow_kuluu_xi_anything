/* f_0x10064760 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10064760(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    eax = in_eax;
    edx = in_edx;
    ebx = 0x40u;
    edi = self + 0x230u;
L_10064771: ;
    if (rd32(edi) != 0u)
    {
        esi = rd32(edi);
        g->edi = edi;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_thiscall(g, COW_IMG(0x1006b7b0u), esi, 0);
        t2 = g->ecx;
        t3 = g->edx;
        t4 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t2, t3, 1, 1, esi);
        t5 = g->edx;
        eax = t4;
        edx = t5;
    }
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        edi = edi + 4u;
        goto L_10064771;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    t7 = g->edx;
    t8 = cow_fastcall(g, COW_IMG(0x100641b0u), self + 0x10cu, t7, 0);
    t9 = g->edx;
    g->esp = sp0;
    g->edi = in_edi;
    g->edx = t9;
    return cow_tailcall(g, COW_IMG(0x1006ba30u), t8, self + 0x100u, t9);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10064760(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10064760(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
