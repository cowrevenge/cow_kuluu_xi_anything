/* f_0x100139e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100139e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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

    if ((uint32_t)(int16_t)rd16(self + 4u) == 0u) goto L_10013a25;
    eax = (uint32_t)(int16_t)rd16(self + 4u);
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10013ab3;
    }
    eax = eax - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10018840u), eax, rd32(COW_IMG(0x10456d1cu)), g->edx, 1, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        goto L_10013ab3;
    }
    eax = t1;
    edx = t2;
    if (rd32(COW_IMG(0x10456d1cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10456d1cu));
        g->eax = rd32(ecx);
        t3 = rd32(ecx);
        g->esp = sp0 - 4u;
        t4 = cow_thiscall(g, rd32(t3 + 0x18u), ecx, 1, 1u);
        wr32(COW_IMG(0x10456d1cu), 0u);
        eax = t4;
    }
    return (eax & 0xffffff00u) | 1u;
L_10013a25: ;
    if ((int32_t)rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x20u) <= 0)
    {
        eax = rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x20u);
        ecx = rd32(COW_IMG(0x103d3cb8u));
        goto L_10013a5d;
    }
    eax = rd32(rd32(COW_IMG(0x103d3cb8u)) + 0x20u);
    ecx = rd32(COW_IMG(0x103d3cb8u));
    if ((int32_t)eax > 2) goto L_10013a5d;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, rd32(COW_IMG(0x10329118u)), ecx, 2, 0x104u, COW_IMG(0x10456798u));
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    t8 = cow_call_regs(g, COW_IMG(0x10313560u), t5, g->ecx, t7, 1, 3, COW_IMG(0x10456798u), COW_IMG(0x10350324u), 0x103u);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
L_10013a71: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t14 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x128u);
    t15 = g->edx;
    if (t14 == 0u)
    {
        eax = t14;
        goto L_10013a9e;
    }
    eax = t14;
    edx = t15;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, COW_IMG(0x100186c0u), eax, 1, COW_IMG(0x10456798u));
    t17 = g->edx;
    wr32(COW_IMG(0x10456d1cu), t16);
    if (t16 != 0u)
    {
        eax = t16;
        edx = t17;
        goto L_10013aac;
    }
    eax = t16;
    return (eax & 0xffffff00u) | 1u;
L_10013a5d: ;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t11 = cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, COW_IMG(0x10456798u), COW_IMG(0x10350310u), 0x103u);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    goto L_10013a71;
L_10013a9e: ;
    wr32(COW_IMG(0x10456d1cu), 0u);
    return (eax & 0xffffff00u) | 1u;
L_10013aac: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t18 = cow_thiscall(g, COW_IMG(0x10010d00u), self, 0);
    eax = t18;
L_10013ab3: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100139e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100139e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
