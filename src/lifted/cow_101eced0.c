/* f_0x101eced0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101eced0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(sp0 + 4u) == 0u)
    {
        eax = self;
        edx = in_edx;
        goto L_101ecf40;
    }
    if (rd32(COW_IMG(0x10578204u)) == 0u)
    {
        eax = self;
        edx = in_edx;
        goto L_101ecf40;
    }
    ecx = rd32(COW_IMG(0x10578204u));
    if (rd32(self + 8u) == 0u)
    {
        eax = self;
        edx = in_edx;
        goto L_101ecf40;
    }
    esi = rd32(self + 8u);
    if ((int32_t)(uint8_t)rd32(sp0 + 8u) >= (int16_t)rd16(self + 4u))
    {
        eax = (uint32_t)(int16_t)rd16(self + 4u);
        edx = (uint8_t)rd32(sp0 + 8u);
        goto L_101ecf40;
    }
    edx = (uint8_t)rd32(sp0 + 8u);
    if (rd32(ecx + 8u) != 0u)
    {
        eax = rd32(ecx + 8u);
        esi = rd32(edx * 0x54u + esi + 0x48u);
        edx = edx * 0x15u;
    }
    else
    {
        eax = rd32(ecx + 8u);
        esi = rd32(edx * 0x54u + esi + 0x48u);
        edx = edx * 0x15u;
        g->esp = sp0 - 4u;
        t1 = cow_call_regs(g, COW_IMG(0x1013e3b0u), eax, ecx, edx, 0, 4, 1u, 1u, 0u, 0u);
        t2 = g->edx;
        eax = t1;
        ecx = rd32(COW_IMG(0x10578204u));
        edx = t2;
    }
    if (esi == 0u) goto L_101ecf44;
    if (esi == 1u) goto L_101ecf44;
    t3 = (eax & 0xffff0000u) | rd16(esi);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x1013e260u), t3, ecx, g->edx, 0, 4, t3, 0u, 0u, 0u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_101ecf40: ;
    g->edx = edx;
    return eax;
L_101ecf44: ;
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1013e2f0u), eax, ecx, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101eced0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101eced0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
