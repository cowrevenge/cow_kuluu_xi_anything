/* f_0x10257e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10257e50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x14u) == rd32(self + 0x18u))
    {
        ecx = self;
        edx = in_edx;
        goto L_10257e95;
    }
    ecx = self;
    edx = in_edx;
    ebp = rd32(self + 0x18u);
    esi = rd32(self + 0x14u);
L_10257e62: ;
    if (rd32(esi + 4u) != 0u)
    {
        eax = rd32(esi + 4u);
        if (rd8(eax - 1u) == 0u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(eax - 1u);
            eax = eax - 1u;
            goto L_10257e7c;
        }
        ecx = (ecx & 0xffffff00u) | rd8(eax - 1u);
        eax = eax - 1u;
        if ((uint8_t)ecx == 0xffu) goto L_10257e7c;
        wr8(eax, (uint8_t)((uint8_t)ecx - 1u));
        ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx - 1u);
    }
L_10257e85: ;
    wr32(esi + 4u, 0u);
    wr32(esi + 8u, 0u);
    wr32(esi + 0xcu, 0u);
    if (esi + 0x10u != ebp)
    {
        esi = esi + 0x10u;
        goto L_10257e62;
    }
L_10257e95: ;
    t3 = rd32(self + 0x14u);
    g->eax = t3;
    g->esp = sp0 - 0x10u;
    t4 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t3);
    t5 = g->edx;
    wr32(self + 0x14u, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x1cu, 0u);
    t6 = rd32(self + 4u);
    g->esp = sp0 - 0x14u;
    t7 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t6, t5, 1, 1, t6);
    t8 = g->edx;
    wr32(self + 4u, 0u);
    wr32(self + 8u, 0u);
    wr32(self + 0xcu, 0u);
    g->edx = t8;
    return t7;
L_10257e7c: ;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax);
    t1 = g->ecx;
    t2 = g->edx;
    ecx = t1;
    edx = t2;
    goto L_10257e85;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10257e50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10257e50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
