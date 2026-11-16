/* f_0x100b9cb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b9cb0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, 2u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t2 = g->edx;
    wr32(sp0 - 0x18u, t1);
    g->esp = sp0 - 0xcu;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t3 == 1u)
    {
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
            wr32(sp0 - 0x10u, in_ebx);
            t4 = rd32(eax + 0x12cu) ^ ((rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u) << 0x11u ^ rd32(eax + 0x12cu)) & 0x20000u);
            wr32(eax + 0x12cu, t4);
        }
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b9cb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b9cb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
