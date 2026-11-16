/* f_0x10064870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10064870(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    if (rd32(self + 0x22cu) != 0u)
    {
        eax = rd32(self + 0x22cu);
        goto L_1006488c;
    }
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, self, in_edx, 1, 2, COW_IMG(0x10353b10u), in_esi);
    return;
L_1006488c: ;
    wr32(self + 0x22cu, eax - 1u);
    if (rd32(eax * 4u + self + 0x22cu) != 0u)
    {
        edi = rd32(eax * 4u + self + 0x22cu);
        eax = eax - 1u;
        g->edi = edi;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t1 = cow_fastcall(g, COW_IMG(0x1006b7b0u), edi, in_edx, 0);
        t2 = g->ecx;
        t3 = g->edx;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t2, t3, 1, 1, edi);
    }
    wr32(self + rd32(self + 0x22cu) * 4u + 0x230u, 0u);
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10064870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10064870(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
