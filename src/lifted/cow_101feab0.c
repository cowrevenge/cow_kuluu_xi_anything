/* f_0x101feab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101feab0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    t1 = rd32(sp0 + 4u);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x101f7100u), t1, 0);
    if (rd32(t1 + 0x38u) == 0u)
    {
        eax = t2;
        edx = rd32(t1 + 0x38u);
        goto L_101feae6;
    }
    eax = t2;
    edx = rd32(t1 + 0x38u);
    esi = t1;
    if ((int32_t)eax >= (int16_t)rd16(esi + 0x20u)) goto L_101feae6;
    if (eax * 0x54u + edx == 0u)
    {
        eax = eax * 0x54u + edx;
        goto L_101feae6;
    }
    eax = eax * 0x54u + edx;
    esi = rd32(eax + 0x48u);
L_101feae8: ;
    if ((int32_t)esi < 28736) goto L_101feb06;
    if ((int32_t)esi >= 28800) goto L_101feb0e;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x101ec2f0u), eax, rd32(COW_IMG(0x106636a0u)), g->edx, 0, 1, esi);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_101feb5f: ;
    if (rd8(sp0 + 8u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 8u);
        goto L_101feb91;
    }
    if (rd16(rd32(COW_IMG(0x10663aacu)) + 0x32u) == esi)
    {
        eax = rd16(rd32(COW_IMG(0x10663aacu)) + 0x32u);
        goto L_101feb91;
    }
    eax = rd16(rd32(COW_IMG(0x10663aacu)) + 0x32u);
    ecx = rd32(COW_IMG(0x10663aacu));
    if ((int32_t)esi < 28800) goto L_101feb96;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, COW_IMG(0x101fd9f0u), ecx, 1, esi);
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 == 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        goto L_101feb96;
    }
    ecx = t16;
    edx = t17;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t18 = cow_thiscall(g, COW_IMG(0x101fd220u), ecx, 2, esi, 1u);
    t19 = g->edx;
    eax = t18;
    edx = t19;
L_101feb91: ;
    g->edx = edx;
    return eax;
L_101feae6: ;
    esi = 0u;
    goto L_101feae8;
L_101feb06: ;
    if ((int32_t)esi < 28800) goto L_101feb54;
L_101feb0e: ;
    if (rd8(self + 0x10u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x10u);
        t7 = esi * 0x40u + rd16(rd32(COW_IMG(0x10663aacu)) + 0x30u) - 0x1c9040u;
        g->edx = t7;
        t8 = rd16(rd32(COW_IMG(0x10663aacu)) + 0x30u);
        g->esp = sp0 - 8u;
        t9 = cow_thiscall(g, COW_IMG(0x101c8450u), rd32(self + 0x14u), 1, t7);
        t10 = g->edx;
        g->edx = t10;
        t11 = cow_call_regs(g, COW_IMG(0x101ec330u), t9, rd32(COW_IMG(0x106636a0u)), g->edx, 0, 1, t9);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x10u);
        g->edx = edx;
        g->esp = sp0 - 8u;
        t5 = cow_call_regs(g, COW_IMG(0x101ec2f0u), eax, rd32(COW_IMG(0x106636a0u)), g->edx, 0, 1, esi);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    goto L_101feb5f;
L_101feb54: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t13 = cow_call_regs(g, COW_IMG(0x101ec3c0u), eax, rd32(COW_IMG(0x106636a0u)), g->edx, 1, 0);
    t14 = g->edx;
    eax = t13;
    edx = t14;
    goto L_101feb5f;
L_101feb96: ;
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x101fd220u), eax, ecx, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101feab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101feab0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
