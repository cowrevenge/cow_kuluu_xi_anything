/* f_0x101fb9c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101fb9c0(Guest* g)
{
    double d14;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    if (rd8(self + 0x64u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x64u);
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x64u);
        g->esi = self;
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x101fb4b0u), self, 0);
        t2 = g->ecx;
        t3 = g->edx;
        wr16(self + 0x60u, 1u);
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    if (rd8(self + 0x65u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x65u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x65u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t4 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
        t5 = g->ecx;
        t6 = g->edx;
        d7 = cow_take_float(g);
        g->ecx = t5;
        g->edx = t6;
        fpush(g, d7);
        t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), t4, g->ecx, g->edx, 1, 0);
        t9 = g->ecx;
        t10 = g->edx;
        wr16(self + 0x60u, (uint16_t)(rd16(self + 0x60u) - (uint16_t)t8));
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    if ((int16_t)rd16(self + 0x60u) < 0)
    {
        wr8(self + 0x64u, 1u);
    }
    if (rd8(self + 0x65u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x65u);
        goto L_101fba49;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x65u);
    if ((int16_t)rd16(self + 0x62u) < 0) goto L_101fba49;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t12 = g->ecx;
    t13 = g->edx;
    d14 = cow_take_float(g);
    g->edx = t13;
    fpush(g, d14);
    t15 = cow_call_regs(g, COW_IMG(0x10311c6cu), t11, g->ecx, g->edx, 1, 0);
    t16 = g->edx;
    wr16(self + 0x62u, (uint16_t)(rd16(self + 0x62u) - (uint16_t)t15));
    if ((int16_t)rd16(self + 0x62u) >= 0)
    {
        eax = t15;
        edx = t16;
        goto L_101fba49;
    }
    edx = t16;
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t17 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 0x80u);
        t18 = g->edx;
        eax = t17;
        edx = t18;
    }
    if (rd16(self + 0x52u) != 0u) goto L_101fba49;
    t19 = rd32(COW_IMG(0x10578158u));
    wr32(sp0 + 4u, 0x8au);
    g->esp = sp0;
    g->esi = in_esi;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10129e30u), eax, t19, edx);
L_101fba49: ;
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fb9c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fb9c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
