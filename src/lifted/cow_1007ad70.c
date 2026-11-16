/* f_0x1007ad70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007ad70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_c;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(sp0 + 0xcu);
    t2 = cow_call_regs(g, COW_IMG(0x1007a1c0u), t1, self, in_edx, 1, 4, t1, 0u, 0u, 0u);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        goto L_1007adae;
    }
    eax = t2;
    edx = t3;
    if ((int32_t)rd32(sp0 + 8u) <= 0) goto L_1007adae;
    ecx = rd32(sp0 + 8u);
    if ((int32_t)ecx >= 81) goto L_1007adae;
    if (rd8(COW_IMG(0x1047d498u)) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(COW_IMG(0x1047d498u));
        goto L_1007ada1;
    }
    return (eax & 0xffffff00u) | 1u;
L_1007ada1: ;
    wr32(sp0 + 0xcu, eax);
    wr32(sp0 + 8u, ecx);
    if (rd32(sp0 + 0xcu) == 0u) goto L_101f0447;
    edi = rd32(sp0 + 0xcu);
    if ((uint8_t)rd32(sp0 + 8u) == 0u) goto L_101f0447;
    ebx = rd32(sp0 + 8u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t4 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, arg1);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)ebx >= (uint8_t)t4)
    {
        eax = t4;
        goto L_101f0447;
    }
    ecx = t5;
    edx = t6;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t7 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, arg1, ebx);
    t8 = g->ecx;
    t9 = g->edx;
    t10 = rd32(COW_IMG(0x10480af0u) + rd32(edi) * 4u);
    if (t7 == 0u)
    {
        eax = t10;
        goto L_101f0447;
    }
    eax = t10;
    ecx = t8;
    edx = t9;
    esi = t7;
    loc_4 = t10;
    if (eax == 0u) goto L_101f0447;
    wr8(sp0 + 0xcu, 0u);
    g->ebx = ebx & 0xffffff00u;
    g->esp = sp0 - 0x18u;
    t11 = cow_call_regs(g, COW_IMG(0x101cc3a0u), g->eax, ecx, edx, 1, 3, esi, arg1, in_edi);
    t12 = g->edx;
    g->edx = t12;
    t13 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x1cu;
    t14 = cow_thiscall(g, COW_IMG(0x1015bc40u), t13, 1, rd16(esi));
    t15 = g->ecx;
    t16 = g->edx;
    t17 = rd8(t14 + 0x1b3u);
    wr8(t14 + 0x1b3u, (uint8_t)(t17 + 1u));
    t18 = (t14 & 0xffff0000u) | rd16(t14 + 0x26u);
    if (rd16(t14 + 0x26u) != 0u)
    {
        eax = t18;
        ecx = (t15 & 0xffffff00u) | (uint8_t)(t17 + 1u);
        edx = t16;
        ebx = ebx & 0xffffff00u;
        ebp = t18;
        esi = t14;
        loc_c = (uint8_t)t11 << 0x18u;
    }
    else
    {
        eax = t18;
        ecx = (t15 & 0xffffff00u) | (uint8_t)(t17 + 1u);
        edx = t16;
        ebx = ebx & 0xffffff00u;
        esi = t14;
        loc_c = (uint8_t)t11 << 0x18u;
        ebp = 0u;
    }
    if (rd8(esi + 0x2du) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0x2du);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 0x2du);
        ebx = (ebx & 0xffffff00u) | 1u;
    }
    if ((rd8(esi + 8u) & 8u) != 0u)
    {
        wr8(sp0 + 0xcu, 1u);
    }
    wr8(esi + 0x1b3u, (uint8_t)((uint8_t)ecx - 1u));
    if ((uint8_t)ebx != 0u)
    {
        ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx - 1u);
        goto L_101f03c1;
    }
    ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)ecx - 1u);
    if ((rd32(edi + 4u) & 0xff000000u) != 0x1000000u)
    {
        edx = rd32(edi + 4u) & 0xff000000u;
        goto L_101f03c9;
    }
    edx = rd32(edi + 4u) & 0xff000000u;
    if (rd32(loc_4 + 0x120u) >> 0xdu & 1u)
    {
        eax = loc_4;
        ecx = rd32(loc_4 + 0x120u) >> 0xdu;
        goto L_101f03c9;
    }
    ecx = rd32(loc_4 + 0x120u) >> 0xdu;
    g->ebx = ebx;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t19 = cow_cdecl(g, COW_IMG(0x10152490u), 3, edi, 1u, in_edi);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        goto L_101f0447;
    }
    ecx = t20;
    edx = t21;
    if (arg1 != 0u)
    {
        eax = arg1;
        goto L_101f0447;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t22 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x36u, 0u, 0u);
    t23 = g->ecx;
    t24 = g->edx;
    if (t22 == 0u)
    {
        eax = t22;
        goto L_101f0447;
    }
    eax = t22;
    ecx = t23;
    edx = t24;
    t25 = rd8(sp0 + 8u);
    wr32(eax + 8u, 1u);
    wr8(eax + 0x30u, (uint8_t)t25);
    t26 = rd16(edi);
    wr16(eax + 0x3au, (uint16_t)t26);
    t27 = rd32(edi + 4u);
    wr32(eax + 4u, t27);
    wr8(eax + 0x3cu, 1u);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t28 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, eax, 0x40u, 0u);
    g->ebx = in_ebx;
    return (t28 & 0xffffff00u) | 1u;
L_1007adae: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_101f03c1: ;
    if (loc_c >> 0x18u == 0u)
    {
        eax = (eax & 0xffffff00u) | loc_c >> 0x18u;
        goto L_101f0447;
    }
    eax = (eax & 0xffffff00u) | loc_c >> 0x18u;
L_101f03c9: ;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t29 = cow_call_regs(g, COW_IMG(0x101cc1b0u), eax, g->ecx, g->edx, 1, 0);
    t30 = g->edx;
    if ((uint8_t)t29 == 0u)
    {
        edx = t30;
        goto L_101f03da;
    }
    eax = t29;
    edx = t30;
    if (rd8(sp0 + 0xcu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 0xcu);
        goto L_101f0447;
    }
L_101f03da: ;
    if (rd32(COW_IMG(0x1057817cu)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1057817cu));
    }
    else
    {
        ecx = rd32(COW_IMG(0x1057817cu));
        if ((uint16_t)ebp != 0u)
        {
            t31 = rd16(esi + 0x26u) * 0x14u;
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, COW_IMG(0x1012c1d0u), ecx, 2, 1u, t31);
            t32 = g->ecx;
            ecx = t32;
        }
    }
    if (arg1 != 3u)
    {
        ecx = (ecx & 0xffff0000u) | rd16(edi);
        edx = rd32(edi + 4u);
        goto L_101f0429;
    }
    ecx = (ecx & 0xffff0000u) | rd16(edi);
    edx = rd32(edi + 4u);
    t33 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x1cu;
    t34 = cow_cdecl(g, COW_IMG(0x100eb660u), 3, t33, edx, ecx);
    if ((uint8_t)t34 == 0u)
    {
        eax = t34;
        goto L_101f0447;
    }
    eax = t34;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
L_101f0429: ;
    t35 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x1cu;
    t36 = cow_cdecl(g, COW_IMG(0x100eb5e0u), 4, t35, edx, ecx, arg1);
    if ((uint8_t)t36 == 0u)
    {
        eax = t36;
        goto L_101f0447;
    }
    eax = t36;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
L_101f0447: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007ad70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007ad70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
