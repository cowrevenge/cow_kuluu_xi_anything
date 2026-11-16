/* f_0x10157370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10157370(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 212u);

    wr32(sp0 - 0xa8u, in_ebp);
    wr32(sp0 - 0xacu, in_esi);
    wr32(sp0 - 0xb0u, in_edi);
    wr32(sp0 - 0xb4u, in_ebx);
    eax = arg1 + 0x3c3a4u;
    ecx = self;
    edx = in_edx;
    ebx = in_ebx;
    esi = arg3 + 0x80u;
L_10157392: ;
    if (rd8(eax) != rd8(esi))
    {
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_101573ba;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    if ((uint8_t)ecx == 0u) goto L_101573b6;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_101573ba;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_10157392;
    }
L_101573b6: ;
    eax = 0u;
L_101573bf: ;
    if (eax == 0u) goto L_101575ab;
    if ((rd8(arg3 + 0x7fu) >> 2u) - 1u > 7u) goto L_101573f0;
    eax = (rd8(arg3 + 0x7fu) >> 2u) - 1u;
    t1 = rd32(COW_IMG(0x101575b8u) + rd8(COW_IMG(0x101575c0u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x101573e5u: goto L_101573e5;
    case 0x101573e9u: goto L_101573e9;
    default: rt_fatal(g, COW_IMG(0x101573deu), "switch");
    }
    return 0;
L_101573ba: ;
    eax = -cf + 1u - cf;
    goto L_101573bf;
L_101573e5: ;
    esi = 0u;
L_101573f4: ;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_10157415;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (eax == 2u) goto L_1015740e;
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_10157418;
    }
L_1015740e: ;
    eax = 1u;
L_1015741e: ;
    t2 = rd32(COW_IMG(0x101575c8u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x10157425u: goto L_10157425;
    case 0x10157485u: goto L_10157485;
    case 0x101574e5u: goto L_101574e5;
    case 0x10157557u: goto L_10157557;
    default: rt_fatal(g, COW_IMG(0x1015741eu), "switch");
    }
    return 0;
L_101573e9: ;
    esi = 1u;
    goto L_101573f4;
L_101573f0: ;
    esi = rd32(sp0 - 0x84u);
    goto L_101573f4;
L_10157415: ;
    cf = eax < 3u;
    zf = eax == 3u;
L_10157418: ;
    if (!cf && !zf) goto L_101575ab;
    goto L_1015741e;
L_10157425: ;
    g->esp = sp0 - 0xb0u;
    cow_fastcall(g, COW_IMG(0x10258c20u), sp0 - 0xa4u, edx, 0);
    wr32(sp0 - 0xb4u, esi);
    t41 = rd32(arg3 + 0x90u);
    wr32(sp0 - 0xb8u, t41);
    wr32(sp0 - 0xbcu, sp0 - 0xa4u);
    t42 = cow_fastcall(g, COW_IMG(0x10156fd0u), rd32(COW_IMG(0x10578768u)), t41, 3, sp0 - 0xa4u, t41, esi);
    t43 = g->edx;
    g->edx = t43;
    t44 = cow_thiscall(g, COW_IMG(0x10258c50u), sp0 - 0xa4u, 0);
    t45 = g->ecx;
    t46 = g->edx;
    wr32(sp0 - 0xb4u, t44);
    wr32(sp0 - 0xb8u, arg3 + 0x80u);
    wr32(sp0 - 0xbcu, 0x33u);
    wr32(sp0 - 0xc0u, 0xau);
    g->ecx = t45;
    g->edx = t46;
    g->esp = sp0 - 0xb8u;
    t47 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x33u);
    t48 = g->ecx;
    t49 = g->edx;
    wr32(sp0 - 0xbcu, t47);
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xd0u, 0x29u);
    g->edx = t49;
    g->esp = sp0 - 0xb4u;
    t50 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, 0x29u, 0u, 0u, 0u, 0u, t47, arg3 + 0x80u);
    t51 = g->edx;
    g->esp = sp0 - 0xb0u;
    t52 = cow_fastcall(g, COW_IMG(0x10258be0u), sp0 - 0xa4u, t51, 0);
    t53 = g->edx;
    g->edx = t53;
    return (t52 & 0xffffff00u) | 1u;
L_10157485: ;
    g->esp = sp0 - 0xb0u;
    cow_fastcall(g, COW_IMG(0x102588a0u), sp0 - 0xa4u, edx, 0);
    wr32(sp0 - 0xb4u, esi);
    t28 = rd32(arg3 + 0x90u);
    wr32(sp0 - 0xb8u, t28);
    wr32(sp0 - 0xbcu, sp0 - 0xa4u);
    t29 = cow_fastcall(g, COW_IMG(0x10156fd0u), rd32(COW_IMG(0x10578768u)), sp0 - 0xa4u, 3, sp0 - 0xa4u, t28, esi);
    t30 = g->edx;
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x10258910u), sp0 - 0xa4u, 0);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0xb4u, t31);
    wr32(sp0 - 0xb8u, arg3 + 0x80u);
    wr32(sp0 - 0xbcu, 0x33u);
    wr32(sp0 - 0xc0u, 0xau);
    g->ecx = t32;
    g->edx = t33;
    g->esp = sp0 - 0xb8u;
    t34 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x33u);
    t35 = g->ecx;
    t36 = g->edx;
    wr32(sp0 - 0xbcu, t34);
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xd0u, 0x29u);
    g->edx = t36;
    g->esp = sp0 - 0xb4u;
    t37 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, 0x29u, 0u, 0u, 0u, 0u, t34, arg3 + 0x80u);
    t38 = g->edx;
    g->esp = sp0 - 0xb0u;
    t39 = cow_fastcall(g, COW_IMG(0x10258860u), sp0 - 0xa4u, t38, 0);
    t40 = g->edx;
    g->edx = t40;
    return (t39 & 0xffffff00u) | 1u;
L_101574e5: ;
    g->esp = sp0 - 0xb0u;
    cow_fastcall(g, COW_IMG(0x102586b0u), sp0 - 0xa4u, edx, 0);
    t16 = g->edx;
    wr32(sp0 - 0xb4u, esi);
    t17 = rd32(arg3 + 0x90u);
    wr32(sp0 - 0xb8u, t17);
    wr32(sp0 - 0xbcu, sp0 - 0xa4u);
    t18 = cow_fastcall(g, COW_IMG(0x10156fd0u), rd32(COW_IMG(0x10578768u)), t16, 3, sp0 - 0xa4u, t17, esi);
    wr32(sp0 - 0xb4u, 0u);
    wr32(sp0 - 0xb8u, 0xffffffffu);
    wr32(sp0 - 0xbcu, 0x80u);
    wr32(sp0 - 0xc0u, sp0 - 0x80u);
    g->edx = sp0 - 0x80u;
    cow_thiscall(g, COW_IMG(0x10258730u), sp0 - 0xa4u, 4, sp0 - 0x80u, 0x80u, 0xffffffffu, 0u);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0xb4u, sp0 - 0x80u);
    wr32(sp0 - 0xb8u, arg3 + 0x80u);
    wr32(sp0 - 0xbcu, 0x33u);
    wr32(sp0 - 0xc0u, 0xau);
    g->eax = sp0 - 0x80u;
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0xb8u;
    t21 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x33u);
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0xbcu, t21);
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xd0u, 0x29u);
    g->edx = t23;
    g->esp = sp0 - 0xb4u;
    t24 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, 0x29u, 0u, 0u, 0u, 0u, t21, arg3 + 0x80u);
    t25 = g->edx;
    g->esp = sp0 - 0xb0u;
    t26 = cow_fastcall(g, COW_IMG(0x10258650u), sp0 - 0xa4u, t25, 0);
    t27 = g->edx;
    g->edx = t27;
    return (t26 & 0xffffff00u) | 1u;
L_10157557: ;
    g->esp = sp0 - 0xb0u;
    cow_fastcall(g, COW_IMG(0x10258a60u), sp0 - 0xa4u, edx, 0);
    wr32(sp0 - 0xb4u, esi);
    t3 = rd32(arg3 + 0x90u);
    wr32(sp0 - 0xb8u, t3);
    wr32(sp0 - 0xbcu, sp0 - 0xa4u);
    t4 = cow_fastcall(g, COW_IMG(0x10156fd0u), rd32(COW_IMG(0x10578768u)), sp0 - 0xa4u, 3, sp0 - 0xa4u, t3, esi);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10258af0u), sp0 - 0xa4u, 0);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0xb4u, t6);
    wr32(sp0 - 0xb8u, arg3 + 0x80u);
    wr32(sp0 - 0xbcu, 0x33u);
    wr32(sp0 - 0xc0u, 0xau);
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0xb8u;
    t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x33u);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0xbcu, t9);
    wr32(sp0 - 0xc0u, 0u);
    wr32(sp0 - 0xc4u, 0u);
    wr32(sp0 - 0xc8u, 0u);
    wr32(sp0 - 0xccu, 0u);
    wr32(sp0 - 0xd0u, 0x29u);
    g->edx = t11;
    g->esp = sp0 - 0xb4u;
    t12 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, 0x29u, 0u, 0u, 0u, 0u, t9, arg3 + 0x80u);
    t13 = g->edx;
    g->esp = sp0 - 0xb0u;
    t14 = cow_fastcall(g, COW_IMG(0x10258a20u), sp0 - 0xa4u, t13, 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
L_101575ab: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10157370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10157370(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
