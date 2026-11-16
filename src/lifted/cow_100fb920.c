/* f_0x100fb920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_100fb920(Guest* g)
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xau, 1u, 1u);
    if (t1 != 0u)
    {
        esi = t1;
        goto L_100fb93b;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_100fb93b: ;
    t2 = rd32(arg3 + 0x1098u);
    g->eax = arg3 + 0x1048u;
    g->ecx = t2;
    g->edx = esi + 0x40u;
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x100dd800u), 6, esi + 0x40u, 0x10u, arg2, 0xfu, arg3 + 0x1048u, t2);
    t4 = g->ecx;
    t5 = g->edx;
    if (t3 == 0x10u)
    {
        ecx = t4;
        edx = t5;
        goto L_100fb96b;
    }
    eax = t3;
    return eax & 0xffffff00u;
L_100fb96b: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10312090u), esi + 0x31u, g->ecx, g->edx, 1, 3, esi + 0x31u, arg2, 0xfu);
    t6 = g->edx;
    wr32(esi + 0xcu, arg1);
    wr16(esi + 0x58u, (uint8_t)arg4);
    g->ecx = esi + 0x22u;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10312090u), arg5, g->ecx, g->edx, 1, 3, esi + 0x22u, arg5, 0xfu);
    t7 = g->ecx;
    wr8(esi + 0x30u, 0u);
    eax = arg6;
    ecx = t7;
    edx = esi - arg6 + 0x54u;
L_100fb9aa: ;
    t8 = rd8(eax);
    wr8(eax + edx, (uint8_t)t8);
    if ((uint8_t)t8 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t8;
        goto L_100fb9aa;
    }
    ecx = (ecx & 0xffffff00u) | t8;
    wr32(esi + 0x50u, arg7);
    t9 = rd16(COW_IMG(0x104df920u));
    wr16(esi + 6u, (uint16_t)t9);
    t10 = rd32(COW_IMG(0x104df924u));
    wr32(esi + 8u, t10);
    g->eax = arg7;
    g->ecx = (ecx & 0xffff0000u) | t9;
    g->esp = sp0 - 8u;
    t11 = cow_call_regs(g, COW_IMG(0x10253640u), g->eax, g->ecx, t10, 1, 0);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        if (eax != 0xfffffffeu)
        {
            t14 = rd16(eax);
            wr16(esi + 0x5au, (uint16_t)t14);
            eax = (eax & 0xffff0000u) | t14;
        }
        else
        {
            wr16(esi + 0x5au, 0xfffeu);
        }
    }
    else
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        wr16(esi + 0x5au, 0xffffu);
    }
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 8u;
    t15 = cow_call_regs(g, COW_IMG(0x102536c0u), g->eax, g->ecx, edx, 1, 0);
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 == 0u)
    {
        ecx = t16;
        edx = t17;
    }
    else
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        if (eax != 0xfffffffeu)
        {
            t18 = rd16(eax);
            wr16(esi + 0x5au, (uint16_t)t18);
            ecx = (ecx & 0xffff0000u) | t18;
        }
    }
    wr8(esi + 4u, 0u);
    eax = 8u;
    ecx = ecx & 0xffffff00u;
L_100fba13: ;
    if (eax + 1u < 0x5cu)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + rd8(eax + esi));
        edx = (edx & 0xffffff00u) | rd8(eax + esi);
        eax = eax + 1u;
        goto L_100fba13;
    }
    ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx + rd8(eax + esi));
    edx = (edx & 0xffffff00u) | rd8(eax + esi);
    eax = eax + 1u;
    wr8(esi + 4u, (uint8_t)ecx);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t19 = cow_cdecl(g, COW_IMG(0x100ddd20u), 3, esi, 0x5cu, 0u);
    t20 = g->ecx;
    t21 = g->edx;
    g->esp = sp0 - 0x14u;
    t22 = cow_call_regs(g, COW_IMG(0x100fa940u), t19, g->ecx, g->edx, 1, 1, 1u);
    return (t22 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fb920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fb920(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
