/* f_0x1020f640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020f640(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    if (rd32(COW_IMG(0x10578204u)) == 0u)
    {
        eax = 0u;
        edx = in_edx;
        goto L_1020f6ae;
    }
    ecx = rd32(COW_IMG(0x10578204u));
    if (rd32(self + 8u) == 0u)
    {
        eax = 0u;
        edi = self;
    }
    else
    {
        esi = rd32(self + 8u);
        if ((int32_t)(uint8_t)rd32(sp0 + 8u) >= (int16_t)rd16(self + 4u))
        {
            eax = 0u;
            edi = (uint32_t)(int16_t)rd16(self + 4u);
        }
        else
        {
            edx = (uint8_t)rd32(sp0 + 8u);
            edi = (uint32_t)(int16_t)rd16(self + 4u);
            eax = rd32(edx * 0x54u + esi + 0x48u);
        }
    }
    if (rd32(ecx + 8u) == 0u)
    {
        edx = rd32(ecx + 8u);
        goto L_1020f693;
    }
    edx = rd32(ecx + 8u);
    wr32(sp0 + 8u, 0u);
    wr32(sp0 + 4u, eax);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1013e2f0u), eax, ecx, edx);
L_1020f693: ;
    if (eax != 0u)
    {
        t1 = (edx & 0xffffff00u) | rd8(eax + 2u);
        t2 = (eax & 0xffff0000u) | rd16(eax);
        g->edi = edi;
        g->edx = t1;
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x1013e410u), t2, ecx, g->edx, 0, 7, 1u, t2, t1, 0u, 0u, 0u, 0u);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
L_1020f6ae: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020f640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020f640(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
