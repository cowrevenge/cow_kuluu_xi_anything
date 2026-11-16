/* f_0x101431b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101431b0(Guest* g)
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
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint32_t)(int16_t)arg2 == 5u) goto L_10143238;
    if ((uint32_t)(int16_t)arg2 == 6u) goto L_101431ff;
    if ((uint32_t)(int16_t)arg2 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 8u;
        edx = in_edx;
        goto L_1014336b;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037e90u), self, 0);
    t1 = g->edx;
    t2 = rd32(COW_IMG(0x10578294u));
    wr16(COW_IMG(0x1037148cu), 0xffffu);
    wr16(COW_IMG(0x105782acu), 0u);
    wr16(COW_IMG(0x105782aeu), 0u);
    t3 = rd32(t2 + 8u);
    g->eax = t2;
    t4 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t1, 2, t3, 0u);
    t5 = g->edx;
    g->edx = t5;
    return (t4 & 0xffffff00u) | 1u;
L_101431ff: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037bf0u), self, 0);
    t6 = rd32(COW_IMG(0x10578294u));
    wr16(COW_IMG(0x1037148cu), 0xffffu);
    wr16(COW_IMG(0x105782acu), 0u);
    wr16(COW_IMG(0x105782aeu), 0u);
    t7 = rd32(t6 + 8u);
    g->eax = t7;
    t8 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t6, 2, t7, 0u);
    t9 = g->edx;
    g->edx = t9;
    return (t8 & 0xffffff00u) | 1u;
L_10143238: ;
    if ((uint16_t)arg3 != 0u) goto L_10143261;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t10 = g->edx;
    g->edx = t10;
    t11 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371554u), 1u, 0u);
    t12 = g->edx;
    g->edx = t12;
    return (t11 & 0xffffff00u) | 1u;
L_10143261: ;
    if ((uint16_t)arg3 != 1u) goto L_10143284;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371568u), 1u, 0u);
    t15 = g->edx;
    g->edx = t15;
    return (t14 & 0xffffff00u) | 1u;
L_10143284: ;
    if ((uint16_t)arg3 != 2u) goto L_101432bb;
    g->eax = ((uint32_t)(int16_t)arg2 - 5u & 0xffff0000u) | (uint16_t)arg3;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x101u);
    t17 = g->edx;
    g->edx = t17;
    t18 = rd32(COW_IMG(0x10664520u));
    g->esp = sp0 - 4u;
    t19 = cow_thiscall(g, COW_IMG(0x10210e30u), t18, 7, COW_IMG(0x10143380u), 0u, t16, 0u, 0u, 1u, 0u);
    t20 = g->ecx;
    t21 = g->edx;
    g->edx = t21;
    t22 = cow_thiscall(g, COW_IMG(0x10037b90u), t20, 0);
    t23 = g->edx;
    g->edx = t23;
    return (t22 & 0xffffff00u) | 1u;
L_101432bb: ;
    if (rd32(arg1 + 0x38u) == 0u)
    {
        eax = arg1;
        ecx = (uint32_t)(int16_t)arg3;
        edx = rd32(arg1 + 0x38u);
        goto L_10143366;
    }
    edx = rd32(arg1 + 0x38u);
    if ((int16_t)arg3 >= (int16_t)rd16(arg1 + 0x20u))
    {
        eax = (uint32_t)(int16_t)rd16(arg1 + 0x20u);
        ecx = (uint32_t)(int16_t)arg3;
        goto L_10143366;
    }
    if (edx + (uint32_t)(int16_t)arg3 * 0x54u == 0u)
    {
        eax = (uint32_t)(int16_t)arg3 * 8u - (uint32_t)(int16_t)arg3;
        ecx = edx + (uint32_t)(int16_t)arg3 * 0x54u;
        goto L_10143366;
    }
    ecx = edx + (uint32_t)(int16_t)arg3 * 0x54u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t24 = cow_stdcall(g, COW_IMG(0x10141b80u), 0);
    t25 = g->ecx;
    t26 = g->edx;
    if ((uint8_t)t24 == 0u)
    {
        eax = t24;
        ecx = t25;
        edx = t26;
        goto L_10143366;
    }
    eax = t24;
    ecx = t25;
    edx = t26;
    if ((int16_t)rd16(COW_IMG(0x1037148cu)) < 0)
    {
        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x1037148cu));
        esi = rd32(ecx + 0x48u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t34 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
        t35 = g->edx;
        wr16(COW_IMG(0x105782acu), (uint16_t)esi);
        eax = t34;
        edx = t35;
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(COW_IMG(0x1037148cu));
        esi = rd32(ecx + 0x48u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t27 = cow_cdecl(g, COW_IMG(0x10141cc0u), 2, eax, esi);
        t28 = g->ecx;
        t29 = g->edx;
        if ((uint8_t)t27 != 0u)
        {
            eax = t27;
            ecx = t28;
            edx = t29;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t32 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
            t33 = g->edx;
            eax = t32;
            edx = t33;
        }
        else
        {
            eax = t27;
            ecx = t28;
            edx = t29;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t30 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
            t31 = g->edx;
            eax = t30;
            edx = t31;
        }
        wr16(COW_IMG(0x1037148cu), 0xffffu);
        wr16(COW_IMG(0x105782acu), 0u);
        wr16(COW_IMG(0x105782aeu), 0u);
    }
    if (rd32(COW_IMG(0x10578294u)) == 0u) goto L_1014336b;
    ecx = rd32(COW_IMG(0x10578294u));
    t36 = (uint16_t)rd32(COW_IMG(0x105782acu));
    g->eax = eax;
    g->esp = sp0 - 4u;
    t37 = cow_fastcall(g, COW_IMG(0x10143e90u), ecx, t36, 1, t36);
    t38 = g->edx;
    g->edx = t38;
    return (t37 & 0xffffff00u) | 1u;
L_10143366: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t39 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t40 = g->edx;
    eax = t39;
    edx = t40;
L_1014336b: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101431b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101431b0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
