/* f_0x1007b390 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007b390(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x46u);
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc0d0u), in_eax, g->ecx, in_edx, 1, 2, 0x46u, 0u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        goto L_1007b557;
    }
    edx = t2;
    t3 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    wr32(sp0 - 0x18u, t3);
    g->ecx = rd32(COW_IMG(0x105781a8u));
    g->edx = edx;
    t4 = rd32(COW_IMG(0x103551e0u));
    t5 = rd32(COW_IMG(0x105781a8u));
    g->esp = sp0 - 0x14u;
    t6 = cow_call_regs(g, COW_IMG(0x10132670u), t4, g->ecx, g->edx, 0, 1, t3);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int8_t)t6 >= 0)
    {
        ecx = t7;
        edx = t8;
        ebx = (in_ebx & 0xffffff00u) | (uint8_t)t6;
        loc_4 = (rd32(sp0 - 4u) & 0xffffff00u) | (uint8_t)t6;
        goto L_1007b3d3;
    }
    edx = t8;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return -arg3;
L_1007b3d3: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t9 = cow_stdcall(g, COW_IMG(0x100e48d0u), 0);
    t10 = g->edx;
    if (rd32(rd32(COW_IMG(0x103551e0u)) + 8u) != 0u)
    {
        ecx = rd32(COW_IMG(0x103551e0u));
        edx = t10;
        loc_c = (rd32(sp0 - 0xcu) & 0xffffffu) | ((uint8_t)t9 >= 1u) << 0x18u;
        goto L_1007b440;
    }
    eax = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    ecx = rd32(COW_IMG(0x103551e0u));
    loc_c = (rd32(sp0 - 0xcu) & 0xffffffu) | ((uint8_t)t9 >= 1u) << 0x18u;
    t11 = rd32(sp0 - 4u);
    wr32(sp0 - 0x18u, t11);
    g->esp = sp0 - 0x14u;
    t12 = cow_call_regs(g, COW_IMG(0x10132270u), eax, g->ecx, t11, 1, 1, t11);
    t13 = g->edx;
    if ((int32_t)t12 < 0)
    {
        edx = t13;
        goto L_1007b557;
    }
    eax = t12;
    edx = t13;
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, (uint32_t)(int8_t)ebx);
    wr32(sp0 - 0x24u, 0u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t14 = cow_stdcall(g, COW_IMG(0x101327d0u), 4, 0u, (uint32_t)(int8_t)ebx, eax, 1u);
    t15 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        edx = t15;
        goto L_1007b547;
    }
    eax = t14;
    edx = t15;
    if (rd8(sp0 - 9u) != 0u) goto L_1007b557;
    wr32(sp0 - 0x18u, 0x44u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x44u);
    t16 = g->edx;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = t16;
    return arg3;
L_1007b440: ;
    wr32(sp0 - 8u, 0u);
    if (rd32(ecx + 0xcu) == 0u)
    {
        eax = rd32(ecx + 0xcu);
        goto L_1007b4a9;
    }
    eax = rd32(ecx + 0xcu);
    wr32(sp0 - 0x18u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t17 = cow_stdcall(g, COW_IMG(0x101326d0u), 1, eax);
    t18 = g->edx;
    if ((int32_t)t17 >= 0)
    {
        eax = t17;
        goto L_1007b46b;
    }
    edx = t18;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return -arg3;
L_1007b46b: ;
    wr32(sp0 - 8u, eax);
    wr32(sp0 - 0x18u, eax);
    t19 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    wr32(sp0 - 0x1cu, t19);
    t20 = rd32(sp0 - 4u);
    wr32(sp0 - 0x20u, t20);
    g->edx = t19;
    g->esp = sp0 - 0x14u;
    t21 = cow_call_regs(g, COW_IMG(0x1007b1c0u), t20, g->ecx, g->edx, 1, 3, t20, t19, eax);
    t22 = g->edx;
    if ((uint8_t)t21 != 0u)
    {
        edx = t22;
        goto L_1007b557;
    }
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    t23 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    wr32(sp0 - 0x20u, t23);
    t24 = rd32(sp0 - 8u);
    wr32(sp0 - 0x24u, t24);
    g->ebx = ebx;
    g->edx = t23;
    g->esp = sp0 - 0x14u;
    t25 = cow_cdecl(g, COW_IMG(0x101f0060u), 4, t24, t23, 1u, 1u);
    t26 = g->edx;
    eax = t25;
    edx = t26;
L_1007b4db: ;
    if (eax == 0u) goto L_1007b557;
    esi = eax;
    if (rd32(COW_IMG(0x1057817cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1057817cu));
        goto L_1007b4fa;
    }
    eax = rd32(COW_IMG(0x1057817cu));
    if (rd32(eax + 8u) == 0u) goto L_1007b4fa;
    if (rd32(eax + 0x20u) == 1u) goto L_1007b547;
L_1007b4fa: ;
    if (rd8(esi + 8u) != 0u) goto L_1007b547;
    wr32(sp0 - 0x18u, 1u);
    t35 = rd32(sp0 - 8u);
    wr32(sp0 - 0x1cu, t35);
    wr32(sp0 - 0x20u, (uint32_t)(int8_t)ebx);
    wr32(sp0 - 0x24u, esi);
    g->ebx = ebx;
    g->ecx = rd32(COW_IMG(0x105781a8u));
    g->edx = edx;
    t36 = rd32(COW_IMG(0x105781a8u));
    g->esp = sp0 - 0x14u;
    t37 = cow_stdcall(g, COW_IMG(0x101327d0u), 4, esi, (uint32_t)(int8_t)ebx, t35, 1u);
    t38 = g->ecx;
    t39 = g->edx;
    if ((uint8_t)t37 == 0u)
    {
        eax = t37;
        ecx = t38;
        edx = t39;
        goto L_1007b53b;
    }
    eax = t37;
    edx = t39;
    if (rd8(sp0 - 9u) != 0u) goto L_1007b557;
    wr32(sp0 - 0x18u, 0x43u);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0x43u);
    t40 = g->edx;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edx = t40;
    return arg3;
L_1007b4a9: ;
    wr32(sp0 - 0x18u, 0xffffffffu);
    t27 = rd32(ecx + 8u);
    wr32(sp0 - 0x1cu, t27);
    t28 = rd32(sp0 - 4u);
    wr32(sp0 - 0x20u, t28);
    g->edx = t28;
    g->esp = sp0 - 0x14u;
    t29 = cow_call_regs(g, COW_IMG(0x1007b1c0u), eax, g->ecx, g->edx, 1, 3, t28, t27, 0xffffffffu);
    t30 = g->edx;
    if ((uint8_t)t29 != 0u)
    {
        edx = t30;
        goto L_1007b557;
    }
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    t31 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    wr32(sp0 - 0x20u, t31);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->edx = sp0 - 8u;
    t32 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 0x14u;
    t33 = cow_thiscall_cdecl(g, COW_IMG(0x101efff0u), t31, 4, sp0 - 8u, t31, 1u, 1u);
    t34 = g->edx;
    eax = t33;
    edx = t34;
    goto L_1007b4db;
L_1007b53b: ;
    t41 = (edx & 0xffffff00u) | rd8(esi + 2u);
    wr32(sp0 - 0x18u, t41);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x101f0240u), g->eax, g->ecx, t41, 1, 1, t41);
    t42 = g->edx;
    edx = t42;
L_1007b547: ;
    wr32(sp0 - 0x18u, 0x8eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x8eu);
    t43 = g->edx;
    edx = t43;
L_1007b557: ;
    g->ebx = in_ebx;
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007b390(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007b390(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
