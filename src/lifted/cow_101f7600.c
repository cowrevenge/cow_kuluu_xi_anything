/* f_0x101f7600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101f7600(Guest* g)
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 56u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_101f7725;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u) goto L_101f7725;
    eax = t1;
    ecx = t2;
    edx = t3;
    if ((uint8_t)arg1 == 0u) goto L_101f763c;
    wr32(sp0 - 0x18u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x101cc070u), 1, 0u);
    t5 = g->edx;
    if ((uint8_t)t4 != 0u) goto L_101f7725;
    edx = t5;
L_101f763c: ;
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t6 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t7 = g->edx;
    g->eax = rd32(t6);
    t8 = rd32(t6);
    t9 = cow_thiscall(g, rd32(t8 + 0x1bcu), t6, 0);
    wr32(sp0 - 0x10u, rd32(t9));
    t10 = rd32(t9);
    t11 = cow_thiscall(g, rd32(rd32(t6) + 0x1bcu), t6, 0);
    t12 = rd32(t11 + 4u);
    wr32(sp0 - 0xcu, t12);
    g->eax = t12;
    t13 = cow_thiscall(g, rd32(rd32(t6) + 0x1bcu), t6, 0);
    t14 = rd32(t13 + 8u);
    wr32(sp0 - 8u, t14);
    g->edx = rd32(t6);
    t15 = rd32(t6);
    cow_thiscall(g, rd32(t15 + 0x1bcu), t6, 0);
    t16 = g->edx;
    t17 = rd32(sp0 - 8u);
    wr32(sp0 - 0x20u, t17);
    t18 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x24u, t18);
    t19 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x28u, t19);
    t20 = cow_thiscall(g, COW_IMG(0x101811d0u), rd32(COW_IMG(0x10631f24u)), 3, t19, t18, t17);
    wr32(sp0 - 0x20u, t17);
    wr32(sp0 - 0x24u, t19);
    wr32(sp0 - 0x28u, sp0 - 0x14u);
    wr32(sp0 - 0x2cu, sp0 - 0x12u);
    wr32(sp0 - 0x30u, t20);
    t21 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    wr32(sp0 - 0x34u, t21);
    g->ecx = t21;
    t22 = rd32(COW_IMG(0x104dfd98u));
    t23 = cow_call_regs(g, COW_IMG(0x101f74f0u), g->eax, g->ecx, sp0 - 0x12u, 1, 6, t21, t20, sp0 - 0x12u, sp0 - 0x14u, t19, t17);
    t24 = g->ecx;
    t25 = g->edx;
    if ((uint8_t)t23 == 0u)
    {
        ecx = t24;
        edx = t25;
        goto L_101f770a;
    }
    ecx = t24;
    t26 = (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(sp0 - 0x14u) + ((uint32_t)((int32_t)((uint32_t)(int16_t)rd16(sp0 - 0x14u) - 0x10u) >> 0x1fu) & 0x1fu) - 0x10u) >> 5u) + 1u;
    wr32(sp0 - 0x18u, t26);
    t27 = (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(sp0 - 0x12u) + ((uint32_t)((int32_t)((uint32_t)(int16_t)rd16(sp0 - 0x12u) - 0x10u) >> 0x1fu) & 0x1fu) - 0x10u) >> 5u) + 0x41u;
    wr32(sp0 - 0x1cu, t27);
    wr32(sp0 - 0x20u, COW_IMG(0x10384fecu));
    wr32(sp0 - 0x24u, COW_IMG(0x10663798u));
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x10663798u), COW_IMG(0x10384fecu), t27, t26, rd32(sp0 - 0x14u));
    return COW_IMG(0x10663798u);
L_101f770a: ;
    wr32(sp0 - 0x18u, COW_IMG(0x10384fe4u));
    wr32(sp0 - 0x1cu, COW_IMG(0x10663798u));
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x10663798u), COW_IMG(0x10384fe4u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    return COW_IMG(0x10663798u);
L_101f7725: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f7600(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
