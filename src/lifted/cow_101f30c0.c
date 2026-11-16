/* f_0x101f30c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101f30c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(sp0 + 8u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(sp0 + 8u);
        edx = in_edx;
        goto L_101f31d1;
    }
    eax = (in_eax & 0xffffff00u) | rd8(sp0 + 8u);
    if (arg1 == 0u)
    {
        edx = in_edx;
        goto L_101f31d1;
    }
    if (rd16(arg1) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1);
        edx = in_edx;
        goto L_101f31d1;
    }
    eax = (eax & 0xffff0000u) | rd16(arg1);
    g->eax = (uint16_t)eax;
    g->ecx = rd32(COW_IMG(0x10621808u));
    t1 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0xcu;
    t2 = cow_stdcall(g, COW_IMG(0x1015bc40u), 1, (uint16_t)eax);
    t3 = g->ecx;
    t4 = rd8(t2 + 0x1b3u);
    t5 = rd32(t2 + 8u);
    wr8(t2 + 0x1b3u, (uint8_t)(t4 + 1u));
    t6 = rd16(arg1);
    wr8(sp0 + 8u, t6 == 0x201u);
    if ((t5 >> 8u & 0xc0u) != 0u)
    {
        eax = (t2 & 0xffff0000u) | t6;
        edx = t5;
        esi = t2;
        goto L_101f3173;
    }
    eax = (t2 & 0xffff0000u) | t6;
    ecx = (t3 & 0xffffff00u) | t6 == 0x201u;
    edx = t5;
    esi = t2;
    if ((uint8_t)ecx != 0u) goto L_101f3173;
    t7 = rd16(esi + 4u);
    g->eax = eax;
    g->ecx = t7;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_cdecl(g, COW_IMG(0x101cb8a0u), 4, eax, t7, arg1 + 0x10u, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        eax = t8;
        edx = t10;
        goto L_101f3173;
    }
    eax = t8;
    ecx = t9;
    t11 = rd16(esi + 4u);
    t12 = (eax & 0xffff0000u) | rd16(arg1);
    g->eax = t12;
    g->ecx = ecx;
    g->edx = t11;
    g->esp = sp0 - 0xcu;
    t13 = cow_cdecl(g, COW_IMG(0x101cb990u), 4, t12, t11, arg1 + 0x10u, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 != 0u)
    {
        eax = t13;
        edx = t15;
        goto L_101f3173;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_call_regs(g, COW_IMG(0x101f2ff0u), eax, g->ecx, g->edx, 1, 2, arg1, 1u);
    t17 = g->edx;
    t18 = rd8(esi + 0x1b3u);
    wr8(esi + 0x1b3u, (uint8_t)(t18 - 1u));
    g->edx = t17;
    return (t16 & 0xffffff00u) | (uint8_t)(t18 - 1u);
L_101f3173: ;
    g->eax = eax;
    g->ecx = esi + 0x1b4u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x30u);
    t20 = g->ecx;
    t21 = g->edx;
    g->edx = t21;
    g->esp = sp0 - 4u;
    t22 = cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x106636c0u), t19, esi + 0x1b4u, in_esi, in_ebp);
    t23 = g->edx;
    if (rd8(sp0 + 8u) == 0u)
    {
        eax = (t22 & 0xffffff00u) | rd8(sp0 + 8u);
        ecx = rd32(COW_IMG(0x10664520u));
        edx = t23;
        loc_28 = COW_IMG(0x101f2ff0u);
    }
    else
    {
        eax = (t22 & 0xffffff00u) | rd8(sp0 + 8u);
        ecx = rd32(COW_IMG(0x10664520u));
        edx = t23;
        loc_28 = COW_IMG(0x101f3040u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t24 = cow_thiscall(g, COW_IMG(0x10210e30u), ecx, 7, loc_28, arg1, COW_IMG(0x106636c0u), 0u, 0u, 1u, 0u);
    t25 = g->edx;
    t26 = rd8(esi + 0x1b3u);
    wr8(esi + 0x1b3u, (uint8_t)(t26 - 1u));
    eax = (t24 & 0xffffff00u) | (uint8_t)(t26 - 1u);
    edx = t25;
L_101f31d1: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f30c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f30c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
