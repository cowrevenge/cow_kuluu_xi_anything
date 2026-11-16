/* f_0x1012c7f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1012c7f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x105781ecu)), 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x1011ba40u), rd32(COW_IMG(0x1057817cu)), 0);
    t4 = g->edx;
    wr32(sp0 - 0x10u, 0x10u);
    wr32(sp0 - 0xcu, 0u);
    if ((uint8_t)t3 == 0u)
    {
        edx = t4;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t1;
        goto L_1012c85d;
    }
    edx = t4;
    if (rd32(COW_IMG(0x1057817cu)) == 0u)
    {
        ecx = 0u;
        loc_c = 0u;
        goto L_1012c873;
    }
    eax = rd32(COW_IMG(0x1057817cu));
    if (rd32(eax + 8u) == 0u)
    {
        ecx = 0u;
        edx = rd32(eax + 8u);
        loc_c = 0u;
        goto L_1012c873;
    }
    edx = rd32(eax + 8u);
    wr16(sp0 - 8u, 0u);
    wr32(sp0 - 0x24u, sp0 - 8u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, edx, g->edx, 0, 1, sp0 - 8u);
    t5 = g->edx;
    ecx = (uint32_t)(int16_t)rd16(sp0 - 2u);
    edx = t5;
L_1012c86b: ;
    wr32(sp0 - 0x10u, 0x10u);
    wr32(sp0 - 0xcu, ecx);
    loc_c = ecx;
L_1012c873: ;
    if (rd16(rd32(self + 8u) + 0x52u) != 0x10u) goto L_1012c884;
    eax = rd32(self + 8u);
    if ((uint32_t)(int16_t)rd16(eax + 0x54u) == ecx)
    {
        edx = (uint32_t)(int16_t)rd16(eax + 0x54u);
        goto L_1012c8a7;
    }
    edx = (uint32_t)(int16_t)rd16(eax + 0x54u);
L_1012c884: ;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, sp0 - 0x10u);
    g->eax = sp0 - 0x10u;
    g->esp = sp0 - 0x20u;
    t6 = cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 0x10u, 0u, 0u);
    t7 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x24u, t7);
    wr32(sp0 - 0x28u, 0x10u);
    g->edx = 0x10u;
    t8 = cow_call_regs(g, COW_IMG(0x10119110u), t6, rd32(self + 8u), g->edx, 0, 2, 0x10u, t7);
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_1012c8a7: ;
    g->edx = edx;
    return eax;
L_1012c85d: ;
    if ((uint8_t)ebx != 0u)
    {
        ecx = 0x5eu;
    }
    else
    {
        ecx = 0x2fu;
    }
    goto L_1012c86b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012c7f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1012c7f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
