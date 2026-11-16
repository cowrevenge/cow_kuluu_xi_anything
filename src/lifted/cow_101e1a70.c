/* f_0x101e1a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e1a70(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    wr32(self, 0u);
    edi = self + 4u;
    eax = 0u;
    ecx = 0x5au;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    edx = in_edx;
    esi = 0u;
L_101e1a8c: ;
    wr32(sp0 - 0x20u, 0u);
    edi = sp0 - 0x1cu;
    eax = 0u;
    ecx = 7u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x30u, esi);
    g->ebx = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t1 = cow_thiscall(g, COW_IMG(0x101e2490u), sp0 - 0x20u, 1, esi);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
    }
    else
    {
        edx = t2;
        if (rd32(sp0 - 4u) != 0u)
        {
            wr32(sp0 - 0x30u, 1u);
            wr32(sp0 - 0x34u, sp0 - 0x20u);
            wr32(sp0 - 0x20u, 2u);
            g->ebx = self;
            g->esp = sp0 - 0x2cu;
            cow_fastcall(g, COW_IMG(0x101e1c90u), self, edx, 2, sp0 - 0x20u, 1u);
            t3 = g->edx;
            edx = t3;
        }
    }
    if ((int32_t)(esi + 1u) < 10)
    {
        esi = esi + 1u;
        goto L_101e1a8c;
    }
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e1a70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
