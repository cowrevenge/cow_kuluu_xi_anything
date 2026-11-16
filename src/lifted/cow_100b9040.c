/* f_0x100b9040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b9040(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, 1u);
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 1u);
    wr32(sp0 - 0x1cu, t1);
    t2 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0xa0u);
    t3 = cow_thiscall(g, COW_IMG(0x1017ad70u), rd32(COW_IMG(0x10631f24u)), 1, t1);
    if (rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) == 0u)
    {
        eax = t3;
        edx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
        goto L_100b90ca;
    }
    eax = t3;
    edx = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
    edi = t2;
    if (edi == 0u) goto L_100b90ca;
    if (eax == 0u) goto L_100b90ca;
    t4 = rd32(edi + 0x34u);
    wr32(sp0 - 0x10u, t4);
    t5 = rd32(edi + 0x38u);
    wr32(sp0 - 0xcu, t5);
    t6 = rd32(edi + 0x3cu);
    wr32(sp0 - 8u, t6);
    t7 = rd32(edi + 0x40u);
    wr32(sp0 - 4u, t7);
    wr32(sp0 - 0x1cu, sp0 - 0x10u);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    wr32(sp0 - 0x24u, eax);
    g->eax = eax;
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    t8 = cow_thiscall(g, COW_IMG(0x1017ad80u), rd32(COW_IMG(0x10631f24u)), 3, eax, sp0 - 0x10u, sp0 - 0x10u);
    t9 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
        goto L_100b90ca;
    }
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return;
L_100b90ca: ;
    wr32(sp0 - 0x1cu, 5u);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t10 = cow_thiscall(g, COW_IMG(0x100afa90u), self, 1, 5u);
    wr16(self + 0x256u, (uint16_t)t10);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b9040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b9040(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
