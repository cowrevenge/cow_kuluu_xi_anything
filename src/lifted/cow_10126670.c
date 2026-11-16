/* f_0x10126670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10126670(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_esi);
    if ((int32_t)rd32(sp0 + 4u) >= (int32_t)rd32(self + 0x10u)) goto L_101266a3;
    eax = rd32(sp0 + 4u);
    if ((int32_t)eax < 0) goto L_101266a3;
    zf = eax == 0u;
    wr32(sp0 + 4u, rd32(self));
    if (zf)
    {
        edi = in_edi;
    }
    else
    {
        wr32(sp0 - 8u, in_edi);
        edi = eax;
L_1012668b: ;
        wr32(sp0 - 0xcu, sp0 + 4u);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, sp0 + 4u, 0, 1, sp0 + 4u);
        if (edi != 1u)
        {
            edi = edi - 1u;
            goto L_1012668b;
        }
        edi = rd32(sp0 - 8u);
    }
    g->edi = edi;
    return rd32(sp0 + 4u);
L_101266a3: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10126670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10126670(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
