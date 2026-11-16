/* f_0x101b2810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101b2810(Guest* g)
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
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr8(self + 0xef22u, 0u);
    if (arg1 - 1u > 7u)
    {
        eax = arg1 - 1u;
        edx = in_edx;
        goto L_101b29ca;
    }
    t1 = rd32(COW_IMG(0x101b29d0u) + arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x101b282fu: goto L_101b282f;
    case 0x101b2872u: goto L_101b2872;
    case 0x101b2885u: goto L_101b2885;
    case 0x101b28b0u: goto L_101b28b0;
    case 0x101b2904u: goto L_101b2904;
    case 0x101b2958u: goto L_101b2958;
    case 0x101b2982u: goto L_101b2982;
    case 0x101b29acu: goto L_101b29ac;
    default: rt_fatal(g, COW_IMG(0x101b2828u), "switch");
    }
    return 0;
L_101b282f: ;
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x101b29f0u), self, in_edx, 2, 0x1bu, 0u);
    t44 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    g->ecx = rd32(COW_IMG(0x103d3c64u));
    g->edx = t44;
    t45 = rd32(COW_IMG(0x103d3c64u));
    t46 = cow_stdcall(g, COW_IMG(0x101aff50u), 1, t44);
    t47 = g->ecx;
    t48 = g->edx;
    if (t46 == 0u)
    {
        eax = t46;
        edx = t48;
        goto L_101b29ca;
    }
    ecx = t47;
    edx = t48;
    esi = t46;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_stdcall(g, COW_IMG(0x102bc858u), 4, esi, 0x15u, 3u, 0u);
    t49 = g->edx;
    t50 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    g->edx = t49;
    t51 = rd32(COW_IMG(0x103d3c64u));
    t52 = cow_stdcall(g, COW_IMG(0x101aff60u), 2, t50, esi);
    t53 = g->edx;
    g->edx = t53;
    return t52;
L_101b2872: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t42 = cow_thiscall(g, COW_IMG(0x101b00b0u), self, 4, 0u, 0xfu, 0u, 0u);
    t43 = g->edx;
    g->edx = t43;
    return t42;
L_101b2885: ;
    if (rd32(self + 0xf0f8u) != 1u) goto L_101b28a3;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t38 = cow_thiscall(g, COW_IMG(0x101b00b0u), self, 4, 0u, 0xfu, 0u, 0u);
    t39 = g->edx;
    g->edx = t39;
    return t38;
L_101b28a3: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t40 = cow_thiscall(g, COW_IMG(0x101b00b0u), self, 4, 0u, 0x79u, 0u, 0u);
    t41 = g->edx;
    g->edx = t41;
    return t40;
L_101b28b0: ;
    g->edx = in_edx;
    t28 = rd32(COW_IMG(0x10455c20u));
    g->esp = sp0 - 4u;
    t29 = cow_thiscall(g, COW_IMG(0x10008830u), t28, 1, 0xcbu);
    t30 = g->ecx;
    t31 = g->edx;
    if ((uint8_t)t29 != 0u)
    {
        eax = t29;
        edx = t31;
        goto L_101b29ca;
    }
    eax = t29;
    ecx = t30;
    edx = t31;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t32 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x35u, 4u, 0xffffffffu);
    t33 = g->edx;
    if ((uint8_t)t32 == 0u)
    {
        edx = t33;
        goto L_101b28f2;
    }
    edx = t33;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t34 = cow_thiscall(g, COW_IMG(0x101b00b0u), self, 4, 0u, 0xcbu, 1u, 0u);
    t35 = g->edx;
    g->edx = t35;
    return t34;
L_101b28f2: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t36 = cow_thiscall(g, COW_IMG(0x101b00b0u), self, 4, 0u, 0xcbu, 0u, 0u);
    t37 = g->edx;
    g->edx = t37;
    return t36;
L_101b2904: ;
    g->edx = in_edx;
    t18 = rd32(COW_IMG(0x10455c20u));
    g->esp = sp0 - 4u;
    t19 = cow_thiscall(g, COW_IMG(0x10008830u), t18, 1, 0xcdu);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 != 0u)
    {
        eax = t19;
        edx = t21;
        goto L_101b29ca;
    }
    eax = t19;
    ecx = t20;
    edx = t21;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t22 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 4, 0x3eu, 0x35u, 4u, 0xffffffffu);
    t23 = g->edx;
    if ((uint8_t)t22 == 0u)
    {
        edx = t23;
        goto L_101b2946;
    }
    edx = t23;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t24 = cow_thiscall(g, COW_IMG(0x101b00b0u), self, 4, 0u, 0xcdu, 1u, 0u);
    t25 = g->edx;
    g->edx = t25;
    return t24;
L_101b2946: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t26 = cow_thiscall(g, COW_IMG(0x101b00b0u), self, 4, 0u, 0xcdu, 0u, 0u);
    t27 = g->edx;
    g->edx = t27;
    return t26;
L_101b2958: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x10008830u), rd32(COW_IMG(0x10455c20u)), 1, 0xcbu);
    t15 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        eax = t14;
        edx = t15;
        goto L_101b29ca;
    }
    edx = t15;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, COW_IMG(0x101b00b0u), self, 4, 0u, 0xcbu, 0u, 0u);
    t17 = g->edx;
    g->edx = t17;
    return t16;
L_101b2982: ;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x10008830u), rd32(COW_IMG(0x10455c20u)), 1, 0xcdu);
    t11 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        eax = t10;
        edx = t11;
        goto L_101b29ca;
    }
    edx = t11;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x101b00b0u), self, 4, 0u, 0xcdu, 0u, 0u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101b29ac: ;
    g->eax = arg1 - 1u;
    g->edx = rd32(self);
    t2 = rd32(self);
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, rd32(t2 + 0x20u), self, 0);
    t4 = g->edx;
    if ((uint8_t)t3 != 1u)
    {
        edx = t4;
        goto L_101b29c6;
    }
    edx = t4;
    g->esp = sp0 - 4u;
    t5 = cow_fastcall(g, COW_IMG(0x101b29f0u), self, edx, 2, 0xdu, 0u);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_101b29c6: ;
    g->eax = rd32(self);
    g->edx = edx;
    t7 = rd32(self);
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, rd32(t7), self, 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_101b29ca: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101b2810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101b2810(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
