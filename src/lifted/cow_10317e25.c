/* f_0x10317e25 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10317e25(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, in_edi);
    if ((int32_t)arg2 <= 0)
    {
        esi = in_esi;
    }
    else
    {
        wr32(sp0 - 8u, in_esi);
        eax = in_eax;
        ecx = self;
        edx = in_edx;
        esi = sp0 + 8u;
        edi = arg2;
L_10317e33: ;
        t1 = rd32(esi + 4u);
        wr32(sp0 - 0xcu, t1);
        wr32(sp0 - 0x10u, arg1);
        g->esp = sp0 - 8u;
        t2 = cow_call_regs(g, COW_IMG(0x10317510u), eax, g->ecx, edx, 1, 2, arg1, t1);
        t3 = g->edx;
        if (edi != 1u)
        {
            eax = t2;
            ecx = rd32(sp0 - 0xcu);
            edx = t3;
            esi = esi + 4u;
            edi = edi - 1u;
            goto L_10317e33;
        }
        esi = rd32(sp0 - 8u);
    }
    g->esi = esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10317e25(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10317e25(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
