/* f_0x10242060 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10242060(Guest* g)
{
    double d10;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x1cu) == 1u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_10242181;
    }
    wr32(self + 0x28u, 0u);
    wr32(self + 0x2cu, 0u);
    if ((uint32_t)(int16_t)arg1 - 1u > 8u)
    {
        eax = (uint32_t)(int16_t)arg1 - 1u;
        edx = in_edx;
        goto L_10242181;
    }
    t1 = rd32(COW_IMG(0x10242188u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10242097u: goto L_10242097;
    case 0x102420e8u: goto L_102420e8;
    case 0x10242139u: goto L_10242139;
    case 0x10242169u: goto L_10242169;
    case 0x10242181u: eax = (uint32_t)(int16_t)arg1 - 1u; edx = in_edx; goto L_10242181;
    default: rt_fatal(g, COW_IMG(0x10242090u), "switch");
    }
    return 0;
L_10242097: ;
    t16 = (uint32_t)(int16_t)arg2 - 1u;
    wr32(COW_IMG(0x1066908cu), t16);
    if (t16 == rd32(self + 0x18u))
    {
        eax = t16;
    }
    else
    {
        eax = t16;
        ecx = rd32(self + 0x18u);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
        eax = rd32(COW_IMG(0x1066908cu));
    }
    wr32(self + 0x18u, eax);
    if (rd32(self + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0xacu) == 0u)
    {
        eax = rd32(COW_IMG(0x1066908cu));
        edx = rd32(COW_IMG(0x1066908cu)) * 0xb0u;
        goto L_10242181;
    }
    eax = rd32(COW_IMG(0x1066908cu));
    edx = rd32(COW_IMG(0x1066908cu)) * 0xb0u;
    edi = rd32(self + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0xacu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall(g, COW_IMG(0x102421e0u), self, 1, 0u);
    t18 = g->edx;
    wr32(COW_IMG(0x10487fb0u), edi);
    g->edx = t18;
    return t17;
L_102420e8: ;
    if (rd32(COW_IMG(0x10669084u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10669084u));
        edx = in_edx;
        goto L_10242181;
    }
    eax = rd32(COW_IMG(0x10669084u));
    if (rd32(eax + 8u) == 0u)
    {
        edx = in_edx;
        goto L_10242181;
    }
    ecx = rd32(eax + 8u);
    if (rd32(self + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x68u) != 0u)
    {
        eax = rd32(COW_IMG(0x1066908cu)) * 0xb0u;
        edx = rd32(self + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x68u);
        goto L_10242121;
    }
    eax = rd32(COW_IMG(0x1066908cu)) * 0xb0u;
    edx = rd32(self + rd32(COW_IMG(0x1066908cu)) * 0xb0u + 0x68u);
L_10242116: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t9 = g->edx;
    d10 = cow_take_float(g);
    g->edx = t9;
    fpush(g, d10);
    return t8;
L_10242121: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t11 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, ecx, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x10037e90u), t12, 0);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_10242139: ;
    t5 = (uint32_t)(int16_t)arg2 - 1u;
    wr32(COW_IMG(0x1066908cu), t5);
    if (rd32(self + t5 * 0xb0u + 0x68u) == 0u)
    {
        eax = rd32(self + t5 * 0xb0u + 0x68u);
        ecx = t5 * 5u;
        edx = t5 * 0xb0u;
        goto L_10242116;
    }
    eax = rd32(self + t5 * 0xb0u + 0x68u);
    ecx = t5 * 5u;
    edx = t5 * 0xb0u;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t6 = g->edx;
    t7 = rd32(self + 8u);
    wr32(self + 0x1cu, 1u);
    wr8(t7 + 0x5du, 1u);
    g->edx = t6;
    return t7;
L_10242169: ;
    t2 = rd32(self + 8u);
    wr32(self + 0x1cu, 1u);
    wr8(t2 + 0x5du, 1u);
    wr32(COW_IMG(0x1066908cu), 0xffffffffu);
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x10037bf0u), t2, 0);
    t4 = g->edx;
    eax = t3;
    edx = t4;
L_10242181: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10242060(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10242060(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
