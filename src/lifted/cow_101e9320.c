/* f_0x101e9320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101e9320(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0x10u, 0u);
    wr16(sp0 - 0xeu, 0u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x10118f70u), sp0 - 0x10u, t1, g->edx, 0, 1, sp0 - 0x10u);
    if (rd32(COW_IMG(0x10663648u)) == 0u)
    {
        edi = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x10663648u));
        edi = rd16(eax + 0x1cu);
    }
    if ((int16_t)edi <= (int32_t)(uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - (uint32_t)((int32_t)(uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) >> 0x1fu)) >> 1u))
    {
        eax = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - (uint32_t)((int32_t)(uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) >> 0x1fu)) >> 1u);
        ecx = rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u));
        if ((int16_t)rd16(sp0 - 0x10u) >= (int32_t)eax)
        {
            edx = (uint32_t)(int16_t)rd16(sp0 - 0x10u);
        }
        else
        {
            edx = (uint32_t)(int16_t)rd16(sp0 - 0x10u);
            wr32(sp0 - 0x20u, 1u);
            t9 = rd32(self + 8u);
            wr32(sp0 - 0x24u, t9);
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t10 = cow_call_regs(g, COW_IMG(0x1015e790u), t9, COW_IMG(0x10621838u), g->edx, 0, 2, t9, 1u);
            t11 = g->ecx;
            t12 = g->edx;
            eax = t10;
            ecx = t11;
            edx = t12;
        }
    }
    else
    {
        eax = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - (uint32_t)((int32_t)(uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) >> 0x1fu)) >> 1u);
        edx = (uint32_t)(int16_t)edi;
        if ((int16_t)rd16(sp0 - 0x10u) <= (int32_t)eax)
        {
            ecx = (uint32_t)(int16_t)rd16(sp0 - 0x10u);
        }
        else
        {
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, sp0 - 8u);
            wr32(sp0 - 8u, 0x10u);
            t2 = (uint32_t)(int16_t)rd16(sp0 - 0xeu);
            wr32(sp0 - 4u, t2);
            g->edx = t2;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, COW_IMG(0x101602f0u), COW_IMG(0x10621838u), 3, sp0 - 8u, 0u, 0u);
            t3 = g->edx;
            t4 = (uint32_t)(int16_t)rd16(sp0 - 0xeu);
            wr32(sp0 - 0x20u, t4);
            wr32(sp0 - 0x24u, 0x10u);
            wr32(sp0 - 4u, t4);
            g->edx = t3;
            t5 = rd32(self + 8u);
            t6 = cow_call_regs(g, COW_IMG(0x10119110u), t4, t5, g->edx, 0, 2, 0x10u, t4);
            t7 = g->ecx;
            t8 = g->edx;
            eax = t6;
            ecx = t7;
            edx = t8;
        }
    }
    t13 = rd8(self + 0x19u);
    t14 = rd8(self + 0x1au);
    wr8(self + 0x19u, (uint8_t)(t13 + t14));
    if ((uint8_t)(t13 + t14) >= 0x20u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(t13 + t14);
        ecx = (ecx & 0xffffff00u) | t14;
        edx = (edx & 0xffffff00u) | (uint8_t)(t13 + t14);
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(t13 + t14);
        ecx = (ecx & 0xffffff00u) | t14;
        edx = (edx & 0xffffff00u) | (uint8_t)(t13 + t14);
        wr8(self + 0x19u, 0x20u);
        wr8(self + 0x1au, 8u);
    }
    if (rd8(self + 0x19u) <= 0x80u)
    {
        eax = (eax & 0xffffff00u) | 0x80u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | 0x80u;
        wr8(self + 0x19u, (uint8_t)eax);
        wr8(self + 0x1au, 0xf8u);
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e9320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e9320(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
