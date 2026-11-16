/* f_0x101d7ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101d7ac0(Guest* g)
{
    double d4;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 96u);

    if (rd8(COW_IMG(0x1066344cu)) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1066344cu));
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x54u;
        t1 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t2 = g->ecx;
        t3 = g->edx;
        d4 = cow_take_float(g);
        g->edx = t3;
        fpush(g, d4);
        t5 = cow_call_regs(g, COW_IMG(0x10311c6cu), t1, g->ecx, g->edx, 1, 0);
        t6 = g->edx;
        wr16(COW_IMG(0x10663450u), (uint16_t)(rd16(COW_IMG(0x10663450u)) - (uint16_t)t5));
        if ((uint8_t)arg1 != 0u)
        {
            edx = t6;
            goto L_101d7af7;
        }
        edx = t6;
        if ((int16_t)rd16(COW_IMG(0x10663450u)) >= 0) goto L_101d7bb0;
L_101d7af7: ;
        wr32(sp0 - 0x58u, in_edi);
        if ((uint32_t)(int8_t)rd8(COW_IMG(0x1066344du)) == 1u) goto L_101d7b41;
        eax = (uint32_t)(int8_t)rd8(COW_IMG(0x1066344du)) - 1u;
        if (eax == 1u) goto L_101d7b1b;
        eax = eax - 1u;
        if (eax == 1u)
        {
            wr32(sp0 - 0x5cu, 0x70u);
            g->edx = edx;
            g->esp = sp0 - 0x58u;
            cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x70u);
            t7 = g->edx;
            edx = t7;
        }
L_101d7b92: ;
        if (rd32(COW_IMG(0x105781f8u)) != 0u)
        {
            eax = rd32(COW_IMG(0x105781f8u));
            wr32(sp0 - 0x58u, 0x80000000u);
            g->esp = sp0 - 0x54u;
            cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 0x80000000u);
        }
        wr8(COW_IMG(0x1066344cu), 0u);
    }
L_101d7bb0: ;
    return;
L_101d7b1b: ;
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    eax = rd32(COW_IMG(0x10663454u));
    edx = (-(1u < rd32(COW_IMG(0x10663454u))) & 0xbu) + 0xb2u;
L_101d7b65: ;
    wr32(sp0 - 0x44u, eax);
    wr32(sp0 - 0x5cu, sp0 - 0x54u);
    wr32(sp0 - 0x40u, rd32(COW_IMG(0x10663458u)));
    wr32(sp0 - 0x48u, rd16(COW_IMG(0x10663452u)));
    g->edx = rd32(COW_IMG(0x10663458u));
    t8 = rd32(COW_IMG(0x10663458u));
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t9 = g->edx;
    edx = t9;
    goto L_101d7b92;
L_101d7b41: ;
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    eax = rd32(COW_IMG(0x10663454u));
    edx = (-(1u < rd32(COW_IMG(0x10663454u))) & 0xbu) + 0xb1u;
    goto L_101d7b65;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d7ac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d7ac0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
