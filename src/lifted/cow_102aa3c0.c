/* f_0x102aa3c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102aa3c0(Guest* g)
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
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        esi = rd32(sp0 + 4u);
    }
    else
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        esi = rd32(sp0 + 4u);
        wr32(sp0 + 4u, eax);
        wr32(sp0 - 0xcu, sp0 + 4u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x102a95c0u), 1, sp0 + 4u);
        t1 = g->ecx;
        t2 = g->edx;
        wr32(esi + 0x34u, 0u);
        ecx = t1;
        edx = t2;
    }
    if (rd32(esi + 0x48u) != 0u)
    {
        eax = rd32(esi + 0x48u);
        wr32(sp0 - 0xcu, 0x77u);
        wr32(sp0 - 0x10u, COW_IMG(0x103be980u));
        wr32(sp0 - 0x14u, eax);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103be980u), 0x77u);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(esi + 0x48u, 0u);
        ecx = t3;
        edx = t4;
    }
    if (rd32(esi + 0x54u) != 0u)
    {
        eax = rd32(esi + 0x54u);
        wr32(sp0 - 0xcu, 0x78u);
        wr32(sp0 - 0x10u, COW_IMG(0x103be980u));
        wr32(sp0 - 0x14u, eax);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103be980u), 0x78u);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(esi + 0x54u, 0u);
        ecx = t5;
        edx = t6;
    }
    if (rd32(esi + 0x58u) != 0u)
    {
        eax = rd32(esi + 0x58u);
        wr32(sp0 - 0xcu, 0x79u);
        wr32(sp0 - 0x10u, COW_IMG(0x103be980u));
        wr32(sp0 - 0x14u, eax);
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103be980u), 0x79u);
        wr32(esi + 0x58u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102aa3c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102aa3c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
