/* f_0x101d3fc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101d3fc0(Guest* g)
{
    double d10;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (rd32(sp0 + 4u) != 0u)
    {
        ecx = rd32(sp0 + 4u);
        wr32(sp0 - 0xcu, sp0 + 4u);
        wr32(sp0 - 0x10u, sp0 - 4u);
        g->eax = rd32(ecx);
        g->edx = sp0 - 4u;
        t1 = rd32(ecx);
        g->esp = sp0 - 8u;
        t2 = cow_thiscall_cdecl(g, rd32(t1 + 0x1bcu), ecx, 2, sp0 - 4u, sp0 + 4u);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(sp0 - 0x14u, t2);
        g->ecx = t3;
        g->edx = t4;
        cow_cdecl(g, COW_IMG(0x101c8da0u), 3, t2, sp0 - 4u, sp0 + 4u);
        t5 = g->ecx;
        t6 = g->edx;
        if ((int16_t)self >= 0)
        {
            ecx = t5;
            edx = t6;
            loc_4 = self;
        }
        else
        {
            ecx = t5;
            edx = t6;
            wr32(sp0 - 4u, 0x64u);
            loc_4 = 0x64u;
        }
        if ((int16_t)rd16(sp0 + 4u) < 0)
        {
            wr32(sp0 + 4u, 0x64u);
        }
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t7 = cow_call_regs(g, COW_IMG(0x10014cf0u), 0x64u, g->ecx, g->edx, 1, 0);
        t8 = g->ecx;
        t9 = g->edx;
        d10 = cow_take_float(g);
        g->ecx = t8;
        g->edx = t9;
        fpush(g, d10);
        t11 = cow_call_regs(g, COW_IMG(0x10311c6cu), t7, g->ecx, g->edx, 1, 0);
        t12 = g->ecx;
        t13 = g->edx;
        t14 = rd8(self + 0x858u);
        wr8(self + 0x858u, (uint8_t)((uint8_t)t11 + t14));
        if ((int8_t)((uint8_t)t11 + t14) >= 3)
        {
            eax = t11;
            ecx = (t12 & 0xffffff00u) | (uint8_t)((uint8_t)t11 + t14);
            edx = t13;
            eax = (eax & 0xffffff00u) | rd8(self + 0x859u);
            edx = (edx & 0xffffff00u) | rd8(self + 0x85au);
L_101d4031: ;
            if ((int8_t)((uint8_t)eax + 1u) < (int8_t)edx)
            {
                eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 1u);
                ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 0xfdu);
            }
            else
            {
                eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 1u);
                ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + 0xfdu);
                eax = eax & 0xffffff00u;
            }
            if ((int8_t)ecx >= 3) goto L_101d4031;
            wr8(self + 0x858u, (uint8_t)ecx);
            wr8(self + 0x859u, (uint8_t)eax);
        }
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 0x10u, 0u);
        wr32(sp0 - 0x14u, 0x80808080u);
        t15 = (uint32_t)(int16_t)rd16(sp0 + 4u);
        wr32(sp0 - 0x18u, t15);
        t16 = (uint32_t)(int16_t)rd16(sp0 - 4u);
        wr32(sp0 - 0x1cu, t16);
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + (uint32_t)(int8_t)rd8(self + 0x859u) * 4u + 0x818u), 5, t16, t15, 0x80808080u, 0u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d3fc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d3fc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
