/* f_0x101376a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101376a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x10138800u), in_eax, self, g->edx, 1, 0);
    t2 = g->edx;
    t3 = rd16(self + 0x58u);
    wr8(self + 0x60u, 1u);
    wr32(self + 0x64u, 0u);
    wr32(self + 0x20u, 0u);
    t4 = (t1 & 0xffff0000u) | t3;
    wr32(sp0 - 0x18u, t4);
    t5 = (t2 & 0xffff0000u) | rd16(rd32(COW_IMG(0x10578158u)) + 0xcu);
    wr32(sp0 - 0x1cu, t5);
    cow_fastcall(g, COW_IMG(0x10118530u), rd32(self + 8u), t5, 2, t5, t4);
    t6 = g->edx;
    wr32(sp0 - 0x18u, sp0 - 8u);
    t7 = rd32(self + 8u);
    wr8(self + 0x24u, 1u);
    wr8(self + 0x25u, 0u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    cow_thiscall(g, COW_IMG(0x1011a710u), t7, 1, sp0 - 8u);
    t8 = g->ecx;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 1u);
    t9 = (uint32_t)(int16_t)rd16(sp0 - 2u) + (uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - (uint32_t)(int16_t)rd16(sp0 - 6u) - 0x1c0u;
    t10 = rd16(COW_IMG(0x106218bau));
    t11 = rd16(COW_IMG(0x106218b6u));
    wr32(self + 0x5cu, t9);
    wr32(sp0 - 0x24u, (uint16_t)t9);
    t12 = (uint32_t)((int32_t)((uint32_t)(int16_t)(t10 - t11) + ((uint32_t)((int32_t)((uint32_t)(int16_t)(t10 - t11) - 0x1c0u) >> 0x1fu) & 0xfu) - 0x1c0u) >> 4u) + 0x17u;
    t13 = rd32(sp0 - 6u);
    wr32(self + 0x58u, t12);
    t14 = (t9 & 0xffff0000u) | (uint16_t)(rd16(rd32(COW_IMG(0x1062193cu)) + 0x32u) + 0xeu);
    wr32(sp0 - 0x28u, t14);
    wr32(sp0 - 0x2cu, t13);
    t15 = rd32(sp0 - 8u);
    wr32(sp0 - 0x30u, t15);
    g->eax = t15;
    t16 = cow_thiscall(g, COW_IMG(0x1011a5a0u), rd32(self + 8u), 7, t15, t13, t14, (uint16_t)t9, 1u, 0u, 0u);
    t17 = rd32(self + 8u);
    wr32(self + 0x54u, 0u);
    wr32(sp0 - 0x18u, 1u);
    wr8(t17 + 0x85u, 0u);
    t18 = rd32(self + 0x58u);
    wr32(self + 0x1cu, t18);
    wr32(self + 0x28u, 0u);
    g->ecx = t17;
    g->edx = t18;
    t19 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 == 0u)
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        edi = 0u;
    }
    else
    {
        eax = t19;
        ecx = t20;
        edx = t21;
        edi = rd32(rd32(eax) + 0x530u);
        eax = rd32(eax);
    }
    wr32(sp0 - 0x18u, 2u);
    wr32(self + 0xd8u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t22 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
    t23 = g->edx;
    if (t22 == 0u)
    {
        eax = t22;
        edx = t23;
    }
    else
    {
        eax = t22;
        edx = t23;
        edi = rd32(rd32(eax) + 0x868u);
    }
    wr32(self + 0xdcu, edi);
    if (eax == 0u) goto L_101377bf;
    t24 = rd32(rd32(eax) + 0x86cu);
    t25 = rd32(eax);
    t26 = rd32(sp0 - 0x14u);
    wr32(self + 0xe0u, t24);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = t26;
    g->edx = t25;
    return t24;
L_101377bf: ;
    wr32(self + 0xe0u, edi);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101376a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101376a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
