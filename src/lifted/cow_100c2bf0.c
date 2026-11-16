/* f_0x100c2bf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100c2bf0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_1c;
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

    t1 = rd8(arg2);
    t2 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, 0u);
    if ((uint8_t)t1 == 0u)
    {
        ecx = self;
        esi = arg2;
        edi = arg1;
        goto L_100c2cd8;
    }
    eax = (in_eax & 0xffffff00u) | t1;
    ebx = t2;
    ecx = self;
    edx = in_edx;
    esi = arg2;
    edi = arg1;
L_100c2c12: ;
    if ((uint8_t)eax != 0x1eu) goto L_100c2c26;
    wr8(edi, (uint8_t)eax);
    t3 = rd8(esi + 1u);
    wr8(edi + 1u, (uint8_t)t3);
    eax = (eax & 0xffffff00u) | t3;
    esi = esi + 2u;
    edi = edi + 2u;
L_100c2ccd: ;
    if (rd8(esi) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_100c2c12;
    }
L_100c2cd8: ;
    wr8(edi, rd8(esi));
    return edi;
L_100c2c26: ;
    if (ebx - 1u > 3u) goto L_100c2cb6;
    eax = ebx - 1u;
    t4 = rd32(COW_IMG(0x100c2ce4u) + eax * 4u);
    switch (t4 - RD)
    {
    case 0x100c2c39u: goto L_100c2c39;
    case 0x100c2c53u: goto L_100c2c53;
    case 0x100c2c6bu: goto L_100c2c6b;
    case 0x100c2c83u: goto L_100c2c83;
    default: rt_fatal(g, COW_IMG(0x100c2c32u), "switch");
    }
    return 0;
L_100c2c39: ;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t27 = cow_call_regs(g, COW_IMG(0x1025bfd0u), g->eax, g->ecx, edx, 1, 3, edi, 2u, esi);
    t28 = g->ecx;
    t29 = g->edx;
    g->ecx = t28;
    g->edx = t29;
    g->esp = sp0 - 0x1cu;
    t30 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, esi);
    t31 = g->ecx;
    t32 = g->edx;
    eax = t30;
    ecx = t31;
    edx = t32;
    ebx = 0u;
    esi = esi + t30;
    edi = edi + t27;
    goto L_100c2ccd;
L_100c2c53: ;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t21 = cow_call_regs(g, COW_IMG(0x1025bfd0u), g->eax, g->ecx, edx, 1, 3, edi, 2u, esi);
    t22 = g->ecx;
    t23 = g->edx;
    g->ecx = t22;
    g->edx = t23;
    g->esp = sp0 - 0x1cu;
    t24 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, esi);
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
    esi = esi + t24;
    edi = edi + t21;
    goto L_100c2ccd;
L_100c2c6b: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t15 = cow_call_regs(g, COW_IMG(0x1025bf70u), g->eax, g->ecx, edx, 1, 3, edi, 2u, esi);
    t16 = g->ecx;
    t17 = g->edx;
    g->ecx = t16;
    g->edx = t17;
    g->esp = sp0 - 0x1cu;
    t18 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, esi);
    t19 = g->ecx;
    t20 = g->edx;
    eax = t18;
    ecx = t19;
    edx = t20;
    esi = esi + t18;
    edi = edi + t15;
    goto L_100c2ccd;
L_100c2c83: ;
    if (rd8(sp0 + 0xcu) & 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 0xcu);
        loc_14 = esi;
        loc_1c = edi;
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        t8 = cow_call_regs(g, COW_IMG(0x1025bf70u), g->eax, g->ecx, edx, 1, 3, loc_1c, 2u, loc_14);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    else
    {
        loc_14 = esi;
        loc_1c = edi;
        g->ecx = ecx;
        g->esp = sp0 - 0x10u;
        t5 = cow_call_regs(g, COW_IMG(0x1025bfd0u), g->eax, g->ecx, edx, 1, 3, loc_1c, 2u, loc_14);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, esi);
    t12 = g->ecx;
    t13 = g->edx;
    t14 = rd32(sp0 + 0xcu) + 1u;
    wr32(sp0 + 0xcu, t14);
    ecx = t12;
    edx = t13;
    esi = esi + t11;
    edi = eax + edi;
    eax = t14;
    goto L_100c2ccd;
L_100c2cb6: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t33 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, esi);
    t34 = g->ecx;
    t35 = g->edx;
    g->ecx = t34;
    g->edx = t35;
    g->esp = sp0 - 0x14u;
    t36 = cow_call_regs(g, COW_IMG(0x10312090u), t33, g->ecx, g->edx, 1, 3, edi, esi, t33);
    t37 = g->ecx;
    t38 = g->edx;
    eax = t36;
    ecx = t37;
    edx = t38;
    esi = esi + t33;
    edi = edi + t33;
    goto L_100c2ccd;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c2bf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c2bf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
