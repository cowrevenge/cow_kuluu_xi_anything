/* f_0x10126620 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10126620(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 4u, rd32(self));
    g->eax = sp0 - 4u;
    t1 = rd32(self);
    g->esp = sp0 - 0x10u;
    t2 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, in_edx, 0, 1, sp0 - 4u);
    t3 = g->edx;
    if (t2 == 0u) goto L_10126656;
    eax = t2;
    edx = t3;
    edi = t1;
L_1012663e: ;
    if (eax == arg1) goto L_1012665f;
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->eax = eax;
    t4 = rd32(sp0 - 4u);
    g->esp = sp0 - 0x10u;
    t5 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        edx = t6;
        edi = t4;
        goto L_1012663e;
    }
L_10126656: ;
    return 0u;
L_1012665f: ;
    wr32(sp0 - 0x14u, edi);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10126580u), self, 1, edi);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10126620(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10126620(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
