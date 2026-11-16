/* f_0x100b7d50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b7d50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x18u, t1);
    g->esp = sp0 - 0xcu;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t3 != 1u) goto L_100b7db5;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u) == 0u) goto L_100b7db5;
    ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 8u) * 4u);
    if (!(rd32(ecx + 0x120u) >> 9u & 1u)) goto L_100b7db5;
    eax = rd32(ecx + 0x120u) >> 9u;
    if (!(rd32(ecx + 0x12cu) >> 1u & 1u))
    {
        edx = rd32(ecx + 0x12cu) >> 1u;
        goto L_100b7db0;
    }
    wr8(self + 0x25au, 1u);
    return;
L_100b7db0: ;
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x1008af20u), ecx, edx, 0);
L_100b7db5: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 5u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b7d50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b7d50(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
