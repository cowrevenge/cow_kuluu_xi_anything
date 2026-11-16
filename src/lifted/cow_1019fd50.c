/* f_0x1019fd50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1019fd50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg67 = rd32(g->esp + 0x10cu);
    const uint32_t arg68 = rd32(g->esp + 0x110u);
    const uint32_t arg69 = rd32(g->esp + 0x114u);
    const uint32_t arg70 = rd32(g->esp + 0x118u);
    const uint32_t arg71 = rd32(g->esp + 0x11cu);
    const uint32_t arg72 = rd32(g->esp + 0x120u);
    const uint32_t arg73 = rd32(g->esp + 0x124u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 564u);

    wr32(sp0 - 0x104u, in_ebx);
    wr32(sp0 - 0x108u, in_esi);
    wr32(sp0 - 0x10cu, in_edi);
    if (arg2 - 1u > 0xau)
    {
        edx = in_edx;
        esi = 1u;
        goto L_101a0394;
    }
    t1 = rd32(COW_IMG(0x101a03a0u) + arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1019fd75u: goto L_1019fd75;
    case 0x1019fe6eu: goto L_1019fe6e;
    case 0x101a0051u: goto L_101a0051;
    case 0x101a00d8u: goto L_101a00d8;
    case 0x101a015fu: goto L_101a015f;
    case 0x101a01e6u: goto L_101a01e6;
    case 0x101a026du: goto L_101a026d;
    case 0x101a02f4u: goto L_101a02f4;
    case 0x101a038fu: goto L_101a038f;
    case 0x101a0394u: edx = in_edx; esi = 1u; goto L_101a0394;
    default: rt_fatal(g, COW_IMG(0x1019fd6eu), "switch");
    }
    return 0;
L_1019fd75: ;
    wr32(sp0 - 0x110u, sp0 + 0xcu);
    wr32(sp0 - 0x114u, COW_IMG(0x1037a928u));
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    g->ebx = in_ebx;
    g->esp = sp0 - 0x104u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037a928u), sp0 + 0xcu, in_edi, in_esi);
    wr32(sp0 - 0x22cu, arg2);
    esi = sp0 + 0xcu;
    edi = sp0 - 0x228u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x128u, arg67);
    wr32(sp0 - 0x124u, arg68);
    wr32(sp0 - 0x120u, arg69);
    wr32(sp0 - 0x11cu, arg70);
    wr32(sp0 - 0x118u, arg71);
    wr32(sp0 - 0x114u, arg72);
    wr32(sp0 - 0x110u, arg73);
    wr32(sp0 - 0x230u, COW_IMG(0x10337200u));
    g->edi = edi;
    g->esp = sp0 - 0x220u;
    t21 = cow_thiscall_cdecl(g, COW_IMG(0x101a03d0u), arg73, 4, COW_IMG(0x10337200u), arg2, rd32(sp0 - 0x228u), rd32(sp0 - 0x224u));
    t22 = g->ecx;
    if ((int32_t)t21 >= 0)
    {
        esi = t21;
        goto L_1019fe48;
    }
    ecx = t22;
    wr32(sp0 - 0x110u, sp0 + 0xcu);
    wr32(sp0 - 0x114u, COW_IMG(0x1037a910u));
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    g->ebx = in_ebx;
    g->edx = sp0 + 0xcu;
    g->esp = sp0 - 0x104u;
    t23 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037a910u), sp0 + 0xcu, rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u));
    t24 = g->edx;
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    g->edx = t24;
    return 0xffffffffu;
L_1019fe48: ;
    wr32(sp0 - 0x110u, sp0 + 0xcu);
    wr32(sp0 - 0x114u, COW_IMG(0x1037a8fcu));
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    g->ebx = in_ebx;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x104u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037a8fcu), sp0 + 0xcu, rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u));
    t25 = g->edx;
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    g->edx = t25;
    return esi;
L_1019fe6e: ;
    wr32(sp0 - 0x110u, sp0 + 0xcu);
    wr32(sp0 - 0x114u, COW_IMG(0x1037a8e0u));
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    g->esp = sp0 - 0x104u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037a8e0u), sp0 + 0xcu, in_edi, in_esi);
    wr32(sp0 - 0x22cu, arg2);
    esi = sp0 + 0xcu;
    edi = sp0 - 0x228u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x128u, arg67);
    wr32(sp0 - 0x124u, arg68);
    wr32(sp0 - 0x120u, arg69);
    wr32(sp0 - 0x11cu, arg70);
    wr32(sp0 - 0x118u, arg71);
    wr32(sp0 - 0x114u, arg72);
    wr32(sp0 - 0x110u, arg73);
    wr32(sp0 - 0x230u, COW_IMG(0x10337200u));
    g->edi = edi;
    g->edx = arg72;
    g->esp = sp0 - 0x220u;
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x101a04e0u), arg73, 4, COW_IMG(0x10337200u), arg2, rd32(sp0 - 0x228u), rd32(sp0 - 0x224u));
    t16 = g->ecx;
    t17 = g->edx;
    if ((int32_t)t15 >= 0)
    {
        ecx = t16;
        esi = t15;
        goto L_101a002b;
    }
    ecx = t16;
    edx = t17;
    esi = t15;
    if (esi == 0xfffffffeu) goto L_101a001c;
    wr32(sp0 - 0x110u, sp0 + 0xcu);
    wr32(sp0 - 0x114u, COW_IMG(0x1037a8c4u));
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    g->esp = sp0 - 0x104u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037a8c4u), sp0 + 0xcu, rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u));
    ebx = 1u;
L_1019ff46: ;
    wr32(sp0 - 0x22cu, arg2);
    esi = sp0 + 0xcu;
    edi = sp0 - 0x228u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x128u, arg67);
    wr32(sp0 - 0x124u, arg68);
    wr32(sp0 - 0x120u, arg69);
    wr32(sp0 - 0x11cu, arg70);
    wr32(sp0 - 0x118u, arg71);
    wr32(sp0 - 0x114u, arg72);
    wr32(sp0 - 0x110u, arg73);
    wr32(sp0 - 0x230u, COW_IMG(0x10337200u));
    g->edi = edi;
    g->edx = arg73;
    g->esp = sp0 - 0x220u;
    t18 = cow_thiscall_cdecl(g, COW_IMG(0x101a04e0u), arg72, 4, COW_IMG(0x10337200u), arg2, rd32(sp0 - 0x228u), rd32(sp0 - 0x224u));
    t19 = g->edx;
    if ((int32_t)t18 >= 0)
    {
        edx = t19;
        goto L_1019fffe;
    }
    edx = t19;
    if ((int32_t)ebx >= 6) goto L_101a000d;
    wr32(sp0 - 0x110u, sp0 + 0xcu);
    wr32(sp0 - 0x114u, COW_IMG(0x1037a8c4u));
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    g->ebx = ebx;
    g->esp = sp0 - 0x104u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037a8c4u), sp0 + 0xcu, rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u));
    ebx = ebx + 1u;
    goto L_1019ff46;
L_1019fffe: ;
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    g->edx = edx;
    return 1u;
L_101a000d: ;
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    g->edx = edx;
    return 0xfffffffeu;
L_101a001c: ;
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    g->edx = edx;
    return 0xfffffffdu;
L_101a002b: ;
    wr32(sp0 - 0x110u, sp0 + 0xcu);
    wr32(sp0 - 0x114u, COW_IMG(0x1037a8acu));
    wr32(sp0 - 0x118u, sp0 - 0x100u);
    g->ebx = in_ebx;
    g->edx = sp0 + 0xcu;
    g->esp = sp0 - 0x104u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037a8acu), sp0 + 0xcu, rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u));
    t20 = g->edx;
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    g->edx = t20;
    return esi;
L_101a0051: ;
    wr32(sp0 - 0x22cu, arg2);
    esi = sp0 + 0xcu;
    edi = sp0 - 0x228u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x128u, arg67);
    wr32(sp0 - 0x124u, arg68);
    wr32(sp0 - 0x120u, arg69);
    wr32(sp0 - 0x11cu, arg70);
    wr32(sp0 - 0x118u, arg71);
    wr32(sp0 - 0x114u, arg72);
    wr32(sp0 - 0x110u, arg73);
    wr32(sp0 - 0x230u, COW_IMG(0x10337200u));
    g->edi = edi;
    g->edx = arg72;
    g->esp = sp0 - 0x220u;
    t13 = cow_call_regs(g, COW_IMG(0x101a0680u), sp0 - 0x230u, arg73, g->edx, 1, 4, COW_IMG(0x10337200u), arg2, rd32(sp0 - 0x228u), rd32(sp0 - 0x224u));
    t14 = g->edx;
    eax = t13;
    edx = t14;
L_101a0376: ;
    if ((int32_t)eax >= 0)
    {
        esi = eax;
        goto L_101a0394;
    }
    g->ebx = rd32(sp0 - 0x104u);
    g->esi = rd32(sp0 - 0x108u);
    g->edi = rd32(sp0 - 0x10cu);
    g->edx = edx;
    return 0xffffffffu;
L_101a00d8: ;
    wr32(sp0 - 0x22cu, arg2);
    esi = sp0 + 0xcu;
    edi = sp0 - 0x228u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x128u, arg67);
    wr32(sp0 - 0x124u, arg68);
    wr32(sp0 - 0x120u, arg69);
    wr32(sp0 - 0x11cu, arg70);
    wr32(sp0 - 0x118u, arg71);
    wr32(sp0 - 0x114u, arg72);
    wr32(sp0 - 0x110u, arg73);
    wr32(sp0 - 0x230u, COW_IMG(0x10337200u));
    g->edi = edi;
    g->edx = arg73;
    g->esp = sp0 - 0x224u;
    t11 = cow_call_regs(g, COW_IMG(0x101a0710u), sp0 - 0x230u, g->ecx, g->edx, 1, 3, COW_IMG(0x10337200u), arg2, rd32(sp0 - 0x228u));
    t12 = g->edx;
    eax = t11;
    edx = t12;
    goto L_101a0376;
L_101a015f: ;
    wr32(sp0 - 0x22cu, arg2);
    esi = sp0 + 0xcu;
    edi = sp0 - 0x228u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x128u, arg67);
    wr32(sp0 - 0x124u, arg68);
    wr32(sp0 - 0x120u, arg69);
    wr32(sp0 - 0x11cu, arg70);
    wr32(sp0 - 0x118u, arg71);
    wr32(sp0 - 0x114u, arg72);
    wr32(sp0 - 0x110u, arg73);
    wr32(sp0 - 0x230u, COW_IMG(0x10337200u));
    g->edi = edi;
    g->eax = sp0 - 0x230u;
    g->edx = arg72;
    g->esp = sp0 - 0x224u;
    t9 = cow_cdecl(g, COW_IMG(0x101a0730u), 3, COW_IMG(0x10337200u), arg2, rd32(sp0 - 0x228u));
    t10 = g->edx;
    eax = t9;
    edx = t10;
    goto L_101a0376;
L_101a01e6: ;
    wr32(sp0 - 0x22cu, arg2);
    esi = sp0 + 0xcu;
    edi = sp0 - 0x228u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x128u, arg67);
    wr32(sp0 - 0x124u, arg68);
    wr32(sp0 - 0x120u, arg69);
    wr32(sp0 - 0x11cu, arg70);
    wr32(sp0 - 0x118u, arg71);
    wr32(sp0 - 0x114u, arg72);
    wr32(sp0 - 0x110u, arg73);
    wr32(sp0 - 0x230u, COW_IMG(0x10337200u));
    g->eax = sp0 - 0x230u;
    g->esp = sp0 - 0x224u;
    t7 = cow_call_regs(g, COW_IMG(0x101a0750u), g->eax, g->ecx, arg73, 1, 3, COW_IMG(0x10337200u), arg2, rd32(sp0 - 0x228u));
    t8 = g->edx;
    eax = t7;
    edx = t8;
    goto L_101a0376;
L_101a026d: ;
    wr32(sp0 - 0x22cu, arg2);
    esi = sp0 + 0xcu;
    edi = sp0 - 0x228u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x128u, arg67);
    wr32(sp0 - 0x124u, arg68);
    wr32(sp0 - 0x120u, arg69);
    wr32(sp0 - 0x11cu, arg70);
    wr32(sp0 - 0x118u, arg71);
    wr32(sp0 - 0x114u, arg72);
    wr32(sp0 - 0x110u, arg73);
    wr32(sp0 - 0x230u, COW_IMG(0x10337200u));
    g->eax = sp0 - 0x230u;
    g->edx = arg72;
    g->esp = sp0 - 0x224u;
    t5 = cow_cdecl(g, COW_IMG(0x101a0760u), 3, COW_IMG(0x10337200u), arg2, rd32(sp0 - 0x228u));
    t6 = g->edx;
    eax = t5;
    edx = t6;
    goto L_101a0376;
L_101a02f4: ;
    wr32(sp0 - 0x22cu, arg2);
    esi = sp0 + 0xcu;
    edi = sp0 - 0x228u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x128u, arg67);
    wr32(sp0 - 0x124u, arg68);
    wr32(sp0 - 0x120u, arg69);
    wr32(sp0 - 0x11cu, arg70);
    wr32(sp0 - 0x118u, arg71);
    wr32(sp0 - 0x114u, arg72);
    wr32(sp0 - 0x110u, arg73);
    wr32(sp0 - 0x230u, COW_IMG(0x10337200u));
    g->edx = arg73;
    g->esp = sp0 - 0x224u;
    t3 = cow_cdecl(g, COW_IMG(0x101a0770u), 3, COW_IMG(0x10337200u), arg2, rd32(sp0 - 0x228u));
    t4 = g->edx;
    eax = t3;
    edx = t4;
    goto L_101a0376;
L_101a038f: ;
    g->esp = sp0 - 0x10cu;
    cow_fastcall(g, COW_IMG(0x101a07d0u), arg2, in_edx, 0);
    t2 = g->edx;
    edx = t2;
    esi = 1u;
L_101a0394: ;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019fd50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019fd50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
