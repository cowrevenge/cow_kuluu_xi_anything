/* f_0x100b6870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b6870(Guest* g)
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
    uint32_t t7;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(sp0 - 0x28u, sp0 - 0x18u);
    wr32(sp0 - 0x2cu, sp0 - 0x14u);
    wr32(sp0 - 0x30u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x2cu;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x30u, t1);
    g->esp = sp0 - 0x24u;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 0x14u, sp0 - 0x18u);
    if ((uint8_t)t3 != 1u) goto L_100b6938;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x18u) * 4u) == 0u) goto L_100b6938;
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x18u) * 4u);
    edx = (uint16_t)rd32(sp0 - 0x18u);
    edi = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0x18u) * 4u;
    wr32(sp0 - 0x28u, 5u);
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t4 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
    wr32(sp0 - 0x18u, t4);
    if (!(rd32(rd32(edi) + 0x120u) >> 7u & 1u))
    {
        eax = rd32(edi);
        x0 = fr(g, fr(g, (double)(int32_t)t4 * (double)rdf32(COW_IMG(0x10329d2cu))) * (double)rdf32(COW_IMG(0x10330250u)));
        goto L_100b692f;
    }
    eax = rd32(edi);
    x0 = fr(g, fr(g, (double)(int32_t)t4 * (double)rdf32(COW_IMG(0x10329d2cu))) * (double)rdf32(COW_IMG(0x10330250u)));
    t5 = rd32(eax + 0xd4u);
    t6 = rd32(sp0 - 0x24u);
    wr32(rd32(t5 + 0x260u) + 0x150u, 0u);
    wrf32(rd32(t5 + 0x260u) + 0x154u, (float)x0);
    t7 = rd32(sp0 - 4u);
    wr32(rd32(t5 + 0x260u) + 0x158u, 0u);
    wr32(rd32(t5 + 0x260u) + 0x15cu, t7);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = t6;
    return;
L_100b692f: ;
    wrf32(eax + 0x18u, (float)x0);
    wr32(eax + 0x14u, 0u);
    wr32(eax + 0x1cu, 0u);
L_100b6938: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b6870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b6870(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
