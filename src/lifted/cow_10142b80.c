/* f_0x10142b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10142b80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t sf;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint32_t)(int16_t)arg2 == 5u) goto L_10142b9f;
    if ((uint32_t)(int16_t)arg2 != 6u)
    {
        eax = (uint32_t)(int16_t)arg2 - 6u;
        edx = in_edx;
        goto L_10142cae;
    }
    g->eax = (uint32_t)(int16_t)arg2 - 6u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10037bf0u), self, 0);
    t2 = g->edx;
    eax = t1;
    edx = t2;
L_10142c73: ;
    wr32(self + 0x1cu, 0u);
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x101425a0u), 0);
    t31 = g->edx;
    t32 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
    g->edx = t31;
    t33 = rd32(COW_IMG(0x10578204u));
    t34 = cow_call_regs(g, COW_IMG(0x1015e790u), t32, COW_IMG(0x10621838u), g->edx, 0, 2, t32, 1u);
    t35 = g->edx;
    g->edx = t35;
    t36 = cow_thiscall(g, COW_IMG(0x1013bf40u), t33, 0);
    t37 = g->edx;
    g->ebx = in_ebx;
    g->edx = t37;
    return (t36 & 0xffffff00u) | 1u;
L_10142b9f: ;
    if ((uint16_t)arg3 != 0u) goto L_10142bc8;
    g->eax = ((uint32_t)(int16_t)arg2 - 5u & 0xffff0000u) | (uint16_t)arg3;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371554u), 1u, 0u);
    t6 = g->edx;
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
L_10142bc8: ;
    if (rd32(arg1 + 0x38u) == 0u)
    {
        eax = arg1;
        ecx = (uint32_t)(int16_t)arg3;
        edx = rd32(arg1 + 0x38u);
        goto L_10142ca9;
    }
    edx = rd32(arg1 + 0x38u);
    if ((int16_t)arg3 >= (int16_t)rd16(arg1 + 0x20u))
    {
        eax = (uint32_t)(int16_t)rd16(arg1 + 0x20u);
        ecx = (uint32_t)(int16_t)arg3;
        goto L_10142ca9;
    }
    if (edx + (uint32_t)(int16_t)arg3 * 0x54u == 0u)
    {
        eax = (uint32_t)(int16_t)arg3 * 8u - (uint32_t)(int16_t)arg3;
        ecx = (uint32_t)(int16_t)arg3 * 0x15u;
        goto L_10142ca9;
    }
    esi = edx + (uint32_t)(int16_t)arg3 * 0x54u;
    g->eax = (uint32_t)(int16_t)arg3 * 8u - (uint32_t)(int16_t)arg3;
    g->ecx = (uint32_t)(int16_t)arg3 * 0x15u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_stdcall(g, COW_IMG(0x10141b80u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_10142ca9;
    }
    ecx = t8;
    edx = t9;
    t10 = rd32(esi + 0x48u);
    g->eax = t10;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_cdecl(g, COW_IMG(0x10142b50u), 1, t10);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        zf = t11 == 0u;
        sf = (int32_t)t11 < 0;
        goto L_10142c52;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t15 = g->ecx;
    t16 = g->edx;
    g->edx = t16;
    t17 = rd32(esi + 0x48u);
    g->esp = sp0 - 0x18u;
    t18 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x2c5u);
    t19 = g->edx;
    g->ebx = self;
    g->edx = t19;
    g->esp = sp0 - 8u;
    t20 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10142cc0u), t17, t18, 0u, 0u, 1u, 0u);
    t21 = g->edx;
    g->ebx = in_ebx;
    g->edx = t21;
    return (t20 & 0xffffff00u) | 1u;
L_10142c52: ;
    if (zf || sf) goto L_10142ca9;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    t22 = rd32(esi + 0x48u);
    g->esp = sp0 - 0xcu;
    t23 = cow_stdcall(g, COW_IMG(0x10141e70u), 0);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 == t22)
    {
        eax = t23;
        ecx = t24;
        edx = t25;
        goto L_10142ca9;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t26 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t27 = g->ecx;
    t28 = rd32(esi + 0x48u);
    g->edx = t28;
    t29 = cow_cdecl(g, COW_IMG(0x10141e40u), 1, t28);
    t30 = g->edx;
    eax = t29;
    edx = t30;
    goto L_10142c73;
L_10142ca9: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t38 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t39 = g->edx;
    eax = t38;
    edx = t39;
L_10142cae: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10142b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10142b80(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
