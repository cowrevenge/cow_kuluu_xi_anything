/* f_0x10257c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10257c10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 4u);
    wr32(self + 0xcu, arg1);
    t2 = rd32(t1 + 0x28u) << 3u;
    t3 = rd16(t1 + 0xau);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10257300u), g->eax, g->ecx, t2, 1, 3, t3, arg1, t2);
    if (rd16(rd32(self + 4u) + 8u) != 1u)
    {
        eax = rd32(self + 4u);
        if (rd32(eax + 0x28u) == 0u) goto L_10257c67;
        edi = 0u;
L_10257c48: ;
        if (rd32(eax + 0x1cu) != 0u)
        {
            ecx = rd32(eax + 0x1cu);
            t4 = edi * 8u + rd32(self + 0xcu);
            g->esp = sp0;
            cow_cdecl(g, COW_IMG(0x102573e0u), 3, t4, in_edi, in_esi);
        }
        if (edi + 1u < rd32(rd32(self + 4u) + 0x28u))
        {
            eax = rd32(self + 4u);
            edi = edi + 1u;
            goto L_10257c48;
        }
    }
L_10257c67: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10257c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10257c10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
