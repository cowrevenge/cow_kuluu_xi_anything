/* f_0x10296110 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10296110(Guest* g)
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, COW_IMG(0x1034f2d0u));
    wr32(sp0 - 0x14u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, arg1, COW_IMG(0x1034f2d0u));
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_10296152;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0x10u, 0x57u);
    wr32(sp0 - 0x14u, COW_IMG(0x103bbb70u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bbb70u));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, COW_IMG(0x103b9960u));
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b9960u), arg1);
    return 0u;
L_10296152: ;
    wr32(sp0 - 0x10u, sp0 + 4u);
    wr32(sp0 - 0x14u, esi);
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x1029cb00u), ecx, 5, esi, sp0 + 4u, in_edi, in_esi, in_ebx);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        edx = t9;
        goto L_1029618f;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    wr32(sp0 - 0x10u, 0x5bu);
    wr32(sp0 - 0x14u, COW_IMG(0x103bbb70u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bbb70u));
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, COW_IMG(0x103b994cu));
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b994cu), arg1);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x24u, esi);
    g->edi = 0u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t14, 1, 3, esi, COW_IMG(0x103b994cu), arg1);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 0u;
L_1029618f: ;
    if (arg1 - 0x50001u > 8u) goto L_1029622b;
    t15 = rd32(COW_IMG(0x10296260u) + arg1 * 4u - 0x140004u);
    switch (t15 - RD)
    {
    case 0x102961a9u: goto L_102961a9;
    case 0x102961c3u: goto L_102961c3;
    case 0x102961ddu: goto L_102961dd;
    case 0x102961f7u: goto L_102961f7;
    case 0x10296211u: goto L_10296211;
    case 0x1029622bu: goto L_1029622b;
    default: rt_fatal(g, COW_IMG(0x102961a2u), "switch");
    }
    return 0;
L_102961a9: ;
    wr32(sp0 - 0x10u, esi);
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t28 = cow_cdecl(g, COW_IMG(0x102946c0u), 1, esi);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0x10u, esi);
    g->edi = t28;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t30, 1, 3, esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return t28;
L_102961c3: ;
    wr32(sp0 - 0x10u, esi);
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t25 = cow_cdecl(g, COW_IMG(0x10295c50u), 1, esi);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0x10u, esi);
    g->edi = t25;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t27, 1, 3, esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return t25;
L_102961dd: ;
    wr32(sp0 - 0x10u, esi);
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t22 = cow_cdecl(g, COW_IMG(0x10293bc0u), 1, esi);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x10u, esi);
    g->edi = t22;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t24, 1, 3, esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return t22;
L_102961f7: ;
    wr32(sp0 - 0x10u, esi);
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t19 = cow_cdecl(g, COW_IMG(0x102a51b0u), 1, esi);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x10u, esi);
    g->edi = t19;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t21, 1, 3, esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return t19;
L_10296211: ;
    wr32(sp0 - 0x10u, arg1);
    g->ebx = arg1;
    g->ecx = arg1;
    g->esp = sp0 - 0xcu;
    t16 = cow_call_regs(g, COW_IMG(0x102a45d0u), arg1 - 0x50001u, g->ecx, edx, 1, 1, arg1);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x10u, esi);
    g->edi = t16;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t18, 1, 3, esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return t16;
L_1029622b: ;
    wr32(sp0 - 0x10u, 0x62u);
    wr32(sp0 - 0x14u, COW_IMG(0x103bbb70u));
    wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
    g->eax = arg1 - 0x50001u;
    g->ecx = arg1;
    g->esp = sp0 - 0x10u;
    t31 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bbb70u));
    t32 = g->ecx;
    wr32(sp0 - 0x1cu, arg1);
    wr32(sp0 - 0x20u, COW_IMG(0x103bbb40u));
    g->ecx = t32;
    g->edx = arg1;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbb40u), arg1);
    t33 = g->ecx;
    t34 = g->edx;
    wr32(sp0 - 0x10u, esi);
    g->edi = 0u;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, t34, 1, 3, esi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10296110(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10296110(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
