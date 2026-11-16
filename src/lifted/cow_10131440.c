/* f_0x10131440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10131440(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    if ((int16_t)rd32(sp0 + 4u) <= (int16_t)rd16(self + 0x18u))
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x18u);
        goto L_1013145f;
    }
    eax = (in_eax & 0xffff0000u) | rd16(self + 0x18u);
    edx = rd32(sp0 + 4u);
    if ((int16_t)edx < (int16_t)rd16(self + 0x1au))
    {
        edi = edx;
        goto L_10131461;
    }
    eax = (eax & 0xffff0000u) | rd16(self + 0x1au);
L_1013145f: ;
    edi = eax;
L_10131461: ;
    if ((int16_t)edi >= 0)
    {
        eax = edi;
    }
    else
    {
        eax = edi;
        eax = -eax;
    }
    if (rd8(self + 0x1cu) < 0x20u)
    {
        ebx = (in_ebx & 0xffffff00u) | rd8(self + 0x1cu);
    }
    else
    {
        ebx = (in_ebx & 0xffffff00u) | rd8(self + 0x1cu);
        ebx = (ebx & 0xffffff00u) | 0x1fu;
    }
    wr8(sp0 + 4u, (uint8_t)ebx);
    t1 = rd32(sp0 + 4u);
    wr8(sp0 + (uint8_t)t1 - 0x20u, 0u);
    if ((uint8_t)ebx == 0u)
    {
        esi = t1;
    }
    else
    {
        t2 = cow_divs(g, (uint32_t)(int16_t)eax, 0xau);
        t3 = cow_mods(g, (uint32_t)(int16_t)eax, 0xau);
        wr8(sp0 + 4u, (uint8_t)((uint8_t)ebx - 1u));
        t4 = rd32(sp0 + 4u);
        wr8(sp0 + (uint8_t)t4 - 0x20u, (uint8_t)((uint8_t)t3 + 0x30u));
        if ((uint8_t)((uint8_t)ebx - 1u) == 0u)
        {
            esi = t4;
            goto L_10131503;
        }
        eax = t2;
        ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx - 1u);
        esi = t4;
L_101314b5: ;
        if ((int16_t)eax <= 0) goto L_101314e4;
        t5 = cow_divs(g, (uint32_t)(int16_t)eax, 0xau);
        t6 = cow_mods(g, (uint32_t)(int16_t)eax, 0xau);
        wr8(sp0 + 4u, (uint8_t)((uint8_t)ebx - 1u));
        t7 = rd32(sp0 + 4u);
        wr8(sp0 + (uint8_t)t7 - 0x20u, (uint8_t)((uint8_t)t6 + 0x30u));
        if ((uint8_t)((uint8_t)ebx - 1u) != 0u)
        {
            eax = t5;
            ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx - 1u);
            esi = t7;
            goto L_101314b5;
        }
        esi = t7;
    }
L_10131503: ;
    wr32(sp0 - 0x34u, arg2);
    t9 = sp0 + (uint8_t)esi - 0x20u;
    wr32(sp0 - 0x38u, t9);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x10131340u), self, 2, t9, arg2);
    return;
L_101314e4: ;
    if ((uint8_t)ebx != 0u)
    {
        if ((int16_t)edi < 0)
        {
            wr8(sp0 + 4u, (uint8_t)((uint8_t)ebx - 1u));
            t8 = rd32(sp0 + 4u);
            wr8(sp0 + (uint8_t)t8 - 0x20u, 0x2du);
            esi = t8;
        }
    }
    goto L_10131503;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10131440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10131440(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
