/* f_0x100979b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100979b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr8(sp0 - 2u, 0u);
    wr8(sp0 - 1u, 0u);
    wr8(COW_IMG(0x1047fab8u), 0u);
    g->esp = sp0 - 0xcu;
    t1 = cow_fastcall(g, COW_IMG(0x100977f0u), self, in_edx, 0);
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        if ((rd32(self + 0x78u) & 0xff000000u) == 0u)
        {
            if (!(rd32(self + 0x13cu) >> 7u & 1u))
            {
                eax = rd32(self + 0x13cu) >> 7u;
            }
            else
            {
                eax = rd32(self + 0x13cu) >> 7u;
                wr8(sp0 - 2u, 0xd2u);
            }
        }
        ecx = 0u;
        edx = 0u;
L_100979ed: ;
        if (rd8(ecx + sp0 - 2u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(ecx + sp0 - 2u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(ecx + sp0 - 2u);
            wr8(COW_IMG(0x1047fab8u) + edx, (uint8_t)eax);
            edx = edx + 1u;
        }
        if (ecx + 1u < 2u)
        {
            ecx = ecx + 1u;
            goto L_100979ed;
        }
        wr8(COW_IMG(0x1047fab8u) + edx, 0u);
        wr8(COW_IMG(0x1047fb37u), 0u);
    }
    return COW_IMG(0x1047fab8u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100979b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100979b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
