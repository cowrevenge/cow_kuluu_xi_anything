/* f_0x1015dd90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1015dd90(Guest* g)
{
    double d11;
    double d13;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t14;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        t1 = rd32(eax + 4u);
        wr32(sp0 - 8u, t1);
        t2 = rd32(eax + 8u);
        wr32(sp0 - 4u, t2);
        edx = t2;
    }
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x1015edb0u), self, 0);
    if ((uint8_t)t3 == 0u) goto L_1015de4b;
    if (rd8(rd32(COW_IMG(0x104e1d4cu)) + 0x4du) != 2u) goto L_1015de4b;
    if (rd32(self + 0x54u) == 0u) goto L_1015de4b;
    ecx = rd32(self + 0x54u);
    wr32(sp0 - 0x10u, sp0 - 8u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x10118c10u), ecx, 1, sp0 - 8u);
    t5 = g->edx;
    if ((uint8_t)t4 == 0u) goto L_1015de4b;
    edx = t5;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, sp0 - 8u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x10118cb0u), sp0 - 8u, rd32(self + 0x54u), g->edx, 0, 2, sp0 - 8u, 0u);
    t7 = g->edx;
    if ((int16_t)t6 <= 0) goto L_1015de4b;
    eax = t6;
    edx = t7;
    if (rd16(rd32(self + 0x54u) + 0x4cu) == (uint16_t)eax)
    {
        ecx = rd32(self + 0x54u);
        goto L_1015de13;
    }
    ecx = rd32(self + 0x54u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, eax);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, eax, 0u);
    t8 = g->edx;
    wr32(sp0 - 0x10u, 9u);
    cow_fastcall(g, COW_IMG(0x1015dd00u), self, t8, 1, 9u);
    g->esi = rd32(sp0 - 0xcu);
    return;
L_1015de13: ;
    if ((int16_t)rd16(self + 0xb0u) <= 30) goto L_1015de2b;
    wr32(sp0 - 0x10u, 0x1du);
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x1015dd00u), self, edx, 1, 0x1du);
    g->esi = rd32(sp0 - 0xcu);
    return;
L_1015de2b: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t10 = g->edx;
    d11 = cow_take_float(g);
    t12 = (uint32_t)(int16_t)rd16(self + 0xb0u);
    wr32(sp0 - 8u, t12);
    d13 = fr(g, d11 + (double)(int32_t)t12);
    fpush(g, d13);
    t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t9, g->ecx, g->edx, 1, 0);
    wr16(self + 0xb0u, (uint16_t)t14);
L_1015de4b: ;
    g->esi = rd32(sp0 - 0xcu);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015dd90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1015dd90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
